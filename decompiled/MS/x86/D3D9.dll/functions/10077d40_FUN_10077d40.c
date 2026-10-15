/*
 * FUN_10077d40 at 10077d40
 * undefined __fastcall FUN_10077d40(undefined4 * param_1)
 * Address ranges: 10077d40-10077d72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10077d40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100d6128;
  param_1[0x22] = &PTR_LAB_100d60d4;
  FUN_10078a5d((int)param_1);
  param_1[0x22] = &PTR_FUN_100d61b0;
  *param_1 = &PTR_D3DPERF_GetStatus_100d6950;
  thunk_FUN_100cfd6c((LPVOID)param_1[3]);
  return;
}

