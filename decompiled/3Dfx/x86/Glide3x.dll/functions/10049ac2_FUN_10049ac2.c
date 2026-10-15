/*
 * FUN_10049ac2 at 10049ac2
 * int * __stdcall FUN_10049ac2(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 10049ac2-10049b39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10049ac2(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_1005225f(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_1005823c;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_10052293(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_10052930(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_1005823c;
    thunk_FUN_10052276((LPVOID)0x0);
    FUN_10052276(piVar1);
  }
  return (int *)0x0;
}

