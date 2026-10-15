/*
 * FUN_10087d02 at 10087d02
 * undefined __fastcall FUN_10087d02(undefined4 * param_1)
 * Address ranges: 10087d02-10087d34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10087d02(undefined4 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_100d672c;
  param_1[0x30] = &PTR_LAB_100d66f0;
  FUN_10087fb9((int)param_1);
  param_1[0x30] = &PTR_FUN_100d61b0;
  *param_1 = &PTR_D3DPERF_GetStatus_100d6950;
  thunk_FUN_100cfd6c((LPVOID)param_1[3]);
  return;
}

