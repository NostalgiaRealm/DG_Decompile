/*
 * FUN_10011750 at 10011750
 * undefined FUN_10011750(void)
 * Address ranges: 10011750-10011a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10011750(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10
            ,undefined4 param_11)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined1 auVar8 [16];
  
  FUN_1000b140(param_1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = *(int *)(&DAT_10160958 + param_3 * 4);
  uVar4 = (ulonglong)(uint)param_2[2];
  if (param_2[2] == 0) {
    FUN_10011068(param_1,param_2,iVar6,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  else {
    iVar6 = *(int *)(&DAT_10160924 + iVar6 * 8) + *(int *)(&DAT_10160920 + iVar6 * 8) * param_6;
    auVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar8._0_8_ & 0xffffffff,auVar8._8_8_ & 0xffffffff,*param_2,uVar4 & 0xffffffff,
                    param_9,param_11,param_5,param_7,iVar6);
  }
  if ((*(char *)(param_1 + 0xd8d) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0x2a1) == '\0') goto LAB_10011968;
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  uVar3 = (*pcVar2)();
  (*extraout_w11_01)(uVar3,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
  if (bVar1) {
    uVar3 = (*pcVar2)();
    (*extraout_w11_02)(uVar3,*(undefined4 *)(param_1 + 0x298),*(undefined4 *)(param_1 + 0x29c));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_1016c068)();
    }
  }
LAB_10011968:
  if (*(char *)(param_1 + 0x2a2) == '\0') {
    uVar3 = (*pcVar2)();
    (*extraout_w11_03)(uVar3);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11_04)(uVar3);
    }
    *(char *)(param_1 + 0x2a2) = '\x01';
  }
  if (*(char *)(param_1 + 0x2a3) != '\0') {
    if (*(int *)(param_1 + 0x498) != 0) {
      puVar5 = (undefined4 *)(param_1 + 0x29c);
      puVar7 = (undefined4 *)(param_1 + 0x298);
      uVar3 = (*pcVar2)();
      (*extraout_w11_05)(uVar3,*puVar7,*puVar5,1);
    }
    *(char *)(param_1 + 0x2a3) = '\0';
  }
  FUN_1000bc00(param_1,1);
  return 0;
}

