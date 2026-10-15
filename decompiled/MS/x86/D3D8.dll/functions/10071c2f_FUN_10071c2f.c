/*
 * FUN_10071c2f at 10071c2f
 * undefined __fastcall FUN_10071c2f(undefined4 * param_1)
 * Address ranges: 10071c2f-10071c61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10071c2f(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100b2f9c;
  param_1[0x30] = &PTR_LAB_100b2f60;
  FUN_10071ee6((int)param_1);
  param_1[0x30] = &PTR_FUN_100b2a38;
  *param_1 = &PTR_LAB_100b31a0;
  thunk_FUN_100ad48c((LPVOID)param_1[3]);
  return;
}

