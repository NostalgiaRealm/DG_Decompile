/*
 * grTexCalcMemRequired at 10001c08
 * uint __stdcall grTexCalcMemRequired(int param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 10001c08-10001c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexCalcMemRequired,16
 */

/* __stdcall grTexCalcMemRequired,16 */

uint grTexCalcMemRequired(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
                    /* 0x1c08  90  _grTexCalcMemRequired@16 */
  FUN_10005411();
  iVar1 = FUN_1000440d(3,param_1,param_2,param_3,param_4);
  return iVar1 + 7U & 0xfffffff8;
}

