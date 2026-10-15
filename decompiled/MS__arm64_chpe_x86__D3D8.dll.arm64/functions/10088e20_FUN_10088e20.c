/*
 * FUN_10088e20 at 10088e20
 * undefined FUN_10088e20(void)
 * Address ranges: 10088e20-10088e53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10088e20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1cf00);
  if (iVar1 != 0) {
    FUN_100db068(iVar1);
    *(int *)(param_1 + 0x1cf00) = 0;
  }
  return;
}

