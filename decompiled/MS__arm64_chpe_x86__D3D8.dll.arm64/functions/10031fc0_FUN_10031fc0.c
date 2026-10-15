/*
 * FUN_10031fc0 at 10031fc0
 * undefined FUN_10031fc0(void)
 * Address ranges: 10031fc0-1003201b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10031fc0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_100febf0(*(int *)(param_1 + 0x10) + 0x44);
  uVar1 = iVar2 + 0x23U & 0xffffffe0;
  *(int *)(uVar1 - 4) = iVar2;
  *(uint *)(param_1 + 4) = uVar1;
  FUN_100ff690(uVar1,0,*(int *)(param_1 + 0x10));
  return 1;
}

