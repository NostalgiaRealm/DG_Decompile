/*
 * FUN_100821cb at 100821cb
 * undefined __fastcall FUN_100821cb(undefined4 * param_1)
 * Address ranges: 100821cb-100821fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100821cb(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_100d64a8;
  param_1[0x30] = &PTR_LAB_100d6548;
  FUN_10084912((int)param_1);
  param_1[0x30] = &PTR_FUN_100d61b0;
  *param_1 = &PTR_D3DPERF_GetStatus_100d6950;
  thunk_FUN_100cfd6c((LPVOID)param_1[3]);
  return;
}

