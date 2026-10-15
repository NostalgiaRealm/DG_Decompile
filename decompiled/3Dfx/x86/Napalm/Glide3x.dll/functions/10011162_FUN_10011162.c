/*
 * FUN_10011162 at 10011162
 * undefined __fastcall FUN_10011162(int * param_1)
 * Address ranges: 10011162-100111a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10011162(int *param_1)

{
  RemoveVectoredExceptionHandler((PVOID)param_1[0x4c]);
  DAT_1005fa0c = 0;
  FUN_1004979f(*(void **)(param_1[1] + 0x2b14),(int)param_1);
  (**(code **)(*param_1 + 0x10))();
  FUN_1001080e(param_1,(int)param_1);
  param_1[2] = 0;
  return;
}

