/*
 * FUN_1006fe58 at 1006fe58
 * undefined FUN_1006fe58(void)
 * Address ranges: 1006fe58-1006fedb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fe58(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_1006fdd0(param_1,param_3);
    }
    FUN_1007ac00(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

