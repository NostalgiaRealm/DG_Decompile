/*
 * FUN_180058938 at 180058938
 * undefined __cdecl FUN_180058938(undefined8 * param_1)
 * Address ranges: 180058938-1800589c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058938(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180066fc8;
  thunk_FUN_180060a18((LPVOID)param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180060a18((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180060a18((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180060a18((LPVOID)*puVar1);
  } while (lVar2 != 0);
  *param_1 = &DAT_180066f18;
  return;
}

