/*
 * FUN_100a8aa0 at 100a8aa0
 * undefined FUN_100a8aa0(void)
 * Address ranges: 100a8aa0-100a8ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a8aa0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1cf00);
  if (iVar1 != 0) {
    FUN_1010d7a8(iVar1);
    *(int *)(param_1 + 0x1cf00) = 0;
  }
  return;
}

