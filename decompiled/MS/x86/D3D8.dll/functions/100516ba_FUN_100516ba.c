/*
 * FUN_100516ba at 100516ba
 * uint * __stdcall FUN_100516ba(uint * param_1)
 * Address ranges: 100516ba-100516e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_100516ba(uint *param_1)

{
  short sVar1;
  
  sVar1 = (short)*param_1;
  while (sVar1 == -2) {
    param_1 = param_1 + (*param_1 >> 0x10) + 1;
    sVar1 = (short)*param_1;
  }
  return param_1;
}

