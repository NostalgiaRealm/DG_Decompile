/*
 * FUN_1801e87c8 at 1801e87c8
 * undefined FUN_1801e87c8(void)
 * Address ranges: 1801e87c8-1801e9de3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0001801e9018) */

ulonglong FUN_1801e87c8(int *param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  uint *extraout_x1;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint extraout_w9;
  uint uVar20;
  uint uVar21;
  uint *extraout_x10;
  ulonglong uVar22;
  uint *puVar23;
  char extraout_w11;
  int extraout_w12;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong extraout_x15;
  uint *puVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  int local_1e4;
  uint local_1e0;
  int local_1d4;
  uint local_1d0;
  byte local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined *local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  uint *local_198;
  undefined8 local_190;
  int local_188 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint *local_e8;
  uint local_e0;
  int local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  uint *local_c0;
  uint local_b8 [8];
  longlong local_98;
  longlong local_90;
  int *local_88;
  uint local_80 [8];
  undefined *local_60;
  uint *local_58;
  undefined4 *local_50;
  
  local_90 = param_3;
  local_88 = param_1;
  local_50 = param_4;
  FUN_180222c50(param_3,0,0x1270);
  local_198 = (uint *)(param_1 + 1);
  local_1a0 = 0;
  iVar18 = *param_1;
  local_1b0 = param_3;
  local_1a8 = 0;
  local_190 = 0;
  local_188[2] = 0;
  local_188[3] = 0;
  local_188[6] = 0;
  local_188[7] = 0;
  local_188[4] = 0;
  local_188[5] = 0;
  local_188[10] = 0;
  local_188[0xb] = 0;
  local_188[8] = 0;
  local_188[9] = 0;
  local_188[0xe] = 0;
  local_188[0xf] = 0;
  local_188[0xc] = 0;
  local_188[0xd] = 0;
  uVar12 = (ulonglong)(iVar18 == -0xfd00);
  local_188[0x12] = 0;
  local_188[0x13] = 0;
  local_188[0x10] = 0;
  local_188[0x11] = 0;
  local_188[0x16] = 0;
  local_188[0x17] = 0;
  local_188[0x14] = 0;
  local_188[0x15] = 0;
  local_188[0x1a] = 0;
  local_188[0x1b] = 0;
  local_188[0x18] = 0;
  local_188[0x19] = 0;
  local_188[0x1e] = 0;
  local_188[0x1f] = 0;
  local_188[0x1c] = 0;
  local_188[0x1d] = 0;
  uStack_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = (uint *)0x0;
  puVar10 = (uint *)0x0;
  local_188[0] = 0;
  local_188[1] = 0;
  *(char *)(param_3 + 0x126e) = (char)iVar18;
  *(undefined1 *)(param_3 + 0x126d) = 3;
  *(undefined1 *)(param_3 + 0x14a) = 1;
  *(undefined8 *)(param_3 + 0x1224) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1234) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1254) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x124c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x120) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x118) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x130) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x128) = 0xffffffffffffffff;
  *(undefined4 *)(param_3 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_3 + 0x13c) = 0xffffffff;
  if (iVar18 == -0xfd00) {
    local_e0 = param_2;
    uVar15 = 0;
    uVar13 = 0;
    local_1e8 = 0;
    local_1e4 = 0;
    uVar16 = 0;
    local_1f0 = 0;
    local_1ec = 0;
    do {
      if (local_1e4 != 0) break;
      uVar20 = *local_198;
      uVar17 = uVar20 & 0xe0ff0000;
      uVar28 = uVar20 & 0x10000000;
      bVar8 = uVar28 != 0;
      uStack_100 = CONCAT44(1,uVar17);
      local_f8._0_4_ = CONCAT13(bVar8,0x10000);
      uVar30 = uVar20 & 0xc0000000;
      local_f8 = CONCAT62(local_f8._2_6_,0xf0f);
      uVar14 = uVar20 & 0xffff;
      local_108 = CONCAT44(uVar20,uVar20) & 0xffffffffffff;
      uVar9 = (uint)uVar12;
      uVar21 = (uint)uVar16;
      if (uVar14 == 0x1f) {
        uVar14 = local_198[2];
        uVar28 = (uVar14 & 0x1800 | uVar14 >> 0x14 & 0x7ff) >> 8;
        if ((uVar21 == 0) && (uVar17 == 0)) {
          uVar20 = 1;
        }
        else {
          uVar20 = 0;
        }
        if (uVar30 != 0) {
          uVar20 = 0;
        }
        if ((uVar28 < 0x12) && ((0x20402U >> (ulonglong)uVar28 & 1) != 0)) {
          uVar20 = uVar20 & uVar9;
        }
        else {
          uVar20 = 0;
        }
        if (((uVar17 != 0) || (-1 < (int)uVar14)) || (uVar17 = 1, (uVar14 & 0xf000000) != 0)) {
          uVar17 = 0;
        }
        uVar17 = uVar17 & uVar20;
        if (uVar17 == 0) {
          uVar12 = 0;
          break;
        }
        uVar30 = uVar14 & 0x7ff;
        uVar20 = local_198[1];
        if ((byte)(&DAT_18022fb30)[uVar28] <= uVar30) {
          uVar17 = 0;
        }
        uVar12 = (ulonglong)uVar17;
        uVar9 = uVar14 & 0xf0000;
        if (uVar9 == 0) {
          uVar9 = 0xf0000;
        }
        bVar3 = (byte)(uVar9 >> 0x10);
        if (uVar28 == 1) {
          uVar17 = uVar20 & 0xf;
          local_1e0 = uVar20 >> 0x10 & 0xf;
          if (((9 < uVar30) || ((uVar20 & 0xfff0fff0) != 0x80000000)) ||
             ((uVar14 & 0x900000) != 0 || 0xd < uVar17)) {
            uVar12 = 0;
          }
          uVar28 = uVar17 << 4 | local_1e0;
          uVar22 = 0;
          do {
            uVar20 = 0;
            if ((uint)uVar12 == 0) break;
            uVar21 = *(uint *)(param_3 + uVar22 * 4 + 0x118);
            if (((uVar21 >> 0x18 == uVar28) || ((uVar21 >> 0x10 & 0xff) == uVar28)) ||
               (((uVar21 >> 8 & 0xff) == uVar28 || (uVar20 = 1, (uVar21 & 0xff) == uVar28)))) {
              uVar20 = 0;
            }
            uVar21 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar21;
            uVar20 = uVar20 & (uint)uVar12;
            uVar12 = (ulonglong)uVar20;
          } while (uVar21 < 0x10);
          if ((uVar17 == 0xd) || (uVar21 = 1, uVar17 == 9 && local_1e0 == 0)) {
            uVar21 = 0;
          }
          uVar12 = (ulonglong)(uVar21 & uVar20);
          if ((uVar21 & uVar20) != 0) {
            *(byte *)((longlong)&local_1a8 + (ulonglong)uVar30 + 4) =
                 *(byte *)((longlong)&local_1a8 + (ulonglong)uVar30 + 4) | bVar3;
            lVar29 = local_1b0 + (ulonglong)uVar30 * 4;
            uVar15 = local_190 & 0xffffffff;
            uVar13 = local_190 >> 0x20;
            *(uint *)(lVar29 + 0x118) =
                 (uVar28 | (uVar28 | (uVar28 | uVar28 << 8) << 8) << 8) &
                 *(uint *)(&DAT_18022fb50 + (ulonglong)(uVar9 >> 0x10) * 4) |
                 *(uint *)(lVar29 + 0x118) &
                 (*(uint *)(&DAT_18022fb50 + (ulonglong)(uVar9 >> 0x10) * 4) ^ 0xffffffff);
            uVar16 = local_1a8 & 0xffffffff;
            if ((uVar14 & 0x400000) != 0 || uVar17 == 10) {
              *(byte *)(local_1b0 + 0x140 + (longlong)((int)uVar30 >> 3)) =
                   *(byte *)(local_1b0 + 0x140 + (longlong)((int)uVar30 >> 3)) |
                   (byte)(1 << (ulonglong)(uVar14 & 7));
            }
            local_1e8 = (uint)local_f0;
            local_1f0 = (uint)local_1a0._7_1_;
            local_1ec = (uint)local_1a0._6_1_;
            puVar10 = local_e8;
            param_3 = local_1b0;
          }
        }
        else if (uVar28 == 10) {
          uVar17 = uVar20 & 0x78000000;
          if ((((uVar14 & 0x7f0) != 0) || ((uVar20 & 0x87ffffff) != 0x80000000)) ||
             (((uVar14 & 0xf00000) != 0 ||
              (uVar17 == 0x28000000 || (uVar17 + 0xf0000000 & 0xe7ffffff) != 0)))) {
            uVar12 = 0;
          }
          *(byte *)(param_3 + (ulonglong)uVar30 + 0x14f) = (byte)(uVar17 >> 0x1b);
        }
        else if (uVar28 == 0x11) {
          if ((((uVar14 & 0x7fe) != 0) || ((uVar20 & 0xfff0fff0) != 0x80000000)) ||
             (((uVar14 & 0xf00000) != 0 || (0xd < (uVar20 & 0xf))))) {
            uVar17 = 0;
          }
          if (uVar30 == 0) {
            local_1a0._0_7_ = CONCAT16(bVar3,(undefined6)local_1a0);
            uVar12 = (ulonglong)(uVar17 & ((uVar9 - 0x10000 & 0xfffcffff) == 0 && uVar9 != 0x40000))
            ;
            local_1ec = uVar9 >> 0x10;
          }
          else if (uVar30 == 1) {
            local_1f0 = 1;
            if (uVar9 != 0xf0000) {
              uVar17 = 0;
            }
            uVar12 = (ulonglong)uVar17;
            local_1a0 = CONCAT17(1,(undefined7)local_1a0);
          }
          else {
            uVar12 = 0;
          }
        }
LAB_1801e9d28:
        local_198 = local_198 + 3;
      }
      else {
        uVar19 = uVar30 == 0 & uVar9;
        if (uVar14 == 0x2f) {
          uVar14 = local_198[1];
          if ((uVar21 != 0) || (bVar8)) {
            uVar19 = 0;
          }
          if (((((uVar17 != 0) || (-1 < (int)uVar14)) ||
               ((uVar14 & 0x1800 | uVar14 >> 0x14 & 0x7ff) >> 8 != 0xe)) ||
              (((uVar14 & 0xf000000) != 0 || ((uVar14 & 0xf0000) != 0xf0000)))) ||
             (uVar17 = 1, (uVar14 & 0xf007f0) != 0)) {
            uVar17 = 0;
          }
          uVar12 = (ulonglong)(uVar19 & uVar17);
          if ((uVar19 & uVar17) != 0) {
            *(undefined1 *)(param_3 + (ulonglong)(uVar14 & 0x7ff) + 0x2a0) = 1;
            *(uint *)(param_3 + (ulonglong)(uVar14 & 0x7ff) * 4 + 0x2b0) = local_198[2];
          }
          goto LAB_1801e9d28;
        }
        if (uVar14 == 0x30) {
          uVar14 = local_198[1];
          if ((uVar21 != 0) || (bVar8)) {
            uVar19 = 0;
          }
          if ((((uVar17 != 0) || (-1 < (int)uVar14)) ||
              ((uVar14 & 0x1800 | uVar14 >> 0x14 & 0x7ff) >> 8 != 7)) ||
             ((((uVar14 & 0xf000000) != 0 || ((uVar14 & 0xf0000) != 0xf0000)) ||
              (uVar17 = 1, (uVar14 & 0xf007f0) != 0)))) {
            uVar17 = 0;
          }
          uVar12 = (ulonglong)(uVar19 & uVar17);
          if ((uVar19 & uVar17) != 0) {
            uVar17 = (uVar14 & 0x7ff) * 4;
            *(undefined1 *)(param_3 + (ulonglong)(uVar14 & 0x7ff) + 400) = 1;
            *(uint *)(param_3 + (ulonglong)uVar17 * 4 + 0x1a0) = local_198[2];
            *(uint *)(param_3 + (ulonglong)(uVar17 + 1) * 4 + 0x1a0) = local_198[3];
            *(uint *)(param_3 + (ulonglong)(uVar17 + 2) * 4 + 0x1a0) = local_198[4];
            *(uint *)(param_3 + (ulonglong)(uVar17 + 3) * 4 + 0x1a0) = local_198[5];
          }
LAB_1801e98fc:
          local_198 = local_198 + 6;
        }
        else {
          if (uVar14 == 0x51) {
            if ((uVar21 != 0) || (bVar8)) {
              uVar14 = 0;
            }
            else {
              uVar14 = 1;
            }
            if (uVar30 != 0) {
              uVar14 = 0;
            }
            if ((((uVar17 == 0) && (uVar17 = local_198[1], (int)uVar17 < 0)) &&
                ((uVar17 & 0x1800 | uVar17 >> 0x14 & 0x7ff) >> 8 == 2)) &&
               ((((uVar17 & 0xf000000) == 0 && ((uVar17 & 0xf0000) == 0xf0000)) &&
                (((uVar17 & 0xf00000) == 0 && (uVar17 = uVar17 & 0x7ff, uVar17 < 0xe0)))))) {
              uVar12 = (ulonglong)(byte)(uVar14 & uVar9);
              if ((uVar14 & uVar9) != 0) {
                *(undefined1 *)(param_3 + (ulonglong)uVar17 + 0x331) = 1;
                uVar17 = uVar17 * 4;
                *(uint *)(param_3 + (ulonglong)uVar17 * 4 + 0x414) = local_198[2];
                *(uint *)(param_3 + (ulonglong)(uVar17 + 1) * 4 + 0x414) = local_198[3];
                *(uint *)(param_3 + (ulonglong)(uVar17 + 2) * 4 + 0x414) = local_198[4];
                *(uint *)(param_3 + (ulonglong)(uVar17 + 3) * 4 + 0x414) = local_198[5];
              }
            }
            else {
              uVar12 = 0;
            }
            goto LAB_1801e98fc;
          }
          if (uVar14 == 0xfffe) {
            if (uVar28 != 0) {
              uVar19 = 0;
            }
            uVar12 = (ulonglong)uVar19;
            local_198 = local_198 + ((uVar20 >> 0x10) + 1);
          }
          else if (uVar14 == 0xffff) {
            uVar14 = (uint)(uVar28 == 0 && uVar17 == 0);
            if ((int)uVar13 != 0) {
              uVar14 = 0;
            }
            uVar12 = 0;
            do {
              if (*(int *)(param_3 + uVar12 * 4 + 0x2f0) != 0) {
                uVar12 = (ulonglong)(local_1e8 == 0x1c);
                goto LAB_1801e980c;
              }
              uVar17 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar17;
            } while (uVar17 < 0x10);
            uVar12 = (ulonglong)(uVar14 & uVar19);
LAB_1801e980c:
            local_1e4 = 1;
            local_198 = local_198 + 1;
            local_1e0 = uVar19;
          }
          else {
            if (0x60 < uVar14) {
              uVar19 = 0;
            }
            uVar17 = uVar20 & 0xff0000;
            if (((uVar17 == 0) ||
                ((uVar14 - 0x29 < 0x36 &&
                 ((0x20000000000011U >> ((ulonglong)(uVar14 - 0x29) & 0x3f) & 1) != 0 &&
                  uVar17 < 0x60001)))) ||
               ((uVar14 == 0x42 && ((uVar17 - 0x10000 & 0xfffeffff) == 0)))) {
              uVar17 = 1;
            }
            else {
              uVar17 = 0;
            }
            if ((uVar20 & 0xe0000000) != 0) {
              uVar17 = 0;
            }
            cVar5 = (&DAT_18022f800)[uVar14];
            uVar12 = (ulonglong)cVar5;
            if ((cVar5 == -1) ||
               ((bVar8 && ((lVar29 = ((-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 |
                                      (uVar12 & 0xffffffff) << 3) - (longlong)(int)cVar5) * 2,
                           ((byte)(&DAT_18022f870)[lVar29] >> 2 & 1) != 0 ||
                           ((*(short *)(&DAT_18022f876 + lVar29) == 0 &&
                            (*(short *)(&DAT_18022f874 + lVar29) == 0)))))))) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar17 & uVar19;
            }
            uVar28 = local_198[1];
            local_98 = ((-(uVar12 >> 0x1f & 1) & 0xfffffff800000000 | (uVar12 & 0xffffffff) << 3) -
                       (longlong)(int)cVar5) * 2;
            local_1b8 = &DAT_18022f870 + local_98;
            uVar17 = uVar17 & (*(short *)(&DAT_18022f874 + local_98) == 0 || (int)uVar28 < 0);
            if (uVar17 == 0) {
              uVar12 = 0;
              break;
            }
            local_e8 = local_198;
            if (uVar21 != 0) {
              local_e8 = puVar10;
            }
            if (local_e0 <= uVar21) {
              uVar17 = 0;
            }
            uVar12 = (ulonglong)uVar17;
            uVar16 = (ulonglong)((byte)(&DAT_18022f871)[local_98] + uVar21);
            local_1a8 = CONCAT44(local_1a8._4_4_,(byte)(&DAT_18022f871)[local_98] + uVar21);
            if (((byte)(&DAT_18022f870)[local_98] >> 1 & 1) != 0) {
              *(int *)(param_3 + 0x1218) = *(int *)(param_3 + 0x1218) + 1;
            }
            if (*(ushort *)(&DAT_18022f874 + local_98) == 0) {
              uVar28 = 0;
              uVar17 = 0;
              puVar10 = local_198 + 1;
            }
            else {
              uVar30 = (uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8;
              puVar10 = local_198 + 2;
              if (((uint)(byte)(&DAT_18022fb30)[uVar30] <= (uVar28 & 0x7ff)) ||
                 (uVar20 = 1, (uVar28 & 0xf000000) != 0)) {
                uVar20 = 0;
              }
              if (0x700000 < (uVar28 & 0xf00000)) {
                uVar20 = 0;
              }
              uVar20 = uVar20 & uVar17;
              uVar12 = (ulonglong)(byte)uVar20;
              if (uVar20 != 0) {
                if ((*(ushort *)(&DAT_18022f874 + local_98) &
                    *(ushort *)(&DAT_18022f7d0 + (ulonglong)uVar30 * 2)) == 0) {
                  uVar20 = 0;
                }
                uVar12 = (ulonglong)uVar20;
              }
              uVar28 = uVar28 & 0xf0000;
              if (uVar28 == 0) {
                uVar28 = 0xf0000;
              }
              if (uVar14 == 0x41) {
                uVar17 = 7;
              }
              else {
                uVar17 = uVar28 >> 0x10;
              }
            }
            if (bVar8) {
              uVar20 = *puVar10;
              uVar30 = uVar20 & 0xff0000;
              if (((-1 < (int)uVar20) || ((uVar20 & 0x1800 | uVar20 >> 0x14 & 0x7ff) >> 8 != 0x13))
                 || (uVar9 = 1, (uVar20 & 0x7ff) != 0)) {
                uVar9 = 0;
              }
              uVar21 = 0;
              if ((uVar20 & 0xf000000) == 0xd000000 || (uVar20 & 0xf000000) == 0) {
                uVar21 = uVar9 & (uint)uVar12;
              }
              uVar21 = uVar21 & ((((uVar30 == 0xe40000 || uVar30 == 0) || uVar30 == 0x550000) ||
                                 uVar30 == 0xaa0000) || uVar30 == 0xff0000);
              uVar12 = (ulonglong)uVar21;
              if (uVar21 != 0) {
                local_198 = local_198 + 1;
              }
            }
            puVar27 = local_198;
            uVar9 = FUN_1801e9df8(uVar14);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            uVar21 = 0;
            uStack_100 = CONCAT44(uVar9,(undefined4)uStack_100);
            uVar20 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            uVar30 = 0;
            local_b8[4] = 0;
            local_b8[5] = 0;
            local_b8[6] = 0;
            local_b8[7] = 0;
            local_80[0] = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_80[3] = 0;
            local_80[4] = 0;
            local_80[5] = 0;
            local_80[6] = 0;
            local_80[7] = 0;
            local_1cc[0] = 0;
            puVar10 = extraout_x1;
            puVar23 = extraout_x10;
            uVar22 = extraout_x15;
            if ((int)uVar12 != 0) {
              local_c0 = extraout_x10;
              local_1d4 = 0;
              local_dc = extraout_w12;
              local_d8 = uVar9;
              local_cc = (int)uVar16;
              uStack_c8 = (int)extraout_x15;
              local_d4 = (int)uVar13;
              uStack_d0 = (int)uVar15;
              local_58 = extraout_x1;
              do {
                if (3 < uVar30) break;
                puVar1 = &DAT_18022f876 + local_98;
                uVar4 = *(ushort *)(puVar1 + (ulonglong)uVar30 * 2);
                if (uVar4 == 0) break;
                uVar25 = extraout_x10[uVar30 + local_1d4];
                local_80[uVar30] = uVar25 & 0xff0000;
                uVar11 = uVar25 & 0x1800 | uVar25 >> 0x14 & 0x700;
                uVar26 = uVar11 >> 8;
                bVar3 = (&DAT_18022fb30)[uVar26];
                uVar21 = uVar25 & 0xf000000;
                uVar19 = uVar25 >> 0x1f;
                *(uint *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4) = uVar25 & 0x7ff;
                local_b8[(ulonglong)uVar30 + 4] = uVar21;
                if ((uint)bVar3 <= (uVar25 & 0x7ff)) {
                  uVar19 = 0;
                }
                if (uVar21 == 0) {
LAB_1801e8d3c:
                  uVar19 = uVar19 & (uint)uVar12;
                  uVar12 = (ulonglong)(byte)uVar19;
                  if (uVar19 != 0) {
                    if (uVar26 == 0x11) {
                      uVar21 = 0x1000;
                      if (*(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4) != 1) {
                        uVar21 = 0x800;
                      }
                    }
                    else {
                      uVar21 = (uint)*(ushort *)(&DAT_18022f7d0 + (ulonglong)uVar26 * 2);
                    }
                    local_b8[uVar30] = uVar21;
                    if ((uVar21 & uVar4) == 0) {
                      uVar19 = 0;
                    }
                    if (((short)uVar4 < 0) && (local_b8[(ulonglong)uVar30 + 4] != 0)) {
                      uVar19 = 0;
                    }
                    uVar11 = local_80[uVar30];
                    if ((uVar4 >> 0xe & 1) == 0) {
LAB_1801e8db0:
                      uVar24 = 1;
                    }
                    else {
                      if (uVar11 == 0xe40000) {
                        uVar11 = 0xe40000;
                        goto LAB_1801e8db0;
                      }
                      uVar24 = 0;
                    }
                    uVar19 = uVar19 & uVar24;
                    if (uVar21 == 0x1000) {
                      local_80[uVar30] = 0;
                      if (uVar11 != 0xe40000) {
                        uVar19 = 0;
                      }
LAB_1801e8df4:
                      bVar8 = true;
                    }
                    else {
                      uVar11 = uVar11 & 0xff0000;
                      if ((((uVar11 == 0) || (uVar11 == 0x550000)) || (uVar11 == 0xaa0000)) ||
                         (bVar8 = false, uVar11 == 0xff0000)) goto LAB_1801e8df4;
                    }
                    local_1cc[uVar30] = bVar8;
                    uVar19 = ((uVar4 & 0x2000) == 0 || bVar8) & uVar19;
                    uVar12 = (ulonglong)uVar19;
                    if ((uVar25 >> 0xd & 1) != 0) {
                      uVar21 = extraout_x10[uVar30 + local_1d4 + 1];
                      uVar11 = (uVar21 & 0x1800 | uVar21 >> 0x14 & 0x7ff) >> 8;
                      if ((uVar11 != 0xf) || ((uVar21 & 0xff0000) != 0xe40000 || uVar26 != 1)) {
                        uVar19 = 0;
                      }
                      if (((uint)(byte)(&DAT_18022fb30)[uVar11] <= (uVar21 & 0x7ff)) ||
                         (uVar11 = 1, (uVar21 & 0xf000000) != 0)) {
                        uVar11 = 0;
                      }
                      local_80[(ulonglong)uVar30 + 4] = uVar21;
                      local_1d4 = local_1d4 + 1;
                      if (uVar26 != 1) goto LAB_1801e8ccc;
                      uVar12 = (ulonglong)(uVar19 & uVar11);
                      uVar22 = 0;
                      if (uVar30 != 0) {
                        local_60 = puVar1;
                        do {
                          if ((uint)uVar12 == 0) break;
                          if (local_b8[uVar22] == 1) {
                            uVar12 = (ulonglong)
                                     ((uint)(*(int *)((longlong)&local_1c8 + uVar22 * 4) ==
                                            *(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4))
                                     & (uint)uVar12);
                          }
                          uVar21 = (int)uVar22 + 1;
                          uVar22 = (ulonglong)uVar21;
                        } while (uVar21 < uVar30);
                      }
                      *(undefined1 *)(param_3 + 0x147) = 1;
                      if (extraout_w11 != '\0') {
                        *(undefined1 *)(param_3 + 0x148) = 1;
                      }
                    }
                  }
                }
                else {
                  if (uVar21 == 0x1000000) {
                    if ((uVar11 < 0x100) || (((uVar26 - 1 & 0xffffffee) == 0 && (uVar26 != 0x12))))
                    goto LAB_1801e8d3c;
                  }
                  else if ((((uVar21 + 0xf5000000 & 0xfeffffff) == 0) &&
                           (((uVar11 < 0x100 || (uVar26 - 1 < 2)) ||
                            ((uVar26 == 0x11 &&
                             (*(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4) == 0)))))) ||
                          ((uVar21 == 0xd000000 && (uVar26 == 0x13 || uVar26 == 0xe))))
                  goto LAB_1801e8d3c;
LAB_1801e8ccc:
                  uVar12 = 0;
                }
                uVar21 = (uint)(byte)local_1b8[3];
                uVar19 = 0xf;
                if (uVar14 == 0x5a) {
                  if (uVar30 < 2) {
                    uVar21 = 3;
                  }
                }
                else if ((uVar14 == 0x42 && uVar30 == 0) || ((uVar14 == 0x5d && (uVar30 != 1)))) {
                  bVar3 = *(byte *)(((ulonglong)puVar27[3] & 0x7ff) + param_3 + 0x14f);
                  uVar21 = 7;
                  if ((bVar3 & 0x1f) == 2) {
                    uVar21 = 3;
                  }
                  if ((extraout_w12 != 0) && (uVar21 = uVar19, (bVar3 & 0x1f) == 2)) {
                    uVar21 = 0xb;
                  }
                }
                if ((uVar14 == 0x5f && uVar30 == 0) &&
                   (uVar21 = 0xb,
                   (*(byte *)(((ulonglong)puVar27[3] & 0x7ff) + param_3 + 0x14f) & 0x1f) != 2)) {
                  uVar21 = uVar19;
                }
                uVar11 = local_80[uVar30];
                if (local_1b8[2] != '\0') {
                  uVar21 = uVar17 & uVar21;
                }
                uVar25 = 1 << (ulonglong)(uVar11 >> 0x16 & 3);
                if ((uVar21 & 8) == 0) {
                  uVar25 = 0;
                }
                uVar26 = 1 << (ulonglong)(uVar11 >> 0x14 & 3);
                if ((uVar21 & 4) == 0) {
                  uVar26 = 0;
                }
                uVar24 = 1 << (ulonglong)(uVar11 >> 0x12 & 3);
                if ((uVar21 & 2) == 0) {
                  uVar24 = 0;
                }
                uVar11 = 1 << (ulonglong)(uVar11 >> 0x10 & 3);
                if ((uVar21 & 1) == 0) {
                  uVar11 = 0;
                }
                uVar11 = uVar25 | uVar26 | uVar24 | uVar11;
                uVar21 = uVar11 & 0xff;
                if (uVar14 != 0x1e) {
                  if ((uVar30 == 2) || (*(short *)(puVar1 + (ulonglong)(uVar30 + 1) * 2) == 0)) {
                    uVar25 = local_d8;
                    if (uVar9 == 0) goto LAB_1801e91ec;
                  }
                  else {
                    uVar25 = 1;
                  }
                  uVar24 = local_b8[uVar30];
                  uVar26 = 0;
                  do {
                    bVar3 = (byte)uVar11;
                    if (uVar24 == 1) {
                      if (local_80[(ulonglong)uVar30 + 4] == 0) {
                        uVar20 = uVar26 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4);
                        bVar2 = *(byte *)((longlong)&local_1a8 + (ulonglong)uVar20 + 4);
                        *(byte *)(param_3 + (ulonglong)uVar20) =
                             *(byte *)(param_3 + (ulonglong)uVar20) | bVar3;
                        uVar20 = (uint)bVar2;
                      }
                      else {
                        lVar29 = 0;
                        do {
                          *(byte *)(lVar29 + param_3) = *(byte *)(lVar29 + param_3) | bVar3;
                          lVar29 = lVar29 + 1;
                          uVar20 = 0xf;
                        } while (lVar29 != 10);
                      }
                    }
                    else if (uVar24 == 2) {
                      lVar29 = param_3 + (ulonglong)
                                         (uVar26 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar30 * 4));
                      *(byte *)(lVar29 + 0x38) = *(byte *)(lVar29 + 0x38) | bVar3;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 4) {
                      lVar29 = param_3 + (ulonglong)
                                         (uVar26 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar30 * 4));
                      bVar2 = *(byte *)(lVar29 + 10);
                      *(byte *)(lVar29 + 10) = bVar2 | bVar3;
                      uVar20 = (uint)bVar2;
                    }
                    else if (uVar24 == 8) {
                      lVar29 = param_3 + (ulonglong)
                                         (uVar26 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar30 * 4));
                      *(byte *)(lVar29 + 0x15f) = *(byte *)(lVar29 + 0x15f) | bVar3;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 0x10) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar26 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4))
                       + 0x16f) = 1;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 0x20) {
                      lVar29 = param_3 + (ulonglong)
                                         (uVar26 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar30 * 4));
                      *(byte *)(lVar29 + 0x17f) = *(byte *)(lVar29 + 0x17f) | bVar3;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 0x40) {
                      uVar20 = uVar19;
                      if (*(char *)(param_3 + (ulonglong)
                                              (uVar26 + *(int *)((longlong)&local_1c8 +
                                                                (ulonglong)uVar30 * 4)) + 0x14f) ==
                          '\0') {
                        uVar20 = 0;
                      }
                    }
                    else if (uVar24 == 0x80) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar26 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4))
                       + 0x146) = 1;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 0x400) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar26 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar30 * 4))
                       + 0x180) = 1;
                      uVar20 = 0xf;
                    }
                    else if (uVar24 == 0x800) {
                      *(byte *)(param_3 + 0x144) = *(byte *)(param_3 + 0x144) | bVar3;
                      uVar20 = local_1ec;
                    }
                    else if (uVar24 == 0x1000) {
                      *(byte *)(param_3 + 0x145) = *(byte *)(param_3 + 0x145) | bVar3;
                      uVar20 = local_1f0;
                    }
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uVar25);
                }
LAB_1801e91ec:
                if ((uVar14 != 0x58 || uVar30 == 0) && (uVar14 != 1 || extraout_w9 != 4)) {
                  uVar12 = (ulonglong)((uint)(uVar21 == (uVar21 & uVar20)) & (uint)uVar12);
                }
                uVar30 = uVar30 + 1;
              } while ((int)uVar12 != 0);
              uVar13 = uVar13 & 0xffffffff;
              uVar15 = uVar15 & 0xffffffff;
              uVar16 = uVar16 & 0xffffffff;
              uVar22 = extraout_x15 & 0xffffffff;
              uVar21 = (uint)local_1cc[0];
              puVar10 = local_58;
              puVar23 = local_c0;
              local_1e0 = uVar28;
              local_1d0 = uVar17;
            }
            bVar3 = (byte)uVar17;
            if (extraout_w9 == 4) {
              if (uVar14 == 1) {
                lVar29 = param_3 + (uVar22 & 0xffffffff);
                *(byte *)(lVar29 + 10) = *(byte *)(lVar29 + 10) & (bVar3 ^ 0xff);
                uVar30 = 0;
                do {
                  uVar9 = 1 << (ulonglong)(uVar30 & 0x1f);
                  if (((uVar9 & uVar17) != 0) &&
                     ((1 << (ulonglong)(local_80[0] >> (ulonglong)(uVar30 * 2 + 0x10 & 0x1f) & 3) &
                      uVar20) != 0)) {
                    *(byte *)(lVar29 + 10) = *(byte *)(lVar29 + 10) | (byte)uVar9;
                  }
                  uVar30 = uVar30 + 1;
                } while (uVar30 < 4);
              }
              else {
                lVar29 = param_3 + (uVar22 & 0xffffffff);
                *(byte *)(lVar29 + 10) = *(byte *)(lVar29 + 10) | bVar3;
              }
            }
            else if (extraout_w9 == 0x20) {
LAB_1801e927c:
              lVar29 = param_3 + (uVar22 & 0xffffffff);
              *(byte *)(lVar29 + 0x17f) = *(byte *)(lVar29 + 0x17f) | bVar3;
            }
            else if (extraout_w9 == 0x100) {
              lVar29 = param_3 + (uVar22 & 0xffffffff);
              *(byte *)(lVar29 + 0x14b) = *(byte *)(lVar29 + 0x14b) | bVar3;
            }
            else if (extraout_w9 == 0x200) {
              uVar12 = (ulonglong)((uint)(uVar28 == 0xf0000) & (uint)uVar12);
              *(undefined1 *)(param_3 + 0x330) = 1;
              goto LAB_1801e927c;
            }
            if (((4 < uVar14 - 0x58) || ((0x1dU >> (ulonglong)(uVar14 - 0x58 & 0x1f) & 1) == 0)) &&
               (5 < uVar14)) {
              uVar17 = (uint)uVar12;
              if (uVar14 == 6) {
                uVar12 = (ulonglong)(uVar21 & uVar17 & 0xff);
              }
              else if (uVar14 == 7) {
LAB_1801e971c:
                uVar12 = (ulonglong)(uVar17 & 0xff & uVar21);
              }
              else if (3 < uVar14 - 8) {
                if ((uVar14 == 0xe) || (uVar14 == 0xf)) goto LAB_1801e971c;
                if (uVar14 - 0x12 < 2) goto LAB_1801e9730;
                if (uVar14 == 0x14) {
LAB_1801e96f8:
                  bVar8 = uVar28 == 0xf0000;
LAB_1801e96fc:
                  if ((bVar8) && (local_b8[5] == 0)) {
LAB_1801e9708:
                    uVar28 = 1;
                  }
                  else {
                    uVar28 = 0;
                  }
                }
                else {
                  if (uVar14 == 0x15) {
LAB_1801e96f0:
                    bVar8 = uVar28 == 0x70000;
                    goto LAB_1801e96fc;
                  }
                  if (uVar14 == 0x16) goto LAB_1801e96f8;
                  if (uVar14 == 0x17) goto LAB_1801e96f0;
                  if (uVar14 == 0x18) {
                    bVar8 = uVar28 == 0x30000;
                    goto LAB_1801e96fc;
                  }
                  if ((uVar14 == 0x19) || (uVar14 == 0x1a)) {
                    *(undefined1 *)(param_3 + 0x14a) = 0;
                    goto LAB_1801e9730;
                  }
                  uVar30 = (uint)uVar13;
                  if (uVar14 == 0x1b) {
                    uVar12 = (ulonglong)(uVar30 < 0x20 & uVar17);
                    iVar18 = 1;
                    goto LAB_1801e9694;
                  }
                  if (uVar14 == 0x1c) {
                    bVar8 = local_188[uVar13 & 0xffffffff] == 0;
LAB_1801e9678:
                    uVar12 = (ulonglong)(bVar8 & uVar17);
                    goto LAB_1801e9730;
                  }
                  if (uVar14 == 0x1d) {
                    bVar8 = local_188[uVar13 & 0xffffffff] == 1;
                    goto LAB_1801e9654;
                  }
                  if (uVar14 == 0x1e) {
                    uVar12 = (ulonglong)(local_1e8 == 0x1c & uVar17);
                    *(int *)(param_3 + (local_1c8 & 0xffffffff) * 4 + 0x2f0) =
                         (int)((longlong)puVar27 - (longlong)local_88 >> 2);
                    local_f8._0_5_ = CONCAT14(1,(undefined4)local_f8);
                    *(undefined1 *)(param_3 + 0x14a) = 0;
                    goto LAB_1801e9730;
                  }
                  if (uVar14 == 0x20) goto LAB_1801e9730;
                  uVar20 = (uint)uVar22;
                  if (uVar14 == 0x21) {
                    if (((extraout_w9 == local_b8[0]) && (uVar20 == (uint)local_1c8)) ||
                       ((extraout_w9 == local_b8[1] && (uVar20 == local_1c8._4_4_)))) {
                      uVar30 = 0;
                    }
                    else {
                      uVar30 = 1;
                    }
                    uVar12 = (ulonglong)
                             (uVar17 & ((uVar28 - 0x10000 & 0xfff8ffff) == 0 && uVar28 != 0x80000) &
                             uVar30);
                    goto LAB_1801e9730;
                  }
                  if (uVar14 == 0x23) goto LAB_1801e9730;
                  if (uVar14 == 0x24) {
                    if ((extraout_w9 == local_b8[0]) && (uVar28 = 0, uVar20 == (uint)local_1c8))
                    goto LAB_1801e9714;
                    goto LAB_1801e9708;
                  }
                  if (uVar14 != 0x25) {
                    if (uVar14 == 0x26) {
                      uVar12 = (ulonglong)(uVar30 < 0x20 & uVar17);
                      iVar18 = 2;
                    }
                    else {
                      if (uVar14 == 0x27) {
                        bVar8 = local_188[uVar13 & 0xffffffff] == 2;
LAB_1801e9654:
                        uVar13 = (ulonglong)(uVar30 - 1);
                        uVar28 = (int)uVar15 - 1;
                        uVar15 = (ulonglong)uVar28;
                        uVar12 = (ulonglong)(bVar8 & uVar17);
                        local_190 = CONCAT44(uVar30 - 1,uVar28);
                        goto LAB_1801e9730;
                      }
                      if ((uVar14 != 0x28) && (uVar14 != 0x29)) {
                        if (uVar14 == 0x2a) {
                          bVar8 = local_188[uVar13 & 0xffffffff] == 3;
                          goto LAB_1801e9678;
                        }
                        if (uVar14 == 0x2b) {
                          bVar8 = local_188[uVar13 & 0xffffffff] == 3;
                          goto LAB_1801e9654;
                        }
                        if (uVar14 == 0x2c) {
                          uVar20 = 0;
                          uVar28 = 1;
                          do {
                            if (uVar30 < uVar28) break;
                            uVar12 = (ulonglong)uVar28;
                            uVar28 = uVar28 + 1;
                            bVar8 = local_188[uVar12] - 1U < 2;
                            uVar20 = (uint)bVar8;
                          } while (!bVar8);
                        }
                        else {
                          if (uVar14 != 0x2d) {
                            if (uVar14 != 0x41) {
                              if ((uVar14 == 0x42) || (uVar14 == 0x5d)) {
LAB_1801e949c:
                                *(uint *)(param_3 + 0x1214) =
                                     1 << (ulonglong)(local_1c8._4_4_ & 0x1f) |
                                     *(uint *)(param_3 + 0x1214);
                              }
                              else if (uVar14 != 0x5e) {
                                if (uVar14 == 0x5f) goto LAB_1801e949c;
                                if (uVar14 == 0x60) {
                                  uVar20 = 0;
                                  uVar28 = 1;
                                  do {
                                    if (uVar30 < uVar28) break;
                                    uVar12 = (ulonglong)uVar28;
                                    uVar28 = uVar28 + 1;
                                    bVar8 = local_188[uVar12] - 1U < 2;
                                    uVar20 = (uint)bVar8;
                                  } while (!bVar8);
                                  goto LAB_1801e9514;
                                }
                              }
                            }
                            goto LAB_1801e9730;
                          }
                          uVar20 = 0;
                          uVar28 = 1;
                          do {
                            if (uVar30 < uVar28) break;
                            uVar12 = (ulonglong)uVar28;
                            uVar28 = uVar28 + 1;
                            bVar8 = local_188[uVar12] - 1U < 2;
                            uVar20 = (uint)bVar8;
                          } while (!bVar8);
                        }
LAB_1801e9514:
                        uVar12 = (ulonglong)(uVar17 & uVar20);
                        goto LAB_1801e9730;
                      }
                      uVar12 = (ulonglong)(uVar30 < 0x20 & uVar17);
                      iVar18 = 3;
                    }
LAB_1801e9694:
                    uVar30 = uVar30 + 1;
                    local_188[uVar30] = iVar18;
                    uVar13 = (ulonglong)uVar30;
                    uVar15 = (ulonglong)((int)local_190 + 1U);
                    local_190 = CONCAT44(uVar30,(int)local_190 + 1U);
                    *(undefined1 *)(local_1b0 + 0x14a) = 0;
                    uVar16 = local_1a8 & 0xffffffff;
                    local_1f0 = (uint)local_1a0._7_1_;
                    local_1ec = (uint)local_1a0._6_1_;
                    puVar10 = local_e8;
                    param_3 = local_1b0;
                    puVar27 = local_198;
                    uVar14 = local_108._4_4_;
                    goto LAB_1801e9730;
                  }
                  uVar28 = (uint)((uVar28 - 0x10000 & 0xfffcffff) == 0 && uVar28 != 0x40000);
                }
LAB_1801e9714:
                uVar12 = (ulonglong)(uVar17 & uVar28);
              }
            }
LAB_1801e9730:
            if (*(short *)(local_1b8 + 4) != 0) {
              puVar27 = puVar27 + 1;
            }
            uVar17 = 0;
            if ((int)uVar12 != 0) {
              while ((uVar17 < 4 &&
                     (*(short *)(&DAT_18022f876 + (ulonglong)uVar17 * 2 + local_98) != 0))) {
                if (((*puVar23 & 0x1800 | *puVar23 >> 0x14 & 0x7ff) >> 8 != 0x11) &&
                   (local_80[(ulonglong)uVar17 + 4] != 0)) {
                  puVar27 = puVar27 + 1;
                  puVar23 = puVar23 + 1;
                }
                puVar23 = puVar23 + 1;
                puVar27 = puVar27 + 1;
                uVar17 = uVar17 + 1;
              }
            }
            local_198 = puVar27 + 1;
            local_f0 = CONCAT44(local_f0._4_4_,uVar14);
            local_1e8 = uVar14;
          }
        }
      }
    } while ((int)uVar12 != 0);
  }
  piVar7 = local_88;
  lVar6 = local_90;
  puVar27 = local_198;
  lVar29 = 0;
  do {
    if ((*(int *)(local_90 + 0x2f0 + lVar29 * 4) == 0) ||
       (*(char *)(local_90 + 0x180 + lVar29) != '\0')) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0;
    }
    lVar29 = lVar29 + 1;
    uVar14 = uVar14 & (uint)uVar12;
    uVar12 = (ulonglong)uVar14;
  } while (lVar29 != 0x10);
  *(undefined1 *)(local_90 + 0x126c) = 0xff;
  if (uVar14 != 0) {
    local_1e4 = 0;
    uVar12 = FUN_1801e9e98(local_88,puVar10,local_90 + 0x2f0,&DAT_18022fba8,&local_1e4);
    uVar12 = uVar12 & 0xffffffff;
    *(undefined1 *)(lVar6 + 0x149) = (undefined1)local_1e4;
    *local_50 = (int)((longlong)puVar27 - (longlong)piVar7 >> 2);
  }
  return uVar12;
}

