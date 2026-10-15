/*
 * FUN_1802022d0 at 1802022d0
 * undefined FUN_1802022d0(void)
 * Address ranges: 1802022d0-180202727
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802022d0(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
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
  undefined4 uVar8;
  int iVar9;
  undefined8 local_260;
  int local_258;
  int iStack_254;
  int local_250;
  int iStack_24c;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  uint local_230;
  undefined8 local_228;
  int local_220;
  int iStack_21c;
  int local_210;
  int iStack_20c;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  int local_1d0;
  int iStack_1cc;
  undefined8 uStack_1c8;
  ulonglong local_1c0;
  undefined4 local_1b8;
  undefined1 auStack_180 [88];
  undefined8 local_128;
  undefined1 auStack_120 [68];
  undefined4 local_dc;
  int local_74;
  int iStack_70;
  undefined4 local_68;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_230 = param_4 & 0xff;
  local_228 = param_3;
  uVar6 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar6,&local_1d0);
  uStack_208 = uStack_1c8;
  uStack_248 = uStack_1c8;
  if ((*(int *)((longlong)param_2 + 0x3c) == 1) ||
     ((*(int *)((longlong)param_2 + 0x3c) - 2U < 2 && (*(int *)(param_2 + 6) - 1U < 2)))) {
    local_260 = local_228;
    if (local_228 == 0) {
      uVar6 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)(uVar6,&local_260);
    }
    lVar2 = local_260;
    if (local_260 != 0) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_01)(lVar2);
    }
    local_dc = 0xdc;
    if (lVar2 == 0) {
      thunk_FUN_180223fe0(0,0xffffffff,auStack_120);
    }
    else {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_02)(lVar2,auStack_180);
      thunk_FUN_180223fe0(auStack_180,0xffffffff,auStack_120);
      uStack_23c = 1;
      local_238 = 0;
      uStack_248 = CONCAT44(1,local_68);
      local_240 = *(undefined4 *)(&DAT_180238818 + (ulonglong)*(uint *)(param_1 + 0x678) * 4);
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_03)(lVar2,&local_250,&local_200,0);
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_04)(lVar2);
    }
    if ((*(int *)(param_1 + 0x668) == 0) ||
       (iVar5 = *(int *)(param_1 + 0x668), iVar9 = *(int *)(param_1 + 0x66c),
       *(int *)(param_1 + 0x66c) == 0)) {
      iVar5 = local_74;
      iVar9 = iStack_70;
    }
    uVar8 = 0;
    uStack_248 = uStack_208;
    local_210 = iVar5;
    iStack_20c = iVar9;
    local_250 = iVar5;
    iStack_24c = iVar9;
    if (local_260 != local_228) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_05)();
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 3);
    iVar9 = *(int *)((longlong)param_2 + 0x1c);
    uVar8 = local_1b8;
    local_210 = iVar5;
    iStack_20c = iVar9;
    local_250 = iVar5;
    iStack_24c = iVar9;
  }
  iVar4 = iStack_20c;
  iVar3 = local_210;
  if ((local_1d0 != iVar5) || (iStack_1cc != iVar9 || local_230 != 0)) {
    (*(code *)puVar1)(0x180224000);
    uVar6 = (*extraout_x11_06)(param_1,param_2);
    uVar7 = FUN_180202238(uVar6,param_2);
    if ((uVar7 & 1) == 0) {
      thunk_FUN_180224044(*param_2,&local_228);
      thunk_FUN_180223be4(*param_2,&local_260);
      thunk_FUN_180224030(*param_2,0,0,0,
                          ((local_220 - (int)local_228) - local_258) + (int)local_260 + iVar3,
                          ((iStack_21c - local_228._4_4_) - iStack_254) + local_260._4_4_ + iVar4,
                          0x216);
    }
    else {
      local_240 = (undefined4)local_1c0;
      uStack_23c = (undefined4)(local_1c0 >> 0x20);
      local_260 = 0;
      uStack_248 = uStack_208;
      local_250 = local_210;
      iStack_24c = iStack_20c;
      local_238 = uVar8;
      uVar6 = (*(code *)puVar1)(0x180224000);
      iVar5 = (*extraout_x11_07)(uVar6,&local_260);
      if (-1 < iVar5) {
        uVar6 = (*(code *)puVar1)(0x180224000);
        iVar5 = (*extraout_x11_08)(uVar6,auStack_180);
        if (-1 < iVar5) {
          uStack_1f8 = 0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          local_200 = 0x28;
          local_1e0 = 0;
          iVar5 = thunk_FUN_180223dec(local_128,&local_200);
          if (iVar5 != 0) {
            local_250 = uStack_1f8._4_4_ - local_200._4_4_;
            iStack_24c = (int)uStack_1f0 - (int)uStack_1f8;
          }
        }
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_09)();
      }
      uVar6 = (*(code *)puVar1)(0x180224000);
      (*extraout_x11_10)(uVar6,&local_250);
    }
    uVar6 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_11)(uVar6,2,iVar3,iVar4,local_1c0 & 0xffffffff);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_12)(param_1,param_2,0);
    uVar6 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_13)(uVar6,*param_2,1);
  }
  return;
}

