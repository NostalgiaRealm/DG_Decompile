/*
 * FUN_1801bbda0 at 1801bbda0
 * undefined FUN_1801bbda0(void)
 * Address ranges: 1801bbda0-1801bc1ef;1801bc204-1801bc2bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801bbda0(longlong param_1,uint param_2,int param_3,longlong param_4,ulonglong param_5,
                 longlong param_6,longlong param_7,undefined8 *param_8,byte param_9)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  byte *extraout_x11;
  undefined1 *extraout_x12;
  undefined1 *extraout_x15;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined5 local_130;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 local_128;
  undefined1 local_127;
  uint local_120;
  int iStack_11c;
  uint local_118;
  longlong local_110;
  uint local_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  byte bStack_f5;
  uint uStack_f4;
  undefined8 *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_88 [72];
  
  if (param_8 == (undefined8 *)0x0) {
    return -0x7789f794;
  }
  if (*(uint *)(param_1 + 0x70) <= param_2) {
    return -0x7789f794;
  }
  local_110 = param_7;
  local_f0 = param_8;
  iStack_11c = param_3;
  uVar6 = FUN_1801072a0(param_1,param_3);
  if ((uVar6 & 1) == 0) {
    return -0x7789f794;
  }
  uVar9 = 0xfffff009;
  if (param_9 != 0) {
    uVar9 = 0xefff1009;
  }
  local_118 = (uint)param_5;
  if ((uVar9 & local_118) != 0) {
    return -0x7789f794;
  }
  uVar9 = local_118 & 0xe0;
  if (uVar9 != 0x20) {
    if (uVar9 == 0x40) goto LAB_1801bbe2c;
    if (uVar9 != 0x80) {
      return -0x7789f794;
    }
  }
  if ((local_118 >> 4 & 1) != 0) {
    return -0x7789f794;
  }
LAB_1801bbe2c:
  if ((param_6 == 0) ||
     (((local_118 >> 9 & 1) != 0 &&
      (*(int *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10 + 4) != 0)))) {
    return -0x7789f794;
  }
  lVar7 = (ulonglong)param_2 * 0x10;
  *local_f0 = 0;
  if ((param_5 & 0x200) == 0) {
    uVar9 = 1;
  }
  else {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10 + 8);
  }
  lVar16 = *(longlong *)(param_1 + 0x78);
  if ((param_5 & 0x200) == 0) {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4);
    lVar17 = lVar16;
  }
  else {
    uVar18 = *(uint *)(lVar16 + lVar7);
    lVar17 = lVar7;
    lVar7 = lVar16;
  }
  uVar6 = (ulonglong)uVar18;
  uVar18 = *(uint *)(lVar7 + lVar17 + 0xc);
  local_e8 = 0;
  local_e0 = 0;
  uVar19 = 0;
  _local_130 = CONCAT44(stack0xfffffffffffffed4,uVar18);
  local_120 = param_2;
  while (uVar3 = local_118, iVar1 = iStack_11c, uVar15 = local_120, (uint)uVar19 < uVar9) {
    local_90 = 0;
    local_d8[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4);
    lVar7 = thunk_FUN_180223bd0();
    lVar16 = *(longlong *)(param_6 + 0x20 + uVar19 * 0x40);
    if ((lVar16 == 0 || lVar16 == lVar7) && (param_4 == 0 || param_4 == lVar7)) {
      iVar5 = -0x7789f794;
    }
    else {
      puVar8 = (undefined8 *)FUN_180108168(lVar7,auStack_88,uVar19 * 0x40 + param_6,param_4);
      uStack_c8 = puVar8[1];
      local_d0 = *puVar8;
      uStack_b8 = puVar8[3];
      uStack_c0 = puVar8[2];
      uStack_a8 = puVar8[5];
      local_b0 = puVar8[4];
      uStack_98 = puVar8[7];
      uStack_a0 = puVar8[6];
      cVar4 = FUN_18010bcc0(&local_e8,local_d8);
      iVar5 = 0;
      if (cVar4 == '\0') {
        iVar5 = -0x7fffbffb;
      }
    }
    uVar15 = (uVar18 & 0xaaaaaaaa) >> 1 | (uVar18 & 0x55555555) << 1;
    uVar15 = (uVar15 & 0xcccccccc) >> 2 | (uVar15 & 0x33333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
    uVar6 = LZCOUNT(uVar15 >> 0x10 | uVar15 << 0x10);
    uVar15 = (uint)uVar6;
    if ((1 - (uVar15 >> 5) & 0xff) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      *(byte *)((longlong)&local_130 + (longlong)((int)uVar15 >> 3)) =
           *(byte *)((longlong)&local_130 + (longlong)((int)uVar15 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar15 & 7)) ^ 0xff);
      uVar18 = (uint)local_130;
    }
    uVar19 = (ulonglong)((uint)uVar19 + 1);
    lVar7 = local_e8;
    if (iVar5 < 0) goto LAB_1801bc28c;
  }
  iVar5 = thunk_FUN_1802236e4(DAT_180258900);
  if (iVar5 == 0) {
    FUN_1801085c8();
  }
  puVar10 = &DAT_180246591;
  uVar6 = 0x1b0;
  if (iVar1 == 2) {
    puVar11 = &DAT_1802463e1;
    puVar12 = &DAT_1802463e2;
    puVar13 = &DAT_1802463e3;
    puVar14 = &DAT_1802463e5;
  }
  else {
    uVar19 = (ulonglong)*(uint *)(param_1 + 0x10);
    puVar12 = (undefined1 *)(uVar19 * 0x1b0 + 0x180246592);
    puVar13 = (undefined1 *)(uVar19 * 0x1b0 + 0x180246593);
    puVar14 = (undefined1 *)(uVar19 * 0x1b0 + 0x180246595);
    puVar11 = &DAT_180246591 + uVar19 * 0x1b0;
  }
  local_100 = uVar3;
  uStack_fc = FUN_1801073d8(param_1,iVar1);
  lVar7 = local_e8;
  uStack_f8 = *puVar11;
  uStack_f4 = uStack_f4 & 0xffffff00;
  uStack_f7 = *puVar12;
  uStack_f6 = *puVar13;
  local_120 = *(uint *)(local_e8 + 8);
  iStack_11c = *(int *)(local_e8 + 0xc);
  bStack_f5 = param_9 ^ 1;
  iVar5 = -0x7ff8fff2;
  _local_130 = CONCAT15(*puVar14,CONCAT14(param_9,*(undefined4 *)
                                                   (puVar10 +
                                                   (ulonglong)*(uint *)(param_1 + 0x10) *
                                                   (uVar6 & 0xffffffff) + 7)));
  local_118 = (uint)*extraout_x11;
  _local_130 = CONCAT16(*extraout_x15,_local_130);
  _local_130 = CONCAT17(*extraout_x12,_local_130);
  lVar16 = FUN_1802229a8(0xc528);
  uVar6 = lVar16 + 0x17U & 0xfffffffffffffff0;
  *(longlong *)(uVar6 - 8) = lVar16;
  lVar16 = FUN_1801c29d8(uVar6,param_1,uVar15,iVar1,param_4,local_120,iStack_11c,local_118,
                         CONCAT44(uStack_fc,local_100),
                         CONCAT44(uStack_f4,
                                  CONCAT13(bStack_f5,
                                           CONCAT12(uStack_f6,CONCAT11(uStack_f7,uStack_f8)))),
                         &local_130);
  if (lVar16 == 0) goto LAB_1801bc280;
  uVar9 = (uint)local_e0;
  _local_130 = CONCAT15(*(undefined1 *)(lVar16 + 0xe82),*(undefined5 *)(lVar16 + 0xe7c));
  _local_130 = CONCAT16(*(undefined1 *)(lVar16 + 0xe81),_local_130);
  _local_130 = CONCAT17(*(undefined1 *)(*(longlong *)(lVar16 + 0x18) + 0x9f5),_local_130);
  local_128 = *(undefined1 *)(lVar16 + 0xe84);
  local_127 = *(undefined1 *)(lVar16 + 0x6897);
  iVar5 = FUN_180108868(lVar16,*(undefined4 *)
                                (*(longlong *)(param_1 + 0x68) + (ulonglong)uVar15 * 4),
                        local_e0 & 0xffffffff,lVar7,&local_130);
  if (iVar5 < 0) goto LAB_1801bc270;
  FUN_1801058c8(lVar16);
  puVar10 = &DAT_180229308;
  if (local_110 == 0) {
    puVar10 = &DAT_180229218;
  }
  iVar5 = FUN_1801bc2e8(lVar16 + 0x6838,puVar10,local_f0);
  if (-1 < iVar5) {
    iVar1 = *(int *)(param_1 + 0xfc);
    if (*(int *)(param_1 + 0xf8) != iVar1) {
      *(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)*(uint *)(param_1 + 0xf8) * 8) =
           lVar16;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
      uVar6 = 0;
      if (uVar9 != 0) {
        do {
          uVar18 = (int)uVar6 + 1;
          lVar17 = lVar7 + uVar6 * 0x50;
          puVar8 = (undefined8 *)(param_6 + uVar6 * 0x40);
          uVar20 = *(undefined8 *)(lVar17 + 8);
          uVar22 = *(undefined8 *)(lVar17 + 0x20);
          uVar21 = *(undefined8 *)(lVar17 + 0x18);
          puVar8[1] = *(undefined8 *)(lVar17 + 0x10);
          *puVar8 = uVar20;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          uVar20 = *(undefined8 *)(lVar17 + 0x28);
          uVar22 = *(undefined8 *)(lVar17 + 0x40);
          uVar21 = *(undefined8 *)(lVar17 + 0x38);
          puVar8[5] = *(undefined8 *)(lVar17 + 0x30);
          puVar8[4] = uVar20;
          puVar8[7] = uVar22;
          puVar8[6] = uVar21;
          uVar6 = (ulonglong)uVar18;
        } while (uVar18 < uVar9);
      }
      goto LAB_1801bc264;
    }
    uVar9 = iVar1 << 1;
    if (iVar1 == 0) {
      uVar9 = 0x10;
    }
    local_110 = CONCAT44(local_110._4_4_,uVar9);
    lVar17 = CONCAT44(0,uVar9) << 3;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = CONCAT44(0,uVar9);
    if (SUB168(auVar2 * ZEXT816(8),8) != 0) {
      lVar17 = -1;
    }
    lVar17 = FUN_1802229a8(lVar17);
    if (lVar17 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(lVar17,*(undefined8 *)(param_1 + 0xf0),
                          (ulonglong)*(uint *)(param_1 + 0xfc) << 3);
    }
    iVar5 = -0x7ff8fff2;
  }
  FUN_1801c2f00(lVar16);
LAB_1801bc264:
  if (iVar5 < 0) {
LAB_1801bc270:
    FUN_1801c2d60(lVar16);
    FUN_180222b28(*(undefined8 *)(lVar16 + -8));
  }
LAB_1801bc280:
  thunk_FUN_18022370c(DAT_180258900);
LAB_1801bc28c:
  FUN_1802229d8(lVar7);
  return iVar5;
}

