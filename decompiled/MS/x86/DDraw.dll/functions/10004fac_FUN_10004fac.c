/*
 * FUN_10004fac at 10004fac
 * int __fastcall FUN_10004fac(int param_1, uint param_2, undefined4 param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8)
 * Address ranges: 10004fac-10004ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_10004fac(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5,uint param_6,
            uint param_7,uint param_8)

{
  if (param_8 == 0) {
    param_8 = FUN_10004ff4(param_1,param_4,param_6,param_5,1);
  }
  if (param_5 != 0) {
    param_2 = ((param_7 - 1) + param_2 & -param_7) / param_7;
  }
  return param_2 * param_8;
}

