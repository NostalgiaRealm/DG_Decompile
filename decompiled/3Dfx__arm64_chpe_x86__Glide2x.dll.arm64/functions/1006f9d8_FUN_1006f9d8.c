/*
 * FUN_1006f9d8 at 1006f9d8
 * undefined FUN_1006f9d8(void)
 * Address ranges: 1006f9d8-1006fa5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006f9d8(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_1006f950(param_1,param_3);
    }
    FUN_1007a780(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

