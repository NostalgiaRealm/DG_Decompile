/*
 * FUN_10058d4c at 10058d4c
 * undefined __stdcall FUN_10058d4c(int * param_1, int * param_2, undefined4 param_3, undefined4 param_4, uint param_5)
 * Address ranges: 10058d4c-10058e58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10058d4c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  if ((param_5 >> 0x1c & 1) != 0) {
    FUN_100c2e34((int)param_1,4,'\0');
    FUN_100c3be1(param_1,param_2,0x2036);
    FUN_100c3be1(param_1,param_2,0x38);
    FUN_100c3be1(param_1,param_2,0x1c);
    FUN_100c3be1(param_1,param_2,1);
    FUN_100c3be1(param_1,param_2,0x56);
    FUN_100c3be1(param_1,param_2,0x38);
  }
  return;
}

