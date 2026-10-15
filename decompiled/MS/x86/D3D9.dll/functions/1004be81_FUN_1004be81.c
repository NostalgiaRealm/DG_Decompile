/*
 * FUN_1004be81 at 1004be81
 * undefined __fastcall FUN_1004be81(undefined4 * param_1)
 * Address ranges: 1004be81-1004beb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004be81(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_100d5988;
  *puVar1 = &PTR_FUN_100d57ec;
  FUN_10039cc5((int)puVar1);
  *puVar1 = &PTR_FUN_100d57ec;
  thunk_FUN_100cfd6c((LPVOID)param_1[10]);
  *param_1 = &PTR_FUN_100d54f8;
  return;
}

