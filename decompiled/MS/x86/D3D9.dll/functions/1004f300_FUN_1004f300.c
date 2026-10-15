/*
 * FUN_1004f300 at 1004f300
 * undefined4 __stdcall FUN_1004f300(int * param_1, int * param_2, int * param_3, int * param_4)
 * Address ranges: 1004f300-1004f389
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f300(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  if (((((*param_3 != *param_1) || (param_3[1] != param_1[1])) || (param_3[2] != param_1[2])) ||
      ((param_3[3] != param_1[3] || (*param_4 != *param_2)))) ||
     ((param_4[1] != param_2[1] ||
      ((param_4[2] != param_2[2] || (uVar2 = 0, param_4[3] != param_2[3])))))) {
    uVar2 = 1;
  }
  *param_1 = *param_3;
  param_1[1] = param_3[1];
  iVar1 = param_3[2];
  param_1[2] = iVar1;
  param_1[3] = param_3[3];
  *param_2 = *param_4;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  param_2[3] = param_4[3];
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}

