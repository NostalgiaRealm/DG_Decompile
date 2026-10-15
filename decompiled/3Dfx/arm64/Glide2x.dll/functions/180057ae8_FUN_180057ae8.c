/*
 * FUN_180057ae8 at 180057ae8
 * undefined __cdecl FUN_180057ae8(undefined8 * param_1)
 * Address ranges: 180057ae8-180057b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057ae8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180065fc8;
  thunk_FUN_18005fbc8((LPVOID)param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_18005fbc8((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_18005fbc8((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_18005fbc8((LPVOID)*puVar1);
  } while (lVar2 != 0);
  *param_1 = &DAT_180065f18;
  return;
}

