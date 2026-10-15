/*
 * FUN_1800cce70 at 1800cce70
 * undefined FUN_1800cce70(void)
 * Address ranges: 1800cce70-1800ce3f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0001800cd660) */

ulonglong FUN_1800cce70(int *param_1,uint param_2,longlong param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  int *piVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *extraout_x1;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined *extraout_x9;
  undefined *puVar24;
  uint extraout_w10;
  uint extraout_w11;
  char extraout_w12;
  uint uVar25;
  uint uVar26;
  int extraout_w13;
  int iVar27;
  longlong lVar28;
  uint *extraout_x14;
  uint *puVar29;
  uint extraout_w15;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  undefined *puVar35;
  uint uVar36;
  int local_1e0;
  uint local_1dc;
  uint local_1d4;
  uint local_1d0;
  byte local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  uint *local_1a0;
  undefined8 local_198;
  int local_190 [32];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint *local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined *local_c0;
  uint local_b8 [8];
  longlong local_98;
  longlong local_90;
  int *local_88;
  uint local_80 [8];
  uint *local_60;
  undefined4 *local_58;
  
  local_90 = param_3;
  local_88 = param_1;
  local_58 = param_4;
  func_0x000180222c50(param_3,0,0x1270);
  local_1a0 = (uint *)(param_1 + 1);
  local_1a8 = 0;
  iVar33 = *param_1;
  local_1b8 = param_3;
  local_1b0 = 0;
  local_198 = 0;
  uVar17 = 1;
  local_190[2] = 0;
  local_190[3] = 0;
  local_190[6] = 0;
  local_190[7] = 0;
  local_190[4] = 0;
  local_190[5] = 0;
  local_190[10] = 0;
  local_190[0xb] = 0;
  local_190[8] = 0;
  local_190[9] = 0;
  local_190[0xe] = 0;
  local_190[0xf] = 0;
  local_190[0xc] = 0;
  local_190[0xd] = 0;
  uVar14 = (ulonglong)(iVar33 == -0xfd00);
  local_190[0x12] = 0;
  local_190[0x13] = 0;
  local_190[0x10] = 0;
  local_190[0x11] = 0;
  local_190[0x16] = 0;
  local_190[0x17] = 0;
  local_190[0x14] = 0;
  local_190[0x15] = 0;
  local_190[0x1a] = 0;
  local_190[0x1b] = 0;
  local_190[0x18] = 0;
  local_190[0x19] = 0;
  local_190[0x1e] = 0;
  local_190[0x1f] = 0;
  local_190[0x1c] = 0;
  local_190[0x1d] = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = (uint *)0x0;
  puVar11 = (uint *)0x0;
  local_190[0] = 0;
  local_190[1] = 0;
  *(char *)(param_3 + 0x126e) = (char)iVar33;
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
  if (iVar33 == -0xfd00) {
    puVar24 = &DAT_180232260;
    local_f8._0_4_ = 0;
    local_1e0 = 0;
    local_e8 = param_2;
    uVar19 = 0;
    uVar15 = 0;
    uVar21 = 0;
    uVar26 = (uint)local_f8;
    do {
      if (local_1e0 != 0) break;
      uVar20 = *local_1a0;
      uVar5 = (undefined1)uVar17;
      uVar36 = uVar20 & 0x10000000;
      bVar8 = uVar36 != 0;
      uVar13 = uVar20 & 0xe0ff0000;
      uStack_108 = CONCAT44((int)uVar17,uVar20) & 0xffffffffe0ff0000;
      uVar31 = uVar20 & 0xc0000000;
      local_100 = CONCAT62(CONCAT42(local_100._4_4_,CONCAT11(bVar8,uVar5)),0xf0f);
      uVar23 = uVar20 & 0xffff;
      local_110 = CONCAT44(uVar20,uVar20) & 0xffffffffffff;
      uVar12 = (uint)uVar14;
      uVar9 = (uint)uVar21;
      if (uVar23 == 0x1f) {
        uVar23 = local_1a0[2];
        uVar36 = (uVar23 & 0x1800 | uVar23 >> 0x14 & 0x7ff) >> 8;
        if ((uVar9 == 0) && (uVar13 == 0)) {
          uVar20 = 1;
        }
        else {
          uVar20 = 0;
        }
        if (uVar31 != 0) {
          uVar20 = 0;
        }
        if ((uVar36 < 0x12) && ((0x20402U >> (ulonglong)uVar36 & 1) != 0)) {
          uVar20 = uVar20 & uVar12;
        }
        else {
          uVar20 = 0;
        }
        if (((uVar13 != 0) || (-1 < (int)uVar23)) || (uVar13 = 1, (uVar23 & 0xf000000) != 0)) {
          uVar13 = 0;
        }
        uVar13 = uVar13 & uVar20;
        if (uVar13 == 0) {
          uVar14 = 0;
          break;
        }
        uVar20 = local_1a0[1];
        uVar31 = uVar23 & 0x7ff;
        if ((byte)puVar24[(ulonglong)uVar36 + 0x360] <= uVar31) {
          uVar13 = 0;
        }
        uVar14 = (ulonglong)uVar13;
        uVar12 = uVar23 & 0xf0000;
        if (uVar12 == 0) {
          uVar12 = 0xf0000;
        }
        bVar2 = (byte)(uVar12 >> 0x10);
        if (uVar36 == 1) {
          uVar13 = uVar20 & 0xf;
          uVar36 = uVar20 >> 0x10 & 0xf;
          if (((9 < uVar31) || ((uVar20 & 0xfff0fff0) != 0x80000000)) ||
             ((uVar23 & 0x900000) != 0 || 0xd < uVar13)) {
            uVar14 = 0;
          }
          uVar20 = uVar13 << 4 | uVar36;
          uVar22 = 0;
          do {
            uVar9 = 0;
            if ((uint)uVar14 == 0) break;
            uVar34 = *(uint *)(param_3 + uVar22 * 4 + 0x118);
            if (((uVar34 >> 0x18 == uVar20) || ((uVar34 >> 0x10 & 0xff) == uVar20)) ||
               (((uVar34 >> 8 & 0xff) == uVar20 || (uVar9 = 1, (uVar34 & 0xff) == uVar20)))) {
              uVar9 = 0;
            }
            uVar34 = (int)uVar22 + 1;
            uVar22 = (ulonglong)uVar34;
            uVar9 = uVar9 & (uint)uVar14;
            uVar14 = (ulonglong)uVar9;
          } while (uVar34 < 0x10);
          if ((uVar13 == 0xd) || (uVar34 = 1, uVar13 == 9 && uVar36 == 0)) {
            uVar34 = 0;
          }
          uVar14 = (ulonglong)(uVar34 & uVar9);
          if ((uVar34 & uVar9) != 0) {
            *(byte *)((longlong)&local_1b0 + (ulonglong)uVar31 + 4) =
                 *(byte *)((longlong)&local_1b0 + (ulonglong)uVar31 + 4) | bVar2;
            lVar28 = local_1b8 + (ulonglong)uVar31 * 4;
            uVar19 = local_198 & 0xffffffff;
            uVar15 = local_198 >> 0x20;
            *(uint *)(lVar28 + 0x118) =
                 (uVar20 | (uVar20 | (uVar20 | uVar20 << 8) << 8) << 8) &
                 *(uint *)(puVar24 + (ulonglong)(uVar12 >> 0x10) * 4 + 0x380) |
                 *(uint *)(lVar28 + 0x118) &
                 (*(uint *)(puVar24 + (ulonglong)(uVar12 >> 0x10) * 4 + 0x380) ^ 0xffffffff);
            if ((uVar23 & 0x400000) != 0 || uVar13 == 10) {
              *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar31 >> 3)) =
                   *(byte *)(local_1b8 + 0x140 + (longlong)((int)uVar31 >> 3)) |
                   (byte)((int)uVar17 << (ulonglong)(uVar23 & 7));
            }
            uVar21 = local_1b0 & 0xffffffff;
            puVar11 = local_f0;
            param_3 = local_1b8;
            uVar26 = (uint)local_f8;
          }
        }
        else if (uVar36 == 10) {
          uVar13 = uVar20 & 0x78000000;
          if ((((uVar23 & 0x7f0) != 0) || ((uVar20 & 0x87ffffff) != 0x80000000)) ||
             (((uVar23 & 0xf00000) != 0 ||
              (uVar13 == 0x28000000 || (uVar13 + 0xf0000000 & 0xe7ffffff) != 0)))) {
            uVar14 = 0;
          }
          *(byte *)(param_3 + (ulonglong)uVar31 + 0x14f) = (byte)(uVar13 >> 0x1b);
        }
        else if (uVar36 == 0x11) {
          if ((((uVar23 & 0x7fe) != 0) || ((uVar20 & 0xfff0fff0) != 0x80000000)) ||
             (((uVar23 & 0xf00000) != 0 || (0xd < (uVar20 & 0xf))))) {
            uVar13 = 0;
          }
          if (uVar31 == 0) {
            uVar14 = (ulonglong)
                     (uVar13 & ((uVar12 - 0x10000 & 0xfffcffff) == 0 && uVar12 != 0x40000));
            local_1a8._0_7_ = CONCAT16(bVar2,(undefined6)local_1a8);
          }
          else if (uVar31 == 1) {
            local_1a8 = CONCAT17(1,(undefined7)local_1a8);
            if (uVar12 != 0xf0000) {
              uVar13 = 0;
            }
            uVar14 = (ulonglong)uVar13;
          }
          else {
            uVar14 = 0;
          }
        }
LAB_1800ce334:
        local_1a0 = local_1a0 + 3;
      }
      else {
        uVar34 = uVar31 == 0 & uVar12;
        if (uVar23 == 0x2f) {
          uVar23 = local_1a0[1];
          if ((uVar9 != 0) || (bVar8)) {
            uVar34 = 0;
          }
          if (((((uVar13 != 0) || (-1 < (int)uVar23)) ||
               ((uVar23 & 0x1800 | uVar23 >> 0x14 & 0x7ff) >> 8 != 0xe)) ||
              (((uVar23 & 0xf000000) != 0 || ((uVar23 & 0xf0000) != 0xf0000)))) ||
             (uVar13 = 1, (uVar23 & 0xf007f0) != 0)) {
            uVar13 = 0;
          }
          uVar14 = (ulonglong)(uVar34 & uVar13);
          if ((uVar34 & uVar13) != 0) {
            *(undefined1 *)(param_3 + (ulonglong)(uVar23 & 0x7ff) + 0x2a0) = uVar5;
            *(uint *)(param_3 + (ulonglong)(uVar23 & 0x7ff) * 4 + 0x2b0) = local_1a0[2];
          }
          goto LAB_1800ce334;
        }
        if (uVar23 == 0x30) {
          uVar23 = local_1a0[1];
          if ((uVar9 != 0) || (bVar8)) {
            uVar34 = 0;
          }
          if ((((uVar13 != 0) || (-1 < (int)uVar23)) ||
              ((uVar23 & 0x1800 | uVar23 >> 0x14 & 0x7ff) >> 8 != 7)) ||
             ((((uVar23 & 0xf000000) != 0 || ((uVar23 & 0xf0000) != 0xf0000)) ||
              (uVar13 = 1, (uVar23 & 0xf007f0) != 0)))) {
            uVar13 = 0;
          }
          uVar14 = (ulonglong)(uVar34 & uVar13);
          if ((uVar34 & uVar13) != 0) {
            uVar13 = (uVar23 & 0x7ff) * 4;
            *(undefined1 *)(param_3 + (ulonglong)(uVar23 & 0x7ff) + 400) = uVar5;
            *(uint *)(param_3 + (ulonglong)uVar13 * 4 + 0x1a0) = local_1a0[2];
            *(uint *)(param_3 + (ulonglong)(uVar13 + 1) * 4 + 0x1a0) = local_1a0[3];
            *(uint *)(param_3 + (ulonglong)(uVar13 + 2) * 4 + 0x1a0) = local_1a0[4];
            *(uint *)(param_3 + (ulonglong)(uVar13 + 3) * 4 + 0x1a0) = local_1a0[5];
          }
LAB_1800cdf30:
          local_1a0 = local_1a0 + 6;
        }
        else {
          if (uVar23 == 0x51) {
            if ((uVar9 != 0) || (bVar8)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 1;
            }
            if (uVar31 != 0) {
              uVar23 = 0;
            }
            if ((((uVar13 == 0) && (uVar13 = local_1a0[1], (int)uVar13 < 0)) &&
                ((uVar13 & 0x1800 | uVar13 >> 0x14 & 0x7ff) >> 8 == 2)) &&
               ((((uVar13 & 0xf000000) == 0 && ((uVar13 & 0xf0000) == 0xf0000)) &&
                (((uVar13 & 0xf00000) == 0 && (uVar13 = uVar13 & 0x7ff, uVar13 < 0xe0)))))) {
              uVar14 = (ulonglong)(byte)(uVar23 & uVar12);
              if ((uVar23 & uVar12) != 0) {
                uVar23 = uVar13 * 4;
                *(undefined1 *)(param_3 + (ulonglong)uVar13 + 0x331) = uVar5;
                *(uint *)(param_3 + (ulonglong)uVar23 * 4 + 0x414) = local_1a0[2];
                *(uint *)(param_3 + (ulonglong)(uVar23 + 1) * 4 + 0x414) = local_1a0[3];
                *(uint *)(param_3 + (ulonglong)(uVar23 + 2) * 4 + 0x414) = local_1a0[4];
                *(uint *)(param_3 + (ulonglong)(uVar23 + 3) * 4 + 0x414) = local_1a0[5];
              }
            }
            else {
              uVar14 = 0;
            }
            goto LAB_1800cdf30;
          }
          if (uVar23 == 0xfffe) {
            if (uVar36 != 0) {
              uVar34 = 0;
            }
            uVar14 = (ulonglong)uVar34;
            local_1a0 = local_1a0 + ((uVar20 >> 0x10) + 1);
          }
          else if (uVar23 == 0xffff) {
            uVar23 = (uint)(uVar36 == 0 && uVar13 == 0);
            if ((int)uVar15 != 0) {
              uVar23 = 0;
            }
            uVar14 = 0;
            do {
              if (*(int *)(param_3 + uVar14 * 4 + 0x2f0) != 0) {
                uVar14 = (ulonglong)(uVar26 == 0x1c);
                goto LAB_1800cde44;
              }
              uVar13 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar13;
            } while (uVar13 < 0x10);
            uVar14 = (ulonglong)(uVar23 & uVar34);
LAB_1800cde44:
            local_1e0 = 1;
            local_1a0 = local_1a0 + 1;
            local_1dc = uVar34;
          }
          else {
            if (0x60 < uVar23) {
              uVar34 = 0;
            }
            uVar26 = uVar20 & 0xff0000;
            if (((uVar26 == 0) ||
                ((uVar23 - 0x29 < 0x36 &&
                 ((0x20000000000011U >> ((ulonglong)(uVar23 - 0x29) & 0x3f) & 1) != 0 &&
                  uVar26 < 0x60001)))) ||
               ((uVar23 == 0x42 && ((uVar26 - 0x10000 & 0xfffeffff) == 0)))) {
              uVar26 = 1;
            }
            else {
              uVar26 = 0;
            }
            if ((uVar20 & 0xe0000000) != 0) {
              uVar26 = 0;
            }
            cVar4 = puVar24[uVar23];
            uVar14 = (ulonglong)cVar4;
            if ((cVar4 == -1) ||
               ((bVar8 && ((lVar28 = (-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar14 & 0xffffffff) << 3) - (longlong)(int)cVar4,
                           ((byte)puVar24[lVar28 * 2 + 0xa0] >> 2 & 1) != 0 ||
                           ((*(short *)(puVar24 + lVar28 * 2 + 0xa6) == 0 &&
                            (*(short *)(puVar24 + lVar28 * 2 + 0xa4) == 0)))))))) {
              uVar26 = 0;
            }
            else {
              uVar26 = uVar26 & uVar34;
            }
            uVar36 = local_1a0[1];
            local_98 = (-(uVar14 >> 0x1f & 1) & 0xfffffff800000000 | (uVar14 & 0xffffffff) << 3) -
                       (longlong)(int)cVar4;
            puVar35 = puVar24 + local_98 * 2;
            uVar26 = uVar26 & (*(short *)(puVar35 + 0xa4) == 0 || (int)uVar36 < 0);
            if (uVar26 == 0) {
              uVar14 = 0;
              break;
            }
            local_f0 = local_1a0;
            if (uVar9 != 0) {
              local_f0 = puVar11;
            }
            if (local_e8 <= uVar9) {
              uVar26 = 0;
            }
            uVar14 = (ulonglong)uVar26;
            uVar21 = (ulonglong)((byte)puVar35[0xa1] + uVar9);
            local_1b0 = CONCAT44(local_1b0._4_4_,(byte)puVar35[0xa1] + uVar9);
            if (((byte)puVar35[0xa0] >> 1 & 1) != 0) {
              *(int *)(param_3 + 0x1218) = *(int *)(param_3 + 0x1218) + 1;
            }
            uVar31 = 0;
            if (*(ushort *)(puVar35 + 0xa4) == 0) {
              uVar36 = 0;
              puVar11 = local_1a0 + 1;
              uVar20 = 0;
            }
            else {
              uVar12 = (uVar36 & 0x1800 | uVar36 >> 0x14 & 0x7ff) >> 8;
              uVar20 = uVar36 & 0x7ff;
              puVar11 = local_1a0 + 2;
              if (((byte)puVar24[(ulonglong)uVar12 + 0x360] <= uVar20) ||
                 (uVar9 = 1, (uVar36 & 0xf000000) != 0)) {
                uVar9 = 0;
              }
              if (0x700000 < (uVar36 & 0xf00000)) {
                uVar9 = 0;
              }
              uVar9 = uVar9 & uVar26;
              uVar14 = (ulonglong)(byte)uVar9;
              if (uVar9 != 0) {
                uVar31 = (uint)*(ushort *)(puVar24 + (ulonglong)uVar12 * 2 + 0x70);
                if ((*(ushort *)(puVar35 + 0xa4) &
                    *(ushort *)(puVar24 + (ulonglong)uVar12 * 2 + 0x70)) == 0) {
                  uVar9 = 0;
                }
                uVar14 = (ulonglong)uVar9;
              }
              uVar36 = uVar36 & 0xf0000;
              if (uVar36 == 0) {
                uVar36 = 0xf0000;
              }
              if (uVar23 == 0x41) {
                uVar36 = 7;
              }
              else {
                uVar36 = uVar36 >> 0x10;
              }
            }
            if (bVar8) {
              uVar12 = *puVar11;
              uVar26 = uVar12 & 0xff0000;
              if (((-1 < (int)uVar12) || ((uVar12 & 0x1800 | uVar12 >> 0x14 & 0x7ff) >> 8 != 0x13))
                 || (uVar9 = 1, (uVar12 & 0x7ff) != 0)) {
                uVar9 = 0;
              }
              uVar34 = 0;
              if ((uVar12 & 0xf000000) == 0xd000000 || (uVar12 & 0xf000000) == 0) {
                uVar34 = uVar9 & (uint)uVar14;
              }
              uVar34 = uVar34 & ((((uVar26 == 0xe40000 || uVar26 == 0) || uVar26 == 0x550000) ||
                                 uVar26 == 0xaa0000) || uVar26 == 0xff0000);
              uVar14 = (ulonglong)uVar34;
              if (uVar34 != 0) {
                local_1a0 = local_1a0 + 1;
              }
            }
            puVar32 = local_1a0;
            uVar9 = func_0x0001801e9df8(uVar23);
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_b8[3] = 0;
            uVar34 = 0;
            uStack_108 = CONCAT44(uVar9,(undefined4)uStack_108);
            uVar12 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            iVar33 = 0;
            local_b8[4] = 0;
            local_b8[5] = 0;
            local_b8[6] = 0;
            local_b8[7] = 0;
            uVar26 = 0;
            local_80[0] = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_80[3] = 0;
            local_80[4] = 0;
            local_80[5] = 0;
            local_80[6] = 0;
            local_80[7] = 0;
            local_1cc[0] = 0;
            iVar16 = (int)uVar17;
            uVar5 = (undefined1)uVar17;
            puVar11 = extraout_x1;
            iVar27 = extraout_w13;
            if ((int)uVar14 != 0) {
              local_d8 = extraout_w13;
              uStack_d4 = (int)uVar15;
              local_c8 = uVar20;
              local_c0 = puVar35;
              local_e4 = uVar13;
              local_e0 = uVar9;
              local_d0 = (int)uVar19;
              uStack_cc = (int)uVar21;
              local_60 = extraout_x1;
              do {
                if (3 < uVar26) break;
                lVar28 = local_98 * 2 + 0xa6;
                uVar3 = *(ushort *)(extraout_x9 + (ulonglong)uVar26 * 2 + lVar28);
                if (uVar3 == 0) break;
                uVar18 = extraout_x14[uVar26 + iVar33];
                uVar25 = uVar18 & 0x1800 | uVar18 >> 0x14 & 0x700;
                local_80[uVar26] = uVar18 & 0xff0000;
                uVar30 = uVar25 >> 8;
                bVar2 = extraout_x9[(ulonglong)uVar30 + 0x360];
                uVar20 = uVar18 & 0xf000000;
                *(uint *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4) = uVar18 & 0x7ff;
                uVar34 = uVar18 >> 0x1f;
                local_b8[(ulonglong)uVar26 + 4] = uVar20;
                if ((uint)bVar2 <= (uVar18 & 0x7ff)) {
                  uVar34 = 0;
                }
                if (uVar20 == 0) {
LAB_1800cd3a4:
                  uVar34 = uVar34 & (uint)uVar14;
                  uVar14 = (ulonglong)(byte)uVar34;
                  if (uVar34 != 0) {
                    if (uVar30 == 0x11) {
                      uVar20 = 0x1000;
                      if (*(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4) != 1) {
                        uVar20 = 0x800;
                      }
                    }
                    else {
                      uVar20 = (uint)*(ushort *)(extraout_x9 + (ulonglong)uVar30 * 2 + 0x70);
                    }
                    local_b8[uVar26] = uVar20;
                    if ((uVar20 & uVar3) == 0) {
                      uVar34 = 0;
                    }
                    if (((short)uVar3 < 0) && (local_b8[(ulonglong)uVar26 + 4] != 0)) {
                      uVar34 = 0;
                    }
                    uVar25 = local_80[uVar26];
                    if ((uVar3 >> 0xe & 1) == 0) {
LAB_1800cd414:
                      uVar10 = 1;
                    }
                    else {
                      if (uVar25 == 0xe40000) {
                        uVar25 = 0xe40000;
                        goto LAB_1800cd414;
                      }
                      uVar10 = 0;
                    }
                    uVar34 = uVar34 & uVar10;
                    if (uVar20 == 0x1000) {
                      local_80[uVar26] = 0;
                      if (uVar25 != 0xe40000) {
                        uVar34 = 0;
                      }
LAB_1800cd458:
                      bVar8 = true;
                    }
                    else {
                      uVar25 = uVar25 & 0xff0000;
                      if ((((uVar25 == 0) || (uVar25 == 0x550000)) || (uVar25 == 0xaa0000)) ||
                         (bVar8 = false, uVar25 == 0xff0000)) goto LAB_1800cd458;
                    }
                    uVar34 = ((uVar3 & 0x2000) == 0 || bVar8) & uVar34;
                    uVar14 = (ulonglong)uVar34;
                    local_1cc[uVar26] = bVar8;
                    if ((uVar18 >> 0xd & 1) != 0) {
                      uVar20 = extraout_x14[uVar26 + iVar33 + 1];
                      uVar25 = (uVar20 & 0x1800 | uVar20 >> 0x14 & 0x7ff) >> 8;
                      if ((uVar25 != 0xf) || ((uVar20 & 0xff0000) != 0xe40000 || uVar30 != 1)) {
                        uVar34 = 0;
                      }
                      if (((uint)(byte)extraout_x9[(ulonglong)uVar25 + 0x360] <= (uVar20 & 0x7ff))
                         || (uVar25 = 1, (uVar20 & 0xf000000) != 0)) {
                        uVar25 = 0;
                      }
                      local_80[(ulonglong)uVar26 + 4] = uVar20;
                      iVar33 = iVar33 + 1;
                      if (uVar30 != 1) goto LAB_1800cd334;
                      uVar14 = (ulonglong)(uVar34 & uVar25);
                      uVar22 = 0;
                      if (uVar26 != 0) {
                        do {
                          if ((uint)uVar14 == 0) break;
                          if (local_b8[uVar22] == 1) {
                            uVar14 = (ulonglong)
                                     ((uint)(*(int *)((longlong)&local_1c8 + uVar22 * 4) ==
                                            *(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4))
                                     & (uint)uVar14);
                          }
                          uVar20 = (int)uVar22 + 1;
                          uVar22 = (ulonglong)uVar20;
                        } while (uVar20 < uVar26);
                      }
                      *(undefined1 *)(param_3 + 0x147) = uVar5;
                      if (extraout_w12 != '\0') {
                        *(undefined1 *)(param_3 + 0x148) = uVar5;
                      }
                    }
                  }
                }
                else {
                  if (uVar20 == 0x1000000) {
                    if ((uVar25 < 0x100) || (((uVar30 - 1 & 0xffffffee) == 0 && (uVar30 != 0x12))))
                    goto LAB_1800cd3a4;
                  }
                  else if ((((uVar20 + 0xf5000000 & 0xfeffffff) == 0) &&
                           (((uVar25 < 0x100 || (uVar30 - 1 < 2)) ||
                            ((uVar30 == 0x11 &&
                             (*(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4) == 0)))))) ||
                          ((uVar20 == 0xd000000 && (uVar30 == 0x13 || uVar30 == 0xe))))
                  goto LAB_1800cd3a4;
LAB_1800cd334:
                  uVar14 = 0;
                }
                uVar20 = (uint)(byte)puVar35[0xa3];
                uVar34 = 0xf;
                if (uVar23 == 0x5a) {
                  if (uVar26 < 2) {
                    uVar20 = 3;
                  }
                }
                else if ((uVar23 == 0x42 && uVar26 == 0) || ((uVar23 == 0x5d && (uVar26 != 1)))) {
                  bVar2 = *(byte *)(((ulonglong)puVar32[3] & 0x7ff) + param_3 + 0x14f);
                  uVar20 = 7;
                  if ((bVar2 & 0x1f) == 2) {
                    uVar20 = 3;
                  }
                  if ((uVar13 != 0) && (uVar20 = uVar34, (bVar2 & 0x1f) == 2)) {
                    uVar20 = 0xb;
                  }
                }
                if ((uVar23 == 0x5f && uVar26 == 0) &&
                   (uVar20 = 0xb,
                   (*(byte *)(((ulonglong)puVar32[3] & 0x7ff) + param_3 + 0x14f) & 0x1f) != 2)) {
                  uVar20 = uVar34;
                }
                uVar25 = local_80[uVar26];
                if (puVar35[0xa2] != '\0') {
                  uVar20 = uVar36 & uVar20;
                }
                uVar18 = iVar16 << (ulonglong)(uVar25 >> 0x16 & 3);
                if ((uVar20 & 8) == 0) {
                  uVar18 = 0;
                }
                uVar30 = iVar16 << (ulonglong)(uVar25 >> 0x14 & 3);
                if ((uVar20 & 4) == 0) {
                  uVar30 = 0;
                }
                uVar10 = iVar16 << (ulonglong)(uVar25 >> 0x12 & 3);
                if ((uVar20 & 2) == 0) {
                  uVar10 = 0;
                }
                uVar25 = iVar16 << (ulonglong)(uVar25 >> 0x10 & 3);
                if ((uVar20 & 1) == 0) {
                  uVar25 = 0;
                }
                uVar25 = uVar18 | uVar30 | uVar10 | uVar25;
                uVar20 = uVar25 & 0xff;
                if (uVar23 != 0x1e) {
                  if ((uVar26 == 2) ||
                     (*(short *)(extraout_x9 + (ulonglong)(uVar26 + 1) * 2 + lVar28) == 0)) {
                    uVar18 = local_e0;
                    if (uVar9 == 0) goto LAB_1800cd834;
                  }
                  else {
                    uVar18 = 1;
                  }
                  local_dc = iVar33;
                  uVar10 = local_b8[uVar26];
                  uVar30 = 0;
                  do {
                    bVar2 = (byte)uVar25;
                    if (uVar10 == 1) {
                      if (local_80[(ulonglong)uVar26 + 4] == 0) {
                        uVar12 = uVar30 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4);
                        bVar1 = *(byte *)((longlong)&local_1b0 + (ulonglong)uVar12 + 4);
                        *(byte *)(param_3 + (ulonglong)uVar12) =
                             *(byte *)(param_3 + (ulonglong)uVar12) | bVar2;
                        uVar12 = (uint)bVar1;
                      }
                      else {
                        lVar28 = 0;
                        do {
                          *(byte *)(lVar28 + param_3) = *(byte *)(lVar28 + param_3) | bVar2;
                          lVar28 = lVar28 + 1;
                          uVar12 = 0xf;
                        } while (lVar28 != 10);
                      }
                    }
                    else if (uVar10 == 2) {
                      lVar28 = param_3 + (ulonglong)
                                         (uVar30 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar26 * 4));
                      *(byte *)(lVar28 + 0x38) = *(byte *)(lVar28 + 0x38) | bVar2;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 4) {
                      lVar28 = param_3 + (ulonglong)
                                         (uVar30 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar26 * 4));
                      bVar1 = *(byte *)(lVar28 + 10);
                      *(byte *)(lVar28 + 10) = bVar1 | bVar2;
                      uVar12 = (uint)bVar1;
                    }
                    else if (uVar10 == 8) {
                      lVar28 = param_3 + (ulonglong)
                                         (uVar30 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar26 * 4));
                      *(byte *)(lVar28 + 0x15f) = *(byte *)(lVar28 + 0x15f) | bVar2;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 0x10) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar30 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4))
                       + 0x16f) = uVar5;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 0x20) {
                      lVar28 = param_3 + (ulonglong)
                                         (uVar30 + *(int *)((longlong)&local_1c8 +
                                                           (ulonglong)uVar26 * 4));
                      *(byte *)(lVar28 + 0x17f) = *(byte *)(lVar28 + 0x17f) | bVar2;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 0x40) {
                      uVar12 = uVar34;
                      if (*(char *)(param_3 + (ulonglong)
                                              (uVar30 + *(int *)((longlong)&local_1c8 +
                                                                (ulonglong)uVar26 * 4)) + 0x14f) ==
                          '\0') {
                        uVar12 = 0;
                      }
                    }
                    else if (uVar10 == 0x80) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar30 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4))
                       + 0x146) = uVar5;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 0x400) {
                      *(undefined1 *)
                       (param_3 + (ulonglong)
                                  (uVar30 + *(int *)((longlong)&local_1c8 + (ulonglong)uVar26 * 4))
                       + 0x180) = uVar5;
                      uVar12 = 0xf;
                    }
                    else if (uVar10 == 0x800) {
                      *(byte *)(param_3 + 0x144) = *(byte *)(param_3 + 0x144) | bVar2;
                      uVar12 = extraout_w10 & 0xff;
                    }
                    else if (uVar10 == 0x1000) {
                      *(byte *)(param_3 + 0x145) = *(byte *)(param_3 + 0x145) | bVar2;
                      uVar12 = extraout_w11 & 0xff;
                    }
                    uVar30 = uVar30 + 1;
                  } while (uVar30 < uVar18);
                }
LAB_1800cd834:
                if ((uVar23 != 0x58 || uVar26 == 0) && (uVar23 != 1 || uVar31 != 4)) {
                  uVar14 = (ulonglong)((uint)(uVar20 == (uVar20 & uVar12)) & (uint)uVar14);
                }
                uVar26 = uVar26 + 1;
              } while ((int)uVar14 != 0);
              uVar15 = uVar15 & 0xffffffff;
              uVar19 = uVar19 & 0xffffffff;
              uVar21 = uVar21 & 0xffffffff;
              uVar34 = (uint)local_1cc[0];
              puVar11 = local_60;
              puVar35 = local_c0;
              uVar20 = local_c8;
              iVar27 = local_d8;
              local_1dc = extraout_w15;
              local_1d4 = uVar31;
              local_1d0 = uVar36;
            }
            bVar2 = (byte)uVar36;
            puVar24 = extraout_x9;
            if (uVar31 == 4) {
              if (uVar23 == 1) {
                lVar28 = param_3 + (ulonglong)uVar20;
                *(byte *)(lVar28 + 10) = *(byte *)(lVar28 + 10) & (bVar2 ^ 0xff);
                uVar26 = 0;
                do {
                  uVar13 = iVar16 << (ulonglong)(uVar26 & 0x1f);
                  if (((uVar13 & uVar36) != 0) &&
                     ((iVar16 << (ulonglong)
                                 (local_80[0] >> (ulonglong)(uVar26 * 2 + 0x10 & 0x1f) & 3) & uVar12
                      ) != 0)) {
                    *(byte *)(lVar28 + 10) = *(byte *)(lVar28 + 10) | (byte)uVar13;
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar26 < 4);
                puVar24 = &DAT_180232260;
                local_1dc = uVar34;
              }
              else {
                *(byte *)(param_3 + (ulonglong)uVar20 + 10) =
                     *(byte *)(param_3 + (ulonglong)uVar20 + 10) | bVar2;
              }
            }
            else if (uVar31 == 0x20) {
LAB_1800cd8c0:
              *(byte *)(param_3 + (ulonglong)uVar20 + 0x17f) =
                   *(byte *)(param_3 + (ulonglong)uVar20 + 0x17f) | bVar2;
            }
            else if (uVar31 == 0x100) {
              *(byte *)(param_3 + (ulonglong)uVar20 + 0x14b) =
                   *(byte *)(param_3 + (ulonglong)uVar20 + 0x14b) | bVar2;
            }
            else if (uVar31 == 0x200) {
              *(undefined1 *)(param_3 + 0x330) = uVar5;
              uVar14 = (ulonglong)((uint)(extraout_w15 == 0xf0000) & (uint)uVar14);
              goto LAB_1800cd8c0;
            }
            uVar26 = uVar23;
            if (((4 < uVar23 - 0x58) || ((0x1dU >> (ulonglong)(uVar23 - 0x58 & 0x1f) & 1) == 0)) &&
               (5 < uVar23)) {
              uVar13 = (uint)uVar14;
              if (uVar23 == 6) {
                uVar14 = (ulonglong)(uVar34 & uVar13 & 0xff);
              }
              else if (uVar23 == 7) {
LAB_1800cdd60:
                uVar14 = (ulonglong)(uVar13 & 0xff & uVar34);
              }
              else if (3 < uVar23 - 8) {
                if ((uVar23 == 0xe) || (uVar23 == 0xf)) goto LAB_1800cdd60;
                if (uVar23 - 0x12 < 2) goto LAB_1800cdd74;
                if (uVar23 == 0x14) {
LAB_1800cdd3c:
                  bVar8 = extraout_w15 == 0xf0000;
LAB_1800cdd40:
                  if ((bVar8) && (local_b8[5] == 0)) {
LAB_1800cdd4c:
                    uVar23 = 1;
                  }
                  else {
                    uVar23 = 0;
                  }
                }
                else {
                  if (uVar23 == 0x15) {
LAB_1800cdd34:
                    bVar8 = extraout_w15 == 0x70000;
                    goto LAB_1800cdd40;
                  }
                  if (uVar23 == 0x16) goto LAB_1800cdd3c;
                  if (uVar23 == 0x17) goto LAB_1800cdd34;
                  if (uVar23 == 0x18) {
                    bVar8 = extraout_w15 == 0x30000;
                    goto LAB_1800cdd40;
                  }
                  if ((uVar23 == 0x19) || (uVar23 == 0x1a)) {
                    *(undefined1 *)(param_3 + 0x14a) = 0;
                    goto LAB_1800cdd74;
                  }
                  uVar36 = (uint)uVar15;
                  if (uVar23 == 0x1b) {
                    local_190[uVar36 + 1] = iVar16;
LAB_1800cdcf0:
                    local_198._4_4_ = uVar36 + 1;
                    uVar14 = (ulonglong)(uVar36 < 0x20 & uVar13);
                    uVar15 = (ulonglong)local_198._4_4_;
                    uVar19 = (ulonglong)((int)local_198 + 1U);
                    local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1U);
                    *(undefined1 *)(local_1b8 + 0x14a) = 0;
                    uVar21 = local_1b0 & 0xffffffff;
                    puVar11 = local_f0;
                    param_3 = local_1b8;
                    puVar32 = local_1a0;
                    uVar26 = local_110._4_4_;
                    goto LAB_1800cdd74;
                  }
                  if (uVar23 == 0x1c) {
                    bVar8 = local_190[uVar15 & 0xffffffff] == 0;
LAB_1800cdcc8:
                    uVar14 = (ulonglong)(bVar8 & uVar13);
                    goto LAB_1800cdd74;
                  }
                  if (uVar23 == 0x1d) {
                    bVar8 = local_190[uVar15 & 0xffffffff] == 1;
                    goto LAB_1800cdca4;
                  }
                  if (uVar23 == 0x1e) {
                    uVar14 = (ulonglong)(iVar27 == 0x1c & uVar13);
                    local_100._0_5_ = CONCAT14(1,(undefined4)local_100);
                    *(int *)(param_3 + (local_1c8 & 0xffffffff) * 4 + 0x2f0) =
                         (int)((longlong)puVar32 - (longlong)local_88 >> 2);
                    *(undefined1 *)(param_3 + 0x14a) = 0;
                    goto LAB_1800cdd74;
                  }
                  if (uVar23 == 0x20) goto LAB_1800cdd74;
                  if (uVar23 == 0x21) {
                    if (((uVar31 == local_b8[0]) && (uVar20 == (uint)local_1c8)) ||
                       ((uVar31 == local_b8[1] && (uVar20 == local_1c8._4_4_)))) {
                      uVar23 = 0;
                    }
                    else {
                      uVar23 = 1;
                    }
                    uVar14 = (ulonglong)
                             (uVar13 & ((extraout_w15 - 0x10000 & 0xfff8ffff) == 0 &&
                                       extraout_w15 != 0x80000) & uVar23);
                    goto LAB_1800cdd74;
                  }
                  if (uVar23 == 0x23) goto LAB_1800cdd74;
                  if (uVar23 == 0x24) {
                    if ((uVar31 == local_b8[0]) && (uVar23 = 0, uVar20 == (uint)local_1c8))
                    goto LAB_1800cdd58;
                    goto LAB_1800cdd4c;
                  }
                  if (uVar23 != 0x25) {
                    if (uVar23 == 0x26) {
                      iVar33 = 2;
                    }
                    else {
                      if (uVar23 == 0x27) {
                        bVar8 = local_190[uVar15 & 0xffffffff] == 2;
LAB_1800cdca4:
                        uVar15 = (ulonglong)(uVar36 - 1);
                        uVar23 = (int)uVar19 - 1;
                        uVar19 = (ulonglong)uVar23;
                        uVar14 = (ulonglong)(bVar8 & uVar13);
                        local_198 = CONCAT44(uVar36 - 1,uVar23);
                        goto LAB_1800cdd74;
                      }
                      if ((uVar23 != 0x28) && (uVar23 != 0x29)) {
                        if (uVar23 == 0x2a) {
                          bVar8 = local_190[uVar15 & 0xffffffff] == 3;
                          goto LAB_1800cdcc8;
                        }
                        if (uVar23 == 0x2b) {
                          bVar8 = local_190[uVar15 & 0xffffffff] == 3;
                          goto LAB_1800cdca4;
                        }
                        if (uVar23 == 0x2c) {
                          uVar31 = 0;
                          uVar23 = 1;
                          do {
                            if (uVar36 < uVar23) break;
                            uVar14 = (ulonglong)uVar23;
                            uVar23 = uVar23 + 1;
                            bVar8 = local_190[uVar14] - 1U < 2;
                            uVar31 = (uint)bVar8;
                          } while (!bVar8);
                        }
                        else {
                          if (uVar23 != 0x2d) {
                            if (uVar23 != 0x41) {
                              if ((uVar23 == 0x42) || (uVar23 == 0x5d)) {
LAB_1800cdae4:
                                *(uint *)(param_3 + 0x1214) =
                                     iVar16 << (ulonglong)(local_1c8._4_4_ & 0x1f) |
                                     *(uint *)(param_3 + 0x1214);
                              }
                              else if (uVar23 != 0x5e) {
                                if (uVar23 == 0x5f) goto LAB_1800cdae4;
                                if (uVar23 == 0x60) {
                                  uVar31 = 0;
                                  uVar23 = 1;
                                  do {
                                    if (uVar36 < uVar23) break;
                                    uVar14 = (ulonglong)uVar23;
                                    uVar23 = uVar23 + 1;
                                    bVar8 = local_190[uVar14] - 1U < 2;
                                    uVar31 = (uint)bVar8;
                                  } while (!bVar8);
                                  goto LAB_1800cdb58;
                                }
                              }
                            }
                            goto LAB_1800cdd74;
                          }
                          uVar31 = 0;
                          uVar23 = 1;
                          do {
                            if (uVar36 < uVar23) break;
                            uVar14 = (ulonglong)uVar23;
                            uVar23 = uVar23 + 1;
                            bVar8 = local_190[uVar14] - 1U < 2;
                            uVar31 = (uint)bVar8;
                          } while (!bVar8);
                        }
LAB_1800cdb58:
                        uVar14 = (ulonglong)(uVar13 & uVar31);
                        goto LAB_1800cdd74;
                      }
                      iVar33 = 3;
                    }
                    local_190[uVar36 + 1] = iVar33;
                    goto LAB_1800cdcf0;
                  }
                  uVar23 = (uint)((extraout_w15 - 0x10000 & 0xfffcffff) == 0 &&
                                 extraout_w15 != 0x40000);
                }
LAB_1800cdd58:
                uVar14 = (ulonglong)(uVar13 & uVar23);
              }
            }
LAB_1800cdd74:
            if (*(short *)(puVar35 + 0xa4) != 0) {
              puVar32 = puVar32 + 1;
            }
            uVar23 = 0;
            if ((int)uVar14 != 0) {
              puVar29 = extraout_x14;
              while ((uVar23 < 4 &&
                     (*(short *)(puVar24 + (ulonglong)uVar23 * 2 + local_98 * 2 + 0xa6) != 0))) {
                if (((*puVar29 & 0x1800 | *puVar29 >> 0x14 & 0x7ff) >> 8 != 0x11) &&
                   (local_80[(ulonglong)uVar23 + 4] != 0)) {
                  puVar32 = puVar32 + 1;
                  puVar29 = puVar29 + 1;
                }
                puVar29 = puVar29 + 1;
                puVar32 = puVar32 + 1;
                uVar23 = uVar23 + 1;
              }
            }
            local_f8 = CONCAT44(local_f8._4_4_,uVar26);
            local_1a0 = puVar32 + 1;
          }
        }
      }
    } while ((int)uVar14 != 0);
  }
  piVar7 = local_88;
  lVar6 = local_90;
  puVar32 = local_1a0;
  lVar28 = 0;
  do {
    if ((*(int *)(local_90 + 0x2f0 + lVar28 * 4) == 0) ||
       (*(char *)(local_90 + 0x180 + lVar28) != '\0')) {
      uVar26 = 1;
    }
    else {
      uVar26 = 0;
    }
    lVar28 = lVar28 + 1;
    uVar26 = uVar26 & (uint)uVar14;
    uVar14 = (ulonglong)uVar26;
  } while (lVar28 != 0x10);
  *(undefined1 *)(local_90 + 0x126c) = 0xff;
  if (uVar26 != 0) {
    local_1e0 = 0;
    uVar14 = FUN_1800ce408(local_88,puVar11,local_90 + 0x2f0,&DAT_180236df8,&local_1e0);
    uVar14 = uVar14 & 0xffffffff;
    *(undefined1 *)(lVar6 + 0x149) = (undefined1)local_1e0;
    *local_58 = (int)((longlong)puVar32 - (longlong)piVar7 >> 2);
  }
  return uVar14;
}

