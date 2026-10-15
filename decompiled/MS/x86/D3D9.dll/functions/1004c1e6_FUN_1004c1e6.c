/*
 * FUN_1004c1e6 at 1004c1e6
 * undefined __fastcall FUN_1004c1e6(undefined4 * param_1)
 * Address ranges: 1004c1e6-1004c217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c1e6(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_100d59b4;
  *puVar1 = &PTR_FUN_100d57ec;
  FUN_10039cc5((int)puVar1);
  *puVar1 = &PTR_FUN_100d57ec;
  thunk_FUN_100cfd6c((LPVOID)param_1[10]);
  *param_1 = &PTR_FUN_100d54f8;
  return;
}

