/*
 * FUN_180031910 at 180031910
 * int __fastcall FUN_180031910(int param_1, uint param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7)
 * Address ranges: 180031910-18003197a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180031910(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7)

{
  uint uVar1;
  
  if (param_5 == 0) {
    uVar1 = (uint)(param_1 * param_4) >> 3;
  }
  else {
    uVar1 = (((param_6 - 1) + param_1 & -param_6) / param_6) * param_5;
    param_2 = ((param_7 - 1) + param_2 & -param_7) / param_7;
  }
  return uVar1 * param_2 * param_3;
}

