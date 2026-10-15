/*
 * FUN_10084f80 at 10084f80
 * undefined FUN_10084f80(void)
 * Address ranges: 10084f80-10085003
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10084f80(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_10084ef8(param_1,param_3);
    }
    FUN_100917a0(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

