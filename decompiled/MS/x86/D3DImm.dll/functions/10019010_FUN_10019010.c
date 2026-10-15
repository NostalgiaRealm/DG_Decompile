/*
 * FUN_10019010 at 10019010
 * undefined __fastcall FUN_10019010(undefined4 * param_1)
 * Address ranges: 10019010-100190a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10019010(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1005e85c;
  FUN_10014c70((int)param_1);
  FUN_1001a6f5((int)(param_1 + 0x76c));
  thunk_FUN_1005c76c((LPVOID)param_1[0x76f]);
  param_1[0x76f] = 0;
  param_1[0x770] = 0;
  param_1[0x772] = 0;
  param_1[0x771] = 0;
  thunk_FUN_1005c76c((LPVOID)param_1[0x765]);
  FUN_1001a043((int)(param_1 + 0x75f));
  thunk_FUN_1005c76c((LPVOID)param_1[0x761]);
  param_1[0x761] = 0;
  param_1[0x762] = 0;
  param_1[0x764] = 0;
  param_1[0x763] = 0;
  *param_1 = &PTR_FUN_1005e914;
  FUN_1005c797((LPVOID)param_1[-1]);
  return;
}

