/*
 * FUN_1001c01c at 1001c01c
 * undefined __fastcall FUN_1001c01c(int * param_1)
 * Address ranges: 1001c01c-1001c05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001c01c(int *param_1)

{
  RemoveVectoredExceptionHandler((PVOID)param_1[0x4c]);
  DAT_10059758 = 0;
  FUN_10043c3e(*(void **)(param_1[1] + 0x295c),(int)param_1);
  (**(code **)(*param_1 + 0x10))();
  FUN_1001b74b(param_1,(int)param_1);
  param_1[2] = 0;
  return;
}

