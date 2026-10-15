/*
 * FUN_1801fb650 at 1801fb650
 * undefined FUN_1801fb650(void)
 * Address ranges: 1801fb650-1801fb6db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fb650(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180237fa0;
  FUN_1802229d8(param_1[100]);
  lVar2 = 0x10;
  puVar1 = param_1 + 100;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    FUN_1802229d8(*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x44;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    FUN_1802229d8(*puVar1);
  } while (lVar2 != 0);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x24;
  do {
    puVar1 = puVar1 + -2;
    lVar2 = lVar2 + -1;
    FUN_1802229d8(*puVar1);
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_180237ef0;
  return;
}

