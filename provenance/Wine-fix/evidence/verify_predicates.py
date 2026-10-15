"""Execute original and patched leaf predicates with Unicorn, at PE preferred bases."""
import json, struct, hashlib, random
from pathlib import Path
import pefile
from unicorn import *
from unicorn.x86_const import *
from unicorn.arm64_const import *
ROOT=Path(__file__).resolve().parent
specs=json.loads((ROOT/'patch-specs.json').read_text())
cases=[(b'wine_get_version',1),(b'wine_get_build_id',1),(b'__wine_get_unix_file_name',1),(b'prefix_wine_get_suffix',1),(b'NtCreateFile',0),(b'LdrGetProcedureAddress',0),(b'ordinary_long_export_name',0),(b'',0),(b'wine_get',0),(b'wine_geX_version',0)]
# The original uses i < length-8, so an exact 8-byte string deliberately returns false.
rng=random.Random(2875)
for n in range(30):
 name=bytes(rng.choice(b'abcdefghijklmno') for _ in range(rng.randrange(1,50)))
 cases.append((name,0));cases.append((name+b'wine_get_version',1))
results=[]
for spec in specs:
 if not spec['patches']: continue
 path=ROOT/'unpacked'/spec['path']; data=path.read_bytes();pe=pefile.PE(data=data)
 arm='arm64' in spec['path'];x64='/x64/' in spec['path'];base=pe.OPTIONAL_HEADER.ImageBase
 for patch in spec['patches']:
  for fixed in (False,True):
   uc=Uc(UC_ARCH_ARM64 if arm else UC_ARCH_X86,UC_MODE_ARM if arm else UC_MODE_64 if x64 else UC_MODE_32)
   size=(pe.OPTIONAL_HEADER.SizeOfImage+4095)&~4095
   uc.mem_map(base,size);uc.mem_write(base,pe.get_memory_mapped_image())
   if fixed: uc.mem_write(base+patch['rva'],bytes.fromhex(patch['after']))
   mem=0x2000000;stack=mem+0x8000;stop=mem+0xf000
   uc.mem_map(mem,0x10000)
   for name,expected in cases:
    uc.mem_write(mem,name+b'\0'*64)
    if arm:
     uc.reg_write(UC_ARM64_REG_X0,mem);uc.reg_write(UC_ARM64_REG_W1,len(name));uc.reg_write(UC_ARM64_REG_LR,stop);uc.reg_write(UC_ARM64_REG_SP,stack)
     preserved=[UC_ARM64_REG_X19,UC_ARM64_REG_X20,UC_ARM64_REG_X29];spreg=UC_ARM64_REG_SP;resultreg=UC_ARM64_REG_W0;expectedsp=stack
    elif x64:
     uc.reg_write(UC_X86_REG_RCX,mem);uc.reg_write(UC_X86_REG_EDX,len(name));uc.reg_write(UC_X86_REG_RSP,stack);uc.mem_write(stack,struct.pack('<Q',stop))
     preserved=[UC_X86_REG_RBX,UC_X86_REG_RBP,UC_X86_REG_RSI,UC_X86_REG_RDI];spreg=UC_X86_REG_RSP;resultreg=UC_X86_REG_AL;expectedsp=stack+8
    else:
     uc.reg_write(UC_X86_REG_ESP,stack);uc.mem_write(stack,struct.pack('<III',stop,mem,len(name)))
     preserved=[UC_X86_REG_EBX,UC_X86_REG_EBP,UC_X86_REG_ESI,UC_X86_REG_EDI];spreg=UC_X86_REG_ESP;resultreg=UC_X86_REG_AL;expectedsp=stack+4
    for reg in preserved:uc.reg_write(reg,0x11223344)
    try: uc.emu_start(base+patch['predicate_rva'],stop,count=10000)
    except UcError as e: raise RuntimeError((spec['path'],patch,fixed,name,str(e))) from e
    actual=uc.reg_read(resultreg);want=0 if fixed else expected
    assert actual==want,(spec['path'],fixed,name,actual,want)
    assert uc.reg_read(spreg)==expectedsp,(spec['path'],'stack')
    assert all(uc.reg_read(reg)==0x11223344 for reg in preserved),(spec['path'],'registers')
   results.append(dict(path=spec['path'],predicate_rva=hex(patch['predicate_rva']),patched=fixed,cases=len(cases),passed=True))
  print(spec['path'],hex(patch['predicate_rva']),'original matches Wine exports; patched returns false; ABI preserved')
(ROOT/'emulation-results.json').write_text(json.dumps(results,indent=2)+'\n')
print('PASS',sum(r['cases'] for r in results),'executions;',len(results)//2,'predicate copies')
