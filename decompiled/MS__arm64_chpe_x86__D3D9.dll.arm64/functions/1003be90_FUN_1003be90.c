/*
 * FUN_1003be90 at 1003be90
 * undefined FUN_1003be90(void)
 * Address ranges: 1003be90-1003beeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1003be90(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_101321c0(*(int *)(param_1 + 0x10) + 0x44);
  uVar1 = iVar2 + 0x23U & 0xffffffe0;
  *(int *)(uVar1 - 4) = iVar2;
  *(uint *)(param_1 + 4) = uVar1;
  FUN_101325d0(uVar1,0,*(int *)(param_1 + 0x10));
  return 1;
}

