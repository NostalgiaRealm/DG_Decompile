/*
 * FUN_1801d2750 at 1801d2750
 * undefined FUN_1801d2750(void)
 * Address ranges: 1801d2750-1801d2e63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801d2750(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
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
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined4 local_90 [2];
  code *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_88 = (code *)CONCAT44(local_88._4_4_,param_2);
  *(undefined4 *)(param_1 + 0x6814) = 0;
  *(undefined8 *)(param_1 + 0x680c) = 0;
  FUN_180222c50(*(undefined8 *)(param_1 + 0xe10),0,0x87b0);
  uVar11 = 0;
  fVar16 = 1.0;
  uStack_78 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3f80000000000000;
  uStack_58 = 0x3f800000;
  uStack_70 = 0x3f80000000000000;
  local_80 = 0x3f800000;
  do {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + (longlong)(int)uVar11 * 0x40);
    puVar2[1] = uStack_78;
    *puVar2 = local_80;
    puVar2[3] = uStack_68;
    puVar2[2] = uStack_70;
    puVar2[5] = uStack_58;
    puVar2[4] = local_60;
    puVar2[7] = uStack_48;
    puVar2[6] = uStack_50;
    FUN_18011d4d0(param_1,uVar11);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x10a);
  lVar10 = param_1 + 0x478;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  FUN_180222c50(lVar10,0,0x348);
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar12 = 0;
    do {
      *(undefined4 *)(lVar10 + lVar12 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 8) + lVar12 * 8 + 4);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0xd2);
  }
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar15 = 1;
  uVar8 = extraout_x1;
  local_90[0] = param_3;
LAB_1801d2864:
  do {
    if (*(char *)(uVar15 + 0x18022eb70) != '\0') {
      if ((int)uVar15 == 0x1a) {
        iVar13 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
        if (iVar13 == 0) {
          uVar9 = 0;
        }
        else if ((iVar13 == 1) && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) != 0)) {
          uVar9 = *(undefined4 *)(lVar10 + uVar15 * 4);
        }
        else {
          uVar9 = 1;
        }
        uVar8 = (*(code *)puVar5)(*(undefined8 *)(param_1 + 0x28),uVar8,uVar9);
        (*extraout_x11)(uVar8,uVar15);
        uVar15 = 0x1b;
        uVar8 = extraout_x1_00;
        goto LAB_1801d2864;
      }
      uVar8 = (*(code *)puVar5)();
      (*extraout_x11_00)(uVar8,uVar15,*(undefined4 *)(lVar10 + uVar15 * 4));
      uVar8 = extraout_x1_01;
    }
    uVar9 = local_90[0];
    uVar11 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar11;
  } while (uVar11 < 0xd2);
  FUN_180222c50(param_1 + 0x7c0,0,0x420);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar15 = 0;
    do {
      lVar12 = param_1 + uVar15 * 4;
      uVar14 = 0;
      lVar10 = lVar12 + 0x7c0;
      do {
        iVar13 = (int)uVar14;
        lVar3 = 8;
        if (iVar13 == 0) {
          lVar3 = 4;
        }
        uVar11 = (uint)uVar15;
        uVar4 = *(undefined4 *)(lVar3 + *(longlong *)(param_1 + 0x10) + uVar15 * 0xc);
        *(undefined4 *)(lVar10 + uVar14 * 0x84) = uVar4;
        if (uVar11 == 0xb) {
          *(int *)(lVar10 + uVar14 * 0x84) = iVar13;
        }
        else if (uVar11 < 7) {
          *(undefined4 *)(lVar12 + 0xbe0 + uVar14 * 0x1c) = uVar4;
        }
        uVar14 = (ulonglong)(iVar13 + 1U);
      } while (iVar13 + 1U < 8);
      uVar15 = (ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < 0x21);
  }
  uVar15 = 0;
  do {
    uVar14 = 1;
    do {
      FUN_18011c538(param_1,uVar15,uVar14,
                    *(undefined4 *)(param_1 + uVar15 * 0x84 + 0x7c0 + uVar14 * 4));
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
    } while (uVar11 < 0x21);
    uVar11 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar11;
  } while (uVar11 < 8);
  *(undefined4 *)(param_1 + 0x374) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x368) = 3;
  *(undefined4 *)(param_1 + 0x36c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3c4) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x358));
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  iVar13 = 8;
  do {
    local_90[0] = 0xffffffff;
    FUN_180108518(param_1 + 0x358,local_90);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x318));
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  FUN_1802229d8(*(undefined8 *)(param_1 + 0x330));
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  uVar15 = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (*(uint *)(param_1 + 0x360) < 9) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar15 * 4) != -1) {
        uVar8 = (*(code *)puVar5)();
        (*extraout_x11_02)(uVar8,uVar15,0);
        *(undefined4 *)(*(longlong *)(param_1 + 0x358) + uVar15 * 4) = 0xffffffff;
      }
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
    } while (uVar11 < 8);
  }
  else {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar15 * 4) != -1) {
        uVar8 = (*(code *)puVar5)();
        (*extraout_x11_01)(uVar8,uVar15,0);
      }
      uVar11 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar11;
    } while (uVar11 < 8);
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x358));
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    iVar13 = 8;
    do {
      local_90[0] = 0xffffffff;
      FUN_180108518(param_1 + 0x358,local_90);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  *(undefined4 *)(param_1 + 0x2dc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x60) = local_88._0_4_;
  *(undefined4 *)(param_1 + 100) = uVar9;
  *(undefined4 *)(param_1 + 0xd14) = 0xff;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  bVar7 = *(longlong *)(param_1 + 0x50) != 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  uVar11 = (uint)bVar7;
  if (*(uint *)(param_1 + 0x494) != uVar11) {
    uVar8 = (*(code *)puVar5)(0x180224000);
    (*extraout_x11_03)(uVar8,7,uVar11);
  }
  *(uint *)(param_1 + 0x494) = (uint)bVar7;
  uVar8 = (*(code *)puVar5)(0x180224000);
  (*extraout_x11_04)(uVar8,param_1 + 0x58);
  uVar8 = (*(code *)puVar5)(0x180224000);
  (*extraout_x11_05)(uVar8,*(undefined4 *)(param_1 + 0x3f4));
  uVar8 = (*(code *)puVar5)(0x180224000);
  (*extraout_x11_06)(uVar8,*(undefined1 *)(param_1 + 0x40e));
  lVar10 = DAT_18024d928;
  uVar8 = (*(code *)puVar5)(0x180224000);
  (*extraout_x11_07)(uVar8,*(undefined1 *)(lVar10 + 0x885));
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined4 *)(param_1 + 0x3dc) = 0x45000000;
  *(undefined4 *)(param_1 + 0x3e4) = 0x45000000;
  *(undefined8 *)(param_1 + 0x3d4) = 0xfff00000000;
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  FUN_180222c50(param_1 + 0x6ad0,0,0x380);
  local_88 = (code *)puVar5;
  uVar15 = 0;
  do {
    uVar14 = 0;
    do {
      *(undefined4 *)(param_1 + uVar15 * 0x38 + 0x6ad0 + uVar14 * 4) = (&DAT_18024d814)[uVar14 * 2];
      if ((&DAT_18024d810)[uVar14 * 8] != '\0') {
        FUN_1801c3848(param_1,uVar15,uVar14);
      }
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
    } while (uVar11 < 0xe);
    uVar11 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar11;
  } while (uVar11 < 0x10);
  uVar15 = 0;
  do {
    uVar14 = 0;
    do {
      *(undefined4 *)(param_1 + uVar15 * 0x38 + 0x6e50 + uVar14 * 4) = (&DAT_18024d814)[uVar14 * 2];
      if ((&DAT_18024d810)[uVar14 * 8] != '\0' && (int)uVar14 != 10) {
        FUN_1801c3848(param_1,(int)uVar15 + 0x100,uVar14);
      }
      pcVar6 = local_88;
      uVar11 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar11;
    } while (uVar11 < 0xe);
    uVar11 = (int)uVar15 + 1;
    uVar15 = (ulonglong)uVar11;
  } while (uVar11 < 5);
  FUN_1801cd470(param_1,0,0);
  FUN_1801ce310(param_1,0,0);
  FUN_1801cf200(param_1 + 0x6838,0);
  if (*(int *)(param_1 + 0xe68) == 1) {
    if ((*(uint *)(param_1 + 0xe78) >> 5 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xc4e4) = 1;
    }
LAB_1801d2de4:
    if ((*(uint *)(param_1 + 0xe78) >> 5 & 1) == 0) {
      if ((*(uint *)(param_1 + 0xe78) >> 7 & 1) == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = *(int *)(param_1 + 0xc4e4) != 0;
      }
      goto LAB_1801d2da4;
    }
  }
  else {
    if (*(int *)(param_1 + 0xe68) != 3) goto LAB_1801d2de4;
    *(undefined4 *)(param_1 + 0xc4e4) = 1;
  }
  bVar7 = true;
LAB_1801d2da4:
  *(bool *)(param_1 + 0x681b) = bVar7;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x9eb);
  uVar11 = *puVar1;
  if (uVar11 < 9) {
    if (uVar11 != 0) {
      fVar16 = (float)uVar11;
    }
  }
  else {
    fVar16 = 8.0;
  }
  *(float *)(param_1 + 0xc4e0) = fVar16;
  (*pcVar6)(0x180225000,*(undefined8 *)(param_1 + 0x28),*puVar1 != 0);
  (*extraout_x11_08)(fVar16);
  return;
}

