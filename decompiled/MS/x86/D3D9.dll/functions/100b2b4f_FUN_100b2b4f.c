/*
 * FUN_100b2b4f at 100b2b4f
 * undefined __fastcall FUN_100b2b4f(undefined4 * param_1)
 * Address ranges: 100b2b4f-100b2bc6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100b2b4f(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  *param_1 = &PTR_FUN_100d83bc;
  thunk_FUN_100cfd6c((LPVOID)param_1[0x94]);
  iVar1 = 0x10;
  local_8 = 0x10;
  puVar2 = param_1 + 0x94;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_100cfd6c((LPVOID)*puVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x10;
  puVar2 = param_1 + 100;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_100cfd6c((LPVOID)*puVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = param_1 + 0x34;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_100cfd6c((LPVOID)*puVar2);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *param_1 = &PTR_FUN_100d8364;
  return;
}

