/*
 * FUN_1005ed40 at 1005ed40
 * undefined FUN_1005ed40(void)
 * Address ranges: 1005ed40-1005ed83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ed40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x3a8);
  if (iVar1 != 0) {
    FUN_10071ce0(iVar1);
    *(int *)(param_1 + 0x3a8) = 0;
    FUN_10079668(param_1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

