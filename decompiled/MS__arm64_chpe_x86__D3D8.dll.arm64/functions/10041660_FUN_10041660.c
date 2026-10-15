/*
 * FUN_10041660 at 10041660
 * undefined FUN_10041660(void)
 * Address ranges: 10041660-1004169f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10041660(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    FUN_100d7830(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),iVar1);
    *(int *)(param_1 + 0x10) = 0;
  }
  return;
}

