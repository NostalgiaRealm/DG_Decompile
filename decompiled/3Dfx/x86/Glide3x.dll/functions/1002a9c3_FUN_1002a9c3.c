/*
 * FUN_1002a9c3 at 1002a9c3
 * undefined __fastcall FUN_1002a9c3(int param_1)
 * Address ranges: 1002a9c3-1002aa5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a9c3(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_1002a956(0x40);
  FUN_1002baa0();
  uVar1 = 0;
  do {
    FUN_1002a956(uVar1);
    FUN_1002baa0();
    lVar2 = FUN_10053160();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

