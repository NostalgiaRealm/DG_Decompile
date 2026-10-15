/*
 * FUN_1000266b at 1000266b
 * undefined4 __fastcall FUN_1000266b(int param_1)
 * Address ranges: 1000266b-10002684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000266b(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100d4a70)[uVar1]) {
      uVar2 = 1;
      break;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x11);
  return CONCAT31((int3)(uVar1 >> 8),uVar2);
}

