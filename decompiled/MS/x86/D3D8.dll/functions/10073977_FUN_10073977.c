/*
 * FUN_10073977 at 10073977
 * int __fastcall FUN_10073977(int * param_1, uint * param_2, undefined4 param_3, int param_4)
 * Address ranges: 10073977-100739da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10073977(int *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  if ((*param_2 & 0x8000) != 0) {
    if (param_4 != 2) {
      FUN_1007324a(param_1,(int)param_2);
      param_4 = 2;
    }
    FUN_100a138c((int *)(param_2 + 3),param_1,1);
  }
  return param_4;
}

