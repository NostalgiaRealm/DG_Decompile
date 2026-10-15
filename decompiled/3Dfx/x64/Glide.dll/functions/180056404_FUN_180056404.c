/*
 * FUN_180056404 at 180056404
 * undefined __fastcall FUN_180056404(undefined8 * param_1)
 * Address ranges: 180056404-180056489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056404(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 100;
  *param_1 = &PTR_FUN_180064fb8;
  FUN_18005dbc0((LPVOID)*puVar2);
  lVar1 = 0x10;
  do {
    puVar2 = puVar2 + -2;
    FUN_18005dbc0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    puVar2 = puVar2 + -2;
    FUN_18005dbc0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x24;
  do {
    puVar2 = puVar2 + -2;
    FUN_18005dbc0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *param_1 = &PTR_FUN_180064f08;
  return;
}

