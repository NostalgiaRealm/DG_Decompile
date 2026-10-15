/*
 * FUN_10004ff4 at 10004ff4
 * uint __fastcall FUN_10004ff4(int param_1, int param_2, uint param_3, int param_4, int param_5)
 * Address ranges: 10004ff4-10005028
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10004ff4(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = (uint)(param_1 * param_2) >> 3;
  }
  else {
    uVar1 = ((param_1 + -1 + param_3 & -param_3) / param_3) * param_4;
  }
  return (uVar1 - 1) + param_5 & -param_5;
}

