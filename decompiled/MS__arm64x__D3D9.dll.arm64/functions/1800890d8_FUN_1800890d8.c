/*
 * FUN_1800890d8 at 1800890d8
 * undefined FUN_1800890d8(void)
 * Address ranges: 1800890d8-18008912f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800890d8(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_180235190;
  param_1[0x1c] = &PTR_FUN_180235118;
  FUN_1800893e8();
  param_1[0x1c] = &PTR_FUN_180234e88;
  *param_1 = &PTR_D3DPERF_GetStatus_180235d90;
  thunk_FUN_180102fc0(param_1[3]);
  return;
}

