/*
 * FUN_1800d9340 at 1800d9340
 * undefined __fastcall FUN_1800d9340(undefined8 * param_1)
 * Address ranges: 1800d9340-1800d93c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d9340(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 100;
  *param_1 = &PTR_FUN_180106268;
  FUN_1800fbcf0((LPVOID)*puVar2);
  lVar1 = 0x10;
  do {
    puVar2 = puVar2 + -2;
    FUN_1800fbcf0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    puVar2 = puVar2 + -2;
    FUN_1800fbcf0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x24;
  do {
    puVar2 = puVar2 + -2;
    FUN_1800fbcf0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *param_1 = &PTR_FUN_1801061b8;
  return;
}

