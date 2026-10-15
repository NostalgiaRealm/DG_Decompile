/*
 * FUN_10065b7c at 10065b7c
 * undefined __fastcall FUN_10065b7c(undefined4 * param_1)
 * Address ranges: 10065b7c-10065bae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10065b7c(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100b2bbc;
  param_1[0x22] = &PTR_LAB_100b2b80;
  FUN_10065dea((int)param_1);
  param_1[0x22] = &PTR_FUN_100b2a38;
  *param_1 = &PTR_LAB_100b31a0;
  thunk_FUN_100ad48c((LPVOID)param_1[3]);
  return;
}

