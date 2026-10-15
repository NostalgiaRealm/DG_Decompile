/*
 * FUN_10046fda at 10046fda
 * int * __stdcall FUN_10046fda(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 10046fda-10047051
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10046fda(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_1004f60f(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_10054fe4;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_1004f643(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_1004fd20(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_10054fe4;
    thunk_FUN_1004f626((LPVOID)0x0);
    FUN_1004f626(piVar1);
  }
  return (int *)0x0;
}

