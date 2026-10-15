/*
 * FUN_1006125c at 1006125c
 * int __stdcall FUN_1006125c(int * param_1, int * param_2, int param_3)
 * Address ranges: 1006125c-100612b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1006125c(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  
  if (param_1[param_3 + 0xa2] == 0) {
    uVar1 = FUN_100c2e34((int)param_1,1,'\x01');
    param_1[param_3 + 0xa2] = uVar1;
    FUN_100c3be1(param_1,param_2,0x36);
  }
  return param_1[param_3 + 0xa2];
}

