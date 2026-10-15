/*
 * FUN_1003c5b8 at 1003c5b8
 * undefined __fastcall FUN_1003c5b8(undefined4 * param_1)
 * Address ranges: 1003c5b8-1003c5f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c5b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_1005f038;
  puVar1 = param_1 + 0x5f7;
  param_1[0x5f6] = &PTR_LAB_1005f034;
  thunk_FUN_1005c76c((LPVOID)*puVar1);
  *puVar1 = 0;
  param_1[0x5f8] = 0;
  param_1[0x5f9] = 0;
  FUN_100057c0(puVar1);
  FUN_1003d8b6(param_1);
  return;
}

