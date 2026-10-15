/*
 * FUN_1004f270 at 1004f270
 * undefined4 __stdcall FUN_1004f270(int * param_1, int * param_2, char param_3, char param_4)
 * Address ranges: 1004f270-1004f2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f270(int *param_1,int *param_2,char param_3,char param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = -(uint)(param_3 != '\0');
  iVar4 = 0x3f800000;
  if (param_3 != '\0') {
    iVar4 = 0;
  }
  iVar3 = 0x3f800000;
  if (param_4 != '\0') {
    iVar3 = 0;
  }
  if (((((iVar1 != *param_1) || (iVar1 != param_1[1])) || (iVar1 != param_1[2])) ||
      ((-(uint)(param_4 != '\0') != param_1[3] || (iVar4 != *param_2)))) ||
     ((iVar4 != param_2[1] || ((iVar4 != param_2[2] || (uVar2 = 0, iVar3 != param_2[3])))))) {
    uVar2 = 1;
  }
  param_1[3] = -(uint)(param_4 != '\0');
  param_1[2] = iVar1;
  param_1[1] = iVar1;
  *param_1 = iVar1;
  param_2[2] = iVar4;
  param_2[1] = iVar4;
  *param_2 = iVar4;
  param_2[3] = iVar3;
  return CONCAT31((int3)((uint)iVar3 >> 8),uVar2);
}

