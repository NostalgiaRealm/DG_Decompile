/*
 * FUN_100b1e00 at 100b1e00
 * undefined FUN_100b1e00(void)
 * Address ranges: 100b1e00-100b1e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b1e00(undefined4 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_native_1015f188;
  param_1[0x22] = &PTR_FUN_1015f14c;
  FUN_100b2270(param_1);
  param_1[0x22] = &PTR_FUN_1015f004;
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015f778;
  FUN_101322d0(param_1[3]);
  return;
}

