/*
 * FUN_10027d19 at 10027d19
 * undefined __fastcall FUN_10027d19(undefined4 * param_1)
 * Address ranges: 10027d19-10027d4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10027d19(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_1005ed50;
  *puVar1 = &PTR_LAB_1005ebf8;
  FUN_1001b171((int)puVar1);
  *puVar1 = &PTR_LAB_1005ebf8;
  thunk_FUN_1005c76c((LPVOID)param_1[10]);
  *param_1 = &PTR_FUN_1005e9d0;
  return;
}

