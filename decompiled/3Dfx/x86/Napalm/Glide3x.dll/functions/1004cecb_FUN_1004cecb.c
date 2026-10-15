/*
 * FUN_1004cecb at 1004cecb
 * int * __stdcall FUN_1004cecb(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 1004cecb-1004cf42
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1004cecb(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_1005566f(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_1005b6ec;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_100556a3(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_10055d40(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_1005b6ec;
    thunk_FUN_10055686((LPVOID)0x0);
    FUN_10055686(piVar1);
  }
  return (int *)0x0;
}

