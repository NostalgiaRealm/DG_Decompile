/*
 * FUN_10066880 at 10066880
 * undefined FUN_10066880(void)
 * Address ranges: 10066880-10066b63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10066880(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  undefined8 uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *param_2 + -0xc0;
  }
  iVar2 = 0;
  if (param_2[1] != 0) {
    iVar2 = param_2[1] + -0xc0;
  }
  iVar3 = 0;
  if (param_2[2] != 0) {
    iVar3 = param_2[2] + -0xc0;
  }
  iVar4 = 0;
  if (param_2[3] != 0) {
    iVar4 = param_2[3] + -0xc0;
  }
  if (param_3 == 0) {
    param_3 = 0;
LAB_10066940:
    bVar6 = 1;
  }
  else {
    param_3 = param_3 + -0xc0;
    if (param_3 == 0) goto LAB_10066940;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    bVar6 = (*extraout_w11)(param_3);
  }
  if (iVar1 == 0) {
    bVar7 = 1;
  }
  else {
    (*pcVar5)();
    bVar7 = (*extraout_w11_00)(iVar1);
  }
  if (iVar2 == 0) {
    bVar8 = 1;
  }
  else {
    (*pcVar5)();
    bVar8 = (*extraout_w11_01)(iVar2);
  }
  if (iVar3 == 0) {
    bVar9 = 1;
  }
  else {
    (*pcVar5)();
    bVar9 = (*extraout_w11_02)(iVar3);
  }
  if (iVar4 == 0) {
    bVar10 = 1;
  }
  else {
    (*pcVar5)();
    bVar10 = (*extraout_w11_03)(iVar4);
  }
  if ((bVar7 & bVar6 & bVar8 & bVar9 & bVar10) != 0) {
    return 1;
  }
  FUN_10130fb8(*(int *)(param_1 + 0xf6b8) + 0x11c0);
  if (iVar1 == 0) {
LAB_10066a70:
    if (iVar2 != 0) {
      (*pcVar5)();
      cVar11 = (*extraout_w11_05)(iVar2);
      if (cVar11 == '\0') goto LAB_10066b30;
    }
    if (iVar3 != 0) {
      (*pcVar5)();
      cVar11 = (*extraout_w11_06)(iVar3);
      if (cVar11 == '\0') goto LAB_10066b30;
    }
    if (iVar4 != 0) {
      (*pcVar5)();
      cVar11 = (*extraout_w11_07)(iVar4);
      if (cVar11 == '\0') goto LAB_10066b30;
    }
    if (param_3 != 0) {
      (*pcVar5)();
      cVar11 = (*extraout_w11_08)(param_3);
      if (cVar11 == '\0') goto LAB_10066b30;
    }
    uVar12 = 1;
  }
  else {
    (*pcVar5)();
    cVar11 = (*extraout_w11_04)(iVar1);
    if (cVar11 != '\0') goto LAB_10066a70;
LAB_10066b30:
    uVar12 = 0;
  }
  return uVar12;
}

