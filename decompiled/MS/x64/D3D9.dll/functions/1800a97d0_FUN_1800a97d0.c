/*
 * FUN_1800a97d0 at 1800a97d0
 * int * __fastcall FUN_1800a97d0(undefined8 param_1, int * param_2, float param_3, float param_4, float param_5, float param_6)
 * Address ranges: 1800a97d0-1800a9825
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1800a97d0(undefined8 param_1,int *param_2,float param_3,float param_4,float param_5,
                   float param_6)

{
  int iVar1;
  
  *param_2 = (int)param_3;
  param_2[1] = (int)param_4;
  iVar1 = (int)param_5;
  if (param_5 - (float)iVar1 != 0.0) {
    iVar1 = iVar1 + 1;
  }
  param_2[2] = iVar1;
  iVar1 = (int)param_6;
  if (param_6 - (float)iVar1 != 0.0) {
    iVar1 = iVar1 + 1;
  }
  param_2[3] = iVar1;
  return param_2;
}

