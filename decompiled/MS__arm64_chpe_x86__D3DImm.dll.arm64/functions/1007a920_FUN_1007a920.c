/*
 * FUN_1007a920 at 1007a920
 * undefined FUN_1007a920(void)
 * Address ranges: 1007a920-1007a9a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a920(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_1007a898(param_1,param_3);
    }
    FUN_10081ee0(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

