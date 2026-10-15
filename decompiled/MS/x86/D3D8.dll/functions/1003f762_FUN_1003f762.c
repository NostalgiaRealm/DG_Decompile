/*
 * FUN_1003f762 at 1003f762
 * undefined __fastcall FUN_1003f762(undefined4 * param_1)
 * Address ranges: 1003f762-1003f793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f762(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_100b23dc;
  *puVar1 = &PTR_FUN_100b2250;
  FUN_1002feb4((int)puVar1);
  *puVar1 = &PTR_FUN_100b2250;
  thunk_FUN_100ad48c((LPVOID)param_1[10]);
  *param_1 = &PTR_FUN_100b1fec;
  return;
}

