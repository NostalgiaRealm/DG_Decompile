/*
 * FUN_1004a560 at 1004a560
 * undefined FUN_1004a560(void)
 * Address ranges: 1004a560-1004a6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004a560(undefined8 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *param_2 + -0x88;
  }
  iVar2 = 0;
  if (param_2[1] != 0) {
    iVar2 = param_2[1] + -0x88;
  }
  iVar3 = 0;
  if (param_2[2] != 0) {
    iVar3 = param_2[2] + -0x88;
  }
  iVar4 = 0;
  if (param_2[3] != 0) {
    iVar4 = param_2[3] + -0x88;
  }
  iVar5 = 0;
  if (param_3 != 0) {
    iVar5 = param_3 + -0x88;
  }
  if (iVar1 == 0) {
LAB_1004a608:
    if (iVar2 != 0) {
      (*pcVar6)();
      cVar7 = (*extraout_w11_00)(iVar2);
      if (cVar7 == '\0') goto LAB_1004a6c8;
    }
    if (iVar3 != 0) {
      (*pcVar6)();
      cVar7 = (*extraout_w11_01)(iVar3);
      if (cVar7 == '\0') goto LAB_1004a6c8;
    }
    if (iVar4 != 0) {
      (*pcVar6)();
      cVar7 = (*extraout_w11_02)(iVar4);
      if (cVar7 == '\0') goto LAB_1004a6c8;
    }
    if (iVar5 != 0) {
      (*pcVar6)();
      cVar7 = (*extraout_w11_03)(iVar5);
      if (cVar7 == '\0') goto LAB_1004a6c8;
    }
    uVar9 = 1;
  }
  else {
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    cVar7 = (*extraout_w11)(uVar8);
    if (cVar7 != '\0') goto LAB_1004a608;
LAB_1004a6c8:
    uVar9 = 0;
  }
  return uVar9;
}

