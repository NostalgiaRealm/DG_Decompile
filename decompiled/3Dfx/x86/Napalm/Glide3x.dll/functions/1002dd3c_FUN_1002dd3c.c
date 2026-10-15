/*
 * FUN_1002dd3c at 1002dd3c
 * undefined __fastcall FUN_1002dd3c(int param_1)
 * Address ranges: 1002dd3c-1002ddd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002dd3c(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_1002dccf(0x40);
  FUN_1002eeb0();
  uVar1 = 0;
  do {
    FUN_1002dccf(uVar1);
    FUN_1002eeb0();
    lVar2 = FUN_10056570();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

