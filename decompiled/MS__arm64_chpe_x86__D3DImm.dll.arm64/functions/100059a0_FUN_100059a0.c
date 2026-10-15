/*
 * FUN_100059a0 at 100059a0
 * undefined FUN_100059a0(void)
 * Address ranges: 100059a0-100059eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100059a0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_10081cb0(0x9c4);
  uVar1 = iVar2 + 0x13U & 0xfffffff0;
  *(int *)(uVar1 - 4) = iVar2;
  FUN_10081f10(uVar1,0,0x9b0);
  uVar3 = FUN_10005ef0(uVar1);
  return uVar3;
}

