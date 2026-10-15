/*
 * FUN_10011d2c at 10011d2c
 * undefined4 * __thiscall FUN_10011d2c(void * this, int param_1, int param_2)
 * Address ranges: 10011d2c-10011de5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10011d2c(void *this,int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  void *this_00;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = -(uint)(param_1 != 0) & param_1 - 0xc0U;
  bVar1 = *(byte *)(uVar5 + 0x30);
  uVar6 = -(uint)(param_2 != 0) & param_2 - 0xc0U;
  uVar2 = *(uint *)(uVar5 + 0x30);
  this_00 = (void *)FUN_10060bca(0x1f0);
  if ((this_00 != (void *)0x0) &&
     (puVar3 = FUN_100185d0(this_00,(int)this,*(int *)(uVar5 + 0x14),*(int *)(uVar5 + 0x18),
                            *(int *)(uVar6 + 0x1c),1,*(int *)(uVar5 + 0x130),*(int *)(uVar5 + 0x134)
                            ,*(undefined4 *)(uVar5 + 0x138),*(int *)(uVar6 + 0x34),
                            (uVar2 >> 3 & 1) << 3 | bVar1 & 1,0), puVar3 != (undefined4 *)0x0)) {
    uVar4 = FUN_10017d70(puVar3);
    if ((char)uVar4 != '\0') {
      FUN_1001ad7c(puVar3);
      return puVar3 + 0x30;
    }
    FUN_10018717(puVar3);
    FUN_10060be1(puVar3);
  }
  return (undefined4 *)0x0;
}

