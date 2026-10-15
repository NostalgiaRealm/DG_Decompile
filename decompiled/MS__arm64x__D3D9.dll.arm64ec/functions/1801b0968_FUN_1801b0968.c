/*
 * FUN_1801b0968 at 1801b0968
 * undefined FUN_1801b0968(void)
 * Address ranges: 1801b0968-1801b09bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b0968(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_native_18022d5b0;
  param_1[0x20] = &PTR_FUN_18022d538;
  FUN_1801b0ce8();
  param_1[0x20] = &PTR_FUN_18022ca10;
  *param_1 = &PTR_D3DPERF_GetStatus_native_18022e0f8;
  FUN_1802229d8(param_1[3]);
  return;
}

