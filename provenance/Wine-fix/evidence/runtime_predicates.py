from pathlib import Path
import json,subprocess,os
root=Path(__file__).resolve().parent
src=Path('/home/rick/Downloads/dgVoodoo/dgVoodoo2_87_5')
fixed=Path('/home/rick/Downloads/dgVoodoo/dgVoodoo2_87_5_FIXED')
env=os.environ|{'WINEPREFIX':'/home/rick/.wine32','WINEDEBUG':'-all','WINEDLLOVERRIDES':'d3d8,d3d9,ddraw,glide,glide2x,glide3x,d3dimm=n,b'}
results=[]
for spec in json.loads((root/'patch-specs.json').read_text()):
 if '/x86/' not in spec['path']:continue
 rva=spec['patches'][0]['predicate_rva'] if spec['patches'] else 0
 for base,expected,kind in [(root/'unpacked',1,'unpacked-original'),(fixed,0,'fixed')]:
  dll=base/spec['path'];cmd=['wine',str(root/'probe.exe'),'Z:'+str(dll).replace('/','\\'),hex(rva),str(expected)]
  p=subprocess.run(cmd,env=env,cwd=root,capture_output=True,text=True,timeout=40)
  results.append(dict(path=spec['path'],kind=kind,exit_code=p.returncode,stdout=p.stdout,stderr=p.stderr))
  print(spec['path'],kind,p.returncode,flush=True)
  if p.returncode:print(p.stdout,p.stderr);break
(root/'runtime-predicates.json').write_text(json.dumps(results,indent=2)+'\n')
assert len(results)==16 and all(r['exit_code']==0 for r in results)
