/*
 * FUN_140013bd0 at 140013bd0
 * undefined __cdecl FUN_140013bd0(undefined8 * param_1)
 * Address ranges: 140013bd0-140013c5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140013bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_140028dd0;
  thunk_FUN_140024830((LPVOID)param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_140024830((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_140024830((LPVOID)*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    thunk_FUN_140024830((LPVOID)*puVar1);
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_140028d30;
  return;
}

