/*
 * grTexCalcMemRequired at 10001bf5
 * uint __stdcall grTexCalcMemRequired(int param_1, uint param_2, int param_3, uint param_4)
 * Address ranges: 10001bf5-10001c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexCalcMemRequired,16
 */

/* __stdcall grTexCalcMemRequired,16 */

uint grTexCalcMemRequired(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  
                    /* 0x1bf5  85  _grTexCalcMemRequired@16 */
  FUN_10012ab2();
  if (0xf < (int)param_4) {
    param_4 = 8;
  }
  iVar1 = FUN_10014ea7(3,param_1,param_2,param_3,param_4);
  return iVar1 + 7U & 0xfffffff8;
}

