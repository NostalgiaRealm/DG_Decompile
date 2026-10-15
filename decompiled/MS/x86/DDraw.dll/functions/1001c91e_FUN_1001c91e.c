/*
 * FUN_1001c91e at 1001c91e
 * int __fastcall FUN_1001c91e(int * param_1, uint * param_2, undefined4 param_3, int param_4)
 * Address ranges: 1001c91e-1001c981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_1001c91e(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  if ((*param_2 & 0x8000) != 0) {
    if (param_4 != 2) {
      FUN_1001c1f1(param_1,(int)param_2);
      param_4 = 2;
    }
    FUN_100575ba((int *)(param_2 + 3),param_1,1);
  }
  return param_4;
}

