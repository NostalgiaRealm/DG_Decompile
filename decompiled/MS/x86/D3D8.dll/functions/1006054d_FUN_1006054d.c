/*
 * FUN_1006054d at 1006054d
 * undefined4 * __thiscall FUN_1006054d(void * this, int param_1, int param_2)
 * Address ranges: 1006054d-10060606
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1006054d(void *this,int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  void *this_00;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = -(uint)(param_1 != 0) & param_1 - 0x88U;
  bVar1 = *(byte *)(uVar5 + 0x30);
  uVar6 = -(uint)(param_2 != 0) & param_2 - 0x88U;
  uVar2 = *(uint *)(uVar5 + 0x30);
  this_00 = (void *)FUN_100ad475(0x184);
  if ((this_00 != (void *)0x0) &&
     (puVar4 = FUN_10063a48(this_00,(int)this,*(int *)(uVar5 + 0x14),*(int *)(uVar5 + 0x18),
                            *(int *)(uVar6 + 0x1c),1,*(int *)(uVar5 + 0xdc),*(int *)(uVar5 + 0xe0),
                            *(undefined4 *)(uVar5 + 0xe4),*(int *)(uVar6 + 0x34),
                            (uVar2 >> 3 & 1) << 3 | bVar1 & 1,0), puVar4 != (undefined4 *)0x0)) {
    bVar3 = FUN_10062acc(puVar4);
    if (bVar3) {
      FUN_1006578b(puVar4);
      return puVar4 + 0x22;
    }
    FUN_10063ba3(puVar4);
    FUN_100ad48c(puVar4);
  }
  return (undefined4 *)0x0;
}

