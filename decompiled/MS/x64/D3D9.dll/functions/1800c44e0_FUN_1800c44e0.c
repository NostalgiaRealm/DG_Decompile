/*
 * FUN_1800c44e0 at 1800c44e0
 * bool __fastcall FUN_1800c44e0(uint * param_1, byte * param_2, undefined1 * param_3, undefined4 * param_4)
 * Address ranges: 1800c44e0-1800c5754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c44e0(uint *param_1,byte *param_2,undefined1 *param_3,undefined4 *param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  undefined1 uVar16;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  byte bVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  undefined1 *puVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  uint *local_res8;
  char local_res10;
  undefined1 *local_res18;
  undefined4 *local_res20;
  uint local_1b8;
  byte local_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte local_190 [4];
  uint local_18c;
  uint *local_188;
  char local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint *local_150;
  undefined8 local_148;
  int local_140 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  uint *puStack_a8;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res8 = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800fbea0(param_3,0,0x1270);
  uVar19 = *param_1;
  local_150 = param_1 + 1;
  bVar21 = uVar19 + 0xfe00 < 2;
  local_178 = 0xffff0200 < uVar19;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_170 = param_3;
  FUN_1800fbea0((undefined1 *)local_140,0,0x80);
  local_140[0] = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_170[0x126e] = (char)uVar19;
  local_170[0x126d] = 2;
  local_170[0x14a] = 1;
  local_b0 = 0;
  uStack_ac = 0;
  puStack_a8 = (uint *)0x0;
  *(undefined8 *)(local_170 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x1224) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x1234) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x124c) = 0xffffffffffffffff;
  *(undefined8 *)(local_170 + 0x1254) = 0xffffffffffffffff;
  uVar13 = 0x200;
  if (param_2 == (byte *)0x0) {
    local_90 = 0x200;
    local_98 = 0x200;
    local_94 = 0x200;
  }
  else {
    local_90 = *(uint *)(param_2 + 0x10);
    local_98 = local_90;
    local_94 = local_90;
    if ((*param_2 & 0x10) == 0) {
      local_98 = 0x200;
      local_94 = 0x20;
    }
  }
  bVar30 = (char)uVar19 != '\0';
  if (bVar30) {
    local_98 = uVar13;
  }
  local_res10 = '\0';
  if (bVar30) {
    local_94 = uVar13;
  }
  if (bVar30) {
    local_90 = uVar13;
  }
  if (bVar21) {
    puVar28 = local_170;
    uVar19 = (uint)local_168;
    do {
      uVar10 = 0;
      param_1 = local_res8;
      param_3 = local_res18;
      if (local_res10 != '\0') break;
      uVar13 = *local_150;
      uVar27 = uVar13 & 0xffff;
      uVar15 = (ulonglong)uVar27;
      local_8c = uVar13 & 0xe0ff0000;
      local_c0 = CONCAT44(uVar13,uVar13) & 0xffffffffffff;
      uVar23 = uVar13 & 0x10000000;
      bVar31 = uVar23 != 0;
      uStack_b8 = CONCAT44(1,local_8c);
      local_b0 = CONCAT13(bVar31,0x10f0f);
      bVar30 = (bool)(bVar21 & (uVar13 & 0xc0000000) == 0);
      uVar20 = (uint)local_168;
      if (uVar27 == 0x1f) {
        uVar13 = local_150[2];
        uVar27 = local_150[1];
        uVar20 = uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800;
        uVar23 = uVar20 >> 8;
        bVar17 = 0;
        if ((uVar27 & 0x87ffffff) == 0x80000000) {
          bVar17 = (byte)(uVar13 >> 0x1f);
        }
        if ((uVar19 != 0) || (bVar24 = 1, local_8c != 0)) {
          bVar24 = 0;
        }
        if ((10 < uVar23) || (bVar9 = 1, (0x40aU >> (uVar20 >> 8) & 1) == 0)) {
          bVar9 = 0;
        }
        bVar9 = bVar9 & bVar24 & bVar17 & bVar30;
        if (bVar9 == 0) {
          bVar21 = false;
          break;
        }
        uVar20 = uVar13 & 0x7ff;
        uVar10 = (ulonglong)uVar20;
        bVar21 = (bool)(-(uVar20 < (byte)(&DAT_1800ff7b8)[(uint)(local_178 != '\0') + uVar23 * 2]) &
                       bVar9);
        uVar16 = (undefined1)((uVar13 & 0xf0000) >> 0x10);
        if ((uVar13 & 0xf0000) == 0) {
          uVar16 = 0xf;
        }
        if (uVar23 == 1) {
          *(undefined1 *)((longlong)&local_160 + uVar10 + 4) = uVar16;
          bVar21 = (bool)(bVar21 & ((uVar13 & 0xf00000) == 0 && (uVar27 & 0x78000000) == 0));
          puVar28 = local_170;
          uVar19 = (uint)local_168;
        }
        else if (uVar23 == 3) {
          *(undefined1 *)((longlong)&local_160 + uVar10 + 6) = uVar16;
          bVar21 = (bool)(((uVar27 & 0x78000000) == 0 && (uVar13 & 0x900000) == 0) & bVar21);
          puVar28 = local_170;
          uVar19 = (uint)local_168;
          if ((uVar13 >> 0x16 & 1) != 0) {
            local_170[((longlong)(int)uVar20 >> 3) + 0x140] =
                 local_170[((longlong)(int)uVar20 >> 3) + 0x140] | '\x01' << (uVar13 & 7);
          }
        }
        else if (uVar23 == 10) {
          uVar27 = uVar27 & 0x78000000;
          puVar28[uVar10 + 0x14f] = (byte)(uVar27 >> 0x1b);
          if (((uVar27 + 0xf0000000 & 0xe7ffffff) != 0) || (bVar17 = 1, uVar27 == 0x28000000)) {
            bVar17 = 0;
          }
          bVar24 = 0;
          if ((uVar13 & 0xf00000) == 0) {
            bVar24 = bVar17;
          }
          bVar21 = (bool)(bVar24 & bVar21);
        }
LAB_1800c565d:
        local_150 = local_150 + 3;
      }
      else {
        bVar22 = false;
        if (uVar27 == 0x2f) {
          uVar13 = local_150[1];
          if ((uVar19 != 0) || (bVar17 = 1, bVar31)) {
            bVar17 = 0;
          }
          if ((((local_8c != 0) || (-1 < (int)uVar13)) ||
              (((byte)(uVar13 >> 0x1c) & 7 | (byte)(uVar13 >> 8) & 0x18) != 0xe)) ||
             (bVar24 = 1, (uVar13 & 0xfff07f0) != 0xf0000)) {
            bVar24 = 0;
          }
          bVar21 = (bool)(bVar24 & bVar17 & bVar30);
          if (bVar21 != false) {
            puVar28[(ulonglong)(uVar13 & 0x7ff) + 0x2a0] = 1;
            *(uint *)(puVar28 + (ulonglong)(uVar13 & 0x7ff) * 4 + 0x2b0) = local_150[2];
          }
          goto LAB_1800c565d;
        }
        if (uVar27 == 0x30) {
          uVar13 = local_150[1];
          if ((uVar19 != 0) || (bVar17 = 1, bVar31)) {
            bVar17 = 0;
          }
          if ((((local_8c != 0) || (-1 < (int)uVar13)) ||
              ((((byte)(uVar13 >> 0x1c) & 7 | (byte)(uVar13 >> 8) & 0x18) != 7 ||
               ((((uVar13 & 0xfff0000) != 0xf0000 || (local_150[3] != 0)) || (local_150[4] != 0)))))
              ) || (bVar24 = 1, (uVar13 & 0x7f0) != 0 || local_150[5] != 0)) {
            bVar24 = 0;
          }
          bVar21 = (bool)(bVar24 & bVar17 & bVar30);
          if (bVar21 != false) {
            puVar28[(ulonglong)(uVar13 & 0x7ff) + 400] = 1;
            do {
              uVar27 = (int)uVar10 + 1;
              *(uint *)(puVar28 + (ulonglong)((uVar13 & 0x7ff) * 4 + (int)uVar10) * 4 + 0x1a0) =
                   local_150[uVar10 + 2];
              uVar10 = (ulonglong)uVar27;
            } while ((int)uVar27 < 4);
          }
LAB_1800c53a8:
          local_150 = local_150 + 6;
        }
        else {
          if (uVar27 == 0x51) {
            uVar13 = local_150[1];
            uVar27 = uVar13 & 0x7ff;
            if ((uVar19 != 0) || (bVar17 = 1, bVar31)) {
              bVar17 = 0;
            }
            if (((local_8c != 0) || (-1 < (int)uVar13)) ||
               ((((byte)(uVar13 >> 0x1c) & 7 | (byte)(uVar13 >> 8) & 0x18) != 2 ||
                (((uVar13 & 0xfff0000) != 0xf0000 ||
                 (bVar24 = 1, (byte)(&DAT_1800ff7bc)[local_178 != '\0'] <= uVar27)))))) {
              bVar24 = 0;
            }
            bVar21 = (bool)(bVar24 & bVar17 & bVar30);
            if (bVar21 != false) {
              puVar28[(ulonglong)uVar27 + 0x331] = 1;
              do {
                uVar13 = (int)uVar10 + 1;
                *(uint *)(puVar28 + (ulonglong)((int)uVar10 + uVar27 * 4) * 4 + 0x414) =
                     local_150[uVar10 + 2];
                uVar10 = (ulonglong)uVar13;
              } while ((int)uVar13 < 4);
            }
            goto LAB_1800c53a8;
          }
          bVar21 = false;
          if (uVar27 == 0xfffe) {
            if (uVar23 == 0) {
              bVar21 = bVar30;
            }
            local_150 = local_150 + ((uVar13 >> 0x10) + 1);
          }
          else if (uVar27 == 0xffff) {
            uVar15 = uVar10;
            if (uVar23 == 0) {
              uVar15 = (ulonglong)(local_8c == 0 && local_148._4_4_ == 0);
            }
            do {
              if (*(int *)(puVar28 + uVar10 * 4 + 0x2f0) != 0) {
                bVar21 = uStack_ac == 0x1c;
                goto LAB_1800c52d9;
              }
              uVar13 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar13;
            } while (uVar13 < 0x10);
            bVar21 = (bool)(bVar30 & (byte)uVar15);
LAB_1800c52d9:
            local_150 = local_150 + 1;
            local_res10 = '\x01';
          }
          else {
            bVar11 = bVar22;
            if (uVar27 < 0x61) {
              bVar11 = bVar30;
            }
            uVar19 = uVar13 & 0xff0000;
            if (((uVar19 == 0) ||
                (((uVar27 - 0x29 < 0x36 &&
                  ((0x20000000000011U >> ((ulonglong)(uVar27 - 0x29) & 0x3f) & 1) != 0)) &&
                 (uVar19 < 0x60001)))) ||
               ((uVar27 == 0x42 && ((uVar19 - 0x10000 & 0xfffeffff) == 0)))) {
              bVar22 = (bool)((uVar13 & 0xe0000000) == 0 & bVar11);
            }
            cVar1 = (&DAT_1800ff4b0)[uVar15];
            if (cVar1 != -1) {
              lVar14 = (longlong)cVar1 * 0xe;
              if (((((&DAT_1800ff520)[lVar14] & 8) == 0) || (local_178 != '\0')) &&
                 ((!bVar31 ||
                  ((((&DAT_1800ff520)[lVar14] & 4) == 0 &&
                   ((*(short *)(&DAT_1800ff526 + lVar14) != 0 ||
                    (*(short *)(&DAT_1800ff524 + lVar14) != 0)))))))) {
                bVar21 = true;
              }
            }
            local_88 = (longlong)cVar1 * 0xe;
            puVar29 = local_150 + 1;
            uVar19 = *puVar29;
            bVar17 = 0;
            if ((*(short *)(&DAT_1800ff524 + local_88) == 0) || (bVar24 = bVar17, (int)uVar19 < 0))
            {
              bVar24 = bVar21 & bVar22;
            }
            if ((!bVar31) || (local_178 != '\0')) {
              bVar17 = 1;
            }
            bVar17 = bVar17 & bVar24;
            if (bVar17 == 0) {
              bVar21 = false;
              break;
            }
            bVar24 = (&DAT_1800ff520)[local_88];
            if ((uint)local_168 == 0) {
              puStack_a8 = local_150;
            }
            if ((bVar24 & 1) == 0) {
              if ((bVar24 & 2) != 0) {
                *(int *)(puVar28 + 0x1218) = *(int *)(puVar28 + 0x1218) + 1;
                bVar24 = (&DAT_1800ff520)[local_88];
                bVar17 = -((uint)local_160 < local_94) & bVar17;
              }
            }
            else {
              bVar17 = -(local_168._4_4_ < local_98) & bVar17;
            }
            bVar21 = (bool)(-((uint)local_168 < local_90) & bVar17);
            if ((bVar24 & 1) == 0) {
              if ((bVar24 & 2) != 0) {
                local_160 = CONCAT44(local_160._4_4_,
                                     (uint)local_160 + (byte)(&DAT_1800ff521)[local_88]);
              }
            }
            else {
              local_168 = (ulonglong)(local_168._4_4_ + (byte)(&DAT_1800ff521)[local_88]) << 0x20;
            }
            local_18c = 0;
            local_168 = CONCAT44(local_168._4_4_,uVar20 + (byte)(&DAT_1800ff521)[local_88]);
            if (*(ushort *)(&DAT_1800ff524 + local_88) == 0) {
              local_188 = puVar29;
              local_1b8 = 0;
              local_1b4 = 0;
              local_1b0 = 0;
            }
            else {
              local_1b0 = uVar19 & 0x7ff;
              uVar20 = (uVar19 >> 0x14 & 0x700 | uVar19 & 0x1800) >> 8;
              local_188 = local_150 + 2;
              if (((local_1b0 < (byte)(&DAT_1800ff7b8)[(uint)(local_178 != '\0') + uVar20 * 2]) &&
                  ((uVar19 & 0xf000000) == 0)) &&
                 (bVar17 = (uVar19 & 0xf00000) < 0x700001 & bVar21, bVar17 != 0)) {
                local_18c = (uint)*(ushort *)(&DAT_1800ff480 + (ulonglong)uVar20 * 2);
                bVar21 = (bool)(-((*(ushort *)(&DAT_1800ff524 + local_88) &
                                  *(ushort *)(&DAT_1800ff480 + (ulonglong)uVar20 * 2)) != 0) &
                               bVar17);
              }
              else {
                bVar21 = false;
              }
              local_1b8 = 0xf0000;
              if ((uVar19 & 0xf0000) != 0) {
                local_1b8 = uVar19 & 0xf0000;
              }
              if (uVar27 == 0x41) {
                local_1b4 = 7;
              }
              else {
                local_1b4 = (byte)(local_1b8 >> 0x10);
              }
            }
            uVar10 = 0;
            bVar17 = 0;
            if (bVar31) {
              uVar19 = *local_188 & 0xff0000;
              if (((-1 < (int)*local_188) ||
                  (((byte)(*local_188 >> 0x1c) & 7 | (byte)(*local_188 >> 8) & 0x18) != 0x13)) ||
                 (bVar24 = 1, (*local_188 & 0x7ff) != 0)) {
                bVar24 = bVar17;
              }
              if (((*local_188 & 0xf000000) == 0) || ((*local_188 & 0xf000000) == 0xd000000)) {
                bVar17 = bVar24 & bVar21;
              }
              if ((((uVar19 == 0xe40000) || (uVar19 == 0)) || (uVar19 == 0x550000)) ||
                 ((uVar19 == 0xaa0000 || (bVar24 = 0, uVar19 == 0xff0000)))) {
                bVar24 = 1;
              }
              bVar21 = (bool)(bVar24 & bVar17);
              if (bVar21 != false) {
                local_150 = puVar29;
                local_188 = local_188 + 1;
              }
            }
            puVar29 = local_150;
            local_1ac = 1;
            if (uVar27 == 0x14) {
LAB_1800c4a1f:
              local_1ac = 4;
            }
            else if (uVar27 == 0x15) {
LAB_1800c4a18:
              local_1ac = 3;
            }
            else {
              if (uVar27 == 0x16) goto LAB_1800c4a1f;
              if (uVar27 == 0x17) goto LAB_1800c4a18;
              if (uVar27 == 0x18) {
                local_1ac = 2;
              }
            }
            uStack_b8 = CONCAT44(local_1ac,uVar13) & 0xffffffffe0ff0000;
            local_190[0] = 0;
            local_70 = 0;
            uStack_68 = 0;
            local_1a0 = 0;
            uStack_198 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_60 = 0;
            uStack_58 = 0;
            lVar14 = local_88;
            uVar8 = local_70;
            uVar6 = local_1a0;
            uVar7 = local_148;
            while (local_1a0 = uVar6, local_88 = lVar14, local_70 = uVar8, bVar21 != false) {
              uVar19 = (uint)uVar10;
              uVar27 = (uint)uVar15;
              if (3 < uVar19) break;
              uVar2 = *(ushort *)(&DAT_1800ff526 + uVar10 * 2 + lVar14);
              if (uVar2 == 0) {
                local_c0._4_4_ = (uint)(local_c0 >> 0x20);
                uVar27 = local_c0._4_4_;
                break;
              }
              uVar13 = local_188[uVar10];
              local_148 = uVar7;
              *(uint *)((longlong)&local_1a0 + uVar10 * 4) = uVar13 & 0x7ff;
              uVar20 = uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800;
              uVar23 = uVar13 & 0xf000000;
              uVar26 = uVar13 & 0xff0000;
              *(uint *)((longlong)&local_80 + uVar10 * 4) = uVar23;
              *(uint *)((longlong)&local_60 + uVar10 * 4) = uVar26;
              uVar27 = uVar20 >> 8;
              bVar17 = 0;
              if (uVar23 == 0) {
LAB_1800c4c53:
                bVar24 = -((uVar13 & 0x7ff) <
                          (uint)(byte)(&DAT_1800ff7b8)[(uint)(local_178 != '\0') + uVar27 * 2]) &
                         (byte)(uVar13 >> 0x1f) & bVar21;
                if (bVar24 != 0) {
                  uVar3 = *(ushort *)(&DAT_1800ff480 + (ulonglong)uVar27 * 2);
                  *(uint *)((longlong)&local_70 + uVar10 * 4) = (uint)uVar3;
                  bVar24 = -((uVar2 & uVar3) != 0) & bVar24;
                  if (((uVar2 >> 0xd & 1) != 0) && (uVar23 != 0)) {
                    bVar24 = bVar17;
                  }
                  if (((uVar2 >> 0xc & 1) == 0) || (bVar9 = bVar17, uVar26 == 0xe40000)) {
                    bVar9 = 1;
                  }
                  uVar27 = uVar13 & 0xff0000;
                  if ((((uVar27 == 0) || (uVar27 == 0x550000)) || (uVar27 == 0xaa0000)) ||
                     (bVar18 = bVar17, uVar27 == 0xff0000)) {
                    bVar18 = 1;
                  }
                  local_190[uVar10] = bVar18;
                  if (((uVar26 == 0xe40000) || (uVar26 == 0xc90000)) ||
                     ((uVar26 == 0xd20000 || (bVar12 = bVar17, uVar26 == 0x1b0000)))) {
                    bVar12 = 1;
                  }
                  bVar5 = bVar17;
                  if (local_178 != '\0' || (bVar12 != 0 || bVar18 != 0)) {
                    bVar5 = bVar9 & bVar24;
                  }
                  if (((uVar2 >> 0xb & 1) == 0) || (bVar18 != 0)) {
                    bVar17 = 1;
                  }
                  bVar17 = bVar17 & bVar5;
                }
              }
              else if (uVar23 == 0x1000000) {
                if ((uVar20 < 0x100) || (uVar27 - 1 < 3)) goto LAB_1800c4c53;
              }
              else if ((uVar23 == 0xd000000) && ((uVar27 == 0x13 || (uVar27 == 0xe))))
              goto LAB_1800c4c53;
              bVar24 = (&DAT_1800ff523)[local_88];
              if (local_c0._4_4_ == 0x5a) {
                if (uVar19 < 2) {
                  bVar24 = 3;
                }
              }
              else if (((local_c0._4_4_ == 0x42) && (uVar19 == 0)) ||
                      ((local_c0._4_4_ == 0x5d && (uVar19 != 1)))) {
                bVar24 = 3;
                if ((uint)(byte)puVar28[(ulonglong)(puVar29[3] & 0x7ff) + 0x14f] << 0x1b !=
                    0x10000000) {
                  bVar24 = 7;
                }
                if (local_8c != 0) {
                  bVar24 = 0xb;
                  if ((uint)(byte)puVar28[(ulonglong)(puVar29[3] & 0x7ff) + 0x14f] << 0x1b !=
                      0x10000000) {
                    bVar24 = 0xf;
                  }
                }
              }
              bVar9 = bVar24 & local_1b4;
              if ((&DAT_1800ff522)[local_88] == '\0') {
                bVar9 = bVar24;
              }
              bVar9 = FUN_1800c6d80(*(uint *)((longlong)&local_60 + uVar10 * 4),bVar9);
              bVar24 = 0;
              if (local_c0._4_4_ != 0x1e) {
                if ((uVar19 == 2) ||
                   (uVar27 = 1,
                   *(short *)(&DAT_1800ff526 + (ulonglong)(uVar19 + 1) * 2 + lVar14) == 0)) {
                  uVar27 = local_1ac;
                }
                uVar20 = 0;
                do {
                  iVar4 = *(int *)((longlong)&local_70 + uVar10 * 4);
                  if (iVar4 == 1) {
                    uVar15 = (ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20);
                    bVar24 = *(byte *)((longlong)&local_160 + uVar15 + 4);
                    puVar28[uVar15] = puVar28[uVar15] | bVar9;
                  }
                  else if (iVar4 == 2) {
                    bVar24 = 0xf;
                    puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) + 0x38
                           ] = puVar28[(ulonglong)
                                       (*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) + 0x38
                                      ] | bVar9;
                  }
                  else if (iVar4 == 4) {
                    uVar15 = (ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20);
                    bVar24 = puVar28[uVar15 + 10];
                    puVar28[uVar15 + 10] = bVar24 | bVar9;
                  }
                  else if (iVar4 == 8) {
                    bVar24 = 0xf;
                    puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                            0x15f] =
                         puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                                 0x15f] | bVar9;
                  }
                  else if (iVar4 == 0x10) {
                    bVar24 = 0xf;
                    puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                            0x16f] = 1;
                  }
                  else if (iVar4 == 0x20) {
                    bVar24 = 0xf;
                    puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                            0x17f] =
                         puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                                 0x17f] | bVar9;
                  }
                  else if (iVar4 == 0x40) {
                    bVar24 = -(puVar28[(ulonglong)
                                       (*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                                       0x14f] != '\0') & 0xf;
                  }
                  else if (iVar4 == 0x80) {
                    uVar15 = (ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20);
                    bVar24 = *(byte *)((longlong)&local_160 + uVar15 + 6);
                    puVar28[uVar15 + 0x2a] = puVar28[uVar15 + 0x2a] | bVar9;
                  }
                  else if (iVar4 == 0x400) {
                    bVar24 = 0xf;
                    puVar28[(ulonglong)(*(int *)((longlong)&local_1a0 + uVar10 * 4) + uVar20) +
                            0x180] = 1;
                  }
                  uVar20 = uVar20 + 1;
                } while (uVar20 < uVar27);
              }
              uVar15 = (ulonglong)local_c0._4_4_;
              bVar30 = (bool)(~(byte)(uVar13 >> 0xd) & bVar17);
              if (((local_c0._4_4_ != 0x58) || (bVar21 = bVar30, uVar19 == 0)) &&
                 (bVar21 = false, (bVar24 & bVar9) == bVar9)) {
                bVar21 = bVar30;
              }
              uVar10 = (ulonglong)(uVar19 + 1);
              uVar27 = local_c0._4_4_;
              lVar14 = local_88;
              uVar8 = local_70;
              uVar6 = local_1a0;
              uVar7 = local_148;
            }
            uVar10 = 0;
            bVar30 = false;
            if (local_18c == 4) {
              puVar28[(ulonglong)local_1b0 + 10] = puVar28[(ulonglong)local_1b0 + 10] | local_1b4;
            }
            else if (local_18c == 0x20) {
LAB_1800c4f25:
              puVar28[(ulonglong)local_1b0 + 0x17f] =
                   puVar28[(ulonglong)local_1b0 + 0x17f] | local_1b4;
            }
            else if (local_18c == 0x80) {
              puVar28[(ulonglong)local_1b0 + 0x2a] =
                   puVar28[(ulonglong)local_1b0 + 0x2a] | local_1b4;
            }
            else if (local_18c == 0x100) {
              puVar28[(ulonglong)local_1b0 + 0x14b] =
                   puVar28[(ulonglong)local_1b0 + 0x14b] | local_1b4;
            }
            else if (local_18c == 0x200) {
              if (((local_1b8 == 0xf0000) && (local_190[0] != 0)) && ((int)local_80 == 0)) {
                bVar30 = (bool)(puVar28[0x330] == '\0' & bVar21);
              }
              bVar21 = bVar30;
              puVar28[0x330] = 1;
              goto LAB_1800c4f25;
            }
            local_70._4_4_ = (uint)((ulonglong)uVar8 >> 0x20);
            local_1a0._4_4_ = (uint)(uVar6 >> 0x20);
            local_148._4_4_ = (uint)((ulonglong)uVar7 >> 0x20);
            if (uVar27 < 0x25) {
              local_70._0_4_ = (uint)uVar8;
              local_1a0._0_4_ = (uint)uVar6;
              if (uVar27 == 0x24) {
                if ((local_18c != (uint)local_70) || (bVar30 = false, local_1b0 != (uint)local_1a0))
                {
LAB_1800c507e:
                  bVar30 = true;
                }
                goto LAB_1800c5081;
              }
              if (uVar27 < 0x18) {
                if (uVar27 == 0x17) {
LAB_1800c4fad:
                  bVar30 = local_1b8 == 0x70000;
                }
                else {
                  if ((((uVar27 == 6) || (uVar27 == 7)) || (uVar27 == 0xe)) || (uVar27 == 0xf)) {
                    bVar21 = (bool)(bVar21 & local_190[0]);
                    goto LAB_1800c5084;
                  }
                  if (uVar27 != 0x14) {
                    if (uVar27 == 0x15) goto LAB_1800c4fad;
                    if (uVar27 != 0x16) goto LAB_1800c5084;
                  }
                  bVar30 = local_1b8 == 0xf0000;
                }
LAB_1800c4f83:
                if (bVar30) {
                  bVar30 = true;
                  local_80._4_4_ = (int)((ulonglong)local_80 >> 0x20);
                  if (local_80._4_4_ == 0) goto LAB_1800c5081;
                }
                bVar30 = false;
                goto LAB_1800c5081;
              }
              if (uVar27 == 0x18) {
                bVar30 = local_1b8 == 0x30000;
                goto LAB_1800c4f83;
              }
              if ((uVar27 != 0x19) && (uVar27 != 0x1a)) {
                if (uVar27 == 0x1c) {
                  bVar30 = local_140[local_148._4_4_] == 0;
                  goto LAB_1800c5081;
                }
                if (uVar27 != 0x1e) {
                  if (uVar27 == 0x21) {
                    if (((local_1b8 - 0x10000 & 0xfff8ffff) != 0) ||
                       (bVar17 = 1, local_1b8 == 0x80000)) {
                      bVar17 = 0;
                    }
                    if (((local_18c == (uint)local_70) && (local_1b0 == (uint)local_1a0)) ||
                       ((local_18c == local_70._4_4_ && (local_1b0 == local_1a0._4_4_)))) {
                      bVar21 = false;
                    }
                    else {
                      bVar21 = (bool)(bVar17 & bVar21);
                    }
                  }
                  goto LAB_1800c5084;
                }
                bVar21 = (bool)(bVar21 & uStack_ac == 0x1c);
                *(int *)(puVar28 + (uVar6 & 0xffffffff) * 4 + 0x2f0) =
                     (int)((longlong)puVar29 - (longlong)local_res8 >> 2);
              }
              puVar28[0x14a] = 0;
            }
            else {
              if (uVar27 < 0x2c) {
                local_148._0_4_ = (int)uVar7;
                if (uVar27 == 0x2b) {
                  bVar30 = local_140[local_148._4_4_] == 3;
LAB_1800c513d:
                  bVar21 = (bool)(bVar21 & bVar30);
                  local_148 = CONCAT44(local_148._4_4_ - 1,(int)local_148 + -1);
                  uVar7 = local_148;
                }
                else {
                  if (uVar27 == 0x25) {
                    if (((local_1b8 - 0x10000 & 0xfffcffff) != 0) ||
                       (bVar17 = 1, local_1b8 == 0x40000)) {
                      bVar17 = 0;
                    }
                    if ((local_70._4_4_ == (uint)uStack_68) && (local_1a0._4_4_ == (uint)uStack_198)
                       ) {
                      bVar21 = false;
                    }
                    else {
                      bVar21 = (bool)(bVar17 & bVar21);
                    }
                    goto LAB_1800c5084;
                  }
                  if (uVar27 == 0x26) {
                    local_140[local_148._4_4_ + 1] = 2;
                  }
                  else {
                    if (uVar27 == 0x27) {
                      bVar30 = local_140[local_148._4_4_] == 2;
                      goto LAB_1800c513d;
                    }
                    if ((uVar27 != 0x28) && (uVar27 != 0x29)) {
                      if (uVar27 == 0x2a) {
                        bVar30 = local_140[local_148._4_4_] == 3;
                        goto LAB_1800c5081;
                      }
                      goto LAB_1800c5084;
                    }
                    local_140[local_148._4_4_ + 1] = 3;
                  }
                  bVar21 = (bool)(bVar21 & local_148._4_4_ < 0x20);
                  local_148 = CONCAT44(local_148._4_4_ + 1,(int)local_148 + 1);
                  local_170[0x14a] = 0;
                  puVar28 = local_170;
                  puVar29 = local_150;
                  uVar27 = local_c0._4_4_;
                  uVar7 = local_148;
                  uVar8 = local_70;
                }
                goto LAB_1800c5084;
              }
              if (uVar27 == 0x2c) {
                uVar15 = 1;
                while( true ) {
                  bVar30 = false;
                  if (local_148._4_4_ < (uint)uVar15) break;
                  if (local_140[uVar15] - 1U < 2) goto LAB_1800c507e;
                  uVar15 = (ulonglong)((uint)uVar15 + 1);
                }
              }
              else if (uVar27 == 0x2d) {
                uVar15 = 1;
                while( true ) {
                  bVar30 = false;
                  if (local_148._4_4_ < (uint)uVar15) break;
                  if (local_140[uVar15] - 1U < 2) goto LAB_1800c507e;
                  uVar15 = (ulonglong)((uint)uVar15 + 1);
                }
              }
              else {
                if (uVar27 != 0x41) {
                  if ((uVar27 != 0x42) && (uVar27 != 0x5d)) {
                    if (uVar27 != 0x60) goto LAB_1800c5084;
                    uVar15 = 1;
                    while( true ) {
                      bVar30 = false;
                      if (local_148._4_4_ < (uint)uVar15) break;
                      if (local_140[uVar15] - 1U < 2) goto LAB_1800c507e;
                      uVar15 = (ulonglong)((uint)uVar15 + 1);
                    }
                    goto LAB_1800c5081;
                  }
                  *(uint *)(puVar28 + 0x1214) =
                       *(uint *)(puVar28 + 0x1214) | 1 << ((byte)(uVar6 >> 0x20) & 0x1f);
                }
                bVar30 = local_1b8 == 0xf0000;
              }
LAB_1800c5081:
              bVar21 = (bool)(bVar21 & bVar30);
            }
LAB_1800c5084:
            local_70 = uVar8;
            local_148 = uVar7;
            if (*(short *)(&DAT_1800ff524 + local_88) != 0) {
              puVar29 = puVar29 + 1;
            }
            if (bVar21 != false) {
              while (((uint)uVar10 < 4 && (*(short *)(&DAT_1800ff526 + uVar10 * 2 + local_88) != 0))
                    ) {
                puVar29 = puVar29 + 1;
                uVar10 = (ulonglong)((uint)uVar10 + 1);
              }
            }
            local_150 = puVar29 + 1;
            uVar19 = (uint)local_168;
            uStack_ac = uVar27;
          }
        }
      }
      param_1 = local_res8;
      param_3 = local_res18;
    } while (bVar21 != false);
  }
  puVar29 = local_150;
  uVar15 = 0;
  uVar10 = uVar15;
  do {
    if ((*(int *)(param_3 + uVar10 * 4 + 0x2f0) == 0) ||
       (bVar17 = 0, param_3[uVar10 + 0x180] != '\0')) {
      bVar17 = 1;
    }
    bVar21 = (bool)(bVar21 & bVar17);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x10);
  do {
    if (param_3[uVar15 + 0x2a] != '\0') {
      param_3[0x126c] = param_3[0x126c] | (byte)(1 << ((uint)uVar15 & 0x1f));
    }
    uVar19 = (uint)uVar15 + 1;
    uVar15 = (ulonglong)uVar19;
  } while (uVar19 < 8);
  bVar30 = false;
  if (bVar21 != false) {
    puVar25 = (uint *)&DAT_180104e60;
    if (local_178 != '\0') {
      puVar25 = (uint *)&DAT_180104e78;
    }
    local_res8 = (uint *)((ulonglong)local_res8 & 0xffffffff00000000);
    bVar30 = FUN_1800c6e04((longlong)param_1,puStack_a8,(longlong)(param_3 + 0x2f0),puVar25,
                           (uint *)&local_res8);
    param_3[0x149] = local_res8._0_1_;
    *local_res20 = (int)((longlong)puVar29 - (longlong)param_1 >> 2);
  }
  return bVar30;
}

