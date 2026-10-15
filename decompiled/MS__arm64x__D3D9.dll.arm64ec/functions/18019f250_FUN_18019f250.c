/*
 * FUN_18019f250 at 18019f250
 * undefined FUN_18019f250(void)
 * Address ranges: 18019f250-18019f2a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019f250(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_native_18022cd18;
  param_1[0x1c] = &PTR_FUN_18022cca0;
  FUN_18019f5f0();
  param_1[0x1c] = &PTR_FUN_18022ca10;
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022e0f8;
  FUN_1802229d8(param_1[3]);
  return;
}

