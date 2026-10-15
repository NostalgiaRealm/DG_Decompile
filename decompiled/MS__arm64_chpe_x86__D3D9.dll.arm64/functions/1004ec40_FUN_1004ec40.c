/*
 * FUN_1004ec40 at 1004ec40
 * undefined FUN_1004ec40(void)
 * Address ranges: 1004ec40-1004ec7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ec40(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_10109a30(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1);
    *(int *)(param_1 + 0x10) = 0;
  }
  return;
}

