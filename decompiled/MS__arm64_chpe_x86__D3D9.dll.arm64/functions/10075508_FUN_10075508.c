/*
 * FUN_10075508 at 10075508
 * undefined FUN_10075508(void)
 * Address ranges: 10075508-10075613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10075508(undefined8 param_1,int *param_2,int *param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = -1;
  iVar1 = iVar5;
  if (param_4 == '\0') {
    iVar1 = 0;
  }
  iVar2 = 0;
  if (param_4 == '\0') {
    iVar2 = 0x3f800000;
  }
  if (param_5 == '\0') {
    iVar5 = 0;
  }
  iVar3 = 0;
  if (param_5 == '\0') {
    iVar3 = 0x3f800000;
  }
  if (((((iVar1 == *param_2) && (iVar1 == param_2[1])) && (iVar1 == param_2[2])) &&
      ((iVar5 == param_2[3] && (iVar2 == *param_3)))) &&
     ((iVar2 == param_3[1] && ((iVar2 == param_3[2] && (iVar3 == param_3[3])))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  param_2[2] = iVar1;
  param_2[1] = iVar1;
  *param_2 = iVar1;
  param_2[3] = iVar5;
  param_3[2] = iVar2;
  param_3[1] = iVar2;
  *param_3 = iVar2;
  param_3[3] = iVar3;
  return uVar4;
}

