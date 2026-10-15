/*
 * FUN_100100e0 at 100100e0
 * undefined FUN_100100e0(void)
 * Address ranges: 100100e0-100103cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100100e0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined1 auVar7 [16];
  
  FUN_1000a2d0(param_1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (ulonglong)(uint)param_2[2];
  if (param_2[2] == 0) {
    FUN_1000fcf8(param_1,param_2,*(undefined4 *)(&DAT_1012b098 + param_3 * 4),0,0,param_4,0,0,
                 param_5);
  }
  else {
    auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,*param_2,uVar4 & 0xffffffff,
                    param_5,param_6);
  }
  FUN_1000aba0(param_1,0);
  if ((*(char *)(param_1 + 0xac9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_100102d4;
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = (*pcVar2)();
  (*extraout_w11_00)(uVar3);
  uVar3 = (*pcVar2)();
  (*extraout_w11_01)(uVar3,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  if (bVar1) {
    uVar3 = (*pcVar2)();
    (*extraout_w11_02)(uVar3,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_10134064)();
    }
  }
LAB_100102d4:
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar3 = (*pcVar2)();
    (*extraout_w11_03)(uVar3);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar3 = (*pcVar2)();
      (*extraout_w11_04)(uVar3);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f4) != 0) {
      puVar5 = (undefined4 *)(param_1 + 0xf8);
      puVar6 = (undefined4 *)(param_1 + 0xf4);
      uVar3 = (*pcVar2)();
      (*extraout_w11_05)(uVar3,*puVar6,*puVar5,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
  return 0;
}

