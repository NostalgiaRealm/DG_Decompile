/*
 * FUN_100498b4 at 100498b4
 * undefined __fastcall FUN_100498b4(undefined4 * param_1)
 * Address ranges: 100498b4-1004992b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100498b4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_8;
  
  *param_1 = &PTR_FUN_10054e78;
  thunk_FUN_1004f9b6((LPVOID)param_1[0x94]);
  iVar1 = 0x10;
  local_8 = 0x10;
  puVar2 = param_1 + 0x94;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_1004f9b6((LPVOID)*puVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x10;
  puVar2 = param_1 + 100;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_1004f9b6((LPVOID)*puVar2);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = param_1 + 0x34;
  do {
    puVar2 = puVar2 + -3;
    thunk_FUN_1004f9b6((LPVOID)*puVar2);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *param_1 = &PTR_FUN_10054e20;
  return;
}

