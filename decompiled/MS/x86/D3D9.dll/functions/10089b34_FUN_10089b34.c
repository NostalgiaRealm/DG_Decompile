/*
 * FUN_10089b34 at 10089b34
 * int __fastcall FUN_10089b34(int * param_1, uint * param_2, undefined4 param_3, int param_4)
 * Address ranges: 10089b34-10089b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10089b34(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  if ((*param_2 & 0x8000) != 0) {
    if (param_4 != 2) {
      FUN_10089407(param_1,(int)param_2);
      param_4 = 2;
    }
    FUN_100c3be1((int *)(param_2 + 3),param_1,1);
  }
  return param_4;
}

