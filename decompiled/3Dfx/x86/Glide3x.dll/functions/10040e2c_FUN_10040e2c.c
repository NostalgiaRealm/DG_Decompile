/*
 * FUN_10040e2c at 10040e2c
 * undefined __stdcall FUN_10040e2c(void * param_1, undefined4 param_2)
 * Address ranges: 10040e2c-10040e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040e2c(void *param_1,undefined4 param_2)

{
  FUN_1003f402(param_1,param_2);
  (**(code **)(**(int **)((int)param_1 + 0x638) + 0x2c))(*(int **)((int)param_1 + 0x638),param_2);
  return;
}

