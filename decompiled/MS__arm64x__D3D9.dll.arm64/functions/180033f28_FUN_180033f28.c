/*
 * FUN_180033f28 at 180033f28
 * undefined FUN_180033f28(void)
 * Address ranges: 180033f28-180033f6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033f28(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_180234120;
  param_1[4] = &PTR_FUN_180234a00;
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x30);
  }
  return param_1;
}

