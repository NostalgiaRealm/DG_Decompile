/*
 * FUN_10056dbd at 10056dbd
 * int * __stdcall FUN_10056dbd(SIZE_T param_1, undefined4 * param_2)
 * Address ranges: 10056dbd-10056e34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10056dbd(SIZE_T param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_1005c755(0x10);
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)&PTR_FUN_1005ffcc;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    puVar2 = (undefined4 *)FUN_1005c789(param_1);
    piVar1[2] = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      piVar1[1] = param_1;
      FUN_1005ca00(puVar2,param_2,param_1);
      (**(code **)(*piVar1 + 4))(piVar1);
      return piVar1;
    }
    *piVar1 = (int)&PTR_FUN_1005ffcc;
    thunk_FUN_1005c76c((LPVOID)0x0);
    FUN_1005c76c(piVar1);
  }
  return (int *)0x0;
}

