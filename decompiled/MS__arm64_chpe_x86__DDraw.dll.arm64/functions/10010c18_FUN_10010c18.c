/*
 * FUN_10010c18 at 10010c18
 * undefined FUN_10010c18(void)
 * Address ranges: 10010c18-10010ea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10010c18(int *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,int param_8,int param_9,
                 undefined4 param_10,int param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                 undefined4 param_22,undefined1 param_23,undefined4 param_24,char param_25)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  ulonglong local_a4;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  int local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  uStack_b4 = (undefined4)param_3;
  local_a4 = (ulonglong)param_6;
  uStack_9c = param_13;
  local_98 = param_15;
  uStack_94 = param_17;
  local_90 = param_19;
  local_b8 = param_2;
  local_b0 = param_4;
  uStack_ac = param_5;
  local_a8 = param_7;
  FUN_10010b98(param_1,auStack_58,param_3,param_5,param_8,param_15,param_23,
               param_6 != 1 && param_25 != '\0');
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_80 = 0;
  local_7c = 0;
  cVar6 = '\0';
  local_68 = 0;
  uStack_60 = 0;
  piVar1 = param_1 + 4;
  uStack_84 = 5;
  if (extraout_w11 != 1) {
    uStack_84 = 6;
  }
  local_88 = param_9;
  uStack_6c = 5;
  if (extraout_w11 == 1) {
    uStack_6c = 3;
  }
  local_70 = param_11;
  uVar8 = *(undefined4 *)param_1[2];
  if (extraout_w11 != 1) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar7 = (*extraout_w11_00)(uVar8,&local_b8,0,piVar1);
    if (iVar7 < 0) goto LAB_10010e20;
  }
  local_a4 = 1;
  uVar9 = ZEXT48(param_1 + 3);
  (*pcVar5)();
  iVar7 = (*extraout_w11_01)(uVar8,&local_b8,param_21,uVar9 & 0xffffffff);
  if (-1 < iVar7) {
    piVar2 = &local_70;
    if (param_11 == 0) {
      piVar2 = (int *)0x0;
    }
    piVar3 = &local_88;
    if (param_9 == 0) {
      piVar3 = (int *)0x0;
    }
    puVar4 = auStack_58;
    if (param_8 == 0) {
      puVar4 = (undefined1 *)0x0;
    }
    cVar6 = FUN_10010838(param_1,puVar4,piVar3,piVar2,param_4,param_5,param_25);
    if (cVar6 != '\0') goto LAB_10010e20;
    uVar8 = (*pcVar5)();
    (*extraout_w11_02)(uVar8);
    param_1[3] = 0;
  }
  if (*piVar1 != 0) {
    uVar8 = (*pcVar5)();
    (*extraout_w11_03)(uVar8);
    *piVar1 = 0;
  }
LAB_10010e20:
  if (*piVar1 == 0) {
    iVar7 = param_1[3];
    if (iVar7 != 0) {
      param_1[3] = *(int *)(*param_1 + param_1[1] * 0x28 + 0x30) + iVar7;
    }
  }
  else {
    *piVar1 = *(int *)(*param_1 + param_1[1] * 0x28 + 0x30) + *piVar1;
  }
  return cVar6;
}

