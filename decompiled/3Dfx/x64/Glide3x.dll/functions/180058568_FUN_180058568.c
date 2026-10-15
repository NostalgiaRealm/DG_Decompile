/*
 * FUN_180058568 at 180058568
 * undefined __fastcall FUN_180058568(undefined8 * param_1)
 * Address ranges: 180058568-1800585ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058568(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1 + 100;
  *param_1 = &PTR_FUN_180067248;
  FUN_180060ac0((LPVOID)*puVar2);
  lVar1 = 0x10;
  do {
    puVar2 = puVar2 + -2;
    FUN_180060ac0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    puVar2 = puVar2 + -2;
    FUN_180060ac0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  lVar1 = 0x10;
  puVar2 = param_1 + 0x24;
  do {
    puVar2 = puVar2 + -2;
    FUN_180060ac0((LPVOID)*puVar2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *param_1 = &PTR_FUN_180067198;
  return;
}

