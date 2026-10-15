/*
 * FUN_1004e653 at 1004e653
 * undefined4 __fastcall FUN_1004e653(undefined4 param_1)
 * Address ranges: 1004e653-1004e684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1004e653(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    (&DAT_100deaa8)[uVar1] = (&DAT_100d5b58)[uVar1 >> 4] << 0xc | (&DAT_100d5b58)[uVar1 & 0xf];
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return param_1;
}

