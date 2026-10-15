/*
 * FUN_1002ffec at 1002ffec
 * undefined __fastcall FUN_1002ffec(int * param_1, int param_2, char param_3)
 * Address ranges: 1002ffec-1003002e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ffec(int *param_1,int param_2,char param_3)

{
  uint uVar1;
  
  uVar1 = (param_3 == -1) - 1 & 3;
  *param_1 = uVar1 + 2;
  uVar1 = FUN_100489a4(4,0,0,uVar1 + 1,0,0,0);
  param_1[5] = param_2;
  param_1[4] = param_2;
  param_1[3] = param_2;
  param_1[2] = param_2;
  param_1[1] = uVar1;
  return;
}

