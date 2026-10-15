/*
 * FUN_10073678 at 10073678
 * undefined FUN_10073678(void)
 * Address ranges: 10073678-100736fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073678(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_100735f0(param_1,param_3);
    }
    FUN_1007e4a0(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

