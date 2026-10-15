/*
 * FUN_1007b9f4 at 1007b9f4
 * undefined __fastcall FUN_1007b9f4(undefined4 * param_1)
 * Address ranges: 1007b9f4-1007ba26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007b9f4(undefined4 *param_1)

{
  *param_1 = &PTR_D3DPERF_SetMarker_100d6334;
  param_1[0x22] = &PTR_LAB_100d62f8;
  FUN_1007bc62((int)param_1);
  param_1[0x22] = &PTR_FUN_100d61b0;
  *param_1 = &PTR_D3DPERF_GetStatus_100d6950;
  thunk_FUN_100cfd6c((LPVOID)param_1[3]);
  return;
}

