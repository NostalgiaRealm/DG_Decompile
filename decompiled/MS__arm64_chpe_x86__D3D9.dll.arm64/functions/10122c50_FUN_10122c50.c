/*
 * FUN_10122c50 at 10122c50
 * undefined FUN_10122c50(void)
 * Address ranges: 10122c50-10122cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10122c50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_10002308(param_1,param_3);
    }
    FUN_101325a0(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

