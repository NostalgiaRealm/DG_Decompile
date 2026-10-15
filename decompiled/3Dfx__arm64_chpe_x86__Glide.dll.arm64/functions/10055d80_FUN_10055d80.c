/*
 * FUN_10055d80 at 10055d80
 * undefined FUN_10055d80(void)
 * Address ranges: 10055d80-10055dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055d80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_10068e20(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_100707a8(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

