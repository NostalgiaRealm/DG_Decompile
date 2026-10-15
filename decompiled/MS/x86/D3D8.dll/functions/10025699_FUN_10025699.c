/*
 * FUN_10025699 at 10025699
 * int __fastcall FUN_10025699(int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, uint param_8, int param_9)
 * Address ranges: 10025699-100256ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_10025699(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7,
            uint param_8,int param_9)

{
  if (param_8 == 0) {
    param_8 = FUN_100256ee(param_1,param_4,param_6,param_5,1);
  }
  if (param_5 != 0) {
    param_2 = ((param_7 - 1) + param_2 & -param_7) / param_7;
  }
  if (param_9 == 0) {
    param_9 = param_2 * param_8;
  }
  return param_3 * param_9;
}

