/*
 * FUN_100c4080 at 100c4080
 * undefined FUN_100c4080(void)
 * Address ranges: 100c4080-100c40e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c4080(undefined4 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_native_1015f570;
  param_1[0x30] = &PTR_FUN_1015f534;
  FUN_100c4550(param_1);
  param_1[0x30] = &PTR_FUN_1015f004;
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015f778;
  FUN_101322d0(param_1[3]);
  return;
}

