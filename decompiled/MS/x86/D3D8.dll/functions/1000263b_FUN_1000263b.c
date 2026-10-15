/*
 * FUN_1000263b at 1000263b
 * uint __fastcall FUN_1000263b(int param_1)
 * Address ranges: 1000263b-10002651
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000263b(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100b15d8)[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2a);
  return uVar1 & 0xffffff00;
}

