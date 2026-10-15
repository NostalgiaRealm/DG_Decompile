/*
 * FUN_1802187d0 at 1802187d0
 * undefined FUN_1802187d0(void)
 * Address ranges: 1802187d0-180218c37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1802187d0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  longlong param_5,undefined4 param_6,int param_7,longlong param_8,longlong param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  longlong lVar10;
  longlong lVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 local_118;
  uint local_110;
  uint uStack_10c;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 auStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  longlong *local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined4 local_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  
  lVar12 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  lVar10 = param_2 + (ulonglong)*(uint *)(param_2 + 0xd78) * 8;
  uVar13 = *(undefined8 *)(lVar10 + 0xd88);
  local_f8 = *(longlong *)(lVar10 + 0xd88);
  local_108 = param_5;
  local_100 = param_3;
  FUN_18020d168(*(undefined8 *)(lVar12 + 0x2230),auStack_f0,param_4,0);
  local_e4 = 0xffffffff;
  local_e0 = &local_108;
  uStack_c0 = 0;
  local_c8 = 0;
  local_e8 = param_6;
  lStack_d8 = param_2;
  local_d0 = param_8;
  FUN_18021c7a0(param_1 + 0x6b0,*(undefined4 *)(param_2 + 0x10),&local_e0);
  *(int *)(*(longlong *)(lVar12 + 0x1e08) + 0x684) =
       *(int *)(*(longlong *)(lVar12 + 0x1e08) + 0x684) + 1;
  *(undefined8 *)(lVar12 + 0x9d0) = *(undefined8 *)(*(longlong *)(lVar12 + 0x1e08) + 0xb78);
  puVar4 = __hybrid_os_arm64x_dispatch_icall;
  if (((local_100 != 0) || (local_108 != 0)) &&
     (uVar8 = FUN_180217ac0(param_1,param_2,&local_108,param_6,param_8,param_9), lVar10 = local_100,
     (uVar8 & 1) == 0)) {
    if (local_f8 != 0) {
      if (local_108 == 0) {
        FUN_180207cd0(*(undefined8 *)(lVar12 + 0x1e08),local_100,0,0,0x800);
        FUN_180207cd0(*(undefined8 *)(lVar12 + 0x1e08),uVar13,0,0,0x400);
        FUN_1802099e0(*(undefined8 *)(lVar12 + 0x1e08),uVar13,lVar10);
      }
      else {
        FUN_180217178(uVar8,lVar12 + 0x900,uVar13,local_108,param_6);
      }
    }
    if (param_9 != 0) {
      *(longlong *)(*(longlong *)(lVar12 + 0x1e08) + 0xb88) = param_1;
      uVar6 = *(uint *)(param_2 + 0x20);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180218948);
        (*pcVar5)();
      }
      uVar2 = 0;
      if (uVar6 != 0) {
        uVar2 = *(uint *)(param_2 + 0x18) / uVar6;
      }
      uVar6 = *(uint *)(param_2 + 0x24);
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0xf004,0x180218960);
        (*pcVar5)();
      }
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = *(uint *)(param_2 + 0x1c) / uVar6;
      }
      local_118 = 0;
      local_110 = uVar2;
      uStack_10c = uVar3;
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11)(uVar13,&local_78);
      local_b8 = uVar13;
      FUN_18020d168(*(undefined8 *)(lVar12 + 0x2238),auStack_b0,*(undefined4 *)(param_2 + 0xd98),
                    *(undefined4 *)(param_2 + 0xd78));
      local_80 = 0;
      local_88 = 0x3f800000;
      uStack_84 = 0x3f800000;
      local_a8 = local_58[0];
      local_90 = &local_118;
      uStack_a4 = uVar2;
      local_a0 = uVar3;
      uStack_9c = uVar2;
      local_98 = uVar3;
      (*(code *)puVar4)(0x180224000);
      (*extraout_x11_00)(param_9,&local_b8);
    }
  }
  lVar10 = lStack_d8;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    uVar6 = *(uint *)(param_2 + 0x10);
    lVar11 = *(longlong *)(param_1 + 0x6b8) + (ulonglong)uVar6 * 0x1ac0;
    if (*(int *)((longlong)local_e0 + 0x24) != -1) {
      FUN_180207cd0(*(undefined8 *)(lVar11 + 0x1e08),local_e0[1],0,0);
    }
    local_78 = lVar10;
    uStack_68 = uStack_c0;
    local_70 = local_c8;
    local_60 = *(undefined8 *)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0xd78) * 8 + 0xd88);
    FUN_18020d168(*(undefined8 *)(lVar11 + 0x2238),local_58,*(undefined4 *)(lVar10 + 0xd98),
                  *(undefined4 *)(lVar10 + 0xd78));
    local_50 = FUN_18020e6e8(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x1b500),local_60);
    if (*(int *)(param_1 + 0x6c8) != 0) {
      uVar9 = 0x180224000;
      uVar8 = 0;
      local_118 = uVar13;
      do {
        uVar13 = (*(code *)puVar4)(*(undefined8 *)(*(longlong *)(param_1 + 0x6c0) + uVar8 * 8),uVar9
                                  );
        (*extraout_x11_01)(uVar13,uVar6,&local_78);
        uVar2 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar2;
        uVar9 = extraout_x1;
        uVar13 = local_118;
      } while (uVar2 < *(uint *)(param_1 + 0x6c8));
    }
  }
  if (*(char *)(param_2 + 0xd6a) != '\0') {
    FUN_1802183b8(param_1,param_2,param_8 + 0xc);
  }
  FUN_180207cd0(*(undefined8 *)(lVar12 + 0x1e08),uVar13,0,0,0);
  lVar10 = *(longlong *)(lVar12 + 0x1e08);
  iVar1 = *(int *)(lVar10 + 0x684) + -1;
  *(int *)(lVar10 + 0x684) = iVar1;
  if (iVar1 == 0) {
    FUN_180207560(lVar10 + 8,0);
  }
  uVar9 = *(undefined8 *)(*(longlong *)(lVar12 + 0x1e08) + 0xb78);
  FUN_18020e268(*(undefined8 *)(param_1 + 0x1b500),uVar13,0,0,*(undefined8 *)(lVar12 + 0x1e00),
                0xffffffffffffffff,0,uVar9);
  if (((param_7 == 0) && (*(char *)(param_2 + 0xd6c) != '\0')) &&
     ((*(int *)(param_2 + 0x3c) != 2 || (*(char *)(param_2 + 0xd6d) == '\0')))) {
    uVar13 = 0x200;
  }
  else {
    uVar13 = 0;
  }
  lVar10 = *(longlong *)(lVar12 + 0x1e00);
  uVar13 = (*(code *)puVar4)(0x180224000,*(undefined8 *)(param_2 + 8),extraout_x1_00,uVar13);
  uVar6 = (*extraout_x11_02)(uVar13,param_7);
  uVar13 = (*(code *)puVar4)(0x180224000);
  (*extraout_x11_03)(uVar13,*(undefined8 *)(lVar10 + 0x18),uVar9);
  uVar13 = FUN_1801042f0(*(longlong *)(lVar12 + 0x1e00) + 0x28);
  *(undefined8 *)(*(longlong *)(lVar12 + 0x1e08) + 0xb78) = uVar13;
  (*(code *)puVar4)(0x180224000);
  uVar7 = (*extraout_x11_04)();
  *(undefined4 *)(param_2 + 0xd78) = uVar7;
  return ~uVar6 >> 0x1f;
}

