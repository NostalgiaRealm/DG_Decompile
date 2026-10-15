/*
 * FUN_1800fccfc at 1800fccfc
 * undefined __fastcall FUN_1800fccfc(void)
 * Address ranges: 1800fccfc-1800fcd4c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fccfc(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0x20;
  puVar2 = &DAT_1801128d0;
  do {
    FUN_1800fbcf0((LPVOID)puVar2[-2]);
    FUN_1800fbcf0((LPVOID)puVar2[-4]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -5;
  } while (lVar1 != 0);
  return;
}

