/*
 * FUN_1800934ac at 1800934ac
 * undefined __fastcall FUN_1800934ac(undefined8 * param_1)
 * Address ranges: 1800934ac-1800934f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800934ac(undefined8 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_1801031b0;
  param_1[0x1c] = &PTR_LAB_180103138;
  FUN_1800937e8((longlong)param_1);
  param_1[0x1c] = &PTR_FUN_180102ea8;
  *param_1 = &PTR_D3DPERF_GetStatus_180103dc0;
  FUN_1800fbcf0((LPVOID)param_1[3]);
  return;
}

