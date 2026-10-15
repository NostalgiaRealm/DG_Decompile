/*
 * FUN_180215f70 at 180215f70
 * undefined FUN_180215f70(void)
 * Address ranges: 180215f70-18021641f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180215f70(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  code *extraout_x11_10;
  code *extraout_x11_11;
  code *extraout_x11_12;
  code *extraout_x11_13;
  code *extraout_x11_14;
  code *extraout_x11_15;
  code *extraout_x11_16;
  uint uVar10;
  longlong lVar11;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 auStack_170 [256];
  undefined4 local_70;
  int local_48;
  int local_44;
  
  param_2 = param_2 & 0xffffffff;
  lVar1 = param_1 + param_2 * 0x28;
  iVar5 = *(int *)(lVar1 + 0x28);
  *(int *)(lVar1 + 0x28) = iVar5 + 1;
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if (iVar5 != 0) {
    return 1;
  }
  lVar2 = param_1 + param_2 * 0x20;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar5 = (*extraout_x11)(*(undefined8 *)(lVar1 + 0x18),param_3,&DAT_180239290,lVar2 + 0x6d0);
  if (iVar5 < 0) goto LAB_18021640c;
  lVar11 = param_1 + param_2 * 0x1ac0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_00)(uVar7,&DAT_180229398,lVar2 + 0x6d8);
  *(undefined1 *)(lVar2 + 0x6ed) = 0;
  local_200 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_01)(uVar7,&DAT_180229388,&local_200);
  local_208 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  iVar5 = (*extraout_x11_02)(uVar7,&DAT_1802392a0,&local_208);
  if (-1 < iVar5) {
    uVar7 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_03)(uVar7,auStack_170);
    uVar7 = (*(code *)puVar3)(0x180224000);
    (*extraout_x11_04)(uVar7,&local_210);
    if ((int)local_210 == local_48) {
      uVar9 = 1;
      if (local_210._4_4_ != local_44) goto LAB_1802160d8;
    }
    else {
LAB_1802160d8:
      uVar9 = 0;
    }
    *(undefined1 *)(lVar2 + 0x6ed) = uVar9;
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_05)();
  }
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_06)();
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_07)();
  uStack_1d8 = 0;
  local_1e0 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_08)(uVar7,1,&local_1e0,0x10);
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  local_180 = 0;
  local_178 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_09)(uVar7,0,&local_1b0,0x3c);
  local_1e8 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_10)(uVar7,0x12,&local_1e8,8);
  uStack_1c8 = 0;
  local_1d0 = 0;
  local_1c0 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  (*extraout_x11_11)(uVar7,0x15,&local_1d0,0x14);
  local_1f0 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  iVar5 = (*extraout_x11_12)(uVar7,0x2c,&local_1f0,8);
  if (iVar5 < 0) {
    local_1f0 = 0;
  }
  local_1f8 = 0;
  uVar7 = (*(code *)puVar3)(0x180224000);
  iVar6 = (*extraout_x11_13)(uVar7,0x2d,&local_1f8,8);
  iVar5 = 0;
  if (-1 < iVar6) {
    iVar5 = local_1f8._4_4_;
  }
  local_1f8 = CONCAT44(iVar5,(undefined4)local_1f8);
  if (((int)uStack_1d8 == 0) || (uStack_1d8._4_4_ == 0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  *(undefined1 *)(lVar2 + 0x6e8) = uVar9;
  *(bool *)(lVar2 + 0x6e9) = uStack_1a0._4_4_ != 0;
  *(bool *)(lVar2 + 0x6ea) = 0 < local_1e8._4_4_;
  *(bool *)(lVar2 + 0x6eb) = 0xbfff < param_3 && (int)local_1f0 != 0;
  *(undefined4 *)(lVar2 + 0x6e4) = (undefined4)uStack_1c8;
  *(bool *)(lVar2 + 0x6ec) = iVar5 != 0;
  uVar8 = FUN_180221bc0(lVar11 + 0x1bc0,0x10,0x100);
  if ((uVar8 & 1) != 0) {
    uVar8 = FUN_1802157c0(param_1,param_2);
    if ((uVar8 & 1) != 0) {
      if ((*(longlong *)(param_1 + 0x2d8) == 0) ||
         (uVar8 = FUN_180215108(FUN_180215228), (uVar8 & 1) == 0)) {
        *(undefined8 *)(lVar1 + 0x30) = 0;
      }
      uVar7 = (*(code *)puVar3)(0x180224000);
      (*extraout_x11_14)(uVar7,auStack_170);
      *(int *)(lVar11 + 0x900) = param_3;
      *(undefined4 *)(lVar11 + 0x904) = local_70;
      cVar4 = '\x01';
      uVar10 = 0;
      local_210 = lVar11;
      if (*(int *)(param_1 + 0x6c8) == 0) {
        return 1;
      }
      do {
        if (cVar4 == '\0') goto LAB_1802163c8;
        uVar7 = (*(code *)puVar3)();
        cVar4 = (*extraout_x11_15)(uVar7,param_2);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_1 + 0x6c8));
      if (cVar4 != '\0') {
        return 1;
      }
LAB_1802163c8:
      lVar11 = local_210;
      FUN_180215c98(param_1,param_2);
      FUN_180215e50(param_1,param_2);
    }
    FUN_180221760(lVar11 + 0x1bc0);
  }
  (*(code *)puVar3)(0x180224000);
  (*extraout_x11_16)();
  *(undefined8 *)(lVar2 + 0x6d0) = 0;
LAB_18021640c:
  *(int *)(lVar1 + 0x28) = *(int *)(lVar1 + 0x28) + -1;
  return 0;
}

