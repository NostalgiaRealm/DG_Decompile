/*
 * FUN_100fc1c0 at 100fc1c0
 * undefined FUN_100fc1c0(void)
 * Address ranges: 100fc1c0-100fc26b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100fc1c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x308) + -1;
  *(int *)(param_1 + 0x308) = iVar1;
  if ((iVar1 == 0) && (DAT_1013d288 != 0)) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      (*(code *)PTR_FUN_10134244)(*(undefined4 *)(param_1 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_10134138)(DAT_1013d288,0xffffffff);
    }
    (*(code *)PTR_FUN_10134044)(DAT_1013d288);
    DAT_1013d288 = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    (*(code *)PTR_FUN_10134068)(param_1 + 0x318);
  }
  return;
}

