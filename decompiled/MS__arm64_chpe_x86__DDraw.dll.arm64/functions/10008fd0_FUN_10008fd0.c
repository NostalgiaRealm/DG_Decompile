/*
 * FUN_10008fd0 at 10008fd0
 * undefined FUN_10008fd0(void)
 * Address ranges: 10008fd0-10009013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008fd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_100ba020)(iVar1);
    *(int *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  return;
}

