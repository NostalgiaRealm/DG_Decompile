/*
 * FUN_1800aa4d8 at 1800aa4d8
 * undefined FUN_1800aa4d8(void)
 * Address ranges: 1800aa4d8-1800aa573
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa4d8(longlong param_1,uint param_2,int param_3,int param_4)

{
  if (param_2 < 0x100) {
    param_1 = ((ulonglong)param_2 * 8 - (ulonglong)param_2) * 8 + (longlong)param_3 * 4 + param_1;
    if (*(int *)(param_1 + 0x6ad0) != param_4) {
      FUN_1800aa578();
      *(int *)(param_1 + 0x6ad0) = param_4;
    }
  }
  else {
    param_1 = (ulonglong)(param_2 - 0x100) * 0x38 + (longlong)param_3 * 4 + param_1;
    if ((*(int *)(param_1 + 0x6e50) != param_4) && ((param_4 != 3 || (2 < param_3 - 5U)))) {
      FUN_1800aa578();
      *(int *)(param_1 + 0x6e50) = param_4;
    }
  }
  return;
}

