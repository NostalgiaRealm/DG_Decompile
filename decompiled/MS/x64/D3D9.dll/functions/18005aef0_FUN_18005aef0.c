/*
 * FUN_18005aef0 at 18005aef0
 * undefined8 __fastcall FUN_18005aef0(undefined8 param_1, int * param_2, int * param_3, char param_4, char param_5)
 * Address ranges: 18005aef0-18005af76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005aef0(undefined8 param_1,int *param_2,int *param_3,char param_4,char param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = -(uint)(param_4 != '\0');
  iVar4 = 0x3f800000;
  if (param_4 != '\0') {
    iVar4 = 0;
  }
  uVar2 = 0;
  iVar3 = 0x3f800000;
  if (param_5 != '\0') {
    iVar3 = 0;
  }
  if (((((iVar1 != *param_2) || (iVar1 != param_2[1])) || (iVar1 != param_2[2])) ||
      ((-(uint)(param_5 != '\0') != param_2[3] || (iVar4 != *param_3)))) ||
     ((iVar4 != param_3[1] || ((iVar4 != param_3[2] || (iVar3 != param_3[3])))))) {
    uVar2 = 1;
  }
  param_2[2] = iVar1;
  param_2[1] = iVar1;
  *param_2 = iVar1;
  param_2[3] = -(uint)(param_5 != '\0');
  param_3[3] = iVar3;
  param_3[2] = iVar4;
  param_3[1] = iVar4;
  *param_3 = iVar4;
  return uVar2;
}

