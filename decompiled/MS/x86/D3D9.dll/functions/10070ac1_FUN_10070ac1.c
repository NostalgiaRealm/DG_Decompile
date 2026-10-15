/*
 * FUN_10070ac1 at 10070ac1
 * undefined __stdcall FUN_10070ac1(uint * param_1, uint param_2, uint param_3, int param_4, int param_5, int * param_6, char param_7, char param_8)
 * Address ranges: 10070ac1-10070b05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10070ac1(uint *param_1,uint param_2,uint param_3,int param_4,int param_5,int *param_6,
                 char param_7,char param_8)

{
  if (*(byte *)(*(int *)(param_5 + 0x10) + 0x4a6c) < 2) {
    FUN_100706cd(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  }
  else {
    FUN_10069eb6(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

