/*
 * FUN_100c630f at 100c630f
 * int * __fastcall FUN_100c630f(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 100c630f-100c6377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_100c630f(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_100cfd55(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_100d9188;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_100cfd89(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_100cff00(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_100d9188;
    thunk_FUN_100cfd6c((LPVOID)0x0);
    FUN_100cfd6c(piVar1);
  }
  return (int *)0x0;
}

