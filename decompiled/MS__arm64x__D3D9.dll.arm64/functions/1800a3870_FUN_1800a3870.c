/*
 * FUN_1800a3870 at 1800a3870
 * undefined FUN_1800a3870(void)
 * Address ranges: 1800a3870-1800a3d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a3870(longlong param_1,uint param_2,int param_3,longlong param_4,uint param_5,
                 longlong param_6,longlong param_7,undefined8 *param_8,byte param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 *extraout_x11;
  byte *extraout_x12;
  undefined1 *extraout_x13;
  undefined1 *extraout_x14;
  undefined1 *extraout_x15;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_117;
  uint local_110 [2];
  undefined8 *local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  byte bStack_f5;
  uint uStack_f4;
  longlong local_f0;
  ulonglong local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [64];
  
  if (param_8 == (undefined8 *)0x0) {
    return -0x7789f794;
  }
  if (*(uint *)(param_1 + 0x70) <= param_2) {
    return -0x7789f794;
  }
  uVar6 = FUN_180002178(param_1,param_3);
  if ((uVar6 & 1) == 0) {
    return -0x7789f794;
  }
  uVar10 = 0xfffff009;
  if (param_9 != 0) {
    uVar10 = 0xefff1009;
  }
  if ((uVar10 & param_5) != 0) {
    return -0x7789f794;
  }
  uVar10 = param_5 & 0xe0;
  if (uVar10 != 0x20) {
    if (uVar10 == 0x40) goto LAB_1800a3900;
    if (uVar10 != 0x80) {
      return -0x7789f794;
    }
  }
  if ((param_5 >> 4 & 1) != 0) {
    return -0x7789f794;
  }
LAB_1800a3900:
  if ((param_6 == 0) ||
     (((param_5 >> 9 & 1) != 0 &&
      (*(int *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10 + 4) != 0)))) {
    return -0x7789f794;
  }
  *param_8 = 0;
  lVar7 = (ulonglong)param_2 * 0x10;
  if ((param_5 & 0x200) == 0) {
    uVar10 = 1;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)param_2 * 0x10 + 8);
  }
  lVar16 = *(longlong *)(param_1 + 0x78);
  if ((param_5 & 0x200) == 0) {
    uVar18 = *(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4);
    lVar9 = lVar16;
  }
  else {
    uVar18 = *(uint *)(lVar16 + lVar7);
    lVar9 = lVar7;
    lVar7 = lVar16;
  }
  uVar6 = (ulonglong)uVar18;
  local_f0 = 0;
  local_e8 = 0;
  uVar18 = *(uint *)(lVar7 + lVar9 + 0xc);
  uVar17 = 0;
  local_120 = param_7;
  local_110[0] = uVar18;
  local_108 = param_8;
  while (puVar8 = local_108, lVar7 = local_120, (uint)uVar17 < uVar10) {
    local_98 = 0;
    local_e0[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x68) + uVar6 * 4);
    lVar7 = (*__imp_USER32_dll_GetDesktopWindow)();
    lVar16 = *(longlong *)(param_6 + 0x20 + uVar17 * 0x40);
    if ((lVar16 == 0 || lVar16 == lVar7) && (param_4 == 0 || param_4 == lVar7)) {
      iVar5 = -0x7789f794;
    }
    else {
      puVar8 = (undefined8 *)FUN_180002f20(lVar7,auStack_90,uVar17 * 0x40 + param_6,param_4);
      uStack_d0 = puVar8[1];
      local_d8 = *puVar8;
      uStack_c0 = puVar8[3];
      uStack_c8 = puVar8[2];
      uStack_b0 = puVar8[5];
      local_b8 = puVar8[4];
      uStack_a0 = puVar8[7];
      uStack_a8 = puVar8[6];
      cVar4 = FUN_180006570(&local_f0,local_e0);
      iVar5 = 0;
      if (cVar4 == '\0') {
        iVar5 = -0x7fffbffb;
      }
    }
    uVar14 = (uVar18 & 0xaaaaaaaa) >> 1 | (uVar18 & 0x55555555) << 1;
    uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
    uVar6 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
    uVar14 = (uint)uVar6;
    if ((1 - (uVar14 >> 5) & 0xff) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      *(byte *)((longlong)local_110 + (longlong)((int)uVar14 >> 3)) =
           *(byte *)((longlong)local_110 + (longlong)((int)uVar14 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
      uVar18 = local_110[0];
    }
    uVar17 = (ulonglong)((uint)uVar17 + 1);
    lVar16 = local_f0;
    if (iVar5 < 0) goto LAB_1800a3d68;
  }
  iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
  if (iVar5 == 0) {
    FUN_180003398();
  }
  puVar11 = &DAT_180248ea1;
  uVar6 = 0x1b0;
  if (param_3 == 2) {
    uVar15 = 0x180248000;
    puVar12 = &DAT_180248cf2;
    puVar13 = &DAT_180248cf3;
  }
  else {
    puVar12 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + 0x180248ea2);
    puVar13 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1b0 + 0x180248ea3);
    uVar15 = 0x180248ea0;
  }
  local_100 = param_5;
  uStack_fc = FUN_1800021c8(uVar15,param_1,param_3);
  lVar16 = local_f0;
  uStack_f8 = *extraout_x11;
  uStack_f4 = uStack_f4 & 0xffffff00;
  iVar5 = -0x7ff8fff2;
  uStack_f7 = *puVar12;
  uStack_f6 = *puVar13;
  bStack_f5 = param_9 ^ 1;
  uVar1 = *(undefined4 *)(local_f0 + 8);
  local_110[0] = (uint)*extraout_x12;
  local_108 = (undefined8 *)CONCAT44(local_108._4_4_,*(undefined4 *)(local_f0 + 0xc));
  local_120._0_6_ =
       CONCAT15(*extraout_x15,
                CONCAT14(param_9,*(undefined4 *)
                                  (puVar11 +
                                  (ulonglong)*(uint *)(param_1 + 0x10) * (uVar6 & 0xffffffff) + 7)))
  ;
  local_120._0_7_ = CONCAT16(*extraout_x14,(undefined6)local_120);
  local_120 = CONCAT17(*extraout_x13,(undefined7)local_120);
  lVar9 = FUN_180102f80(0xc528);
  uVar6 = lVar9 + 0x17U & 0xfffffffffffffff0;
  *(longlong *)(uVar6 - 8) = lVar9;
  lVar9 = FUN_1800a98c0(uVar6,param_1,param_2,param_3,param_4,uVar1,
                        (ulonglong)local_108 & 0xffffffff,local_110[0],CONCAT44(uStack_fc,local_100)
                        ,CONCAT44(uStack_f4,
                                  CONCAT13(bStack_f5,
                                           CONCAT12(uStack_f6,CONCAT11(uStack_f7,uStack_f8)))),
                        &local_120);
  if (lVar9 == 0) goto LAB_1800a3d54;
  uVar10 = (uint)local_e8;
  local_120._0_6_ = CONCAT15(*(undefined1 *)(lVar9 + 0xe82),*(undefined5 *)(lVar9 + 0xe7c));
  local_120._0_7_ = CONCAT16(*(undefined1 *)(lVar9 + 0xe81),(undefined6)local_120);
  local_120 = CONCAT17(*(undefined1 *)(*(longlong *)(lVar9 + 0x18) + 0x9f5),(undefined7)local_120);
  local_118 = *(undefined1 *)(lVar9 + 0xe84);
  local_117 = *(undefined1 *)(lVar9 + 0x6897);
  iVar5 = FUN_180003678(lVar9,*(undefined4 *)
                               (*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4),
                        local_e8 & 0xffffffff,lVar16,&local_120);
  if (iVar5 < 0) goto LAB_1800a3d44;
  FUN_1800017f0(lVar9);
  puVar11 = &DAT_180229588;
  if (lVar7 == 0) {
    puVar11 = &DAT_180229498;
  }
  iVar5 = FUN_1800a3db8(lVar9 + 0x6838,puVar11,puVar8);
  if (iVar5 < 0) {
LAB_1800a3d30:
    FUN_1800a9de8(lVar9);
  }
  else {
    iVar2 = *(int *)(param_1 + 0xfc);
    if (*(int *)(param_1 + 0xf8) == iVar2) {
      uVar18 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar18 = 0x10;
      }
      lVar7 = CONCAT44(0,uVar18) << 3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar18);
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        lVar7 = -1;
      }
      lVar7 = thunk_FUN_180102f80(lVar7);
      if (lVar7 == 0) {
        iVar5 = -0x7ff8fff2;
        goto LAB_1800a3d30;
      }
      thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0xf0),
                          (ulonglong)*(uint *)(param_1 + 0xfc) << 3);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0xf0));
      *(longlong *)(param_1 + 0xf0) = lVar7;
      *(uint *)(param_1 + 0xfc) = uVar18;
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)*(uint *)(param_1 + 0xf8) * 8) = lVar9;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        uVar18 = (int)uVar6 + 1;
        lVar7 = lVar16 + uVar6 * 0x50;
        puVar8 = (undefined8 *)(param_6 + uVar6 * 0x40);
        uVar20 = *(undefined8 *)(lVar7 + 8);
        uVar19 = *(undefined8 *)(lVar7 + 0x20);
        uVar15 = *(undefined8 *)(lVar7 + 0x18);
        puVar8[1] = *(undefined8 *)(lVar7 + 0x10);
        *puVar8 = uVar20;
        puVar8[3] = uVar19;
        puVar8[2] = uVar15;
        uVar20 = *(undefined8 *)(lVar7 + 0x28);
        uVar19 = *(undefined8 *)(lVar7 + 0x40);
        uVar15 = *(undefined8 *)(lVar7 + 0x38);
        puVar8[5] = *(undefined8 *)(lVar7 + 0x30);
        puVar8[4] = uVar20;
        puVar8[7] = uVar19;
        puVar8[6] = uVar15;
        uVar6 = (ulonglong)uVar18;
      } while (uVar18 < uVar10);
    }
  }
  if (iVar5 < 0) {
LAB_1800a3d44:
    FUN_1800a9c48(lVar9);
    FUN_180103118(*(undefined8 *)(lVar9 + -8));
  }
LAB_1800a3d54:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
LAB_1800a3d68:
  thunk_FUN_180102fc0(lVar16);
  return iVar5;
}

