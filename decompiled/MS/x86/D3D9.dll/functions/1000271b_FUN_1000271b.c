/*
 * FUN_1000271b at 1000271b
 * uint __fastcall FUN_1000271b(int param_1)
 * Address ranges: 1000271b-10002731
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000271b(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == (&DAT_100d4920)[uVar1]) {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x43);
  return uVar1 & 0xffffff00;
}

