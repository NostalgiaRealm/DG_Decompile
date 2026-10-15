/*
 * FUN_1801ea500 at 1801ea500
 * undefined FUN_1801ea500(void)
 * Address ranges: 1801ea500-1801eb79b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ea500(uint *param_1,undefined2 param_2,longlong param_3,undefined4 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint *extraout_x1;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong extraout_x9;
  undefined8 *extraout_x10;
  undefined8 *puVar24;
  uint uVar25;
  ulonglong extraout_x11;
  uint extraout_w12;
  uint uVar26;
  uint extraout_w15;
  uint *puVar27;
  longlong lVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230 [6];
  undefined8 local_218;
  int local_210;
  byte local_208;
  undefined8 *local_200;
  uint local_1f8;
  longlong local_1f0;
  uint local_1e8;
  uint *local_1e0;
  undefined8 local_1d8;
  int local_1d0 [32];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  uint *local_138;
  uint local_130;
  uint local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 *local_110;
  undefined *local_108;
  longlong local_100;
  uint *local_f8;
  longlong local_f0;
  uint *local_e8;
  uint local_e0 [4];
  uint *local_d0;
  uint *puStack_c8;
  undefined4 *local_c0;
  uint local_b8 [4];
  uint local_a8 [4];
  undefined8 local_98;
  undefined2 local_90;
  undefined2 local_8e;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 local_4c;
  
  local_e8 = param_1;
  local_c0 = param_4;
  FUN_180222c50(param_3,0,0x4a70);
  uVar31 = *param_1;
  uStack_84 = 0x8000800020002;
  uStack_8c = 0x3000300010001;
  local_1f8 = 0;
  local_1e8 = 0;
  bVar8 = uVar31 + 0x1fe00 < 2;
  uVar13 = (ulonglong)bVar8;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_64 = 0x10001000000000;
  local_98 = 0x2000100020000c;
  uStack_7c = 0x100010;
  uStack_5c = 0x10001;
  local_4c = 0x10000;
  local_208 = 0xfffe0200 < uVar31;
  uStack_54 = 0x10001000000000;
  puVar24 = &local_98;
  local_1e0 = param_1 + 1;
  local_1d8 = 0;
  local_1d0[2] = 0;
  local_1d0[3] = 0;
  local_1d0[6] = 0;
  local_1d0[7] = 0;
  local_1d0[4] = 0;
  local_1d0[5] = 0;
  local_1d0[10] = 0;
  local_1d0[0xb] = 0;
  local_1d0[8] = 0;
  local_1d0[9] = 0;
  local_1d0[0xe] = 0;
  local_1d0[0xf] = 0;
  local_1d0[0xc] = 0;
  local_1d0[0xd] = 0;
  local_1d0[0x12] = 0;
  local_1d0[0x13] = 0;
  local_1d0[0x10] = 0;
  local_1d0[0x11] = 0;
  local_1d0[0x16] = 0;
  local_1d0[0x17] = 0;
  local_1d0[0x14] = 0;
  local_1d0[0x15] = 0;
  local_1d0[0x1a] = 0;
  local_1d0[0x1b] = 0;
  local_1d0[0x18] = 0;
  local_1d0[0x19] = 0;
  local_1d0[0x1e] = 0;
  local_1d0[0x1f] = 0;
  local_1d0[0x1c] = 0;
  local_1d0[0x1d] = 0;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  uVar30 = 0;
  uVar15 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = (uint *)0x0;
  local_140 = 0;
  uVar17 = (ulonglong)local_208;
  *(char *)(param_3 + 0x4a6d) = (char)uVar31;
  puVar11 = (uint *)0x0;
  *(undefined1 *)(param_3 + 0x4a6c) = 2;
  lVar28 = param_3;
  local_200 = puVar24;
  local_1f0 = param_3;
  local_90 = param_2;
  local_8e = param_2;
  if (bVar8) {
    uVar20 = 0;
    uVar19 = 0;
    uVar23 = 0;
    local_240 = 0;
    local_23c = 0;
    local_100 = param_3;
    do {
      uVar30 = (uint)uVar15;
      lVar28 = local_100;
      if (local_240 != 0) break;
      uVar9 = *local_1e0;
      uVar32 = uVar9 & 0xe0ff0000;
      uStack_148 = CONCAT44(1,uVar32);
      local_238 = uVar9 & 0x10000000;
      bVar8 = local_238 != 0;
      uVar33 = uVar9 & 0xc0000000;
      local_140._0_4_ = CONCAT13(bVar8,0x10f0f);
      uVar31 = uVar9 & 0xffff;
      local_150 = CONCAT44(uVar9,uVar9) & 0xffffffffffff;
      *(int *)(param_3 + 0x4a68) = *(int *)(param_3 + 0x4a68) + 1;
      uVar25 = (uint)uVar13;
      iVar21 = (int)uVar23;
      if (uVar31 == 0x1f) {
        if ((iVar21 != 0) || (bVar8)) {
          uVar31 = 0;
        }
        else {
          uVar31 = 1;
        }
        if (uVar33 != 0) {
          uVar31 = 0;
        }
        if (((((uVar32 == 0) && (uVar32 = local_1e0[2], (int)uVar32 < 0)) &&
             ((uVar32 & 0x1800 | uVar32 >> 0x14 & 0x7ff) >> 8 == 1)) &&
            (((uVar32 & 0xf000000) == 0 && ((uVar32 & 0xf0000) == 0xf0000)))) &&
           ((uVar32 & 0xf00000) == 0)) {
          lVar28 = 2;
          if (*(char *)(param_3 + 0x4a6d) != '\0') {
            lVar28 = 3;
          }
          if ((((uVar32 & 0x7ff) < (uint)*(ushort *)((longlong)puVar24 + lVar28 * 2)) &&
              (uVar33 = local_1e0[1], (uVar33 & 0xfff0fff0) == 0x80000000)) &&
             ((uVar33 & 0xf) < 0xe)) {
            uVar13 = (ulonglong)(byte)(uVar31 & uVar25);
            if ((uVar31 & uVar25) != 0) {
              *(byte *)(param_3 + (ulonglong)(uVar32 & 0x7ff)) =
                   (byte)((uVar33 & 0xf) << 4) | (byte)(uVar33 >> 0x10) & 0xf;
              local_1f8 = 1 << (ulonglong)(uVar32 & 0x1f) | uVar30;
              uVar15 = (ulonglong)local_1f8;
            }
            goto LAB_1801eb688;
          }
        }
LAB_1801eb684:
        uVar13 = 0;
LAB_1801eb688:
        local_1e0 = local_1e0 + 3;
      }
      else {
        if (uVar31 == 0x2f) {
          if ((iVar21 != 0) || (bVar8)) {
            uVar31 = 0;
          }
          else {
            uVar31 = 1;
          }
          if (uVar33 != 0) {
            uVar31 = 0;
          }
          if (((((uVar32 != 0) || (uVar30 = local_1e0[1], -1 < (int)uVar30)) ||
               ((uVar30 & 0x1800 | uVar30 >> 0x14 & 0x7ff) >> 8 != 0xe)) ||
              (((uVar30 & 0xf000000) != 0 || ((uVar30 & 0xf0000) != 0xf0000)))) ||
             ((uVar30 & 0xf007f0) != 0)) goto LAB_1801eb684;
          uVar13 = (ulonglong)(byte)(uVar31 & uVar25);
          if ((uVar31 & uVar25) != 0) {
            *(undefined1 *)(param_3 + (ulonglong)(uVar30 & 0x7ff) + 0x49d8) = 1;
            *(uint *)(param_3 + (ulonglong)(uVar30 & 0x7ff) * 4 + 0x49e8) = local_1e0[2];
          }
          goto LAB_1801eb688;
        }
        if (uVar31 == 0x30) {
          if ((iVar21 != 0) || (bVar8)) {
            uVar31 = 0;
          }
          else {
            uVar31 = 1;
          }
          if (uVar33 != 0) {
            uVar31 = 0;
          }
          if ((((uVar32 != 0) || (uVar30 = local_1e0[1], -1 < (int)uVar30)) ||
              ((uVar30 & 0x1800 | uVar30 >> 0x14 & 0x7ff) >> 8 != 7)) ||
             ((((uVar30 & 0xf000000) != 0 || ((uVar30 & 0xf0000) != 0xf0000)) ||
              (((uVar30 & 0xf00000) != 0 || (local_1e0[5] != 0 || (uVar30 & 0x7f0) != 0))))))
          goto LAB_1801eb444;
          uVar13 = (ulonglong)(byte)(uVar31 & uVar25);
          if ((uVar31 & uVar25) != 0) {
            *(undefined1 *)(param_3 + (ulonglong)(uVar30 & 0x7ff) + 0x48c5) = 1;
            uVar31 = (uVar30 & 0x7ff) * 4;
            *(uint *)(param_3 + (ulonglong)uVar31 * 4 + 0x48d8) = local_1e0[2];
            *(uint *)(param_3 + (ulonglong)(uVar31 + 1) * 4 + 0x48d8) = local_1e0[3];
            *(uint *)(param_3 + (ulonglong)(uVar31 + 2) * 4 + 0x48d8) = local_1e0[4];
            *(uint *)(param_3 + (ulonglong)(uVar31 + 3) * 4 + 0x48d8) = local_1e0[5];
          }
LAB_1801eb448:
          local_1e0 = local_1e0 + 6;
        }
        else {
          if (uVar31 == 0x51) {
            if ((iVar21 != 0) || (bVar8)) {
              uVar31 = 0;
            }
            else {
              uVar31 = 1;
            }
            if (uVar33 != 0) {
              uVar31 = 0;
            }
            if (((((uVar32 == 0) && (uVar30 = local_1e0[1], (int)uVar30 < 0)) &&
                 ((uVar30 & 0x1800 | uVar30 >> 0x14 & 0x7ff) >> 8 == 2)) &&
                (((uVar30 & 0xf000000) == 0 && ((uVar30 & 0xf0000) == 0xf0000)))) &&
               ((uVar30 & 0xf00000) == 0)) {
              uVar30 = uVar30 & 0x7ff;
              lVar28 = 4;
              if (*(char *)(param_3 + 0x4a6d) != '\0') {
                lVar28 = 5;
              }
              if (uVar30 < *(ushort *)((longlong)puVar24 + lVar28 * 2)) {
                uVar13 = (ulonglong)(byte)(uVar31 & uVar25);
                if ((uVar31 & uVar25) != 0) {
                  uVar31 = local_1e0[2];
                  uVar32 = local_1e0[3];
                  uVar25 = local_1e0[4];
                  uVar33 = local_1e0[5];
                  *(undefined1 *)(param_3 + (ulonglong)uVar30 + 0x44f) = 1;
                  uVar30 = uVar30 * 4;
                  *(uint *)(param_3 + (ulonglong)uVar30 * 4 + 0x850) = uVar31;
                  *(uint *)(param_3 + (ulonglong)(uVar30 + 1) * 4 + 0x850) = uVar32;
                  *(uint *)(param_3 + (ulonglong)(uVar30 + 2) * 4 + 0x850) = uVar25;
                  *(uint *)(param_3 + (ulonglong)(uVar30 + 3) * 4 + 0x850) = uVar33;
                }
                goto LAB_1801eb448;
              }
            }
LAB_1801eb444:
            uVar13 = 0;
            goto LAB_1801eb448;
          }
          uVar25 = uVar33 == 0 & uVar25;
          if (uVar31 == 0xfffe) {
            if (local_238 != 0) {
              uVar25 = 0;
            }
            uVar13 = (ulonglong)uVar25;
            local_1e0 = local_1e0 + ((uVar9 >> 0x10) + 1);
          }
          else if (uVar31 == 0xffff) {
            uVar31 = (uint)(local_238 == 0 && uVar32 == 0);
            if ((int)uVar19 != 0) {
              uVar31 = 0;
            }
            uVar13 = 0;
            do {
              if (*(int *)(param_3 + uVar13 * 4 + 0x4a28) != 0) {
                uVar13 = (ulonglong)(local_23c == 0x1c);
                goto LAB_1801eb348;
              }
              uVar30 = (int)uVar13 + 1;
              uVar13 = (ulonglong)uVar30;
            } while (uVar30 < 0x10);
            uVar13 = (ulonglong)(uVar31 & uVar25);
LAB_1801eb348:
            local_240 = 1;
            local_1e0 = local_1e0 + 1;
            local_234 = uVar25;
          }
          else {
            if (0x60 < uVar31) {
              uVar25 = 0;
            }
            if (((uVar9 & 0xff0000) == 0) ||
               ((uVar31 - 0x29 < 0x36 &&
                ((0x20000000000011U >> ((ulonglong)(uVar31 - 0x29) & 0x3f) & 1) != 0 &&
                 (uVar9 & 0xff0000) < 0x60001)))) {
              uVar32 = 1;
            }
            else {
              uVar32 = 0;
            }
            if ((uVar9 & 0xe0000000) != 0) {
              uVar32 = 0;
            }
            cVar6 = (&DAT_18022fc40)[uVar31];
            if (cVar6 == -1) {
LAB_1801ea790:
              uVar32 = 0;
            }
            else {
              lVar10 = (longlong)(int)cVar6 * 0xc;
              if (((((byte)(&DAT_18022fcb0)[lVar10] >> 3 & 1) != 0) && ((uVar17 & 0xff) == 0)) ||
                 ((bVar8 && ((((byte)(&DAT_18022fcb0)[lVar10] >> 2 & 1) != 0 ||
                             ((*(short *)(&DAT_18022fcb6 + lVar10) == 0 &&
                              (*(short *)(&DAT_18022fcb4 + lVar10) == 0)))))))) goto LAB_1801ea790;
              uVar32 = uVar32 & uVar25;
            }
            uVar25 = local_1e0[1];
            local_f0 = (longlong)(int)cVar6 * 3;
            lVar10 = (longlong)(int)cVar6 * 0xc;
            local_108 = &DAT_18022fcb0 + lVar10;
            uVar4 = *(ushort *)(&DAT_18022fcb4 + lVar10);
            if ((bVar8) && ((uVar17 & 0xff) == 0)) {
              uVar13 = 0;
              break;
            }
            uVar32 = uVar32 & (uVar4 == 0 || (int)uVar25 < 0);
            if (uVar32 == 0) {
              uVar13 = 0;
              break;
            }
            local_138 = local_1e0;
            if (iVar21 != 0) {
              local_138 = puVar11;
            }
            local_1e8 = (uint)(byte)(&DAT_18022fcb1)[lVar10] + iVar21;
            if (0xff < local_1e8) {
              uVar32 = 0;
            }
            uVar13 = (ulonglong)uVar32;
            if (uVar4 == 0) {
              uVar25 = 0;
              uVar30 = 0;
              puVar29 = local_1e0 + 1;
            }
            else {
              uVar30 = (uVar25 & 0x1800 | uVar25 >> 0x14 & 0x7ff) >> 8;
              puVar29 = local_1e0 + 2;
              if (((uint)*(ushort *)
                          ((longlong)puVar24 +
                          (ulonglong)((uint)(*(char *)(param_3 + 0x4a6d) != '\0') | uVar30 << 1) * 2
                          ) <= (uVar25 & 0x7ff)) || (uVar33 = 1, (uVar25 & 0xf000000) != 0)) {
                uVar33 = 0;
              }
              if ((uVar25 & 0xf00000) != 0) {
                uVar33 = 0;
              }
              uVar33 = uVar33 & uVar32;
              uVar13 = (ulonglong)(byte)uVar33;
              if (uVar33 != 0) {
                if ((uVar4 & *(ushort *)(&DAT_18022fc10 + (ulonglong)uVar30 * 2)) == 0) {
                  uVar33 = 0;
                }
                uVar13 = (ulonglong)uVar33;
              }
              uVar25 = uVar25 & 0xf0000;
              if (uVar25 == 0) {
                uVar25 = 0xf0000;
              }
              uVar30 = uVar25 >> 0x10;
            }
            if (bVar8) {
              uVar33 = *puVar29;
              uVar32 = uVar33 & 0xff0000;
              if (((-1 < (int)uVar33) || ((uVar33 & 0x1800 | uVar33 >> 0x14 & 0x7ff) >> 8 != 0x13))
                 || (uVar9 = 1, (uVar33 & 0x7ff) != 0)) {
                uVar9 = 0;
              }
              uVar16 = 0;
              if ((uVar33 & 0xf000000) == 0xd000000 || (uVar33 & 0xf000000) == 0) {
                uVar16 = uVar9 & (uint)uVar13;
              }
              uVar16 = uVar16 & ((((uVar32 == 0xe40000 || uVar32 == 0) || uVar32 == 0x550000) ||
                                 uVar32 == 0xaa0000) || uVar32 == 0xff0000);
              uVar13 = (ulonglong)uVar16;
              if (uVar16 != 0) {
                local_1e0 = local_1e0 + 1;
                puVar29 = puVar29 + 1;
              }
            }
            puVar27 = local_1e0;
            uVar9 = FUN_1801e9df8(uVar31);
            uVar33 = local_238;
            local_230[0] = 0;
            local_230[1] = 0;
            uStack_148 = CONCAT44(uVar9,(undefined4)uStack_148);
            uVar31 = 0;
            local_230[2] = 0;
            uVar32 = 0;
            local_218 = 0;
            local_210 = 0;
            local_a8[1] = 0;
            local_b8[0] = 0;
            local_b8[1] = 0;
            local_b8[2] = 0;
            local_e0[0] = 0;
            local_e0[1] = 0;
            local_e0[2] = 0;
            puVar11 = extraout_x1;
            uVar23 = extraout_x9;
            puVar24 = extraout_x10;
            if ((int)uVar13 != 0) {
              local_130 = uVar9;
              local_f8 = puVar29;
              local_118 = (int)uVar17;
              local_110 = extraout_x10;
              local_120 = (int)extraout_x9;
              uStack_11c = (int)uVar15;
              local_128 = (int)uVar19;
              uStack_124 = (int)uVar20;
              local_d0 = extraout_x1;
              puStack_c8 = puVar27;
              do {
                if (2 < uVar32) break;
                uVar4 = *(ushort *)(&DAT_18022fcb6 + (ulonglong)uVar32 * 2 + local_f0 * 4);
                if (uVar4 == 0) break;
                uVar2 = puVar29[uVar32 + uVar31];
                uVar12 = uVar2 & 0x1800 | uVar2 >> 0x14 & 0x700;
                uVar16 = uVar2 & 0xf000000;
                local_a8[uVar32] = uVar16;
                local_b8[uVar32] = uVar2 & 0xff0000;
                cVar6 = *(char *)(param_3 + 0x4a6d);
                uVar18 = uVar12 >> 8;
                *(uint *)((longlong)&local_218 + (ulonglong)uVar32 * 4) = uVar2 & 0x7ff;
                uVar14 = (uint)(cVar6 != '\0');
                uVar22 = uVar2 >> 0x1f;
                if ((uint)*(ushort *)((longlong)extraout_x10 + (ulonglong)(uVar14 + uVar18 * 2) * 2)
                    <= (uVar2 & 0x7ff)) {
                  uVar22 = 0;
                }
                if (((uVar16 == 0) ||
                    ((uVar16 == 0x1000000 && ((uVar12 < 0x100 || (uVar18 - 1 < 2)))))) ||
                   ((uVar16 == 0xd000000 && (uVar18 == 0x13 || uVar18 == 0xe)))) {
                  uVar22 = uVar22 & (uint)uVar13;
                }
                else {
                  uVar22 = 0;
                }
                uVar2 = uVar2 & 0x2000;
                uVar22 = uVar22 & (uVar2 == 0 || uVar18 == 2);
                uVar12 = 0;
                if (uVar22 != 0) {
                  uVar5 = *(ushort *)(&DAT_18022fc10 + (ulonglong)uVar18 * 2);
                  local_230[uVar32] = (uint)uVar5;
                  if ((uVar5 & uVar4) == 0) {
                    uVar22 = 0;
                  }
                  uVar12 = 0;
                  if ((uVar4 & 0x4000) == 0 || uVar16 == 0) {
                    uVar12 = uVar22;
                  }
                  uVar16 = local_b8[uVar32] & 0xff0000;
                  if (((uVar4 >> 0xc & 1) == 0) ||
                     (((uVar16 == 0x550000 || uVar16 == 0) || uVar16 == 0xaa0000) ||
                      uVar16 == 0xff0000)) {
                    uVar12 = uVar12 & (local_b8[uVar32] == 0xe40000 || (uVar4 & 0x2000) == 0);
                  }
                  else {
                    uVar12 = 0;
                  }
                  if (uVar2 != 0) {
                    uVar22 = puVar29[uVar32 + uVar31 + 1];
                    uVar18 = (uVar22 & 0x1800 | uVar22 >> 0x14 & 0x7ff) >> 8;
                    uVar16 = uVar22 & 0xff0000;
                    if (uVar18 == 3) {
                      if ((uVar16 != 0x550000 && uVar16 != 0) && uVar16 != 0xaa0000) {
                        bVar8 = uVar16 == 0xff0000;
                        goto LAB_1801eab50;
                      }
LAB_1801eab54:
                      uVar16 = 1;
                    }
                    else {
                      bVar8 = false;
                      if (uVar16 == 0xe40000) {
                        bVar8 = uVar18 == 0xf;
                      }
LAB_1801eab50:
                      if (bVar8) goto LAB_1801eab54;
                      uVar16 = 0;
                    }
                    if (((uint)*(ushort *)
                                ((longlong)extraout_x10 + (ulonglong)(uVar14 + uVar18 * 2) * 2) <=
                         (uVar22 & 0x7ff)) || (uVar12 = uVar12 & uVar16, (uVar22 & 0xf000000) != 0))
                    {
                      uVar12 = 0;
                    }
                    if (uVar18 == 3) {
                      lVar28 = param_3 + (ulonglong)(uVar22 & 0x7ff);
                      *(byte *)(lVar28 + 0x40) =
                           (byte)(1 << (ulonglong)(uVar22 >> 0x16 & 3)) |
                           (byte)(1 << (ulonglong)(uVar22 >> 0x14 & 3)) |
                           (byte)(1 << (ulonglong)(uVar22 >> 0x12 & 3)) |
                           (byte)(1 << (ulonglong)(uVar22 >> 0x10 & 3)) | *(byte *)(lVar28 + 0x40);
                    }
                    local_e0[uVar32] = uVar22;
                    uVar31 = uVar31 + 1;
                  }
                }
                uVar22 = local_b8[uVar32];
                uVar16 = (uint)(byte)local_108[3];
                if (local_108[2] != '\0') {
                  uVar16 = uVar30 & (byte)local_108[3];
                }
                uVar18 = 1 << (ulonglong)(uVar22 >> 0x16 & 3);
                if ((uVar16 & 8) == 0) {
                  uVar18 = 0;
                }
                uVar14 = 1 << (ulonglong)(uVar22 >> 0x14 & 3);
                if ((uVar16 & 4) == 0) {
                  uVar14 = 0;
                }
                uVar26 = 1 << (ulonglong)(uVar22 >> 0x12 & 3);
                if ((uVar16 & 2) == 0) {
                  uVar26 = 0;
                }
                uVar22 = 1 << (ulonglong)(uVar22 >> 0x10 & 3);
                if ((uVar16 & 1) == 0) {
                  uVar22 = 0;
                }
                uVar22 = uVar18 | uVar14 | uVar26 | uVar22;
                uVar16 = 0;
                uVar18 = uVar22 & 0xff;
                if (extraout_w15 != 0x1e) {
                  if ((uVar32 == 2) ||
                     (*(short *)(&DAT_18022fcb6 + (ulonglong)(uVar32 + 1) * 2 + local_f0 * 4) == 0))
                  {
                    uVar14 = local_130;
                    if (uVar9 == 0) goto LAB_1801eadd8;
                  }
                  else {
                    uVar14 = 1;
                  }
                  local_12c = uVar12;
                  uVar3 = local_230[uVar32];
                  uVar26 = 0;
                  uVar16 = 0;
                  do {
                    bVar7 = (byte)uVar22;
                    if (uVar3 == 1) {
                      lVar28 = param_3 + (ulonglong)
                                         (uVar26 + *(int *)((longlong)&local_218 +
                                                           (ulonglong)uVar32 * 4));
                      *(byte *)(lVar28 + 0x10) = *(byte *)(lVar28 + 0x10) | bVar7;
LAB_1801eadc0:
                      uVar16 = 0xf;
                    }
                    else {
                      if (uVar3 == 2) {
                        lVar28 = param_3 + (ulonglong)
                                           (uVar26 + *(int *)((longlong)&local_218 +
                                                             (ulonglong)uVar32 * 4));
                        *(byte *)(lVar28 + 0x41) = *(byte *)(lVar28 + 0x41) | bVar7;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 4) {
                        lVar28 = param_3 + (ulonglong)
                                           (uVar26 + *(int *)((longlong)&local_218 +
                                                             (ulonglong)uVar32 * 4));
                        *(byte *)(lVar28 + 0x20) = *(byte *)(lVar28 + 0x20) | bVar7;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 8) {
                        lVar28 = param_3 + (ulonglong)
                                           (uVar26 + *(int *)((longlong)&local_218 +
                                                             (ulonglong)uVar32 * 4));
                        *(byte *)(lVar28 + 0x4893) = *(byte *)(lVar28 + 0x4893) | bVar7;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 0x10) {
                        *(undefined1 *)
                         (param_3 + (ulonglong)
                                    (uVar26 + *(int *)((longlong)&local_218 + (ulonglong)uVar32 * 4)
                                    ) + 0x48a3) = 1;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 0x20) {
                        lVar28 = param_3 + (ulonglong)
                                           (uVar26 + *(int *)((longlong)&local_218 +
                                                             (ulonglong)uVar32 * 4));
                        *(byte *)(lVar28 + 0x48b3) = *(byte *)(lVar28 + 0x48b3) | bVar7;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 0x40) {
                        lVar28 = param_3 + (ulonglong)
                                           (uVar26 + *(int *)((longlong)&local_218 +
                                                             (ulonglong)uVar32 * 4));
                        *(byte *)(lVar28 + 0x40) = *(byte *)(lVar28 + 0x40) | bVar7;
LAB_1801ead0c:
                        *(undefined1 *)
                         (param_3 + (ulonglong)
                                    (uVar26 + *(int *)((longlong)&local_218 + (ulonglong)uVar32 * 4)
                                    ) + 0x48c4) = 1;
                        goto LAB_1801eadc0;
                      }
                      if (uVar3 == 0x80) goto LAB_1801ead0c;
                      if (uVar3 == 0x100) {
                        *(undefined1 *)
                         (param_3 + (ulonglong)
                                    (uVar26 + *(int *)((longlong)&local_218 + (ulonglong)uVar32 * 4)
                                    ) + 0x48b4) = 1;
                        goto LAB_1801eadc0;
                      }
                    }
                    uVar26 = uVar26 + 1;
                    local_238 = uVar31;
                  } while (uVar26 < uVar14);
                }
LAB_1801eadd8:
                if ((uVar2 == 0) || (uVar22 = 0, local_230[uVar32] == 2)) {
                  uVar22 = 1;
                }
                if (uVar18 != (uVar16 & uVar18)) {
                  uVar22 = 0;
                }
                uVar13 = (ulonglong)(uVar22 & uVar12);
                if (uVar2 != 0) {
                  *(undefined1 *)(param_3 + 0x44e) = 1;
                }
                bVar7 = (byte)uVar30;
                if (extraout_w12 == 4) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x20) = *(byte *)(lVar28 + 0x20) | bVar7;
                }
                else if (extraout_w12 == 0x20) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x48b3) = *(byte *)(lVar28 + 0x48b3) | bVar7;
                }
                else if (extraout_w12 == 0x40) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x40) = *(byte *)(lVar28 + 0x40) | bVar7;
                }
                else if (extraout_w12 == 0x200) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x441) = *(byte *)(lVar28 + 0x441) | bVar7 | (uVar33 != 0) << 7
                  ;
                }
                else if (extraout_w12 == 0x400) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x444) = *(byte *)(lVar28 + 0x444) | bVar7 | (uVar33 != 0) << 7
                  ;
                }
                else if (extraout_w12 == 0x800) {
                  lVar28 = param_3 + (extraout_x11 & 0xffffffff);
                  *(byte *)(lVar28 + 0x446) = *(byte *)(lVar28 + 0x446) | bVar7 | (uVar33 != 0) << 7
                  ;
                }
                uVar32 = uVar32 + 1;
              } while ((uVar22 & uVar12) != 0);
              uVar19 = uVar19 & 0xffffffff;
              uVar20 = uVar20 & 0xffffffff;
              uVar23 = extraout_x9 & 0xffffffff;
              uVar15 = uVar15 & 0xffffffff;
              uVar17 = uVar17 & 0xffffffff;
              puVar11 = local_d0;
              puVar24 = local_110;
              puVar27 = puStack_c8;
              local_234 = uVar25;
            }
            uVar31 = extraout_w15;
            if (extraout_w15 < 0x14) goto LAB_1801eb284;
            uVar30 = (uint)uVar13;
            if (extraout_w15 == 0x14) {
              if ((uVar25 == 0xf0000) && (local_a8[1] == 0)) {
                uVar31 = 1;
              }
              else {
                uVar31 = 0;
              }
LAB_1801eb280:
              uVar13 = (ulonglong)(uVar31 & uVar30);
              uVar31 = extraout_w15;
              goto LAB_1801eb284;
            }
            uVar31 = extraout_w15;
            if (extraout_w15 == 0x15) {
LAB_1801eb248:
              bVar8 = uVar25 == 0x70000;
LAB_1801eb24c:
              if ((bVar8) && (local_a8[1] == 0)) {
LAB_1801eb254:
                uVar32 = 1;
              }
              else {
                uVar32 = 0;
              }
LAB_1801eb260:
              uVar13 = (ulonglong)(uVar30 & uVar32);
            }
            else {
              if (extraout_w15 == 0x16) {
                bVar8 = uVar25 == 0xf0000;
                goto LAB_1801eb24c;
              }
              if (extraout_w15 == 0x17) goto LAB_1801eb248;
              if (extraout_w15 == 0x18) {
                bVar8 = uVar25 == 0x30000;
                goto LAB_1801eb24c;
              }
              if (extraout_w15 - 0x19 < 2) goto LAB_1801eb284;
              uVar32 = (uint)uVar19;
              if (extraout_w15 == 0x1b) {
                uVar13 = (ulonglong)(uVar32 < 0x20 & uVar30);
                iVar21 = 1;
                goto LAB_1801eb1f8;
              }
              if (extraout_w15 == 0x1c) {
                bVar8 = local_1d0[uVar19 & 0xffffffff] == 0;
LAB_1801eb0a0:
                uVar31 = (uint)bVar8;
                goto LAB_1801eb280;
              }
              if (extraout_w15 == 0x1d) {
                bVar8 = local_1d0[uVar19 & 0xffffffff] == 1;
                goto LAB_1801eb080;
              }
              if (extraout_w15 != 0x1e) {
                if (extraout_w15 == 0x20) goto LAB_1801eb284;
                iVar21 = (int)extraout_x11;
                if (extraout_w15 == 0x21) {
                  uVar30 = uVar30 & ((uVar25 - 0x10000 & 0xfff8ffff) == 0 && uVar25 != 0x80000);
                  if (((extraout_w12 == local_230[0]) && (iVar21 == (int)local_218)) ||
                     ((extraout_w12 == local_230[1] && (iVar21 == local_218._4_4_)))) {
                    uVar32 = 0;
                  }
                  else {
LAB_1801eb118:
                    uVar32 = 1;
                  }
LAB_1801eb11c:
                  uVar13 = (ulonglong)(uVar30 & uVar32);
                  goto LAB_1801eb284;
                }
                if (extraout_w15 - 0x22 < 2) goto LAB_1801eb284;
                if (extraout_w15 != 0x24) {
                  if (extraout_w15 == 0x25) {
                    uVar30 = uVar30 & ((uVar25 - 0x10000 & 0xfffcffff) == 0 && uVar25 != 0x40000);
                    if ((local_230[1] != local_230[2]) || (uVar32 = 0, local_218._4_4_ != local_210)
                       ) goto LAB_1801eb118;
                    goto LAB_1801eb11c;
                  }
                  if (extraout_w15 != 0x26) {
                    if (extraout_w15 == 0x27) {
                      bVar8 = local_1d0[uVar19 & 0xffffffff] == 2;
                    }
                    else {
                      if ((extraout_w15 == 0x28) || (extraout_w15 == 0x29)) {
                        uVar13 = (ulonglong)(uVar32 < 0x20 & uVar30);
                        iVar21 = 3;
                        goto LAB_1801eb1f8;
                      }
                      if (extraout_w15 == 0x2a) {
                        bVar8 = local_1d0[uVar19 & 0xffffffff] == 3;
                        goto LAB_1801eb0a0;
                      }
                      if (extraout_w15 != 0x2b) {
                        if (extraout_w15 == 0x2c) {
                          uVar25 = 0;
                          uVar31 = 1;
                          do {
                            if (uVar32 < uVar31) break;
                            uVar13 = (ulonglong)uVar31;
                            uVar31 = uVar31 + 1;
                            bVar8 = local_1d0[uVar13] - 1U < 2;
                            uVar25 = (uint)bVar8;
                          } while (!bVar8);
                        }
                        else if (extraout_w15 == 0x2d) {
                          uVar25 = 0;
                          uVar31 = 1;
                          do {
                            if (uVar32 < uVar31) break;
                            uVar13 = (ulonglong)uVar31;
                            uVar31 = uVar31 + 1;
                            bVar8 = local_1d0[uVar13] - 1U < 2;
                            uVar25 = (uint)bVar8;
                          } while (!bVar8);
                        }
                        else {
                          uVar31 = extraout_w15;
                          if (extraout_w15 != 0x60) goto LAB_1801eb284;
                          uVar25 = 0;
                          uVar31 = 1;
                          do {
                            if (uVar32 < uVar31) break;
                            uVar13 = (ulonglong)uVar31;
                            uVar31 = uVar31 + 1;
                            bVar8 = local_1d0[uVar13] - 1U < 2;
                            uVar25 = (uint)bVar8;
                          } while (!bVar8);
                        }
                        uVar13 = (ulonglong)(uVar25 & uVar30);
                        uVar31 = extraout_w15;
                        goto LAB_1801eb284;
                      }
                      bVar8 = local_1d0[uVar19 & 0xffffffff] == 3;
                    }
LAB_1801eb080:
                    uVar19 = (ulonglong)(uVar32 - 1);
                    uVar31 = (int)uVar20 - 1;
                    uVar20 = (ulonglong)uVar31;
                    local_1d8 = CONCAT44(uVar32 - 1,uVar31);
                    uVar31 = (uint)bVar8;
                    goto LAB_1801eb280;
                  }
                  uVar13 = (ulonglong)(uVar32 < 0x20 & uVar30);
                  iVar21 = 2;
LAB_1801eb1f8:
                  uVar32 = uVar32 + 1;
                  local_1d0[uVar32] = iVar21;
                  uVar19 = (ulonglong)uVar32;
                  uVar20 = (ulonglong)((int)local_1d8 + 1U);
                  uVar23 = (ulonglong)local_1e8;
                  local_1d8 = CONCAT44(uVar32,(int)local_1d8 + 1U);
                  uVar15 = (ulonglong)local_1f8;
                  uVar17 = (ulonglong)local_208;
                  puVar11 = local_138;
                  param_3 = local_1f0;
                  puVar24 = local_200;
                  puVar27 = local_1e0;
                  uVar31 = local_150._4_4_;
                  goto LAB_1801eb284;
                }
                if ((extraout_w12 != local_230[0]) || (uVar32 = 0, iVar21 != (int)local_218))
                goto LAB_1801eb254;
                goto LAB_1801eb260;
              }
              uVar13 = (ulonglong)(local_23c == 0x1c & uVar30);
              *(int *)(param_3 + (local_218 & 0xffffffff) * 4 + 0x4a28) =
                   (int)((longlong)puVar27 - (longlong)local_e8 >> 2);
            }
LAB_1801eb284:
            if (*(short *)(local_108 + 4) != 0) {
              puVar27 = puVar27 + 1;
            }
            if ((int)uVar13 != 0) {
              uVar30 = 0;
              while ((uVar30 < 3 &&
                     (*(short *)(&DAT_18022fcb6 + (ulonglong)uVar30 * 2 + local_f0 * 4) != 0))) {
                if (((*(short *)(local_108 + 4) != 0) || (uVar30 != 0)) && (local_e0[uVar30] != 0))
                {
                  puVar27 = puVar27 + 1;
                }
                puVar27 = puVar27 + 1;
                uVar30 = uVar30 + 1;
              }
            }
            local_1e0 = puVar27 + 1;
            local_140 = CONCAT44(uVar31,(undefined4)local_140);
            local_23c = uVar31;
          }
        }
      }
      uVar30 = (uint)uVar15;
      lVar28 = local_100;
    } while ((int)uVar13 != 0);
  }
  puVar27 = local_e8;
  puVar29 = local_1e0;
  lVar10 = 0;
  do {
    if ((*(int *)(lVar28 + 0x4a28 + lVar10 * 4) == 0) ||
       (*(char *)(lVar28 + 0x48b4 + lVar10) != '\0')) {
      uVar31 = 1;
    }
    else {
      uVar31 = 0;
    }
    lVar10 = lVar10 + 1;
    uVar31 = uVar31 & (uint)uVar13;
    uVar13 = (ulonglong)uVar31;
  } while (lVar10 != 0x10);
  uVar32 = 0;
  uVar25 = 0;
  if (uVar31 != 0) {
    do {
      uVar25 = (uint)uVar13;
      if (0xf < uVar32) break;
      if ((*(char *)(lVar28 + 0x10 + (ulonglong)uVar32) == '\0') ||
         (uVar31 = 0, (1 << (ulonglong)(uVar32 & 0x1f) & uVar30) != 0)) {
        uVar31 = 1;
      }
      uVar32 = uVar32 + 1;
      uVar31 = uVar31 & uVar25;
      uVar13 = (ulonglong)uVar31;
      uVar25 = 0;
    } while (uVar31 != 0);
  }
  if ((*(byte *)(lVar28 + 0x441) & 0xf) != 0xf) {
    uVar25 = 0;
  }
  if (uVar25 != 0) {
    local_240 = 0;
    puVar1 = &DAT_18022fbd8;
    if ((uVar17 & 0xff) != 0) {
      puVar1 = &DAT_18022fbc0;
    }
    FUN_1801e9e98(local_e8,puVar11,lVar28 + 0x4a28,puVar1,&local_240);
    *(undefined1 *)(lVar28 + 0x4886) = (undefined1)local_240;
    *local_c0 = (int)((longlong)puVar29 - (longlong)puVar27 >> 2);
  }
  return;
}

