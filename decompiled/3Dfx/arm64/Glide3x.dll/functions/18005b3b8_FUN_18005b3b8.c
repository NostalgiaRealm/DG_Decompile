/*
 * FUN_18005b3b8 at 18005b3b8
 * undefined __cdecl FUN_18005b3b8(undefined8 * param_1)
 * Address ranges: 18005b3b8-18005b443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b3b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_18006a258;
  thunk_FUN_180063700((LPVOID)param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180063700((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180063700((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_180063700((LPVOID)*puVar1);
  } while (lVar2 != 0);
  *param_1 = &DAT_18006a1a8;
  return;
}

