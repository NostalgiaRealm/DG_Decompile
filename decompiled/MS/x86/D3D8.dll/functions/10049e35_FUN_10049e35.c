/*
 * FUN_10049e35 at 10049e35
 * undefined __stdcall FUN_10049e35(int * param_1, int * param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10049e35-10049f41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10049e35(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  if ((param_5 >> 3 & 1) != 0) {
    FUN_100a05ed((int)param_1,4,'\0');
    FUN_100a138c(param_1,param_2,0x2036);
    FUN_100a138c(param_1,param_2,0x38);
    FUN_100a138c(param_1,param_2,0x1c);
    FUN_100a138c(param_1,param_2,1);
    FUN_100a138c(param_1,param_2,0x56);
    FUN_100a138c(param_1,param_2,0x38);
  }
  return;
}

