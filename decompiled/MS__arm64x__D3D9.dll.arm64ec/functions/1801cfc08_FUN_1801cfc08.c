/*
 * FUN_1801cfc08 at 1801cfc08
 * undefined FUN_1801cfc08(void)
 * Address ranges: 1801cfc08-1801d063b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801cfc08(longlong param_1,undefined8 param_2,int param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  longlong lVar13;
  longlong extraout_x8;
  longlong lVar14;
  uint uVar15;
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
  code *extraout_x11_17;
  code *extraout_x11_18;
  longlong lVar16;
  undefined1 auVar17 [16];
  int *local_4a8;
  uint local_4a0;
  undefined4 local_49c;
  int local_498;
  longlong local_490;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  longlong local_370;
  uint local_368 [66];
  undefined1 auStack_260 [272];
  undefined1 auStack_150 [272];
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    uVar12 = param_2;
    local_498 = 0;
  }
  else {
    iVar9 = thunk_FUN_1802236e4(DAT_180258900);
    uVar12 = extraout_x1;
    local_498 = 1;
    if (iVar9 == 0) {
      FUN_1801085c8();
      local_498 = 1;
      uVar12 = extraout_x1_00;
    }
  }
  uVar10 = 0x8876086c;
  if (((5 < (int)param_2 - 1U) || (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb4) <= param_4)) ||
     (*(char *)(param_1 + -0x6568) == '\0')) goto LAB_1801d05f4;
  uVar10 = 0;
  uVar8 = FUN_1801cea00(param_1 + -0x6838,uVar12,*(int *)(param_1 + -0x63a4) != 0);
  uVar8 = FUN_1801cea70(param_1 + -0x6838,uVar8);
  uVar11 = FUN_1801c3990(param_1 + -0x6838,uVar8);
  if ((((uVar11 & 1) == 0) || (uVar11 = FUN_1801cead8(param_1 + -0x6838), (uVar11 & 1) == 0)) ||
     ((uVar11 = FUN_1801ceef8(param_1 + -0x6838), (uVar11 & 1) == 0 ||
      (uVar11 = FUN_1801c3d00(param_1 + -0x6838), (uVar11 & 1) == 0)))) goto LAB_1801d05f4;
  uVar10 = 0x8876086c;
  if ((((*(uint *)(*(longlong *)(param_1 + 0x5cb0) + 0x10) & *(uint *)(param_1 + -0x6c) &
        (*(uint *)(param_1 + -0x70) ^ 0xffffffff)) != 0) ||
      (uVar10 = 0, *(char *)(param_1 + -0x1f) != '\0')) || (*(longlong *)(param_1 + -0x6808) == 0))
  goto LAB_1801d05f4;
  if (((*(int *)(*(longlong *)(param_1 + 0x5cb0) + 4) == 0) &&
      (*(longlong *)(param_1 + -0x170) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + -0x170) + 0x8c) == '\0')) {
    iVar9 = *(int *)(param_1 + -0x61a0);
LAB_1801cfd9c:
    uVar15 = 1;
  }
  else {
    iVar9 = *(int *)(param_1 + -0x61a0);
    if ((iVar9 == 0) && (*(char *)(param_1 + -0x1d) != '\0')) goto LAB_1801cfd9c;
    uVar15 = 3;
  }
  local_4a8 = (int *)(param_1 + -0x61a0);
  uVar3 = *(uint *)(param_1 + -0x6444);
  uVar15 = uVar3 & 0xfffffff9 | (uint)(iVar9 != 0) << 2 | uVar15;
  *(uint *)(param_1 + -0x6444) = uVar15;
  *(byte *)(param_1 + -0x5b26) = uVar15 != uVar3 | *(byte *)(param_1 + -0x5b26);
  FUN_1801c3df0(param_1 + -0x6838,*(longlong *)(param_1 + 0x5c50) == 0);
  puVar7 = __hybrid_os_arm64x_dispatch_icall;
  if (*(char *)(param_1 + 0x5cd0) == '\0') {
    local_49c = 0;
    FUN_18010a028(param_1 + -0x6838);
    puVar7 = __hybrid_os_arm64x_dispatch_icall;
    uVar4 = *(uint *)(&DAT_180229be8 + (longlong)(int)param_2 * 4);
    lVar14 = *(longlong *)(param_1 + 0x5cb0);
    uVar11 = -(ulonglong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulonglong)uVar4 << 3;
    iVar9 = *(int *)(&DAT_180229bb4 + uVar11) + *(int *)(&DAT_180229bb0 + uVar11) * param_4;
    uVar15 = *(uint *)(param_1 + -0x6c) & *(uint *)(lVar14 + 0x10);
    local_4a0 = (uint)(*(int *)(param_1 + -0x619c) != 0);
    uVar3 = uVar15 & *(uint *)(param_1 + -0x60);
    if (uVar3 == uVar15) {
      uVar3 = *(uint *)(param_1 + -0x5c) & uVar15;
      local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar3);
      FUN_18010c350(param_1 + -0x6838,uVar3,0);
      uVar12 = (*(code *)puVar7)(0x180225000);
      (*extraout_x11_06)(uVar12,(ulonglong)uVar4,*(undefined8 *)(param_1 + 0x5cb0),
                         *(undefined8 *)(param_1 + 0x5cc0),param_3,iVar9,local_4a0);
      FUN_18010c1f8(param_1 + -0x6838,(ulonglong)local_4a8 & 0xffffffff,0);
      FUN_18010c158(param_1 + -0x6838,uVar15,0);
    }
    else if (uVar3 == 0) {
      local_490 = *(longlong *)(param_1 + 0x5cc0);
      if (local_490 == 0) {
        if (((*(int *)(lVar14 + 4) == 0) || (*(int *)(param_1 + -0x619c) == 0)) ||
           ((*(uint *)(param_1 + -0x64d8) < 9 || (*(char *)(param_1 + -0x1d) == '\0')))) {
          if ((uVar15 == 1) && (*(int *)(lVar14 + 0xc) == *(int *)(param_1 + -0xf0))) {
            lVar14 = *(longlong *)(*(longlong *)(param_1 + -0x170) + 8);
            auVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                                ((ulonglong)*(uint *)(param_1 + -0xb0) +
                                 (ulonglong)(uint)(*(int *)(param_1 + -0xf0) * param_3));
            (*extraout_x11_10)(auVar17._0_8_,uVar4,auVar17._8_8_,extraout_x8 + lVar14);
          }
          else {
            FUN_18010bfc8(param_1 + -0x6838,lVar14,uVar15,param_3,auStack_150);
            uVar12 = (*(code *)puVar7)(0x180225000);
            (*extraout_x11_11)(uVar12,uVar4,*(undefined8 *)(param_1 + 0x5cb8),auStack_150,iVar9,
                               local_4a0);
          }
        }
        else {
          iVar2 = *local_4a8;
          uVar10 = FUN_180114aa8(param_1 + -0x6838);
          local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar10);
          lVar14 = FUN_18010d360(param_1 + -0x64f0,&local_4a8);
          uVar11 = FUN_18011e1f8(param_1 + -0x6838,iVar9,*(undefined4 *)(lVar14 + 0xc));
          if ((uVar11 & 1) != 0) {
            uStack_478 = 0;
            local_480 = 0;
            uStack_468 = 0;
            uStack_470 = 0;
            uStack_458 = 0;
            local_460 = 0;
            uStack_448 = 0;
            uStack_450 = 0;
            uStack_438 = 0;
            local_440 = 0;
            uStack_428 = 0;
            uStack_430 = 0;
            uStack_418 = 0;
            local_420 = 0;
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            local_400 = 0;
            uStack_3e8 = 0;
            uStack_3f0 = 0;
            uStack_3d8 = 0;
            local_3e0 = 0;
            uStack_3c8 = 0;
            uStack_3d0 = 0;
            uStack_3b8 = 0;
            local_3c0 = 0;
            uStack_3a8 = 0;
            uStack_3b0 = 0;
            uStack_398 = 0;
            local_3a0 = 0;
            uStack_388 = 0;
            uStack_390 = 0;
            uStack_378 = 0;
            local_380 = 0;
            FUN_18010c078(param_1 + -0x6838,*(undefined8 *)(param_1 + 0x5cb0),&local_480);
            uVar10 = FUN_180224358();
            local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar10);
            FUN_1802243a0(0x3fc0);
            uVar10 = 7;
            if (iVar2 == 0) {
              uVar10 = 5;
            }
            FUN_18011e588(param_1 + -0x6838,&local_480,*(undefined8 *)(param_1 + -0x5a50),lVar14,
                          uVar10,0,iVar9,param_3,0,0);
            uVar12 = (*(code *)puVar7)(0x180225000);
            (*extraout_x11_09)(uVar12,uVar4,lVar14,*(undefined8 *)(param_1 + -0x5a50),
                               *(undefined4 *)(lVar14 + 0xc),iVar9,0);
            FUN_1802243a0((ulonglong)local_4a8 & 0xffffffff);
          }
        }
      }
      else if ((uVar15 == 1) && (*(int *)(lVar14 + 0xc) == *(int *)(param_1 + -0xf0))) {
        auVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)
                            ((ulonglong)*(uint *)(param_1 + -0xb0) +
                             (ulonglong)(uint)(*(int *)(param_1 + -0xf0) * param_3));
        (*extraout_x11_07)(auVar17._0_8_,uVar4,auVar17._8_8_);
      }
      else {
        FUN_18010bfc8(param_1 + -0x6838,lVar14,uVar15,param_3,auStack_260);
        uVar12 = (*(code *)puVar7)(0x180225000);
        (*extraout_x11_08)(uVar12,uVar4,*(undefined8 *)(param_1 + 0x5cb8),local_490,auStack_260,
                           iVar9);
      }
    }
    else {
      uVar11 = FUN_18010c490(param_1 + -0x6838,uVar15 & (*(uint *)(param_1 + -0x60) ^ 0xffffffff),
                             param_3,iVar9);
      if ((uVar11 & 1) == 0) {
        local_49c = 0x8876086d;
      }
      else {
        uVar3 = *(uint *)(param_1 + -0x5c) & uVar15;
        local_4a8 = (int *)CONCAT44(local_4a8._4_4_,uVar3);
        FUN_18010c350(param_1 + -0x6838,uVar3,0);
        uVar12 = (*(code *)puVar7)(0x180225000);
        (*extraout_x11_12)(uVar12,uVar4,*(undefined8 *)(param_1 + 0x5cb0),
                           *(undefined8 *)(param_1 + 0x5cc0),param_3,iVar9,local_4a0);
        FUN_18010c158(param_1 + -0x6838,uVar15,0);
        FUN_18010c1f8(param_1 + -0x6838,(ulonglong)local_4a8 & 0xffffffff);
      }
    }
    if ((*(char *)(param_1 + -0x5a17) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
      bVar6 = false;
      if (*(char *)(param_1 + -0x656b) != '\0') goto LAB_1801d04c0;
    }
    else {
      bVar6 = true;
LAB_1801d04c0:
      (*(code *)puVar7)(0x180224000);
      (*extraout_x11_13)();
      uVar12 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_14)(uVar12,*(undefined4 *)(param_1 + -0x6574),
                         *(undefined4 *)(param_1 + -0x6570));
      if (bVar6) {
        uVar12 = (*(code *)puVar7)(0x180224000);
        (*extraout_x11_15)(uVar12,*(undefined4 *)(param_1 + -0x6574),
                           *(undefined4 *)(param_1 + -0x6570));
        if (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f3) != '\0') {
          thunk_FUN_180223720();
        }
      }
    }
    if (*(char *)(param_1 + -0x656a) == '\0') {
      (*(code *)puVar7)(0x180224000);
      (*extraout_x11_16)();
      if (*(longlong *)(param_1 + -0x67e8) != 0) {
        (*(code *)puVar7)(0x180224000);
        (*extraout_x11_17)();
      }
      *(undefined1 *)(param_1 + -0x656a) = 1;
    }
    uVar10 = local_49c;
    if (*(char *)(param_1 + -0x6569) != '\0') {
      if (*(int *)(param_1 + -0x6358) != 0) {
        uVar12 = (*(code *)puVar7)(0x180224000);
        (*extraout_x11_18)(uVar12,*(undefined4 *)(param_1 + -0x6574),
                           *(undefined4 *)(param_1 + -0x6570),1);
      }
      *(undefined1 *)(param_1 + -0x6569) = 0;
      uVar10 = local_49c;
    }
    goto LAB_1801d05f4;
  }
  lVar14 = *(longlong *)(param_1 + 0x5cb0);
  if (*(int *)(lVar14 + 8) != 0) {
    uVar11 = 0;
    do {
      uVar15 = (int)uVar11 + 1;
      lVar13 = (ulonglong)*(byte *)(lVar14 + 0x214 + uVar11) * 8;
      cVar5 = *(char *)(lVar14 + 0x14 + lVar13);
      lVar1 = param_1 + (longlong)(int)cVar5 * 4;
      lVar16 = *(longlong *)(param_1 + (longlong)(int)cVar5 * 8 + -0x170);
      uVar3 = *(uint *)(lVar1 + -0xf0);
      local_368[uVar11 * 4] = uVar3;
      (&local_370)[uVar11 * 2] =
           (ulonglong)(uVar3 * param_3) + (ulonglong)*(byte *)(lVar14 + 0x17 + lVar13) * 4 +
           (ulonglong)*(uint *)(lVar1 + -0xb0) + *(longlong *)(lVar16 + 8);
      local_368[uVar11 * 4 + 1] =
           *(uint *)(param_1 + 0x5c68 + (longlong)(int)cVar5 * 4) & 0x3fffffff;
      uVar11 = (ulonglong)uVar15;
    } while (uVar15 < *(uint *)(lVar14 + 8));
  }
  auVar17 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(auVar17._0_8_,auVar17._8_8_,*(undefined8 *)(param_1 + 0x5cb8),
                  *(undefined8 *)(param_1 + 0x5cc0),&local_370);
  if ((*(char *)(param_1 + -0x5a17) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f2) == '\0')) {
    bVar6 = false;
    if (*(char *)(param_1 + -0x656b) != '\0') goto LAB_1801cff30;
  }
  else {
    bVar6 = true;
LAB_1801cff30:
    (*(code *)puVar7)(0x180224000);
    (*extraout_x11_00)();
    uVar12 = (*(code *)puVar7)(0x180224000);
    (*extraout_x11_01)(uVar12,*(undefined4 *)(param_1 + -0x6574),*(undefined4 *)(param_1 + -0x6570))
    ;
    if (bVar6) {
      uVar12 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_02)(uVar12,*(undefined4 *)(param_1 + -0x6574),
                         *(undefined4 *)(param_1 + -0x6570));
      if (*(char *)(*(longlong *)(param_1 + -0x6820) + 0x7f3) != '\0') {
        thunk_FUN_180223720();
      }
    }
  }
  if (*(char *)(param_1 + -0x656a) == '\0') {
    (*(code *)puVar7)(0x180224000);
    (*extraout_x11_03)();
    if (*(longlong *)(param_1 + -0x67e8) != 0) {
      (*(code *)puVar7)(0x180224000);
      (*extraout_x11_04)();
    }
    *(undefined1 *)(param_1 + -0x656a) = 1;
  }
  if (*(char *)(param_1 + -0x6569) != '\0') {
    if (*(int *)(param_1 + -0x6358) != 0) {
      uVar12 = (*(code *)puVar7)(0x180224000);
      (*extraout_x11_05)(uVar12,*(undefined4 *)(param_1 + -0x6574),
                         *(undefined4 *)(param_1 + -0x6570),1);
    }
    *(undefined1 *)(param_1 + -0x6569) = 0;
  }
LAB_1801d05f4:
  if (local_498 == 0) {
    *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
  }
  else {
    thunk_FUN_18022370c(DAT_180258900);
  }
  return uVar10;
}

