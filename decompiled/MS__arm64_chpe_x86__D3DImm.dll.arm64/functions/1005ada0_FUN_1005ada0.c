/*
 * FUN_1005ada0 at 1005ada0
 * undefined FUN_1005ada0(void)
 * Address ranges: 1005ada0-1005b41f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1005ada0(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,int param_6,
            undefined4 param_7,uint param_8,byte param_9,undefined4 param_10,byte param_11,
            undefined4 param_12,byte param_13,undefined4 param_14,byte param_15)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
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
  code *pcVar12;
  undefined1 auVar13 [16];
  uint in_stack_fffffd30;
  int local_2a0;
  undefined4 local_29c;
  uint *local_298;
  int local_294;
  undefined1 auStack_290 [16];
  ulonglong local_280;
  int iStack_278;
  int iStack_274;
  longlong lStack_270;
  uint6 uStack_268;
  undefined1 local_262;
  bool local_261;
  undefined8 local_260;
  longlong lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_170 [120];
  undefined1 auStack_f8 [184];
  
  local_29c = param_7;
  local_294 = param_2;
  if (param_8 < 7) {
    FUN_100514e0(param_1);
    uVar4 = FUN_100519d0(param_1);
    uVar4 = uVar4 & 0xff & (uint)param_13;
  }
  else {
    uVar4 = (uint)param_13;
  }
  if (((param_15 == 0 || param_8 < 3) && (*(int *)(param_1 + 0x2ac) == 0)) &&
     (*(int *)(param_3 + 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar1 = *(uint *)(param_1 + 0x210);
  uVar11 = 3;
  if (param_15 == 0 || !bVar2) {
    uVar11 = 1;
  }
  uVar11 = uVar1 & 0xfffffff9 | (uint)param_15 << 2 | uVar11;
  *(uint *)(param_1 + 0x210) = uVar11;
  *(byte *)(param_1 + 0x932) = uVar11 != uVar1 | *(byte *)(param_1 + 0x932);
  FUN_10051b20(param_1,0);
  FUN_10051d30(param_1);
  FUN_10051de0(param_1);
  FUN_10053c50(param_1);
  uVar6 = FUN_10059fa0(param_1,param_3,uVar4);
  if ((uVar6 & 1) == 0) {
LAB_1005b074:
    if ((param_9 != 0) || (param_11 != 0)) {
      FUN_100969a0(&local_298);
      uStack_248 = 0;
      uStack_250 = 0;
      if (*(char *)(param_3 + 0x14) == -1) {
        uVar11 = 0;
      }
      else {
        uVar11 = *param_4 + (uint)*(byte *)(param_3 + 0x17) * 4;
      }
      local_280 = (ulonglong)uVar11;
      if (*(char *)(param_3 + 0x1c) == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = *param_4 + (uint)*(byte *)(param_3 + 0x1f) * 4;
      }
      _iStack_278 = CONCAT44(param_4[1],iVar10);
      local_260 = (ulonglong)CONCAT11(param_9,param_11);
      lStack_270 = (ulonglong)*(uint *)(param_3 + 0xc) << 0x20;
      lStack_258 = (ulonglong)(param_1 + 0x1f0) << 0x20;
      uVar5 = local_29c;
      if (param_6 == 0) {
        uVar5 = param_5;
      }
      _uStack_268 = CONCAT17(*(int *)(param_3 + 4) != 0,
                             CONCAT16(*(undefined1 *)(param_3 + 0x20),
                                      (uint6)CONCAT14(2,(uint)*(byte *)(param_3 + 0x1d))));
      FUN_1000f710(param_1,&local_280,param_6,uVar5);
      FUN_10096a50(&local_298);
    }
    FUN_10059e50(param_1,param_3,param_4,auStack_170);
    pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (param_6 == 0) {
      auVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                          (*(undefined4 *)(param_1 + 0x14),
                           *(undefined4 *)(&DAT_1009e700 + local_294 * 4));
      (*extraout_w11_02)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,param_3,auStack_170,
                         param_5,uVar4);
    }
    else {
      auVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,param_3,auStack_170,
                         param_5,param_6,local_29c,0,in_stack_fffffd30 & 0xffffff00);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x17c) < 9) || (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0')) {
      FUN_10051f40(param_1,param_8,*(undefined1 *)(*(int *)(param_1 + 0xa58) + 0x21),param_3);
      goto LAB_1005b074;
    }
    local_2a0 = FUN_10007a00(param_1,param_3);
    local_2a0 = FUN_1005e090(param_1 + 0x16c,&local_2a0);
    local_298 = (uint *)(local_2a0 + 0xc);
    cVar3 = FUN_10007700(param_1,param_5,*local_298);
    pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar3 != '\0') {
      FUN_10059ee0(param_1,param_3,param_4,auStack_f8);
      FUN_100969a0(auStack_290);
      FUN_10007c20(param_1,auStack_f8,*(uint *)(param_1 + 0x9b8),local_2a0,
                   (uint)param_11 << 1 | (uint)param_9 << 3 | uVar4 << 2 | 1,0,param_5,0,
                   in_stack_fffffd30 & 0xffffff00);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x9b8);
      uVar7 = (ulonglong)*local_298;
      if (param_6 == 0) {
        auVar13 = (*pcVar12)(*(undefined4 *)(param_1 + 0x14),
                             *(undefined4 *)(&DAT_1009e700 + local_294 * 4));
        (*extraout_w11_00)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,local_2a0,
                           uVar6 & 0xffffffff,uVar7 & 0xffffffff,param_5,0);
      }
      else {
        auVar13 = (*pcVar12)();
        (*extraout_w11)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,local_2a0,
                        uVar6 & 0xffffffff,uVar7 & 0xffffffff,param_5,param_6,local_29c,0);
      }
      FUN_10096a50(auStack_290);
    }
  }
  if ((*(char *)(param_1 + 0x9d9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_1005b320;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = (*pcVar12)();
  (*extraout_w11_03)(uVar5);
  uVar5 = (*pcVar12)();
  (*extraout_w11_04)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  if (bVar2) {
    uVar5 = (*pcVar12)();
    (*extraout_w11_05)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_100a100c)();
    }
  }
LAB_1005b320:
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar5 = (*pcVar12)();
    (*extraout_w11_06)(uVar5);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar5 = (*pcVar12)();
      (*extraout_w11_07)(uVar5);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      puVar8 = (undefined4 *)(param_1 + 0xf8);
      puVar9 = (undefined4 *)(param_1 + 0xf4);
      uVar5 = (*pcVar12)();
      (*extraout_w11_08)(uVar5,*puVar9,*puVar8,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
  return 0;
}

