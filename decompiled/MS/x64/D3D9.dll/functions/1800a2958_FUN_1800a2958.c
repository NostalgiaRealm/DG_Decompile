/*
 * FUN_1800a2958 at 1800a2958
 * undefined __fastcall FUN_1800a2958(undefined8 * param_1)
 * Address ranges: 1800a2958-1800a29a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a2958(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_180103990;
  param_1[0x20] = &PTR_LAB_180103918;
  FUN_1800a2d54((longlong)param_1);
  param_1[0x20] = &PTR_FUN_180102ea8;
  *param_1 = &PTR_D3DPERF_GetStatus_180103dc0;
  FUN_1800fbcf0((LPVOID)param_1[3]);
  return;
}

