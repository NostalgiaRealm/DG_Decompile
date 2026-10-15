/*
 * FUN_1002cd0b at 1002cd0b
 * int __fastcall FUN_1002cd0b(int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 1002cd0b-1002cd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall
FUN_1002cd0b(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,uint param_7)

{
  uint uVar1;
  
  uVar1 = FUN_1002cd50(param_1,param_4,param_6,param_5,1);
  if (param_5 != 0) {
    param_2 = ((param_7 - 1) + param_2 & -param_7) / param_7;
  }
  return param_3 * param_2 * uVar1;
}

