/*
 * FUN_180224418 at 180224418
 * undefined FUN_180224418(void)
 * Address ranges: 180224418-180224463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224418(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  puVar1 = &DAT_18024e830;
  do {
    lVar2 = lVar2 + -1;
    FUN_1802229d8(puVar1[-2]);
    FUN_1802229d8(puVar1[-4]);
    puVar1 = puVar1 + -5;
  } while (lVar2 != 0);
  return;
}

