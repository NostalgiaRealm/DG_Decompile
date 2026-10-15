/*
 * FUN_1001fa92 at 1001fa92
 * int * __stdcall FUN_1001fa92(int * param_1, float param_2, float param_3)
 * Address ranges: 1001fa92-1001faf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1001fa92(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float in_XMM2_Da;
  float in_XMM3_Da;
  
  iVar2 = (int)param_2;
  *param_1 = (int)in_XMM2_Da;
  param_1[1] = (int)in_XMM3_Da;
  iVar1 = (int)param_3;
  if (param_2 - (float)iVar2 != 0.0) {
    iVar2 = iVar2 + 1;
  }
  param_1[2] = iVar2;
  if (param_3 - (float)iVar1 != 0.0) {
    iVar1 = iVar1 + 1;
  }
  param_1[3] = iVar1;
  return param_1;
}

