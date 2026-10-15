/*
 * FUN_1005a680 at 1005a680
 * undefined FUN_1005a680(void)
 * Address ranges: 1005a680-1005ad8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1005a680(int param_1,int param_2,int param_3,uint param_4,uint *param_5,ulonglong param_6,
            undefined4 param_7,int param_8,undefined4 param_9,undefined4 param_10,uint param_11,
            undefined4 param_12,byte param_13,undefined4 param_14,byte param_15,undefined4 param_16,
            byte param_17,undefined4 param_18,byte param_19,undefined4 param_20,char param_21)

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
  code *pcVar12;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *pcVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  uint in_stack_fffffdb0;
  undefined4 *local_220;
  uint *local_21c;
  uint local_218 [2];
  ulonglong local_210;
  int iStack_208;
  uint uStack_204;
  longlong lStack_200;
  uint6 uStack_1f8;
  undefined1 local_1f2;
  bool local_1f1;
  undefined8 local_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_100 [192];
  
  uVar14 = param_6 & 0xffffffff;
  local_21c = param_5;
  local_218[0] = param_4;
  if (param_11 < 7) {
    FUN_100514e0(param_1);
    uVar4 = FUN_100519d0(param_1);
    uVar4 = uVar4 & 0xff & (uint)param_17;
  }
  else {
    uVar4 = (uint)param_17;
  }
  if ((((param_19 == 0) || (param_21 == '\0' && param_11 != 3)) && (*(int *)(param_1 + 0x2ac) == 0))
     && (*(int *)(param_3 + 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar1 = *(uint *)(param_1 + 0x210);
  uVar11 = 3;
  if (param_19 == 0 || !bVar2) {
    uVar11 = 1;
  }
  uVar11 = uVar1 & 0xfffffff9 | (uint)param_19 << 2 | uVar11;
  *(uint *)(param_1 + 0x210) = uVar11;
  *(byte *)(param_1 + 0x932) = uVar11 != uVar1 | *(byte *)(param_1 + 0x932);
  FUN_10051b20(param_1,0);
  FUN_10051d30(param_1);
  FUN_10051de0(param_1);
  FUN_10053c50(param_1);
  uVar6 = FUN_10059fa0(param_1,param_3,uVar4);
  if ((uVar6 & 1) == 0) {
LAB_1005a96c:
    if ((param_13 != 0) || (param_15 != 0)) {
      FUN_100969a0(&local_220);
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      if (*(char *)(param_3 + 0x14) == -1) {
        uVar11 = 0;
      }
      else {
        uVar11 = (int)param_6 + (uint)*(byte *)(param_3 + 0x17) * 4;
      }
      local_210 = (ulonglong)uVar11;
      if (*(char *)(param_3 + 0x1c) == -1) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)param_6 + (uint)*(byte *)(param_3 + 0x1f) * 4;
      }
      _iStack_208 = CONCAT44(*(uint *)(param_3 + 0xc),iVar10);
      lStack_200 = (ulonglong)*(uint *)(param_3 + 0xc) << 0x20;
      lStack_1e8 = (ulonglong)(param_1 + 0x1f0) << 0x20;
      _uStack_1f8 = CONCAT17(*(int *)(param_3 + 4) != 0,
                             CONCAT16(*(undefined1 *)(param_3 + 0x20),
                                      (uint6)CONCAT14(2,(uint)*(byte *)(param_3 + 0x1d))));
      uVar5 = param_9;
      if (param_8 == 0) {
        uVar5 = param_7;
      }
      local_1f0 = (ulonglong)CONCAT11(param_13,param_15);
      FUN_1000f710(param_1,&local_210,param_8,uVar5);
      FUN_10096a50(&local_220);
    }
    pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_220 = (undefined4 *)(param_1 + 0x14);
    uVar6 = (ulonglong)local_218[0];
    if (local_218[0] == 0) {
      uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      if (param_8 == 0) {
        auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                            (*local_220,*(undefined4 *)(&DAT_1009e700 + param_2 * 4));
        uVar7 = uVar7 & 0xffffffff;
        pcVar12 = extraout_w11_04;
        goto LAB_1005ab7c;
      }
      auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_03)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,param_3,uVar14,
                         uVar7 & 0xffffffff,param_7,param_8,param_9,0);
    }
    else if (param_8 == 0) {
      auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar7 = ZEXT48(local_21c);
      uVar14 = uVar6 & 0xffffffff;
      pcVar12 = extraout_w11_02;
LAB_1005ab7c:
      (*pcVar12)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,param_3,uVar14,uVar7,param_7,
                 uVar4);
    }
    else {
      auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,param_3,
                         uVar6 & 0xffffffff,param_8,local_21c,param_9,uVar4);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x17c) < 9) || (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0')) {
      FUN_10051f40(param_1,param_11,*(undefined1 *)(*(int *)(param_1 + 0xa58) + 0x21),param_3);
      goto LAB_1005a96c;
    }
    local_21c = (uint *)FUN_10007a00(param_1,param_3);
    local_220 = (undefined4 *)FUN_1005e090(param_1 + 0x16c,&local_21c);
    local_21c = local_220 + 3;
    cVar3 = FUN_10007700(param_1,param_7,*local_21c);
    pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar3 != '\0') {
      FUN_10007940(param_1,param_3,uVar14,auStack_100);
      FUN_100969a0(local_218);
      FUN_10007c20(param_1,auStack_100,*(uint *)(param_1 + 0x9b8),local_220,
                   (uint)param_15 << 1 | (uint)param_13 << 3 | uVar4 << 2 | 1,0,param_7,0,
                   in_stack_fffffdb0 & 0xffffff00);
      uVar14 = (ulonglong)*(uint *)(param_1 + 0x9b8);
      uVar6 = (ulonglong)*local_21c;
      if (param_8 == 0) {
        auVar15 = (*pcVar13)(*(undefined4 *)(param_1 + 0x14),
                             *(undefined4 *)(&DAT_1009e700 + param_2 * 4));
        (*extraout_w11_00)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,local_220,
                           uVar14 & 0xffffffff,uVar6 & 0xffffffff,param_7,0);
      }
      else {
        auVar15 = (*pcVar13)();
        (*extraout_w11)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,local_220,
                        uVar14 & 0xffffffff,uVar6 & 0xffffffff,param_7,param_8,param_9,0);
      }
      FUN_10096a50(local_218);
    }
  }
  if ((*(char *)(param_1 + 0x9d9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_1005ac8c;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = (*pcVar13)();
  (*extraout_w11_05)(uVar5);
  uVar5 = (*pcVar13)();
  (*extraout_w11_06)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
  if (bVar2) {
    uVar5 = (*pcVar13)();
    (*extraout_w11_07)(uVar5,*(undefined4 *)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf8));
    if (*(char *)(*(int *)(param_1 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_100a100c)();
    }
  }
LAB_1005ac8c:
  if (*(char *)(param_1 + 0xfe) == '\0') {
    uVar5 = (*pcVar13)();
    (*extraout_w11_08)(uVar5);
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar5 = (*pcVar13)();
      (*extraout_w11_09)(uVar5);
    }
    *(char *)(param_1 + 0xfe) = '\x01';
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      puVar8 = (undefined4 *)(param_1 + 0xf8);
      puVar9 = (undefined4 *)(param_1 + 0xf4);
      uVar5 = (*pcVar13)();
      (*extraout_w11_10)(uVar5,*puVar9,*puVar8,1);
    }
    *(char *)(param_1 + 0xff) = '\0';
  }
  return 0;
}

