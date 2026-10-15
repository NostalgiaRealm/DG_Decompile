/*
 * FUN_10014ab8 at 10014ab8
 * uint __fastcall FUN_10014ab8(uint param_1)
 * Address ranges: 10014ab8-10014ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10014ab8(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 9) {
    uVar1 = (uint)(byte)(&DAT_1005357c)[param_1];
  }
  return uVar1;
}

