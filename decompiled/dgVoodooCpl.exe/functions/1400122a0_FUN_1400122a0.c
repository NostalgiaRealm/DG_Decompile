/*
 * FUN_1400122a0 at 1400122a0
 * undefined __fastcall FUN_1400122a0(undefined8 * param_1)
 * Address ranges: 1400122a0-140012336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400122a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar2 = param_1 + 100;
  *param_1 = &PTR_FUN_140028d70;
  FUN_140024260((LPVOID)*puVar2);
  lVar4 = 0x10;
  lVar3 = 0x10;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  lVar3 = 0x10;
  puVar2 = param_1 + 0x44;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x24;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    FUN_140024260((LPVOID)*puVar1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_1 = &PTR_FUN_140028cd0;
  return;
}

