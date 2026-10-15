/*
 * _grTexCalcMemRequired@16 at 180001fc8
 * uint __fastcall _grTexCalcMemRequired@16(int param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 180001fc8-180002004
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grTexCalcMemRequired_16(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x1fc8  87  _grTexCalcMemRequired@16
                       0x1fc8  248  grTexCalcMemRequired */
  FUN_180015384();
  uVar2 = 8;
  if ((int)param_4 < 0x10) {
    uVar2 = param_4;
  }
  iVar1 = FUN_180017d78(3,param_1,param_2,param_3,uVar2);
  return iVar1 + 7U & 0xfffffff8;
}

