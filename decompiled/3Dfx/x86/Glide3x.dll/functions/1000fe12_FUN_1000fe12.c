/*
 * FUN_1000fe12 at 1000fe12
 * undefined __fastcall FUN_1000fe12(int * param_1)
 * Address ranges: 1000fe12-1000fe51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fe12(int *param_1)

{
  RemoveVectoredExceptionHandler((PVOID)param_1[0x4c]);
  DAT_1005b82c = 0;
  FUN_10046396(*(void **)(param_1[1] + 0x29d8),(int)param_1);
  (**(code **)(*param_1 + 0x10))();
  FUN_1000f534(param_1,(int)param_1);
  param_1[2] = 0;
  return;
}

