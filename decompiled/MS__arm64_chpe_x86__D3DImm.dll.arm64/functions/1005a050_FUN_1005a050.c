/*
 * FUN_1005a050 at 1005a050
 * undefined FUN_1005a050(void)
 * Address ranges: 1005a050-1005a677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1005a050(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            undefined4 param_7,uint param_8,byte param_9,undefined4 param_10,byte param_11,
            undefined4 param_12,byte param_13)

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
  uint uVar10;
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
  uint uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  uint in_stack_fffffda0;
  uint local_230;
  undefined4 local_22c;
  uint *local_228;
  int local_224;
  uint local_220;
  undefined1 auStack_21c [12];
  ulonglong local_210;
  longlong lStack_208;
  undefined8 uStack_200;
  undefined7 uStack_1f8;
  bool local_1f1;
  undefined8 local_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_100 [192];
  
  local_230 = param_8;
  local_22c = param_7;
  local_224 = param_2;
  FUN_100514e0(param_1);
  uVar4 = FUN_100519d0(param_1);
  local_220 = (uint)param_13;
  uVar4 = uVar4 & 0xff & (uint)param_11;
  if (((local_220 == 0 || param_8 < 3) && (*(int *)(param_1 + 0x2ac) == 0)) &&
     (*(int *)(param_3 + 4) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar11 = (uint)param_13;
  uVar1 = *(uint *)(param_1 + 0x210);
  uVar10 = 3;
  if (uVar11 == 0 || !bVar2) {
    uVar10 = 1;
  }
  uVar10 = uVar1 & 0xfffffff9 | uVar11 << 2 | uVar10;
  *(uint *)(param_1 + 0x210) = uVar10;
  *(byte *)(param_1 + 0x932) = uVar10 != uVar1 | *(byte *)(param_1 + 0x932);
  FUN_10051b20(param_1,local_230 == 2);
  FUN_10051d30(param_1);
  FUN_10051de0(param_1);
  uVar6 = FUN_10059fa0(param_1,param_3,uVar4);
  if ((uVar6 & 1) == 0) {
LAB_1005a31c:
    if ((param_9 != 0) || (uVar11 != 0)) {
      FUN_100969a0(&local_228);
      uStack_200 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      if (*(char *)(param_3 + 0x14) == -1) {
        uVar10 = 0;
      }
      else {
        uVar10 = param_4 + (uint)*(byte *)(param_3 + 0x17) * 4;
      }
      local_210 = (ulonglong)uVar10;
      lStack_208 = (ulonglong)*(uint *)(param_3 + 0xc) << 0x20;
      lStack_1e8 = (ulonglong)(param_1 + 0x1f0) << 0x20;
      _uStack_1f8 = CONCAT17(*(int *)(param_3 + 4) != 0,0x200000000);
      uVar5 = local_22c;
      if (param_6 == 0) {
        uVar5 = param_5;
      }
      local_1f0 = (ulonglong)CONCAT11(param_9,param_13);
      FUN_1000f710(param_1,&local_210,param_6,uVar5);
      FUN_10096a50(&local_228);
    }
    pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar6 = (ulonglong)*(uint *)(param_3 + 0xc);
    if (param_6 == 0) {
      auVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                          (*(undefined4 *)(param_1 + 0x14),
                           *(undefined4 *)(&DAT_1009e700 + local_224 * 4));
      (*extraout_w11_02)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,param_3,param_4,
                         uVar6 & 0xffffffff,param_5,uVar4);
    }
    else {
      auVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,param_3,param_4,
                         uVar6 & 0xffffffff,param_5,param_6,local_22c,0);
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x17c) < 9) || (*(char *)(*(int *)(param_1 + 0xa58) + 0x20) == '\0')) {
      FUN_10051f40(param_1,local_230,*(undefined1 *)(*(int *)(param_1 + 0xa58) + 0x21),param_3);
      goto LAB_1005a31c;
    }
    local_230 = FUN_10007a00(param_1,param_3);
    local_230 = FUN_1005e090(param_1 + 0x16c,&local_230);
    local_228 = (uint *)(local_230 + 0xc);
    cVar3 = FUN_10007700(param_1,param_5,*local_228);
    pcVar12 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (cVar3 != '\0') {
      FUN_10007940(param_1,param_3,param_4,auStack_100);
      FUN_100969a0(auStack_21c);
      FUN_10007c20(param_1,auStack_100,*(uint *)(param_1 + 0x9b8),local_230,
                   (uint)param_9 << 3 | uVar4 << 2 | local_220 << 1 | 1,0,param_5,0,
                   in_stack_fffffda0 & 0xffffff00);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x9b8);
      uVar7 = (ulonglong)*local_228;
      if (param_6 == 0) {
        auVar13 = (*pcVar12)(*(undefined4 *)(param_1 + 0x14),
                             *(undefined4 *)(&DAT_1009e700 + local_224 * 4));
        (*extraout_w11_00)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,local_230,
                           uVar6 & 0xffffffff,uVar7 & 0xffffffff,param_5,0);
      }
      else {
        auVar13 = (*pcVar12)();
        (*extraout_w11)(auVar13._0_8_ & 0xffffffff,auVar13._8_8_ & 0xffffffff,local_230,
                        uVar6 & 0xffffffff,uVar7 & 0xffffffff,param_5,param_6,local_22c,0);
      }
      FUN_10096a50(auStack_21c);
    }
  }
  if ((*(char *)(param_1 + 0x9d9) == '\0') && (*(char *)(*(int *)(param_1 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_1 + 0xfd) == '\0') goto LAB_1005a574;
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
LAB_1005a574:
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

