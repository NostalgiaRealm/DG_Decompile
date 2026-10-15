/*
 * FUN_1800995b0 at 1800995b0
 * undefined FUN_1800995b0(void)
 * Address ranges: 1800995b0-180099607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800995b0(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_180235970;
  param_1[0x20] = &PTR_FUN_1802358f8;
  FUN_1800998b8();
  param_1[0x20] = &PTR_FUN_180234e88;
  *param_1 = &PTR_D3DPERF_GetStatus_180235d90;
  thunk_FUN_180102fc0(param_1[3]);
  return;
}

