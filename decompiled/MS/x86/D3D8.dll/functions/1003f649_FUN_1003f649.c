/*
 * FUN_1003f649 at 1003f649
 * undefined __fastcall FUN_1003f649(undefined4 * param_1)
 * Address ranges: 1003f649-1003f67a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f649(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_100b23c4;
  *puVar1 = &PTR_FUN_100b2250;
  FUN_1002feb4((int)puVar1);
  *puVar1 = &PTR_FUN_100b2250;
  thunk_FUN_100ad48c((LPVOID)param_1[10]);
  *param_1 = &PTR_FUN_100b1fec;
  return;
}

