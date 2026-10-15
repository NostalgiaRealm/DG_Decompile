/*
 * FUN_10014e46 at 10014e46
 * uint __fastcall FUN_10014e46(uint param_1)
 * Address ranges: 10014e46-10014e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10014e46(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 9) {
    uVar1 = (uint)(byte)(&DAT_1005357c)[param_1];
  }
  return uVar1;
}

