/*
 * FUN_100ef6d8 at 100ef6d8
 * undefined FUN_100ef6d8(void)
 * Address ranges: 100ef6d8-100ef75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ef6d8(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  if ((char)param_1[3] != '\0') {
    piVar1 = param_1 + 1;
    if ((uint)param_1[2] < (uint)((param_3 - *param_1) + *piVar1)) {
      FUN_100022c8(param_1,param_3);
    }
    FUN_100ff660(*piVar1,param_2,param_3);
    *piVar1 = param_3 + *piVar1;
  }
  return;
}

