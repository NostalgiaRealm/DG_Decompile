/*
 * FUN_100f1140 at 100f1140
 * undefined FUN_100f1140(void)
 * Address ranges: 100f1140-100f241b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100f1140(uint *param_1,undefined2 param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  ulonglong extraout_x1;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  byte bVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  char extraout_w11;
  ulonglong uVar29;
  ulonglong extraout_x12;
  ulonglong extraout_x13;
  undefined1 *puVar30;
  byte *pbVar31;
  ulonglong extraout_x14;
  uint uVar32;
  uint extraout_w15;
  uint uVar33;
  int iVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint local_1ec;
  uint local_1e8 [2];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  uint *puStack_1d4;
  undefined4 local_1d0;
  uint uStack_1cc;
  uint local_1c8;
  uint local_1c0 [4];
  uint *local_1b0;
  uint local_1a8 [6];
  byte local_190;
  undefined8 *local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint *local_17c;
  undefined8 local_178;
  int local_170 [32];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint *local_d8;
  byte local_d0;
  uint *local_cc;
  uint local_c8;
  uint uStack_c4;
  int iStack_c0;
  undefined1 local_bc;
  int *local_b8;
  uint local_b0 [4];
  uint auStack_a0 [4];
  undefined8 local_90;
  undefined2 local_88;
  undefined2 local_86;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  
  local_1b0 = param_1;
  local_b8 = param_4;
  FUN_101325d0(param_3,0,0x4a70);
  uVar33 = *param_1;
  uVar15 = (ulonglong)param_3;
  uStack_7c = 0x8000800020002;
  uStack_84 = 0x3000300010001;
  uStack_6c = 0;
  uStack_64 = 0;
  uStack_5c = 0x10001000000000;
  bVar10 = uVar33 + 0x1fe00 < 2;
  uVar17 = (ulonglong)bVar10;
  uStack_4c = 0x10001000000000;
  local_170[2] = 0;
  local_170[3] = 0;
  local_170[6] = 0;
  local_170[7] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[10] = 0;
  local_170[0xb] = 0;
  local_170[8] = 0;
  local_170[9] = 0;
  local_170[0xe] = 0;
  local_170[0xf] = 0;
  local_170[0xc] = 0;
  local_170[0xd] = 0;
  local_90 = 0x2000100020000c;
  uStack_74 = 0x100010;
  uStack_54 = 0x10001;
  local_44 = 0x10000;
  local_190 = 0xfffe0200 < uVar33;
  local_170[0x12] = 0;
  local_170[0x13] = 0;
  local_170[0x10] = 0;
  local_170[0x11] = 0;
  local_170[0x16] = 0;
  local_170[0x17] = 0;
  local_170[0x14] = 0;
  local_170[0x15] = 0;
  local_18c = &local_90;
  uVar29 = (ulonglong)local_190;
  local_170[0x1a] = 0;
  local_170[0x1b] = 0;
  local_170[0x18] = 0;
  local_170[0x19] = 0;
  local_170[0x1e] = 0;
  local_170[0x1f] = 0;
  local_170[0x1c] = 0;
  local_170[0x1d] = 0;
  local_188 = 0;
  param_1 = param_1 + 1;
  *(char *)(param_3 + 0x4a6d) = (char)uVar33;
  uVar13 = 0;
  local_180 = 0;
  *(undefined1 *)(param_3 + 0x4a6c) = 2;
  local_178 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_1ec = 0;
  local_d8 = (uint *)0x0;
  local_170[0] = 0;
  local_170[1] = 0;
  local_184 = param_3;
  local_17c = param_1;
  local_88 = param_2;
  local_86 = param_2;
  if (bVar10) {
    bVar10 = false;
    uVar23 = 0;
    uVar18 = 0;
    uVar20 = 0;
    uVar22 = ZEXT48(local_18c);
    local_1c8 = 0;
    local_1e8[0] = param_3;
    do {
      iVar14 = (int)uVar15;
      param_3 = local_1e8[0];
      local_17c = param_1;
      if (bVar10) break;
      uVar39 = *param_1;
      uVar37 = uVar39 & 0xe0ff0000;
      uStack_e8 = CONCAT44(1,uVar37);
      uVar38 = (uint)((uVar39 & 0xc0000000) == 0) & (uint)uVar17;
      uVar33 = uVar39 & 0xffff;
      uVar40 = uVar39 >> 0x1c & 1;
      local_f0 = CONCAT44(uVar39,uVar39) & 0xffffffffffff;
      local_e0._0_4_ = CONCAT13((byte)uVar40,0x10f0f);
      *(int *)(iVar14 + 0x4a68) = *(int *)(iVar14 + 0x4a68) + 1;
      iVar27 = (int)uVar20;
      iVar21 = (int)uVar22;
      if (0x50 < uVar33) {
        if (uVar33 < 0x52) {
          uVar39 = param_1[1];
          uVar33 = uVar39 & 0x7ff;
          if ((iVar27 == 0) && (uVar40 == 0)) {
            uVar40 = 1;
          }
          else {
            uVar40 = 0;
          }
          if (((((uVar37 == 0) && ((int)uVar39 < 0)) &&
               ((uVar39 & 0x1800 | uVar39 >> 0x14 & 0x700) == 0x200)) &&
              (((uVar39 & 0xf000000) == 0 && ((uVar39 & 0xf0000) == 0xf0000)))) &&
             ((uVar39 & 0xf00000) == 0)) {
            iVar27 = 10;
            if (*(char *)(iVar14 + 0x4a6d) == '\0') {
              iVar27 = 8;
            }
            uVar37 = 1;
            if (*(ushort *)(iVar27 + iVar21) <= uVar33) goto LAB_100f1398;
          }
          else {
LAB_100f1398:
            uVar37 = 0;
          }
          uVar37 = uVar37 & uVar40 & uVar38;
          uVar17 = (ulonglong)uVar37;
          if (uVar37 != 0) {
            uVar40 = param_1[2];
            uVar39 = param_1[3];
            uVar38 = param_1[4];
            uVar37 = param_1[5];
            *(undefined1 *)(iVar14 + uVar33 + 0x44f) = 1;
            *(uint *)(iVar14 + (uVar33 + 0x85) * 0x10) = uVar40;
            iVar14 = iVar14 + uVar33 * 0x10;
            *(uint *)(iVar14 + 0x854) = uVar39;
            *(uint *)(iVar14 + 0x858) = uVar38;
            *(uint *)(iVar14 + 0x85c) = uVar37;
          }
          goto LAB_100f13fc;
        }
        if (uVar33 == 0xfffe) {
          param_1 = param_1 + (uVar39 >> 0x10) + 1;
          uVar17 = (ulonglong)((uVar40 ^ 1) & uVar38);
          goto LAB_100f22e0;
        }
        if (uVar33 != 0xffff) goto switchD_100f14b8_caseD_20;
        bVar25 = (byte)uVar40 ^ 1;
        if (uVar37 != 0) {
          bVar25 = 0;
        }
        if ((int)uVar18 != 0) {
          uVar38 = 0;
        }
        local_d0 = (byte)uVar38;
        uVar33 = 0;
        do {
          if (*(int *)(iVar14 + uVar33 * 4 + 0x4a28) != 0) {
            bVar10 = local_1c8 == 0x1c;
            goto LAB_100f1474;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 < 0x10);
        bVar10 = (bool)(local_d0 & bVar25);
LAB_100f1474:
        uVar17 = (ulonglong)bVar10;
        bVar10 = true;
        goto LAB_100f22dc;
      }
      switch(uVar33) {
      case 0x1f:
        uVar33 = param_1[1];
        uVar39 = param_1[2];
        if ((iVar27 == 0) && (uVar40 == 0)) {
          uVar40 = 1;
        }
        else {
          uVar40 = 0;
        }
        if (((((uVar37 == 0) && ((int)uVar39 < 0)) &&
             ((uVar39 & 0x1800 | uVar39 >> 0x14 & 0x700) == 0x100)) &&
            (((uVar39 & 0xf000000) == 0 && ((uVar39 & 0xf0000) == 0xf0000)))) &&
           ((uVar39 & 0xf00000) == 0)) {
          iVar27 = 6;
          if (*(char *)(iVar14 + 0x4a6d) == '\0') {
            iVar27 = 4;
          }
          if (((uint)*(ushort *)(iVar27 + iVar21) <= (uVar39 & 0x7ff)) ||
             (uVar37 = 1, (uVar33 & 0xfff0fff0) != 0x80000000 || 0xd < (uVar33 & 0xf)))
          goto LAB_100f156c;
        }
        else {
LAB_100f156c:
          uVar37 = 0;
        }
        uVar37 = uVar37 & uVar40 & uVar38;
        uVar17 = (ulonglong)uVar37;
        if (uVar37 != 0) {
          *(byte *)(iVar14 + (uVar39 & 0x7ff)) =
               (byte)(uVar33 >> 0x10) & 0xf | (byte)((uVar33 & 0xf) << 4);
          local_1ec = 1 << (ulonglong)(uVar39 & 0x1f) | local_1ec;
          local_188 = local_1ec;
        }
        goto LAB_100f15a0;
      case 0x2f:
        uVar39 = param_1[1];
        uVar33 = uVar39 & 0x7ff;
        if ((iVar27 == 0) && (uVar40 == 0)) {
          uVar40 = 1;
        }
        else {
          uVar40 = 0;
        }
        if ((((uVar37 != 0) || (-1 < (int)uVar39)) ||
            ((uVar39 & 0x1800 | uVar39 >> 0x14 & 0x700) != 0xe00)) ||
           ((((uVar39 & 0xf000000) != 0 || ((uVar39 & 0xf0000) != 0xf0000)) ||
            (uVar37 = 1, (uVar39 & 0xf00000) != 0 || 0xf < uVar33)))) {
          uVar37 = 0;
        }
        uVar37 = uVar37 & uVar40 & uVar38;
        uVar17 = (ulonglong)uVar37;
        if (uVar37 != 0) {
          *(undefined1 *)(uVar33 + iVar14 + 0x49d8) = 1;
          *(uint *)(iVar14 + uVar33 * 4 + 0x49e8) = param_1[2];
        }
LAB_100f15a0:
        param_1 = param_1 + 3;
        goto LAB_100f22e0;
      case 0x30:
        uVar39 = param_1[1];
        uVar33 = uVar39 & 0x7ff;
        if ((iVar27 == 0) && (uVar40 == 0)) {
          uVar40 = 1;
        }
        else {
          uVar40 = 0;
        }
        if ((((uVar37 != 0) || (-1 < (int)uVar39)) ||
            ((uVar39 & 0x1800 | uVar39 >> 0x14 & 0x700) != 0x700)) ||
           ((((uVar39 & 0xf000000) != 0 || ((uVar39 & 0xf0000) != 0xf0000)) ||
            (((uVar39 & 0xf00000) != 0 || (uVar37 = 1, param_1[5] != 0 || 0xf < uVar33)))))) {
          uVar37 = 0;
        }
        uVar37 = uVar37 & uVar40 & uVar38;
        uVar17 = (ulonglong)uVar37;
        if (uVar37 != 0) {
          *(undefined1 *)(uVar33 + iVar14 + 0x48c5) = 1;
          iVar27 = iVar14 + uVar33 * 0x10;
          *(uint *)(iVar27 + 0x48d8) = param_1[2];
          *(uint *)(iVar27 + 0x48dc) = param_1[3];
          *(uint *)(iVar14 + (uVar33 + 0x48e) * 0x10) = param_1[4];
          *(uint *)(iVar27 + 0x48e4) = param_1[5];
        }
LAB_100f13fc:
        param_1 = param_1 + 6;
        goto LAB_100f22e0;
      }
switchD_100f14b8_caseD_20:
      if (0x60 < uVar33) {
        uVar38 = 0;
      }
      if (((uVar39 & 0xff0000) == 0) ||
         (((uVar33 - 0x29 < 0x36 &&
           ((0x20000000000011U >> ((ulonglong)(uVar33 - 0x29) & 0x3f) & 1) != 0)) &&
          ((uVar39 & 0xff0000) - 0x10000 < 0x50001)))) {
        uVar37 = 1;
      }
      else {
        uVar37 = 0;
      }
      if ((uVar39 & 0xe0000000) != 0) {
        uVar37 = 0;
      }
      cVar7 = *(char *)(uVar33 + 0x10163b90);
      iVar34 = (int)cVar7;
      if (cVar7 == -1) {
LAB_100f17e0:
        uVar39 = 0;
        iVar8 = iVar34 * 0xc;
      }
      else {
        iVar8 = (iVar34 + cVar7 * 2) * 4;
        if ((((*(byte *)(iVar8 + 0x10163c00) >> 3 & 1) != 0) && ((uVar29 & 0xff) == 0)) ||
           ((uVar40 != 0 &&
            (((*(byte *)(iVar8 + 0x10163c00) >> 2 & 1) != 0 ||
             ((*(short *)(&DAT_10163c06 + iVar8) == 0 && (*(short *)(iVar8 + 0x10163c04) == 0)))))))
           ) goto LAB_100f17e0;
        uVar39 = 1;
      }
      uVar5 = *(ushort *)(iVar8 + 0x10163c04);
      puVar1 = param_1 + 1;
      uVar36 = *puVar1;
      if ((uVar40 == 0) || (uVar32 = (uint)uVar29 & 0xff, (uVar29 & 0xff) != 0)) {
        uVar32 = 1;
      }
      uVar32 = uVar32 & (uint)(uVar5 == 0 || (int)uVar36 < 0) & uVar39 & uVar37 & uVar38;
      if (uVar32 == 0) {
        uVar17 = 0;
        break;
      }
      local_d8 = param_1;
      if (iVar27 != 0) {
        local_d8 = (uint *)uVar13;
      }
      local_180 = (uint)*(byte *)(iVar8 + 0x10163c01) + iVar27;
      uVar20 = (ulonglong)local_180;
      if (0xff < local_180) {
        uVar32 = 0;
      }
      if (uVar5 == 0) {
        uVar36 = 0;
        puVar35 = puVar1;
      }
      else {
        uVar37 = (uVar36 & 0x1800 | uVar36 >> 0x14 & 0x7ff) >> 8;
        puVar35 = param_1 + 2;
        if (((uint)*(ushort *)
                    (iVar21 + ((uint)(*(char *)(iVar14 + 0x4a6d) != '\0') | uVar37 << 1) * 2) <=
             (uVar36 & 0x7ff)) || (uVar38 = 1, (uVar36 & 0xf000000) != 0)) {
          uVar38 = 0;
        }
        if ((uVar36 & 0xf00000) != 0) {
          uVar38 = 0;
        }
        uVar32 = uVar38 & uVar32;
        if ((uVar32 != 0) && ((*(ushort *)(&DAT_10163b60 + uVar37 * 2) & uVar5) == 0)) {
          uVar32 = 0;
        }
        uVar36 = uVar36 & 0xf0000;
        if (uVar36 == 0) {
          uVar36 = 0xf0000;
        }
      }
      uVar17 = (ulonglong)uVar32;
      if (uVar40 != 0) {
        uVar38 = *puVar35;
        uVar37 = uVar38 & 0xff0000;
        if (((-1 < (int)uVar38) || ((uVar38 & 0x1800 | uVar38 >> 0x14 & 0x700) != 0x1300)) ||
           (uVar39 = 1, (uVar38 & 0x7ff) != 0)) {
          uVar39 = 0;
        }
        uVar37 = (uint)((((uVar37 == 0xe40000 || uVar37 == 0) || uVar37 == 0x550000) ||
                        uVar37 == 0xaa0000) || uVar37 == 0xff0000) &
                 (uint)((uVar38 & 0xf000000) == 0xd000000 || (uVar38 & 0xf000000) == 0) &
                 uVar39 & uVar32;
        uVar17 = (ulonglong)uVar37;
        if (uVar37 != 0) {
          puVar35 = puVar35 + 1;
          local_17c = puVar1;
        }
      }
      param_1 = local_17c;
      uVar38 = FUN_100f0928(uVar33);
      uVar39 = (uint)extraout_x14;
      local_1c0[0] = 0;
      local_1c0[1] = 0;
      uStack_e8 = CONCAT44(uVar38,(undefined4)uStack_e8);
      local_1c0[2] = 0;
      local_1a8[0] = 0;
      local_1a8[1] = 0;
      iVar14 = 0;
      local_1a8[2] = 0;
      uVar37 = 0;
      auStack_a0[1] = 0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_b0[2] = 0;
      iVar27 = (int)uVar15;
      uVar13 = extraout_x1;
      uVar29 = extraout_x12;
      if ((int)uVar17 != 0) {
        local_cc = puVar35;
        local_c8 = uVar38;
        local_1d0 = (undefined4)uVar20;
        local_1d8 = (undefined4)uVar23;
        local_1e0 = (undefined4)extraout_x1;
        uStack_1dc = (undefined4)uVar18;
        uVar29 = extraout_x13;
        uVar13 = extraout_x14;
        do {
          uVar39 = (uint)uVar13;
          if (2 < uVar37) break;
          iVar21 = (uVar37 + ((int)cVar7 + iVar34 * 2) * 2) * 2;
          uVar5 = *(ushort *)(&DAT_10163c06 + iVar21);
          if (uVar5 == 0) break;
          uVar4 = puVar35[uVar37 + iVar14];
          uVar28 = (uVar4 & 0x1800 | uVar4 >> 0x14 & 0x7ff) >> 8;
          uVar40 = uVar4 & 0x7ff;
          local_1a8[uVar37] = uVar40;
          uVar32 = uVar4 & 0xf000000;
          uVar9 = uVar4 >> 0x1f;
          auStack_a0[uVar37] = uVar32;
          uVar2 = uVar4 & 0xff0000;
          uVar24 = (uint)(*(char *)(iVar27 + 0x4a6d) != '\0');
          if (*(ushort *)((int)uVar22 + (uVar24 + uVar28 * 2) * 2) <= uVar40) {
            uVar9 = 0;
          }
          if (((uVar32 == 0) || (uVar32 == 0x1000000 && uVar28 < 3)) ||
             ((uVar32 == 0xd000000 && (uVar28 == 0x13 || uVar28 == 0xe)))) {
            uVar16 = 1;
          }
          else {
            uVar16 = 0;
          }
          uVar4 = uVar4 & 0x2000;
          uVar16 = (uint)(uVar4 == 0 || uVar28 == 2) & uVar16 & uVar9 & (uint)uVar17;
          uVar9 = 0;
          if (uVar16 != 0) {
            uVar6 = *(ushort *)(&DAT_10163b60 + uVar28 * 2);
            local_1c0[uVar37] = (uint)uVar6;
            if ((uVar6 & uVar5) == 0) {
              uVar16 = 0;
            }
            uVar9 = (uint)((uVar5 & 0x1000) == 0 ||
                          (((uVar2 == 0x550000 || uVar2 == 0) || uVar2 == 0xaa0000) ||
                          uVar2 == 0xff0000)) &
                    (uint)(uVar2 == 0xe40000 || (uVar5 & 0x2000) == 0) &
                    ((uVar5 & 0x4000) == 0 || uVar32 == 0) & uVar16;
            if (uVar4 != 0) {
              uVar28 = (puVar35 + uVar37 + iVar14)[1];
              uVar16 = (uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8;
              uVar32 = uVar28 & 0xff0000;
              if (uVar16 == 3) {
                if ((uVar32 != 0x550000 && uVar32 != 0) && uVar32 != 0xaa0000) {
                  bVar11 = uVar32 == 0xff0000;
                  goto LAB_100f1bc0;
                }
LAB_100f1bc4:
                uVar19 = 1;
              }
              else {
                bVar11 = false;
                if (uVar32 == 0xe40000) {
                  bVar11 = uVar16 == 0xf;
                }
LAB_100f1bc0:
                if (bVar11) goto LAB_100f1bc4;
                uVar19 = 0;
              }
              if (((uint)*(ushort *)((int)uVar22 + (uVar24 + uVar16 * 2) * 2) <= (uVar28 & 0x7ff))
                 || (uVar24 = 1, (uVar28 & 0xf000000) != 0)) {
                uVar24 = 0;
              }
              uVar9 = uVar24 & uVar19 & uVar9;
              if (uVar16 == 3) {
                pbVar31 = (byte *)((uVar28 & 0x7ff) + iVar27 + 0x40);
                *pbVar31 = (byte)(1 << (ulonglong)(uVar32 >> 0x14 & 3)) |
                           (byte)(1 << (ulonglong)(uVar32 >> 0x12 & 3)) |
                           (byte)(1 << (ulonglong)(uVar32 >> 0x10 & 3)) |
                           (byte)(1 << (ulonglong)(uVar32 >> 0x16)) | *pbVar31;
              }
              iVar14 = iVar14 + 1;
              local_b0[uVar37] = uVar28;
            }
          }
          uVar32 = (uint)*(byte *)(iVar8 + 0x10163c03);
          if (*(char *)(iVar8 + 0x10163c02) != '\0') {
            uVar32 = (uint)*(byte *)(iVar8 + 0x10163c03) & (uint)uVar29;
          }
          uVar28 = 1 << (ulonglong)(uVar2 >> 0x14 & 3);
          if ((uVar32 & 4) == 0) {
            uVar28 = 0;
          }
          uVar24 = 1 << (ulonglong)(uVar2 >> 0x12 & 3);
          if ((uVar32 & 2) == 0) {
            uVar24 = 0;
          }
          uVar16 = 1 << (ulonglong)(uVar2 >> 0x10 & 3);
          if ((uVar32 & 1) == 0) {
            uVar16 = 0;
          }
          uVar2 = 1 << (ulonglong)(uVar2 >> 0x16);
          if ((uVar32 & 8) == 0) {
            uVar2 = 0;
          }
          uVar32 = 0;
          uVar2 = uVar28 | uVar24 | uVar16 | uVar2;
          if (uVar33 != 0x1e) {
            if ((uVar37 == 2) || (*(short *)(&DAT_10163c08 + iVar21) == 0)) {
              uVar28 = local_c8;
              if (uVar38 == 0) goto LAB_100f1e60;
            }
            else {
              uVar28 = 1;
            }
            uStack_c4 = uVar39;
            iStack_c0 = iVar14;
            uVar39 = 0;
            local_bc = (char)uVar9;
            uVar24 = local_1c0[uVar37];
            uVar32 = 0;
            do {
              bVar25 = (byte)uVar2;
              if (uVar24 < 0x10) {
                switch(uVar24) {
                case 1:
                  pbVar31 = (byte *)(uVar39 + uVar40 + iVar27 + 0x10);
                  break;
                case 2:
                  pbVar31 = (byte *)(uVar39 + uVar40 + iVar27 + 0x41);
                  break;
                default:
                  goto switchD_100f1dec_caseD_3;
                case 4:
                  pbVar31 = (byte *)(uVar39 + uVar40 + iVar27 + 0x20);
                  break;
                case 8:
                  iVar21 = uVar39 + uVar40 + iVar27;
                  *(byte *)(iVar21 + 0x4893) = bVar25 | *(byte *)(iVar21 + 0x4893);
                  goto LAB_100f1e44;
                }
LAB_100f1e38:
                *pbVar31 = bVar25 | *pbVar31;
LAB_100f1e44:
                uVar32 = 0xf;
              }
              else {
                if (uVar24 < 0x11) {
                  puVar30 = (undefined1 *)(uVar39 + uVar40 + iVar27 + 0x48a3);
LAB_100f1d54:
                  *puVar30 = 1;
                  goto LAB_100f1e44;
                }
                if (uVar24 < 0x80) {
                  if (uVar24 == 0x20) {
                    pbVar31 = (byte *)(uVar39 + uVar40 + iVar27 + 0x48b3);
                    goto LAB_100f1e38;
                  }
                  if (uVar24 != 0x40) goto switchD_100f1dec_caseD_3;
                  pbVar31 = (byte *)(uVar39 + uVar40 + iVar27 + 0x40);
                  *pbVar31 = bVar25 | *pbVar31;
LAB_100f1db4:
                  puVar30 = (undefined1 *)(uVar39 + uVar40 + iVar27 + 0x48c4);
                  goto LAB_100f1d54;
                }
                if (uVar24 < 0x81) goto LAB_100f1db4;
                if (uVar24 == 0x100) {
                  puVar30 = (undefined1 *)(uVar39 + uVar40 + iVar27 + 0x48b4);
                  goto LAB_100f1d54;
                }
              }
switchD_100f1dec_caseD_3:
              uVar39 = uVar39 + 1;
            } while (uVar39 < uVar28);
            uVar13 = uVar13 & 0xffffffff;
          }
LAB_100f1e60:
          uVar39 = (uint)uVar13;
          if ((uVar4 == 0) || (uVar40 = 0, local_1c0[uVar37] == 2)) {
            uVar40 = 1;
          }
          if ((uVar2 & 0xff & uVar32) != (uVar2 & 0xff)) {
            uVar40 = 0;
          }
          uVar17 = (ulonglong)(uVar40 & uVar9);
          if (uVar4 != 0) {
            *(undefined1 *)(iVar27 + 0x44e) = 1;
          }
          bVar25 = (byte)uVar29;
          if (extraout_w15 < 0x200) {
            if (extraout_w15 == 4) {
              pbVar31 = (byte *)(uVar39 + iVar27 + 0x20);
            }
            else if (extraout_w15 == 0x20) {
              pbVar31 = (byte *)(uVar39 + iVar27 + 0x48b3);
            }
            else {
              if (extraout_w15 != 0x40) goto LAB_100f1f5c;
              pbVar31 = (byte *)(uVar39 + iVar27 + 0x40);
            }
            *pbVar31 = *pbVar31 | bVar25;
          }
          else {
            if (extraout_w15 < 0x201) {
              pbVar31 = (byte *)(uVar39 + iVar27 + 0x441);
LAB_100f1eb8:
              bVar25 = *pbVar31 | extraout_w11 << 7 | bVar25;
            }
            else {
              if (extraout_w15 == 0x400) {
                pbVar31 = (byte *)(uVar39 + iVar27 + 0x444);
                goto LAB_100f1eb8;
              }
              if (extraout_w15 != 0x800) goto LAB_100f1f5c;
              pbVar31 = (byte *)(uVar39 + iVar27 + 0x446);
              bVar25 = bVar25 | extraout_w11 << 7 | *pbVar31;
            }
            *pbVar31 = bVar25;
          }
LAB_100f1f5c:
          uVar29 = uVar29 & 0xffffffff;
          uVar37 = uVar37 + 1;
        } while ((uVar40 & uVar9) != 0);
        uVar13 = extraout_x1 & 0xffffffff;
        uVar18 = uVar18 & 0xffffffff;
        uVar23 = uVar23 & 0xffffffff;
        uVar29 = extraout_x12 & 0xff;
        uVar20 = uVar20 & 0xffffffff;
        puStack_1d4 = param_1;
        uStack_1cc = uVar36;
      }
      uVar37 = (uint)uVar17;
      uVar38 = (uint)uVar18;
      switch(uVar33) {
      case 0x14:
      case 0x16:
        bVar11 = uVar36 == 0xf0000;
        goto LAB_100f1fa4;
      case 0x15:
      case 0x17:
        bVar11 = uVar36 == 0x70000;
        goto LAB_100f1fa4;
      case 0x18:
        bVar11 = uVar36 == 0x30000;
LAB_100f1fa4:
        if ((bVar11) && (auStack_a0[1] == 0)) {
LAB_100f1fac:
          uVar38 = 1;
        }
        else {
          uVar38 = 0;
        }
LAB_100f1fb8:
        uVar17 = (ulonglong)(uVar38 & uVar37);
        break;
      case 0x1b:
        uVar17 = (ulonglong)(uVar38 < 0x20 & uVar37);
        piVar26 = local_170 + uVar38 + 1;
        iVar14 = 1;
        goto LAB_100f20ac;
      case 0x1c:
        bVar11 = local_170[uVar38] == 0;
        goto LAB_100f20ec;
      case 0x1d:
        bVar11 = local_170[uVar38] == 1;
        goto LAB_100f2108;
      case 0x1e:
        uVar17 = (ulonglong)(local_1c8 == 0x1c & uVar37);
        *(int *)(iVar27 + local_1a8[0] * 4 + 0x4a28) = (int)param_1 - (int)local_1b0 >> 2;
        break;
      case 0x21:
        if (((extraout_w15 == local_1c0[0]) && (uVar39 == local_1a8[0])) ||
           ((extraout_w15 == local_1c0[1] && (uVar39 == local_1a8[1])))) {
          uVar38 = 0;
        }
        else {
          uVar38 = 1;
        }
        uVar17 = (ulonglong)
                 (((uVar36 - 0x10000 & 0xfff8ffff) == 0 && uVar36 != 0x80000) & uVar37 & uVar38);
        break;
      case 0x24:
        if ((extraout_w15 != local_1c0[0]) || (uVar38 = 0, uVar39 != local_1a8[0]))
        goto LAB_100f1fac;
        goto LAB_100f1fb8;
      case 0x25:
        if ((local_1c0[1] != local_1c0[2]) || (uVar38 = 0, local_1a8[1] != local_1a8[2])) {
          uVar38 = 1;
        }
        uVar17 = (ulonglong)
                 (((uVar36 - 0x10000 & 0xfffcffff) == 0 && uVar36 != 0x40000) & uVar37 & uVar38);
        break;
      case 0x26:
        uVar17 = (ulonglong)(uVar38 < 0x20 & uVar37);
        piVar26 = local_170 + uVar38 + 1;
        iVar14 = 2;
        goto LAB_100f20ac;
      case 0x27:
        bVar11 = local_170[uVar38] == 2;
        goto LAB_100f2108;
      case 0x28:
      case 0x29:
        uVar17 = (ulonglong)(uVar38 < 0x20 & uVar37);
        piVar26 = local_170 + uVar38 + 1;
        iVar14 = 3;
LAB_100f20ac:
        local_178._4_4_ = uVar38 + 1;
        *piVar26 = iVar14;
        uVar13 = ZEXT48(local_d8);
        uVar18 = (ulonglong)local_178._4_4_;
        uVar23 = (ulonglong)((int)local_178 + 1U);
        uVar22 = ZEXT48(local_18c);
        uVar15 = (ulonglong)local_184;
        uVar20 = (ulonglong)local_180;
        local_178 = CONCAT44(local_178._4_4_,(int)local_178 + 1U);
        uVar29 = (ulonglong)local_190;
        local_1ec = local_188;
        param_1 = local_17c;
        uVar33 = local_f0._4_4_;
        break;
      case 0x2a:
        bVar11 = local_170[uVar38] == 3;
LAB_100f20ec:
        uVar17 = (ulonglong)(bVar11 & uVar37);
        break;
      case 0x2b:
        bVar11 = local_170[uVar38] == 3;
LAB_100f2108:
        uVar18 = (ulonglong)(uVar38 - 1);
        uVar39 = (int)uVar23 - 1;
        uVar23 = (ulonglong)uVar39;
        uVar17 = (ulonglong)(bVar11 & uVar37);
        local_178 = CONCAT44(uVar38 - 1,uVar39);
        break;
      case 0x2c:
        uVar40 = 0;
        uVar39 = 1;
        do {
          if (uVar38 < uVar39) break;
          piVar26 = local_170 + uVar39;
          uVar39 = uVar39 + 1;
          bVar11 = *piVar26 - 1U < 2;
          uVar40 = (uint)bVar11;
        } while (!bVar11);
        goto LAB_100f2270;
      case 0x2d:
        uVar40 = 0;
        uVar39 = 1;
        do {
          if (uVar38 < uVar39) break;
          piVar26 = local_170 + uVar39;
          uVar39 = uVar39 + 1;
          bVar11 = *piVar26 - 1U < 2;
          uVar40 = (uint)bVar11;
        } while (!bVar11);
        goto LAB_100f2270;
      case 0x60:
        uVar40 = 0;
        uVar39 = 1;
        do {
          if (uVar38 < uVar39) break;
          piVar26 = local_170 + uVar39;
          uVar39 = uVar39 + 1;
          bVar11 = *piVar26 - 1U < 2;
          uVar40 = (uint)bVar11;
        } while (!bVar11);
LAB_100f2270:
        uVar17 = (ulonglong)(uVar40 & uVar37);
      }
      if (*(short *)(iVar8 + 0x10163c04) != 0) {
        param_1 = param_1 + 1;
      }
      uVar37 = 0;
      if ((int)uVar17 != 0) {
        while ((uVar37 < 3 &&
               (*(short *)(&DAT_10163c06 + (uVar37 + (iVar34 + cVar7 * 2) * 2) * 2) != 0))) {
          if (((*(short *)(iVar8 + 0x10163c04) != 0) || (uVar37 != 0)) && (local_b0[uVar37] != 0)) {
            param_1 = param_1 + 1;
          }
          param_1 = param_1 + 1;
          uVar37 = uVar37 + 1;
        }
      }
      local_e0 = CONCAT44(uVar33,(undefined4)local_e0);
      local_1c8 = uVar33;
LAB_100f22dc:
      param_1 = param_1 + 1;
LAB_100f22e0:
      param_3 = local_1e8[0];
      local_17c = param_1;
    } while ((int)uVar17 != 0);
  }
  puVar35 = local_17c;
  puVar1 = local_1b0;
  uVar33 = 0;
  do {
    if ((*(int *)(param_3 + 0x4a28 + uVar33 * 4) == 0) ||
       (*(char *)(uVar33 + param_3 + 0x48b4) != '\0')) {
      uVar37 = 1;
    }
    else {
      uVar37 = 0;
    }
    uVar33 = uVar33 + 1;
    uVar37 = uVar37 & (uint)uVar17;
    uVar17 = (ulonglong)uVar37;
  } while (uVar33 < 0x10);
  for (uVar33 = 0; (uVar38 = 0, uVar37 != 0 && (uVar38 = (uint)uVar17, uVar33 < 0x10));
      uVar33 = uVar33 + 1) {
    if ((*(char *)(uVar33 + param_3 + 0x10) == '\0') ||
       (uVar37 = 0, (1 << (ulonglong)(uVar33 & 0x1f) & local_1ec) != 0)) {
      uVar37 = 1;
    }
    uVar37 = uVar37 & uVar38;
    uVar17 = (ulonglong)uVar37;
  }
  uVar12 = 0;
  if (((*(byte *)(param_3 + 0x441) & 0xf) == 0xf & uVar38) != 0) {
    local_1e8[0] = 0;
    puVar3 = &DAT_10163b28;
    if ((uVar29 & 0xff) != 0) {
      puVar3 = &DAT_10163b10;
    }
    uVar12 = FUN_100f0a00(local_1b0,uVar13 & 0xffffffff,param_3 + 0x4a28,puVar3,local_1e8);
    *(undefined1 *)(param_3 + 0x4886) = (undefined1)local_1e8[0];
    *local_b8 = (int)puVar35 - (int)puVar1 >> 2;
  }
  return uVar12;
}

