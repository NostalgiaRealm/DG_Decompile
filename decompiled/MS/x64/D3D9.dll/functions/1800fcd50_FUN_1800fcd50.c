/*
 * FUN_1800fcd50 at 1800fcd50
 * undefined __fastcall FUN_1800fcd50(void)
 * Address ranges: 1800fcd50-1800fcdac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fcd50(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0x20;
  puVar2 = &DAT_1801173e0;
  do {
    FUN_1800fbcf0((LPVOID)puVar2[-2]);
    FUN_1800fbcf0((LPVOID)puVar2[-4]);
    FUN_1800fbcf0((LPVOID)puVar2[-6]);
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + -0x4b;
  } while (lVar1 != 0);
  return;
}

