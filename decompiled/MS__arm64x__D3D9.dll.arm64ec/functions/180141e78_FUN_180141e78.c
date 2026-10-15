/*
 * FUN_180141e78 at 180141e78
 * undefined FUN_180141e78(void)
 * Address ranges: 180141e78-180141ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180141e78(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022b0e0;
  param_1[4] = &PTR_FUN_18022c4e0;
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x30);
  }
  return param_1;
}

