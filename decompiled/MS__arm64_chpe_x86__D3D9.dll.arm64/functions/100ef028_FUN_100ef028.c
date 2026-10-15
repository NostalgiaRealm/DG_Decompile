/*
 * FUN_100ef028 at 100ef028
 * undefined FUN_100ef028(void)
 * Address ranges: 100ef028-100f06c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x100eff10) */

ulonglong FUN_100ef028(int *param_1,uint param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong extraout_x1;
  undefined *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  uint extraout_w12;
  uint extraout_w13;
  uint extraout_w14;
  int extraout_w15;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  char local_1b0;
  uint *local_1ac;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint uStack_190;
  uint local_18c;
  uint uStack_188;
  uint local_184;
  int local_180;
  uint local_178 [4];
  int *local_168;
  uint local_160;
  undefined8 local_15c;
  undefined8 local_154;
  uint *local_14c;
  undefined8 local_148;
  int local_140 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined1 local_90;
  undefined1 local_8c;
  int *local_88;
  uint local_80 [12];
  uint local_50 [4];
  ulonglong extraout_x11;
  
  local_168 = param_1;
  local_88 = param_4;
  FUN_101325d0(param_3,0,0x1270);
  local_14c = (uint *)(param_1 + 1);
  iVar11 = *param_1;
  uVar13 = (ulonglong)param_3;
  local_160 = param_3;
  local_140[2] = 0;
  local_140[3] = 0;
  local_140[6] = 0;
  local_140[7] = 0;
  local_140[4] = 0;
  local_140[5] = 0;
  *(char *)(param_3 + 0x126e) = (char)iVar11;
  uVar16 = (ulonglong)(iVar11 == -0xfd00);
  local_140[10] = 0;
  local_140[0xb] = 0;
  local_140[8] = 0;
  local_140[9] = 0;
  local_140[0xe] = 0;
  local_140[0xf] = 0;
  local_140[0xc] = 0;
  local_140[0xd] = 0;
  local_140[0x12] = 0;
  local_140[0x13] = 0;
  local_140[0x10] = 0;
  local_140[0x11] = 0;
  local_140[0x16] = 0;
  local_140[0x17] = 0;
  local_140[0x14] = 0;
  local_140[0x15] = 0;
  local_140[0x1a] = 0;
  local_140[0x1b] = 0;
  local_140[0x18] = 0;
  local_140[0x19] = 0;
  local_140[0x1e] = 0;
  local_140[0x1f] = 0;
  local_140[0x1c] = 0;
  local_140[0x1d] = 0;
  *(undefined1 *)(param_3 + 0x126d) = 3;
  *(undefined1 *)(param_3 + 0x14a) = 1;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_15c = 0;
  local_154 = 0;
  *(undefined8 *)(param_3 + 0x1224) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1234) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1254) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x124c) = 0xffffffffffffffff;
  local_148 = 0;
  local_140[0] = 0;
  local_140[1] = 0;
  *(undefined8 *)(param_3 + 0x120) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x118) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x130) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x128) = 0xffffffffffffffff;
  *(undefined4 *)(param_3 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x13c) = 0xffffffff;
  local_1ac = (uint *)0x0;
  if (iVar11 == -0xfd00) {
    bVar6 = false;
    uVar26 = 0;
    uVar17 = 0;
    local_9c = param_2;
    local_1a4 = 0;
    uVar18 = 0;
    local_1b0 = '\0';
    local_198 = param_3;
    do {
      param_3 = local_198;
      if (bVar6) break;
      uVar19 = *local_14c;
      uVar20 = uVar19 & 0xe0ff0000;
      uStack_b8 = CONCAT44(1,uVar20);
      uVar30 = uVar19 & 0xffff;
      uVar9 = uVar19 >> 0x1c & 1;
      local_c0 = CONCAT44(uVar19,uVar19) & 0xffffffffffff;
      uVar22 = (uint)((uVar19 & 0xc0000000) == 0) & (uint)uVar16;
      local_b0._0_4_ = CONCAT13((byte)uVar9,0x10f0f);
      uVar27 = (uint)uVar18;
      iVar11 = (int)uVar13;
      if (0x50 < uVar30) {
        if (uVar30 < 0x52) {
          uVar19 = local_14c[1];
          uVar30 = uVar19 & 0x7ff;
          if ((uVar27 == 0) && (uVar9 == 0)) {
            uVar9 = 1;
          }
          else {
            uVar9 = 0;
          }
          if (((((uVar20 != 0) || (-1 < (int)uVar19)) ||
               ((uVar19 & 0x1800 | uVar19 >> 0x14 & 0x700) != 0x200)) ||
              (((uVar19 & 0xf000000) != 0 || ((uVar19 & 0xf0000) != 0xf0000)))) ||
             (uVar20 = 1, 0xdf < uVar30 || (uVar19 & 0xf00000) != 0)) {
            uVar20 = 0;
          }
          uVar20 = uVar20 & uVar9 & uVar22;
          uVar16 = (ulonglong)uVar20;
          if (uVar20 != 0) {
            iVar33 = iVar11 + uVar30 * 0x10;
            *(undefined1 *)(uVar30 + iVar11 + 0x331) = 1;
            *(uint *)(iVar33 + 0x414) = local_14c[2];
            *(uint *)(iVar33 + 0x418) = local_14c[3];
            *(uint *)(iVar33 + 0x41c) = local_14c[4];
            *(uint *)(iVar11 + (uVar30 + 0x42) * 0x10) = local_14c[5];
          }
          goto LAB_100ef264;
        }
        if (uVar30 == 0xfffe) {
          uVar16 = (ulonglong)((uVar9 ^ 1) & uVar22);
          local_14c = local_14c + (uVar19 >> 0x10) + 1;
          goto LAB_100f05ec;
        }
        if (uVar30 != 0xffff) goto switchD_100ef31c_caseD_20;
        bVar8 = (byte)uVar9 ^ 1;
        if (uVar20 != 0) {
          bVar8 = 0;
        }
        if ((int)uVar17 != 0) {
          uVar22 = 0;
        }
        local_a0 = (byte)uVar22;
        uVar30 = 0;
        do {
          if (*(int *)(iVar11 + uVar30 * 4 + 0x2f0) != 0) {
            bVar6 = local_1a4 == 0x1c;
            goto LAB_100ef2d8;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < 0x10);
        bVar6 = (bool)((byte)uVar22 & bVar8);
LAB_100ef2d8:
        uVar16 = (ulonglong)bVar6;
        bVar6 = true;
        goto LAB_100f05e8;
      }
      switch(uVar30) {
      case 0x1f:
        uVar30 = local_14c[2];
        uVar19 = (uVar30 & 0x1800 | uVar30 >> 0x14 & 0x7ff) >> 8;
        if ((uVar27 == 0) && (uVar20 == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        if ((uVar19 < 0x12) && ((0x20402U >> uVar19 & 1) != 0)) {
          uVar27 = 1;
        }
        else {
          uVar27 = 0;
        }
        if (((uVar20 != 0) || (-1 < (int)uVar30)) || (uVar20 = 1, (uVar30 & 0xf000000) != 0)) {
          uVar20 = 0;
        }
        uVar20 = uVar20 & uVar27 & uVar9 & uVar22;
        if (uVar20 != 0) {
          uVar22 = uVar30 & 0x7ff;
          if (*(byte *)(uVar19 + 0x10163a80) <= uVar22) {
            uVar20 = 0;
          }
          uVar16 = (ulonglong)uVar20;
          uVar9 = uVar30 & 0xf0000;
          if (uVar9 == 0) {
            uVar9 = 0xf0000;
          }
          if (uVar19 - 1 < 0x11) {
            uVar27 = local_14c[1];
            bVar8 = (byte)(uVar9 >> 0x10);
            switch(uVar19) {
            case 1:
              uVar19 = uVar27 & 0xf;
              uVar21 = uVar27 >> 0x10 & 0xf;
              if (((9 < uVar22) || ((uVar27 & 0xfff0fff0) != 0x80000000)) ||
                 (uVar27 = 1, (uVar30 & 0x900000) != 0 || 0xd < uVar19)) {
                uVar27 = 0;
              }
              uVar27 = uVar27 & uVar20;
              uVar24 = uVar19 << 4 | uVar21;
              uVar20 = 0;
              do {
                uVar32 = 0;
                if (uVar27 == 0) break;
                uVar32 = *(uint *)(iVar11 + uVar20 * 4 + 0x118);
                if (((uVar24 == uVar32 >> 0x18) || ((uVar32 >> 0x10 & 0xff) == uVar24)) ||
                   (((uVar32 >> 8 & 0xff) == uVar24 || (uVar29 = 1, (uVar32 & 0xff) == uVar24)))) {
                  uVar29 = 0;
                }
                uVar20 = uVar20 + 1;
                uVar27 = uVar29 & uVar27;
                uVar32 = uVar27;
              } while (uVar20 < 0x10);
              if ((uVar19 == 0xd) || (uVar20 = 1, uVar19 == 9 && uVar21 == 0)) {
                uVar20 = 0;
              }
              uVar16 = (ulonglong)(uVar20 & uVar32);
              if ((uVar20 & uVar32) != 0) {
                pbVar10 = (byte *)((int)&local_15c + uVar22 + 4);
                uVar21 = uVar19 << 4 | uVar21;
                *pbVar10 = bVar8 | *pbVar10;
                uVar13 = (ulonglong)local_160;
                uVar17 = local_148 >> 0x20;
                puVar28 = (uint *)(local_160 + (uVar22 + 0x46) * 4);
                uVar26 = local_148 & 0xffffffff;
                *puVar28 = (uVar21 | (uVar21 | (uVar21 | uVar21 << 8) << 8) << 8) &
                           *(uint *)(&DAT_10163aa0 + (uVar9 >> 0x10) * 4) |
                           *puVar28 & (*(uint *)(&DAT_10163aa0 + (uVar9 >> 0x10) * 4) ^ 0xffffffff);
                uVar18 = local_15c & 0xffffffff;
                if ((uVar30 & 0x400000) != 0 || uVar19 == 10) {
                  pbVar10 = (byte *)(((int)uVar22 >> 3) + local_160 + 0x140);
                  *pbVar10 = *pbVar10 | (byte)(1 << (ulonglong)(uVar30 & 7));
                }
                local_1ac = local_a8._4_4_;
                local_1a4 = (uint)local_a8;
                local_1b0 = local_b0._4_1_;
              }
              break;
            case 10:
              uVar19 = uVar27 & 0x78000000;
              if (((0xf < uVar22) || ((uVar27 & 0x87ffffff) != 0x80000000)) ||
                 (((uVar30 & 0xf00000) != 0 ||
                  (uVar30 = 1, uVar19 == 0x28000000 || (uVar19 + 0xf0000000 & 0xe7ffffff) != 0)))) {
                uVar30 = 0;
              }
              uVar16 = (ulonglong)(uVar30 & uVar20);
              *(byte *)(uVar22 + iVar11 + 0x14f) = (byte)(uVar19 >> 0x1b);
              break;
            case 0x11:
              if (((1 < uVar22) || ((uVar27 & 0xfff0fff0) != 0x80000000)) ||
                 (((uVar30 & 0xf00000) != 0 || (uVar30 = 1, 0xd < (uVar27 & 0xf))))) {
                uVar30 = 0;
              }
              uVar30 = uVar30 & uVar20;
              if (uVar22 == 0) {
                local_154._0_7_ = CONCAT16(bVar8,(undefined6)local_154);
                uVar16 = (ulonglong)
                         (uVar30 & ((uVar9 - 0x10000 & 0xfffcffff) == 0 && uVar9 != 0x40000));
              }
              else if (uVar22 == 1) {
                local_154 = CONCAT17(1,(undefined7)local_154);
                if (uVar9 != 0xf0000) {
                  uVar30 = 0;
                }
                uVar16 = (ulonglong)uVar30;
              }
              else {
                uVar16 = 0;
              }
            }
          }
          goto switchD_100ef3e8_caseD_2;
        }
        uVar16 = 0;
        goto LAB_100f0608;
      case 0x2f:
        uVar19 = local_14c[1];
        uVar30 = uVar19 & 0x7ff;
        if ((uVar27 == 0) && (uVar9 == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        if ((((uVar20 != 0) || (-1 < (int)uVar19)) ||
            ((uVar19 & 0x1800 | uVar19 >> 0x14 & 0x700) != 0xe00)) ||
           ((((uVar19 & 0xf000000) != 0 || ((uVar19 & 0xf0000) != 0xf0000)) ||
            (uVar20 = 1, (uVar19 & 0xf00000) != 0 || 0xf < uVar30)))) {
          uVar20 = 0;
        }
        uVar20 = uVar20 & uVar9 & uVar22;
        uVar16 = (ulonglong)uVar20;
        if (uVar20 != 0) {
          *(undefined1 *)(uVar30 + iVar11 + 0x2a0) = 1;
          *(uint *)(iVar11 + uVar30 * 4 + 0x2b0) = local_14c[2];
        }
switchD_100ef3e8_caseD_2:
        local_14c = local_14c + 3;
        goto LAB_100f05ec;
      case 0x30:
        uVar19 = local_14c[1];
        uVar30 = uVar19 & 0x7ff;
        if ((uVar27 == 0) && (uVar9 == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        if ((((uVar20 != 0) || (-1 < (int)uVar19)) ||
            ((uVar19 & 0x1800 | uVar19 >> 0x14 & 0x700) != 0x700)) ||
           ((((uVar19 & 0xf000000) != 0 || ((uVar19 & 0xf0000) != 0xf0000)) ||
            (uVar20 = 1, (uVar19 & 0xf00000) != 0 || 0xf < uVar30)))) {
          uVar20 = 0;
        }
        uVar20 = uVar20 & uVar9 & uVar22;
        uVar16 = (ulonglong)uVar20;
        if (uVar20 != 0) {
          *(undefined1 *)(uVar30 + iVar11 + 400) = 1;
          iVar33 = iVar11 + uVar30 * 0x10;
          *(uint *)(iVar11 + (uVar30 + 0x1a) * 0x10) = local_14c[2];
          *(uint *)(iVar33 + 0x1a4) = local_14c[3];
          *(uint *)(iVar33 + 0x1a8) = local_14c[4];
          *(uint *)(iVar33 + 0x1ac) = local_14c[5];
        }
LAB_100ef264:
        local_14c = local_14c + 6;
        goto LAB_100f05ec;
      }
switchD_100ef31c_caseD_20:
      if (0x60 < uVar30) {
        uVar22 = 0;
      }
      if (((uVar19 & 0xff0000) == 0) ||
         ((((uVar30 - 0x29 < 0x36 &&
            ((0x20000000000011U >> ((ulonglong)(uVar30 - 0x29) & 0x3f) & 1) != 0)) &&
           ((uVar19 & 0xff0000) - 0x10000 < 0x50001)) ||
          ((uVar30 == 0x42 && (((uVar19 & 0xff0000) == 0x10000 || ((uVar19 & 0xff0000) == 0x20000)))
           ))))) {
        uVar20 = 1;
      }
      else {
        uVar20 = 0;
      }
      if ((uVar19 & 0xe0000000) != 0) {
        uVar20 = 0;
      }
      cVar4 = *(char *)(uVar30 + 0x10163750);
      iVar33 = (int)cVar4;
      if ((cVar4 == -1) ||
         ((uVar9 != 0 &&
          ((iVar5 = cVar4 * 8 - iVar33, iVar12 = iVar5 * 2,
           ((byte)(&DAT_101637c0)[iVar5 * 2] >> 2 & 1) != 0 ||
           ((*(short *)(&DAT_101637c6 + iVar12) == 0 && (*(short *)(&DAT_101637c4 + iVar12) == 0))))
          )))) {
        uVar19 = 0;
      }
      else {
        uVar19 = 1;
      }
      iVar34 = (int)cVar4;
      iVar5 = iVar33 * 8 - iVar34;
      iVar12 = iVar5 * 2;
      puVar14 = &DAT_101637c0 + iVar12;
      puVar28 = local_14c + 1;
      uVar21 = *puVar28;
      uVar20 = uVar19 & uVar20 & uVar22 &
               (uint)(*(short *)(&DAT_101637c4 + iVar12) == 0 || (int)uVar21 < 0);
      if (uVar20 == 0) {
        uVar16 = 0;
        break;
      }
      puVar2 = local_14c;
      if (uVar27 != 0) {
        puVar2 = local_1ac;
      }
      local_a8 = CONCAT44(puVar2,(uint)local_a8);
      if (local_9c <= uVar27) {
        uVar20 = 0;
      }
      uVar18 = (ulonglong)((byte)(&DAT_101637c1)[iVar12] + uVar27);
      local_15c = CONCAT44(local_15c._4_4_,(byte)(&DAT_101637c1)[iVar12] + uVar27);
      if (((byte)(&DAT_101637c0)[iVar5 * 2] >> 1 & 1) != 0) {
        *(int *)(iVar11 + 0x1218) = *(int *)(iVar11 + 0x1218) + 1;
      }
      if (*(ushort *)(&DAT_101637c4 + iVar34 * 0xe) == 0) {
        uVar21 = 0;
        uVar22 = 0;
        puVar31 = puVar28;
      }
      else {
        uVar19 = (uVar21 & 0x1800 | uVar21 >> 0x14 & 0x7ff) >> 8;
        uVar22 = uVar21 & 0x7ff;
        puVar31 = local_14c + 2;
        if ((*(byte *)(uVar19 + 0x10163a80) <= uVar22) || (uVar27 = 1, (uVar21 & 0xf000000) != 0)) {
          uVar27 = 0;
        }
        if (0x700000 < (uVar21 & 0xf00000)) {
          uVar27 = 0;
        }
        uVar20 = uVar27 & uVar20;
        if ((uVar20 != 0) &&
           ((*(ushort *)(&DAT_10163720 + uVar19 * 2) & *(ushort *)(&DAT_101637c4 + iVar34 * 0xe)) ==
            0)) {
          uVar20 = 0;
        }
        uVar21 = uVar21 & 0xf0000;
        if (uVar21 == 0) {
          uVar21 = 0xf0000;
        }
      }
      uVar16 = (ulonglong)uVar20;
      if (uVar9 != 0) {
        uVar9 = *puVar31;
        uVar19 = uVar9 & 0xff0000;
        if (((-1 < (int)uVar9) || ((uVar9 & 0x1800 | uVar9 >> 0x14 & 0x700) != 0x1300)) ||
           (uVar27 = 1, (uVar9 & 0x7ff) != 0)) {
          uVar27 = 0;
        }
        uVar20 = (uint)((((uVar19 == 0xe40000 || uVar19 == 0) || uVar19 == 0x550000) ||
                        uVar19 == 0xaa0000) || uVar19 == 0xff0000) &
                 (uint)((uVar9 & 0xf000000) == 0xd000000 || (uVar9 & 0xf000000) == 0) &
                 uVar27 & uVar20;
        uVar16 = (ulonglong)uVar20;
        if (uVar20 != 0) {
          puVar31 = puVar31 + 1;
          local_14c = puVar28;
        }
      }
      puVar28 = local_14c;
      uVar9 = FUN_100f0928(uVar30);
      uVar24 = (uint)extraout_x11;
      local_80[0] = 0;
      local_80[1] = 0;
      local_80[2] = 0;
      local_80[3] = 0;
      uStack_b8 = CONCAT44(uVar9,(undefined4)uStack_b8);
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      uVar27 = 0;
      local_80[9] = 0;
      uVar19 = 0;
      local_50[0] = 0;
      iVar11 = 0;
      local_80[4] = 0;
      local_80[5] = 0;
      local_80[6] = 0;
      local_80[7] = 0;
      uVar20 = 0;
      local_1a0 = local_1a0 & 0xffffff00;
      iVar12 = (int)extraout_x1;
      local_19c = extraout_w13;
      if ((int)uVar16 != 0) {
        local_98 = extraout_w15;
        local_94 = uVar9;
        local_18c = (uint)uVar18;
        local_194 = (uint)uVar17;
        uStack_190 = (uint)uVar26;
        uVar13 = extraout_x11;
        uStack_188 = uVar22;
        local_184 = uVar21;
        do {
          uVar24 = (uint)uVar13;
          if (3 < uVar20) break;
          iVar5 = ((iVar34 * 8 - iVar33) + uVar20) * 2;
          uVar3 = *(ushort *)(&DAT_101637c6 + iVar5);
          if (uVar3 == 0) break;
          uVar21 = puVar31[uVar20 + iVar11];
          uVar32 = (uVar21 & 0x1800 | uVar21 >> 0x14 & 0x7ff) >> 8;
          uVar22 = uVar21 & 0x7ff;
          local_178[uVar20] = uVar22;
          bVar8 = *(byte *)(uVar32 + 0x10163a80);
          uVar9 = uVar21 & 0xf000000;
          uVar27 = uVar21 >> 0x1f;
          local_80[uVar20 + 8] = uVar9;
          if (bVar8 <= uVar22) {
            uVar27 = 0;
          }
          uVar29 = uVar21 & 0xff0000;
          local_50[uVar20] = uVar29;
          if ((((uVar9 == 0) || ((uVar9 == 0x1000000 && (uVar32 < 3 || uVar32 == 0x11)))) ||
              (((uVar9 + 0xf5000000 & 0xfeffffff) == 0 &&
               ((uVar32 < 3 || (uVar32 == 0x11 && uVar22 == 0)))))) ||
             ((uVar9 == 0xd000000 && (uVar32 == 0x13 || uVar32 == 0xe)))) {
            uVar15 = 1;
          }
          else {
            uVar15 = 0;
          }
          uVar15 = uVar15 & uVar27 & (uint)uVar16;
          if (uVar15 == 0) {
            uVar22 = 0;
LAB_100efdb4:
            uVar16 = (ulonglong)uVar22;
          }
          else {
            if (uVar32 == 0x11) {
              uVar27 = 0x1000;
              if (uVar22 != 1) {
                uVar27 = 0x800;
              }
            }
            else {
              uVar27 = (uint)*(ushort *)(&DAT_10163720 + uVar32 * 2);
            }
            local_80[uVar20] = uVar27;
            if ((uVar3 & uVar27) == 0) {
              uVar15 = 0;
            }
            uVar22 = (uint)(uVar29 == 0xe40000 || (uVar3 & 0x4000) == 0) &
                     ((uVar3 & 0x8000) == 0 || uVar9 == 0) & uVar15;
            if (uVar27 == 0x1000) {
              bVar7 = uVar29 != 0xe40000;
              uVar29 = 0;
              local_50[uVar20] = 0;
              if (bVar7) {
                uVar22 = 0;
              }
LAB_100efc8c:
              bVar7 = true;
            }
            else {
              if ((((uVar29 == 0) || (uVar29 == 0x550000)) || (uVar29 == 0xaa0000)) ||
                 (uVar29 == 0xff0000)) goto LAB_100efc8c;
              bVar7 = false;
            }
            *(bool *)((int)&local_1a0 + uVar20) = bVar7;
            uVar22 = ((uVar3 & 0x2000) == 0 || bVar7) & uVar22;
            if ((uVar21 >> 0xd & 1) == 0) goto LAB_100efdb4;
            uVar9 = (puVar31 + uVar20 + iVar11)[1];
            uVar27 = (uVar9 & 0x1800 | uVar9 >> 0x14 & 0x7ff) >> 8;
            if ((uVar27 != 0xf) || (uVar21 = 1, (uVar9 & 0xff0000) != 0xe40000 || uVar32 != 1)) {
              uVar21 = 0;
            }
            if (((uint)*(byte *)(uVar27 + 0x10163a80) <= (uVar9 & 0x7ff)) ||
               (uVar27 = 1, (uVar9 & 0xf000000) != 0)) {
              uVar27 = 0;
            }
            iVar11 = iVar11 + 1;
            local_80[uVar20 + 4] = uVar9;
            if (uVar32 == 1) {
              uVar16 = (ulonglong)(uVar27 & uVar21 & uVar22);
              if (uVar20 != 0) {
                uVar22 = 0;
                do {
                  if ((uint)uVar16 == 0) break;
                  if (local_80[uVar22] == 1) {
                    uVar16 = (ulonglong)
                             ((uint)(local_178[uVar22] == local_178[uVar20]) & (uint)uVar16);
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar20);
              }
              *(undefined1 *)(iVar12 + 0x147) = 1;
              if (local_1b0 != '\0') {
                *(undefined1 *)(iVar12 + 0x148) = 1;
              }
            }
            else {
              uVar16 = 0;
            }
          }
          uVar22 = (uint)(byte)puVar14[3];
          if (uVar30 == 0x5a) {
            if (uVar20 < 2) {
              uVar22 = 3;
            }
          }
          else {
            if (uVar30 == 0x42 && uVar20 == 0) {
LAB_100efdf4:
              uVar22 = 7;
              if ((*(byte *)((puVar28[3] & 0x7ff) + iVar12 + 0x14f) & 0x1f) == 2) {
                uVar22 = 3;
              }
              if (local_98 != 0) {
                uVar22 = uVar22 | 8;
              }
            }
            else if (uVar30 == 0x5d) {
              if (uVar20 == 1) goto LAB_100efe70;
              goto LAB_100efdf4;
            }
            if ((uVar30 == 0x5f && uVar20 == 0) &&
               (uVar22 = 0xb, (*(byte *)((puVar28[3] & 0x7ff) + iVar12 + 0x14f) & 0x1f) != 2)) {
              uVar22 = 0xf;
            }
          }
LAB_100efe70:
          uVar26 = uVar13 & 0xffffffff;
          if (puVar14[2] != '\0') {
            uVar22 = uVar22 & uVar24;
          }
          uVar9 = 1 << (ulonglong)(uVar29 >> 0x14 & 3);
          if ((uVar22 & 4) == 0) {
            uVar9 = 0;
          }
          uVar27 = 1 << (ulonglong)(uVar29 >> 0x12 & 3);
          if ((uVar22 & 2) == 0) {
            uVar27 = 0;
          }
          uVar21 = 1 << (ulonglong)(uVar29 >> 0x10 & 3);
          if ((uVar22 & 1) == 0) {
            uVar21 = 0;
          }
          uVar32 = 1 << (ulonglong)(uVar29 >> 0x16);
          if ((uVar22 & 8) == 0) {
            uVar32 = 0;
          }
          uVar32 = uVar9 | uVar27 | uVar21 | uVar32;
          if (uVar30 != 0x1e) {
            if ((uVar20 == 2) || (*(short *)(&DAT_101637c8 + iVar5) == 0)) {
              uVar22 = local_94;
              if (local_94 == 0) goto LAB_100f00f4;
            }
            else {
              uVar22 = 1;
            }
            local_90 = (char)uVar13;
            puVar1 = local_178 + uVar20;
            uVar9 = 0;
            uVar27 = local_80[uVar20];
            do {
              bVar8 = (byte)uVar32;
              if (uVar27 < 0x20) {
                switch(uVar27) {
                case 1:
                  if (local_80[uVar20 + 4] == 0) {
                    uVar19 = (uint)*(byte *)((int)&local_15c + uVar9 + *puVar1 + 4);
                    pbVar10 = (byte *)(uVar9 + *puVar1 + iVar12);
                    goto LAB_100eff6c;
                  }
                  uVar19 = 0xf;
                  uVar21 = 0;
                  do {
                    pbVar10 = (byte *)(uVar21 + iVar12);
                    uVar21 = uVar21 + 1;
                    *pbVar10 = bVar8 | *pbVar10;
                  } while (uVar21 < 10);
                  break;
                case 2:
                  pbVar10 = (byte *)(uVar9 + *puVar1 + iVar12 + 0x38);
                  goto LAB_100eff68;
                case 4:
                  pbVar10 = (byte *)(uVar9 + *puVar1 + iVar12 + 10);
                  uVar19 = (uint)*pbVar10;
                  bVar8 = *pbVar10 | bVar8;
                  goto LAB_100f00dc;
                case 8:
                  uVar19 = 0xf;
                  pbVar10 = (byte *)(uVar9 + *puVar1 + iVar12 + 0x15f);
                  goto LAB_100effb0;
                case 0x10:
                  puVar25 = (undefined1 *)(uVar9 + *puVar1 + iVar12 + 0x16f);
                  goto LAB_100f00b8;
                }
              }
              else if (uVar27 < 0x21) {
                pbVar10 = (byte *)(uVar9 + *puVar1 + iVar12 + 0x17f);
LAB_100eff68:
                uVar19 = 0xf;
LAB_100eff6c:
                bVar8 = *pbVar10 | bVar8;
LAB_100f00dc:
                *pbVar10 = bVar8;
              }
              else if (uVar27 < 0x400) {
                if (uVar27 == 0x40) {
                  uVar19 = 0xf;
                  if (*(char *)(uVar9 + *puVar1 + iVar12 + 0x14f) == '\0') {
                    uVar19 = 0;
                  }
                }
                else if (uVar27 == 0x80) {
                  puVar25 = (undefined1 *)(uVar9 + *puVar1 + iVar12 + 0x146);
                  goto LAB_100f00b8;
                }
              }
              else {
                if (0x400 < uVar27) {
                  if (uVar27 == 0x800) {
                    uVar19 = extraout_w12 & 0xff;
                    pbVar10 = (byte *)(iVar12 + 0x144);
                  }
                  else {
                    if (uVar27 != 0x1000) goto switchD_100f002c_caseD_3;
                    uVar19 = extraout_w14 & 0xff;
                    pbVar10 = (byte *)(iVar12 + 0x145);
                  }
LAB_100effb0:
                  bVar8 = bVar8 | *pbVar10;
                  goto LAB_100f00dc;
                }
                puVar25 = (undefined1 *)(uVar9 + *puVar1 + iVar12 + 0x180);
LAB_100f00b8:
                uVar19 = 0xf;
                *puVar25 = 1;
              }
switchD_100f002c_caseD_3:
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar22);
            uVar26 = uVar13 & 0xff;
            local_180 = iVar11;
          }
LAB_100f00f4:
          uVar24 = (uint)uVar26;
          if ((uVar30 != 0x58 || uVar20 == 0) && (uVar30 != 1 || local_19c != 4)) {
            uVar16 = (ulonglong)((uint)((uVar19 & uVar32 & 0xff) == (uVar32 & 0xff)) & (uint)uVar16)
            ;
          }
          uVar20 = uVar20 + 1;
          uVar13 = uVar26;
        } while ((int)uVar16 != 0);
        uVar17 = (ulonglong)local_194;
        uVar26 = (ulonglong)uStack_190;
        uVar18 = (ulonglong)local_18c;
        uVar27 = local_1a0 & 0xff;
        uVar22 = uStack_188;
        uVar21 = local_184;
      }
      if (local_19c < 0x100) {
        if (local_19c == 4) {
          if (uVar30 != 1) {
            pbVar10 = (byte *)(uVar22 + iVar12 + 10);
            goto LAB_100f0160;
          }
          pbVar10 = (byte *)(uVar22 + iVar12 + 10);
          local_8c = (char)uVar27;
          *pbVar10 = *pbVar10 & ((byte)uVar24 ^ 0xff);
          uVar20 = 0;
          do {
            uVar9 = 1 << (ulonglong)(uVar20 & 0x1f);
            if (((uVar9 & uVar24) != 0) &&
               ((1 << (ulonglong)(local_50[0] >> (ulonglong)((uVar20 + 8) * 2 & 0x1f) & 3) & uVar19)
                != 0)) {
              *pbVar10 = *pbVar10 | (byte)uVar9;
            }
            uVar20 = uVar20 + 1;
            local_180 = local_80[9];
          } while (uVar20 < 4);
        }
        else if (local_19c == 0x20) goto LAB_100f01a4;
      }
      else {
        if (local_19c < 0x101) {
          pbVar10 = (byte *)(uVar22 + iVar12 + 0x14b);
        }
        else {
          if (local_19c != 0x200) goto LAB_100f0238;
          uVar16 = (ulonglong)((uint)(uVar21 == 0xf0000) & (uint)uVar16);
          *(undefined1 *)(iVar12 + 0x330) = 1;
LAB_100f01a4:
          pbVar10 = (byte *)(uVar22 + iVar12 + 0x17f);
        }
LAB_100f0160:
        *pbVar10 = (byte)uVar24 | *pbVar10;
      }
LAB_100f0238:
      uVar20 = (uint)uVar16;
      uVar19 = (uint)uVar17;
      uVar13 = extraout_x1;
      local_1ac = puVar2;
      switch(uVar30) {
      case 6:
      case 7:
      case 0xe:
      case 0xf:
        uVar16 = (ulonglong)(uVar27 & uVar20);
        break;
      case 0x14:
      case 0x16:
        bVar7 = uVar21 == 0xf0000;
        goto LAB_100f0264;
      case 0x15:
      case 0x17:
        bVar7 = uVar21 == 0x70000;
        goto LAB_100f0264;
      case 0x18:
        bVar7 = uVar21 == 0x30000;
LAB_100f0264:
        if ((bVar7) && (local_80[9] == 0)) {
LAB_100f026c:
          uVar19 = 1;
        }
        else {
          uVar19 = 0;
        }
LAB_100f0278:
        uVar16 = (ulonglong)(uVar19 & uVar20);
        break;
      case 0x19:
      case 0x1a:
        *(undefined1 *)(iVar12 + 0x14a) = 0;
        break;
      case 0x1b:
        uVar16 = (ulonglong)(uVar19 < 0x20 & uVar20);
        piVar23 = local_140 + uVar19 + 1;
        iVar11 = 1;
        goto LAB_100f02bc;
      case 0x1c:
        bVar7 = local_140[uVar19] == 0;
        goto LAB_100f030c;
      case 0x1d:
        bVar7 = local_140[uVar19] == 1;
        goto LAB_100f0328;
      case 0x1e:
        uVar16 = (ulonglong)(local_1a4 == 0x1c & uVar20);
        *(int *)(iVar12 + local_178[0] * 4 + 0x2f0) = (int)puVar28 - (int)local_168 >> 2;
        *(undefined1 *)(iVar12 + 0x14a) = 0;
        local_1b0 = '\x01';
        local_b0._0_5_ = CONCAT14(1,(undefined4)local_b0);
        break;
      case 0x21:
        if (((local_19c == local_80[0]) && (uVar22 == local_178[0])) ||
           ((local_19c == local_80[1] && (uVar22 == local_178[1])))) {
          uVar22 = 0;
        }
        else {
          uVar22 = 1;
        }
        uVar16 = (ulonglong)
                 (((uVar21 - 0x10000 & 0xfff8ffff) == 0 && uVar21 != 0x80000) & uVar20 & uVar22);
        break;
      case 0x24:
        if ((local_19c == local_80[0]) && (uVar19 = 0, uVar22 == local_178[0])) goto LAB_100f0278;
        goto LAB_100f026c;
      case 0x25:
        uVar19 = (uint)((uVar21 - 0x10000 & 0xfffcffff) == 0 && uVar21 != 0x40000);
        goto LAB_100f0278;
      case 0x26:
        uVar16 = (ulonglong)(uVar19 < 0x20 & uVar20);
        piVar23 = local_140 + uVar19 + 1;
        iVar11 = 2;
        goto LAB_100f02bc;
      case 0x27:
        bVar7 = local_140[uVar19] == 2;
        goto LAB_100f0328;
      case 0x28:
      case 0x29:
        uVar16 = (ulonglong)(uVar19 < 0x20 & uVar20);
        piVar23 = local_140 + uVar19 + 1;
        iVar11 = 3;
LAB_100f02bc:
        local_148._4_4_ = uVar19 + 1;
        *piVar23 = iVar11;
        uVar13 = (ulonglong)local_160;
        uVar18 = local_15c & 0xffffffff;
        uVar17 = (ulonglong)local_148._4_4_;
        uVar26 = (ulonglong)((int)local_148 + 1U);
        local_148 = CONCAT44(local_148._4_4_,(int)local_148 + 1U);
        *(undefined1 *)(local_160 + 0x14a) = 0;
        local_1ac = local_a8._4_4_;
        local_1b0 = local_b0._4_1_;
        puVar28 = local_14c;
        uVar30 = local_c0._4_4_;
        break;
      case 0x2a:
        bVar7 = local_140[uVar19] == 3;
LAB_100f030c:
        uVar16 = (ulonglong)(bVar7 & uVar20);
        break;
      case 0x2b:
        bVar7 = local_140[uVar19] == 3;
LAB_100f0328:
        uVar17 = (ulonglong)(uVar19 - 1);
        uVar22 = (int)uVar26 - 1;
        uVar26 = (ulonglong)uVar22;
        uVar16 = (ulonglong)(bVar7 & uVar20);
        local_148 = CONCAT44(uVar19 - 1,uVar22);
        break;
      case 0x2c:
        uVar9 = 0;
        uVar22 = 1;
        do {
          if (uVar19 < uVar22) break;
          piVar23 = local_140 + uVar22;
          uVar22 = uVar22 + 1;
          bVar7 = *piVar23 - 1U < 2;
          uVar9 = (uint)bVar7;
        } while (!bVar7);
        goto LAB_100f0438;
      case 0x2d:
        uVar9 = 0;
        uVar22 = 1;
        do {
          if (uVar19 < uVar22) break;
          piVar23 = local_140 + uVar22;
          uVar22 = uVar22 + 1;
          uVar9 = (uint)(*piVar23 - 1U < 2);
        } while (uVar9 == 0);
        goto LAB_100f0438;
      case 0x42:
      case 0x5d:
      case 0x5f:
        *(uint *)(iVar12 + 0x1214) =
             1 << (ulonglong)(local_178[1] & 0x1f) | *(uint *)(iVar12 + 0x1214);
        break;
      case 0x60:
        uVar9 = 0;
        uVar22 = 1;
        do {
          if (uVar19 < uVar22) break;
          piVar23 = local_140 + uVar22;
          uVar22 = uVar22 + 1;
          uVar9 = (uint)(*piVar23 - 1U < 2);
        } while (uVar9 == 0);
LAB_100f0438:
        uVar16 = (ulonglong)(uVar9 & uVar20);
      }
      if (*(short *)(puVar14 + 4) != 0) {
        puVar28 = puVar28 + 1;
      }
      uVar20 = 0;
      local_14c = puVar28;
      if ((int)uVar16 != 0) {
        while ((uVar20 < 4 && (*(short *)(&DAT_101637c6 + (iVar33 * 7 + uVar20) * 2) != 0))) {
          if (((*puVar31 & 0x1800 | *puVar31 >> 0x14 & 0x700) != 0x1100) &&
             (local_80[uVar20 + 4] != 0)) {
            puVar31 = puVar31 + 1;
            local_14c = local_14c + 1;
          }
          puVar31 = puVar31 + 1;
          local_14c = local_14c + 1;
          uVar20 = uVar20 + 1;
        }
      }
      local_a8 = CONCAT44(local_a8._4_4_,uVar30);
      local_1a4 = uVar30;
LAB_100f05e8:
      local_14c = local_14c + 1;
LAB_100f05ec:
      param_3 = local_198;
    } while ((int)uVar16 != 0);
  }
LAB_100f0608:
  puVar28 = local_14c;
  piVar23 = local_168;
  uVar30 = 0;
  do {
    if ((*(int *)(param_3 + 0x2f0 + uVar30 * 4) == 0) ||
       (*(char *)(uVar30 + param_3 + 0x180) != '\0')) {
      uVar20 = 1;
    }
    else {
      uVar20 = 0;
    }
    uVar30 = uVar30 + 1;
    uVar20 = uVar20 & (uint)uVar16;
    uVar16 = (ulonglong)uVar20;
  } while (uVar30 < 0x10);
  (&DAT_0000126c)[param_3] = 0xff;
  if (uVar20 != 0) {
    local_1a0 = 0;
    bVar8 = FUN_100f0a00(local_168,local_1ac,param_3 + 0x2f0,&DAT_10163af8,&local_1a0);
    uVar16 = (ulonglong)bVar8;
    *(undefined1 *)(param_3 + 0x149) = (undefined1)local_1a0;
    *local_88 = (int)puVar28 - (int)piVar23 >> 2;
  }
  return uVar16;
}

