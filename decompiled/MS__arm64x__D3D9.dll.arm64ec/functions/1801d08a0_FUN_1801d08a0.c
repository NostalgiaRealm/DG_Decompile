/*
 * FUN_1801d08a0 at 1801d08a0
 * undefined FUN_1801d08a0(void)
 * Address ranges: 1801d08a0-1801d0ee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_1801d08a0(longlong param_1,int param_2,uint param_3,longlong param_4,undefined4 param_5)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  undefined1 auVar17 [16];
  undefined4 local_16c;
  uint local_168;
  ulonglong local_160;
  longlong local_150;
  undefined8 uStack_148;
  undefined1 auStack_144 [4];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar11 = 0x8876086c;
  local_16c = param_5;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    bVar7 = false;
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
  }
  else {
    bVar7 = true;
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    if (iVar9 == 0) {
      FUN_1801085c8();
    }
  }
  if (((5 < param_2 - 1U || param_4 == 0) ||
      (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4) <= param_3)) ||
     (*(char *)(param_1 + -0x6568) == '\0')) goto LAB_1801d0ea4;
  uVar11 = 0;
  uVar10 = FUN_1801cea00(param_1 + -0x6838,param_2,*(int *)(param_1 + -0x63a4) != 0);
  uVar10 = FUN_1801cea70(param_1 + -0x6838,uVar10);
  uVar12 = FUN_1801c3990(param_1 + -0x6838,uVar10);
  if ((((uVar12 & 1) == 0) || (uVar12 = FUN_1801cead8(param_1 + -0x6838), (uVar12 & 1) == 0)) ||
     ((uVar12 = FUN_1801ceef8(param_1 + -0x6838), (uVar12 & 1) == 0 ||
      (uVar12 = FUN_1801c3d00(param_1 + -0x6838), (uVar12 & 1) == 0)))) goto LAB_1801d0ea4;
  uVar11 = 0x8876086c;
  if ((((*(uint *)(*(longlong *)(param_1 + 0x5cb0) + 0x10) & *(uint *)(param_1 + -0x6c)) != 1) ||
      (uVar11 = 0, *(char *)(param_1 + -0x1f) != '\0')) || (*(longlong *)(param_1 + -0x6808) == 0))
  goto LAB_1801d0ea4;
  if ((*(int *)(param_1 + -0x61a0) == 0) && (*(char *)(param_1 + -0x1d) != '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((*(int *)(param_1 + -0x63a4) != 0) ||
     (uVar16 = 0, *(int *)(*(longlong *)(param_1 + 0x5cb0) + 4) != 0)) {
    uVar16 = 1;
  }
  uVar2 = *(uint *)(param_1 + -0x6444);
  uVar5 = 3;
  if (!bVar6 || uVar16 == 0) {
    uVar5 = 1;
  }
  uVar5 = uVar2 & 0xfffffff9 | (uint)(*(int *)(param_1 + -0x61a0) != 0) << 2 | uVar5;
  *(uint *)(param_1 + -0x6444) = uVar5;
  *(byte *)(param_1 + -0x5b26) = uVar5 != uVar2 | *(byte *)(param_1 + -0x5b26);
  FUN_1801c3df0(param_1 + -0x6838,*(longlong *)(param_1 + 0x5c50) == 0);
  FUN_18010a028(param_1 + -0x6838);
  puVar8 = __hybrid_os_arm64x_dispatch_icall;
  local_168 = *(uint *)(&DAT_180229be8 + (longlong)param_2 * 4);
  uVar12 = -(ulonglong)(local_168 >> 0x1f) & 0xfffffff800000000 | (ulonglong)local_168 << 3;
  if (*(longlong *)(param_1 + 0x5cc0) == 0) {
    lVar14 = *(longlong *)(param_1 + 0x5cb0);
    iVar9 = *(int *)(param_1 + -0x61a0);
    local_160 = CONCAT44(local_160._4_4_,(uint)(*(int *)(param_1 + -0x619c) != 0));
    iVar4 = *(int *)(&DAT_180229bb4 + uVar12) + *(int *)(&DAT_180229bb0 + uVar12) * param_3;
    if ((((*(int *)(lVar14 + 4) == 0) || (*(int *)(param_1 + -0x619c) == 0)) ||
        (*(uint *)(param_1 + -0x64d8) < 9)) || (*(char *)(param_1 + -0x1d) == '\0')) {
      if ((iVar9 != 0) && (*(char *)(param_1 + -0x1d) != '\0')) {
        FUN_18011eeb8(param_1 + -0x6838,param_4,lVar14,0,0,iVar4);
      }
      uVar13 = (*(code *)puVar8)(0x180225000);
      (*extraout_x11_01)(uVar13,local_168,*(undefined8 *)(param_1 + 0x5cb0),param_4,local_16c,iVar4,
                         local_160 & 0xffffffff);
    }
    else {
      local_16c = FUN_18011e478(param_1 + -0x6838,lVar14);
      local_160 = FUN_18010d360(param_1 + -0x64f0,&local_16c);
      uVar12 = FUN_18011e1f8(param_1 + -0x6838,iVar4,*(undefined4 *)(local_160 + 0xc));
      if ((uVar12 & 1) != 0) {
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_48 = 0;
        local_50 = 0;
        local_16c = 7;
        if (iVar9 == 0) {
          local_16c = 5;
        }
        lVar14 = *(longlong *)(param_1 + 0x5cb0);
        uVar12 = 0;
        if (*(int *)(lVar14 + 8) != 0) {
          do {
            bVar3 = *(byte *)(lVar14 + 0x214 + uVar12);
            uVar15 = (ulonglong)bVar3;
            if ((bVar3 < 0xf) && ((0x7febU >> (ulonglong)(bVar3 & 0x1f) & 1) != 0)) {
              lVar1 = lVar14 + uVar15 * 8;
              (&local_150)[uVar15 * 2] =
                   param_4 + (ulonglong)*(byte *)(lVar14 + 0x17 + uVar15 * 8) * 4;
              auStack_144[uVar15 * 0x10] = *(undefined1 *)(lVar1 + 0x18);
              *(undefined4 *)(&stack0xfffffffffffffeb8 + uVar15 * 2) = *(undefined4 *)(lVar14 + 0xc)
              ;
              auStack_144[uVar15 * 0x10 + 1] = *(undefined1 *)(lVar1 + 0x15);
            }
            uVar16 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar16;
          } while (uVar16 < *(uint *)(lVar14 + 8));
        }
        uVar11 = FUN_180224358();
        FUN_1802243a0(0x3fc0);
        uVar12 = local_160;
        FUN_18011e588(param_1 + -0x6838,&local_150,*(undefined8 *)(param_1 + -0x5a50),local_160,
                      local_16c,0,iVar4,0,0,0);
        uVar13 = (*(code *)puVar8)(0x180225000);
        (*extraout_x11_00)(uVar13,local_168,uVar12,*(undefined8 *)(param_1 + -0x5a50),
                           *(undefined4 *)(uVar12 + 0xc),iVar4,0);
        FUN_1802243a0(uVar11);
      }
    }
  }
  else {
    auVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
    (*extraout_x11)(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(param_1 + 0x5cb0));
  }
  FUN_18010a378(param_1 + -0x6838,0);
  if ((*(char *)(param_1 + -0x5a17) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
    bVar6 = false;
    if (*(char *)(param_1 + -0x656b) != '\0') goto LAB_1801d0d6c;
  }
  else {
    bVar6 = true;
LAB_1801d0d6c:
    (*(code *)puVar8)(0x180224000);
    (*extraout_x11_02)();
    uVar13 = (*(code *)puVar8)(0x180224000);
    (*extraout_x11_03)(uVar13,*(undefined4 *)(param_1 + -0x6574),*(undefined4 *)(param_1 + -0x6570))
    ;
    if (bVar6) {
      uVar13 = (*(code *)puVar8)(0x180224000);
      (*extraout_x11_04)(uVar13,*(undefined4 *)(param_1 + -0x6574),
                         *(undefined4 *)(param_1 + -0x6570));
      if (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f3) != '\0') {
        thunk_FUN_180223720();
      }
    }
  }
  if (*(char *)(param_1 + -0x656a) == '\0') {
    (*(code *)puVar8)(0x180224000);
    (*extraout_x11_05)();
    if (*(longlong *)(param_1 + -0x67e8) != 0) {
      (*(code *)puVar8)(0x180224000);
      (*extraout_x11_06)();
    }
    *(undefined1 *)(param_1 + -0x656a) = 1;
  }
  if (*(char *)(param_1 + -0x6569) != '\0') {
    if (*(int *)(param_1 + -0x6358) != 0) {
      uVar13 = (*(code *)puVar8)(0x180224000);
      (*extraout_x11_07)(uVar13,*(undefined4 *)(param_1 + -0x6574),
                         *(undefined4 *)(param_1 + -0x6570),1);
    }
    *(undefined1 *)(param_1 + -0x6569) = 0;
  }
  uVar11 = 0;
LAB_1801d0ea4:
  if (bVar7) {
    thunk_FUN_18022370c(DAT_180258900);
  }
  else {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  return uVar11;
}

