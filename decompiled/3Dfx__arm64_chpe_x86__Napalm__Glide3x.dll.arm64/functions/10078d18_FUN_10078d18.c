/*
 * FUN_10078d18 at 10078d18
 * undefined FUN_10078d18(void)
 * Address ranges: 10078d18-10078d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10078d18(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_10078c90(param_1,param_3);
    }
    FUN_10083b40(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

