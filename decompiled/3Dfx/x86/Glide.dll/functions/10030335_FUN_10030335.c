/*
 * FUN_10030335 at 10030335
 * undefined __fastcall FUN_10030335(int * param_1, char param_2, int param_3)
 * Address ranges: 10030335-10030375
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10030335(int *param_1,char param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = (param_2 == -1) - 1 & 3;
  *param_1 = uVar1 + 2;
  uVar1 = FUN_10048d34(4,0,0,uVar1 + 1,0,0,0);
  param_1[1] = uVar1;
  param_1[5] = param_3;
  param_1[4] = param_3;
  param_1[3] = param_3;
  param_1[2] = param_3;
  return;
}

