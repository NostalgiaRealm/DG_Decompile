/*
 * FUN_10030376 at 10030376
 * undefined __fastcall FUN_10030376(int * param_1, int param_2, char param_3)
 * Address ranges: 10030376-100303b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10030376(int *param_1,int param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = (param_3 == -1) - 1 & 3;
  *param_1 = uVar1 + 2;
  uVar1 = FUN_10048d34(4,0,0,uVar1 + 1,0,0,0);
  param_1[5] = param_2;
  param_1[4] = param_2;
  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[1] = uVar1;
  return;
}

