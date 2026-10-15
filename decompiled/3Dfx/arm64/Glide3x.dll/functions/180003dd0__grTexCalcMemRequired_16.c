/*
 * _grTexCalcMemRequired@16 at 180003dd0
 * uint __cdecl _grTexCalcMemRequired@16(undefined8 param_1, undefined8 param_2, int param_3, uint param_4)
 * Address ranges: 180003dd0-180003e07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint extraout_w1;
  int extraout_w11;
  
                    /* 0x3dd0  69  _grTexCalcMemRequired@16
                       0x3dd0  169  grTexCalcMemRequired */
  FUN_180008ce0();
  iVar1 = FUN_180008380(3,extraout_w11,extraout_w1,param_3,param_4);
  return iVar1 + 7U & 0xfffffff8;
}

