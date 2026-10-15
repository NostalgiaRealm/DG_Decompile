/*
 * _grTexCalcMemRequired@16 at 180002248
 * uint __fastcall _grTexCalcMemRequired@16(int param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 180002248-180002272
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  
                    /* 0x2248  69  _grTexCalcMemRequired@16
                       0x2248  169  grTexCalcMemRequired */
  FUN_1800069ac();
  iVar1 = FUN_180005928(3,param_1,param_2,param_3,param_4);
  return iVar1 + 7U & 0xfffffff8;
}

