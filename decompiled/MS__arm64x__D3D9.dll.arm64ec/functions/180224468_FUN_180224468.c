/*
 * FUN_180224468 at 180224468
 * undefined FUN_180224468(void)
 * Address ranges: 180224468-1802244c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180224468(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  lVar1 = 0x180253340;
  do {
    lVar2 = lVar2 + -1;
    FUN_1802229d8(*(undefined8 *)(lVar1 + -0x10));
    FUN_1802229d8(*(undefined8 *)(lVar1 + -0x20));
    FUN_1802229d8(*(undefined8 *)(lVar1 + -0x30));
    lVar1 = lVar1 + -600;
  } while (lVar2 != 0);
  return;
}

