/*
 * FUN_1800c8760 at 1800c8760
 * bool __fastcall FUN_1800c8760(int * param_1, undefined2 param_2, uint param_3, undefined8 * param_4, undefined4 * param_5)
 * Address ranges: 1800c8760-1800c9f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c8760(int *param_1,undefined2 param_2,uint param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  byte bVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint *puVar28;
  bool bVar29;
  bool bVar30;
  uint local_res10 [2];
  uint local_res18;
  undefined8 *local_res20;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228 [4];
  uint local_218;
  uint local_214;
  uint *local_210;
  uint local_208;
  uint *local_200;
  uint local_1f8 [4];
  uint local_1e8;
  uint local_1e4;
  undefined4 *local_1d8;
  byte local_1d0 [28];
  uint local_1b4 [17];
  undefined8 *local_170;
  uint local_168;
  uint *local_160;
  undefined8 local_158;
  int local_150 [32];
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  uint local_a8 [4];
  uint local_98 [4];
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined8 local_76;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined2 local_62;
  longlong local_60;
  uint local_58 [6];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800fbea0((undefined1 *)param_4,0,0x4a70);
  local_1d8 = &local_88;
  *param_4 = 0xffffffffffffffff;
  param_4[1] = 0xffffffffffffffff;
  param_4[0x90a] = 0xffffffffffffffff;
  param_4[0x90b] = 0xffffffffffffffff;
  local_82 = 1;
  param_4[0x90c] = 0xffffffffffffffff;
  param_4[0x90d] = 0xffffffffffffffff;
  local_6a = 1;
  param_4[0x90e] = 0xffffffffffffffff;
  param_4[0x90f] = 0xffffffffffffffff;
  iVar3 = *param_1;
  bVar29 = iVar3 == -0x1fd00;
  local_62 = 1;
  local_88 = 0x100020;
  local_7e = 0xc0000;
  local_1b4[0x10] = 0;
  local_160 = (uint *)(param_1 + 1);
  local_7a = 0x10;
  local_76 = 0x40000;
  local_6e = 0x100000;
  local_66 = 0x100000;
  local_1d0[0] = 0;
  local_1d0[1] = 0;
  local_1d0[2] = 0;
  local_1d0[3] = 0;
  local_1d0[4] = 0;
  local_1d0[5] = 0;
  local_1d0[6] = 0;
  local_1d0[7] = 0;
  local_1d0[8] = 0;
  local_1d0[9] = 0;
  local_1d0[10] = 0;
  local_1d0[0xb] = 0;
  local_1d0[0xc] = 0;
  local_1d0[0xd] = 0;
  local_1d0[0xe] = 0;
  local_1d0[0xf] = 0;
  local_1d0[0x10] = 0;
  local_1d0[0x11] = 0;
  local_1d0[0x12] = 0;
  local_1d0[0x13] = 0;
  local_1d0[0x14] = 0;
  local_1d0[0x15] = 0;
  local_1d0[0x16] = 0;
  local_1d0[0x17] = 0;
  local_1d0[0x18] = 0;
  local_1d0[0x19] = 0;
  local_1d0[0x1a] = 0;
  local_1d0[0x1b] = 0;
  local_1b4[0] = 0xffffffff;
  local_1b4[1] = 0xffffffff;
  local_1b4[2] = 0xffffffff;
  local_1b4[3] = 0xffffffff;
  local_1b4[4] = 0xffffffff;
  local_1b4[5] = 0xffffffff;
  local_1b4[6] = 0xffffffff;
  local_1b4[7] = 0xffffffff;
  local_1b4[8] = 0xffffffff;
  local_1b4[9] = 0xffffffff;
  local_1b4[10] = 0xffffffff;
  local_1b4[0xb] = 0xffffffff;
  local_1b4[0xc] = 0xffffffff;
  local_1b4[0xd] = 0xffffffff;
  local_1b4[0xe] = 0xffffffff;
  local_1b4[0xf] = 0xffffffff;
  local_168 = 0;
  local_158 = 0;
  local_170 = param_4;
  local_84 = param_2;
  FUN_1800fbea0((undefined1 *)local_150,0,0x80);
  local_d0 = ZEXT816(0);
  local_150[0] = 0;
  local_res10[0] = local_res10[0] & 0xffffff00;
  bVar7 = 0;
  *(char *)((longlong)local_170 + 0x4a6d) = (char)iVar3;
  *(undefined1 *)((longlong)local_170 + 0x4a6c) = 3;
  local_c0._0_16_ = local_d0;
  if (iVar3 == -0x1fd00) {
    local_210 = local_160;
    puVar26 = local_170;
    uVar13 = local_168;
    do {
      auVar5 = local_c0._0_16_;
      param_4 = local_res20;
      local_210 = local_160;
      if (bVar7 != 0) break;
      uVar16 = *local_160;
      uVar27 = uVar16 & 0xffff;
      local_d0._8_4_ = uVar16 & 0xe0ff0000;
      local_d0._0_8_ = CONCAT44(uVar16,uVar16) & 0xffffffffffff;
      uVar20 = uVar16 & 0x10000000;
      bVar30 = uVar20 != 0;
      auVar4 = local_d0._0_12_;
      local_d0._12_4_ = 1;
      bVar15 = 1;
      local_c0[3] = bVar30;
      local_c0._0_3_ = 0x10f0f;
      auVar6 = local_c0._0_16_;
      *(int *)(puVar26 + 0x94d) = *(int *)(puVar26 + 0x94d) + 1;
      bVar18 = (bool)(bVar29 & (uVar16 & 0xc0000000) == 0);
      if (uVar27 == 0x1f) {
        uVar13 = local_160[2];
        uVar16 = local_160[1];
        uVar27 = (uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800) >> 8;
        bVar10 = (byte)uVar16;
        bVar9 = (byte)(uVar16 >> 0x10);
        bVar15 = bVar10 & 0xf;
        bVar8 = bVar9 & 0xf;
        uVar22 = uVar13 & 0x7ff;
        uVar17 = (ulonglong)uVar22;
        uVar20 = uVar13 >> 0x10 & 0xf;
        uVar12 = (ulonglong)uVar20;
        bVar7 = 0;
        if ((local_168 == 0) && (!bVar30)) {
          bVar7 = 1;
        }
        uVar24 = 0;
        if (((local_d0._8_4_ != 0) || (-1 < (int)uVar13)) || (bVar19 = 1, (uVar13 & 0xf000000) != 0)
           ) {
          bVar19 = 0;
        }
        bVar29 = (bool)(bVar19 & bVar7 & bVar18);
        bVar7 = (byte)uVar20;
        if (uVar27 == 1) {
          if (((*(ushort *)((longlong)local_1d8 + 2) <= uVar22) ||
              ((uVar16 & 0xfff0fff0) != 0x80000000)) ||
             ((((uint)local_1d0[uVar17] & uVar13 >> 0x10 & 0xf) != 0 || (uVar13 & 0xf00000) != 0 ||
              (bVar19 = 1, 0xd < bVar15)))) {
            bVar19 = 0;
          }
          bVar19 = bVar29 & bVar19;
          bVar8 = bVar10 << 4 ^ bVar8;
          do {
            bVar11 = 0;
            if (bVar19 == 0) break;
            uVar13 = local_1b4[uVar24];
            if (((uVar13 >> 0x18 == (uint)bVar8) || ((uVar13 >> 0x10 & 0xff) == (uint)bVar8)) ||
               (((uVar13 >> 8 & 0xff) == (uint)bVar8 || (bVar11 = 1, (uVar13 & 0xff) == (uint)bVar8)
                ))) {
              bVar11 = 0;
            }
            bVar19 = bVar19 & bVar11;
            uVar13 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar13;
            bVar11 = bVar19;
          } while (uVar13 < 0x10);
          if ((bVar15 != 9) || (bVar15 = 0, (uVar16 & 0xf0000) != 0)) {
            bVar15 = 1;
          }
          bVar29 = (bool)(bVar11 & bVar15);
          if (bVar29 != false) {
            local_1d0[uVar17] = local_1d0[uVar17] | bVar7;
            bVar7 = bVar10 << 4 ^ bVar9 & 0xf;
            local_1b4[uVar17] =
                 CONCAT31(CONCAT21(CONCAT11(bVar7,bVar7),bVar7),bVar7) &
                 *(uint *)(&DAT_1800ffb50 + uVar12 * 4) |
                 ~*(uint *)(&DAT_1800ffb50 + uVar12 * 4) & local_1b4[uVar17];
            *(byte *)(uVar17 + (longlong)local_170) = bVar8;
          }
        }
        else if (uVar27 == 6) {
          if (((uVar22 < *(ushort *)(local_1d8 + 3)) && ((uVar16 & 0xfff0fff0) == 0x80000000)) &&
             (((uVar13 & 0xb00000) == 0 &&
              ((bVar15 < 0xe &&
               ((*(uint *)((longlong)local_res20 + uVar17 * 4 + 0x4850) &
                *(uint *)(&DAT_1800ffb50 + uVar12 * 4)) == *(uint *)(&DAT_1800ffb50 + uVar12 * 4))))
              ))) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          bVar18 = (bool)(bVar29 & bVar9);
          bVar8 = bVar10 << 4 ^ bVar8;
          do {
            bVar29 = false;
            if (bVar18 == false) break;
            uVar27 = *(uint *)((longlong)local_res20 + uVar24 * 4 + 0x4850);
            if ((((uVar27 >> 0x18 == (uint)bVar8) || ((uVar27 >> 0x10 & 0xff) == (uint)bVar8)) ||
                ((uVar27 >> 8 & 0xff) == (uint)bVar8)) ||
               (bVar10 = 1, (uVar27 & 0xff) == (uint)bVar8)) {
              bVar10 = 0;
            }
            bVar18 = (bool)(bVar18 & bVar10);
            uVar27 = (int)uVar24 + 1;
            uVar24 = (ulonglong)uVar27;
            bVar29 = bVar18;
          } while (uVar27 < 0xc);
          if ((bVar15 == 9) && ((uVar16 & 0xf0000) == 0)) {
            bVar29 = false;
          }
          else if ((bVar15 == 4) && (((uVar16 & 0xf0000) == 0 && ((uVar13 & 0xf0000) != 0xf0000))))
          {
            bVar29 = false;
            goto LAB_1800c9ca3;
          }
          if (bVar29 != false) {
            local_1d0[uVar17 + 0x10] = local_1d0[uVar17 + 0x10] | bVar7;
            *(uint *)((longlong)local_res20 + uVar17 * 4 + 0x4850) =
                 CONCAT31(CONCAT21(CONCAT11(bVar8,bVar8),bVar8),bVar8) &
                 *(uint *)(&DAT_1800ffb50 + uVar12 * 4) |
                 *(uint *)((longlong)local_res20 + uVar17 * 4 + 0x4850) &
                 ~*(uint *)(&DAT_1800ffb50 + uVar12 * 4);
          }
        }
        else if (uVar27 == 10) {
          if (((*(ushort *)(local_1d8 + 5) <= uVar22) || ((uVar13 & 0xf00000) != 0)) ||
             (bVar7 = 1, (uVar16 & 0x87ffffff) != 0x80000000)) {
            bVar7 = 0;
          }
          uVar16 = uVar16 & 0x78000000;
          *(byte *)(uVar17 + 0x4880 + (longlong)local_170) = (byte)(uVar16 >> 0x1b);
          if (((uVar16 + 0xf0000000 & 0xe7ffffff) != 0) || (bVar15 = 1, uVar16 == 0x28000000)) {
            bVar15 = 0;
          }
          bVar29 = (bool)(bVar15 & bVar7 & bVar29);
        }
LAB_1800c9ca3:
        local_210 = local_160 + 3;
        puVar26 = local_170;
        uVar13 = local_168;
LAB_1800c9cb1:
        bVar7 = (byte)local_res10[0];
      }
      else {
        if (uVar27 == 0x2f) {
          uVar16 = local_160[1];
          if ((uVar13 != 0) || (bVar30)) {
            bVar15 = 0;
          }
          if ((((local_d0._8_4_ != 0) || (-1 < (int)uVar16)) ||
              (((byte)(uVar16 >> 0x1c) & 7 | (byte)(uVar16 >> 8) & 0x18) != 0xe)) ||
             (bVar7 = 1, (uVar16 & 0xfff07f0) != 0xf0000)) {
            bVar7 = 0;
          }
          bVar29 = (bool)(bVar7 & bVar15 & bVar18);
          if (bVar29 != false) {
            *(undefined1 *)((ulonglong)(uVar16 & 0x7ff) + 0x49d8 + (longlong)puVar26) = 1;
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar16 & 0x7ff) * 4 + 0x49e8) = local_160[2];
          }
          local_210 = local_160 + 3;
          goto LAB_1800c9cb1;
        }
        bVar7 = 1;
        if (uVar27 == 0x30) {
          uVar16 = local_160[1];
          if ((uVar13 != 0) || (bVar30)) {
            bVar7 = 0;
          }
          else {
            bVar7 = 1;
          }
          if (((local_d0._8_4_ != 0) || (-1 < (int)uVar16)) ||
             ((((byte)(uVar16 >> 0x1c) & 7 | (byte)(uVar16 >> 8) & 0x18) != 7 ||
              (((uVar16 & 0xfff0000) != 0xf0000 ||
               (bVar15 = 1, (uVar16 & 0x7f0) != 0 || local_160[5] != 0)))))) {
            bVar15 = 0;
          }
          bVar29 = (bool)(bVar15 & bVar7 & bVar18);
          if (bVar29 != false) {
            *(undefined1 *)((ulonglong)(uVar16 & 0x7ff) + 0x48c5 + (longlong)puVar26) = 1;
            uVar16 = (uVar16 & 0x7ff) * 4;
            *(uint *)((longlong)puVar26 + (ulonglong)uVar16 * 4 + 0x48d8) = local_160[2];
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar16 + 1) * 4 + 0x48d8) = local_160[3];
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar16 + 2) * 4 + 0x48d8) = local_160[4];
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar16 + 3) * 4 + 0x48d8) = local_160[5];
          }
          local_210 = local_160 + 6;
          goto LAB_1800c9cb1;
        }
        if (uVar27 == 0x51) {
          uVar16 = local_160[1];
          uVar27 = uVar16 & 0x7ff;
          if ((uVar13 != 0) || (bVar30)) {
            bVar7 = 0;
          }
          else {
            bVar7 = 1;
          }
          if ((((local_d0._8_4_ != 0) || (-1 < (int)uVar16)) ||
              (((byte)(uVar16 >> 0x1c) & 7 | (byte)(uVar16 >> 8) & 0x18) != 2)) ||
             (((uVar16 & 0xfff0000) != 0xf0000 || (bVar15 = 1, *(ushort *)(local_1d8 + 1) <= uVar27)
              ))) {
            bVar15 = 0;
          }
          bVar29 = (bool)(bVar15 & bVar7 & bVar18);
          if (bVar29 != false) {
            uVar16 = local_160[2];
            uVar25 = uVar27 * 4;
            uVar20 = local_160[3];
            uVar22 = local_160[4];
            uVar23 = local_160[5];
            *(undefined1 *)((ulonglong)uVar27 + 0x44f + (longlong)puVar26) = 1;
            *(uint *)((longlong)puVar26 + (ulonglong)uVar25 * 4 + 0x850) = uVar16;
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar25 + 1) * 4 + 0x850) = uVar20;
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar25 + 2) * 4 + 0x850) = uVar22;
            *(uint *)((longlong)puVar26 + (ulonglong)(uVar25 + 3) * 4 + 0x850) = uVar23;
          }
          local_210 = local_160 + 6;
          goto LAB_1800c9cb1;
        }
        if (uVar27 == 0xfffe) {
          bVar29 = false;
          if (uVar20 == 0) {
            bVar29 = bVar18;
          }
          local_210 = local_160 + ((uVar16 >> 0x10) + 1);
          goto LAB_1800c9cb1;
        }
        if (uVar27 != 0xffff) {
          bVar29 = false;
          if (uVar27 < 0x61) {
            bVar29 = bVar18;
          }
          bVar8 = 0;
          if (((uVar16 & 0xff0000) == 0) ||
             (((bVar10 = bVar8, uVar27 - 0x29 < 0x36 &&
               ((0x20000000000011U >> ((ulonglong)(uVar27 - 0x29) & 0x3f) & 1) != 0)) &&
              ((uVar16 & 0xff0000) < 0x60001)))) {
            bVar10 = (uVar16 & 0xe0000000) == 0 & bVar29;
          }
          local_60 = (longlong)(char)(&DAT_1800ffe80)[uVar27];
          if (((&DAT_1800ffe80)[uVar27] != -1) &&
             ((!bVar30 ||
              ((((&DAT_1800fff10)[local_60 * 0xc] & 4) == 0 &&
               ((*(short *)(&DAT_1800fff16 + local_60 * 0xc) != 0 ||
                (*(short *)(&DAT_1800fff14 + local_60 * 0xc) != 0)))))))) {
            bVar8 = bVar7;
          }
          local_60 = local_60 * 0xc;
          local_210 = local_160 + 1;
          uVar2 = *(ushort *)(&DAT_1800fff14 + local_60);
          if (((uVar2 == 0) || ((int)*local_210 < 0)) && ((bVar8 & bVar10) != 0)) {
            local_c0._8_8_ = auVar5._8_8_;
            if (local_168 == 0) {
              local_c0._8_8_ = local_160;
            }
            local_214 = 0;
            local_c0._0_8_ = auVar6._0_8_;
            local_168 = local_168 + (byte)(&DAT_1800fff11)[local_60];
            local_208 = 0;
            bVar29 = (bool)(-(local_168 < local_res18) & bVar8 & bVar10);
            if (uVar2 == 0) {
              local_200 = local_210;
              local_230 = 0;
              local_234 = 0;
              local_1e8 = local_1e8 & 0xffffff00;
            }
            else {
              if ((*local_210 & 0xe00000) != 0) {
                bVar29 = false;
              }
              local_230 = *local_210 & 0x7ff;
              uVar13 = (*local_210 >> 0x14 & 0x700 | *local_210 & 0x1800) >> 8;
              uVar16 = (uint)*(ushort *)((longlong)local_1d8 + (ulonglong)uVar13 * 2);
              if ((uVar16 <= local_230) || ((*local_210 & 0xf000000) != 0)) {
                bVar15 = 0;
              }
              if ((bVar15 & bVar29) == 0) {
                uVar21 = 0;
                bVar29 = false;
              }
              else {
                uVar21 = *(ushort *)(&DAT_1800ffee8 + (ulonglong)uVar13 * 2);
                local_214 = (uint)uVar21;
                bVar29 = (bool)(-((uVar2 & uVar21) != 0) & bVar15 & bVar29);
              }
              local_234 = 0xf0000;
              if ((*local_210 & 0xf0000) != 0) {
                local_234 = *local_210 & 0xf0000;
              }
              local_1e8 = local_234 >> 0x10;
              bVar18 = bVar29;
              if (((*(int *)((longlong)local_res20 + (ulonglong)local_230 * 4 + 0x4850) ==
                    0x40404040) && (uVar21 == 0x200)) &&
                 (bVar18 = false, (char)(local_234 >> 0x10) == '\x0f')) {
                bVar18 = bVar29;
              }
              if ((*local_210 & 0x2000) == 0) {
                local_200 = local_160 + 2;
                bVar29 = bVar18;
                if ((uVar13 == 6) &&
                   (bVar29 = false,
                   (local_1d0[(ulonglong)local_230 + 0x10] & local_1e8) == local_1e8)) {
                  bVar29 = bVar18;
                }
              }
              else {
                local_208 = local_160[2];
                if (((((byte)(local_208 >> 0x1c) & 7 | (byte)(local_208 >> 8) & 0x18) == 0xf) &&
                    ((local_208 & 0xff0000) == 0xe40000)) && (uVar13 == 6)) {
                  bVar7 = 1;
                }
                else {
                  bVar7 = 0;
                }
                bVar29 = false;
                if (((local_208 & 0x7ff) < uVar16) && ((local_208 & 0xf000000) == 0)) {
                  bVar29 = (bool)(bVar7 & bVar18);
                }
                local_200 = local_160 + 3;
                *(undefined1 *)((longlong)local_170 + 0x4885) = 1;
              }
              uVar27 = local_d0._4_4_;
            }
            if (bVar30) {
              uVar13 = *local_200 & 0xff0000;
              bVar7 = 0;
              if (((-1 < (int)*local_200) ||
                  (((byte)(*local_200 >> 0x1c) & 7 | (byte)(*local_200 >> 8) & 0x18) != 0x13)) ||
                 (bVar15 = 1, (*local_200 & 0x7ff) != 0)) {
                bVar15 = bVar7;
              }
              if (((*local_200 & 0xf000000) == 0) || ((*local_200 & 0xf000000) == 0xd000000)) {
                bVar7 = bVar15 & bVar29;
              }
              if ((((uVar13 == 0xe40000) || (uVar13 == 0)) || (uVar13 == 0x550000)) ||
                 ((uVar13 == 0xaa0000 || (bVar15 = 0, uVar13 == 0xff0000)))) {
                bVar15 = 1;
              }
              bVar29 = (bool)(bVar15 & bVar7);
              if (bVar29 != false) {
                local_200 = local_200 + 1;
                local_160 = local_210;
              }
            }
            uVar12 = 0;
            uVar13 = 0;
            local_22c = 1;
            if (uVar27 == 0x14) {
LAB_1800c8d5f:
              local_22c = 4;
            }
            else if (uVar27 == 0x15) {
LAB_1800c8d58:
              local_22c = 3;
            }
            else {
              if (uVar27 == 0x16) goto LAB_1800c8d5f;
              if (uVar27 == 0x17) goto LAB_1800c8d58;
              if (uVar27 == 0x18) {
                local_22c = 2;
              }
            }
            local_d0._12_4_ = local_22c;
            local_d0 = CONCAT412(local_d0._12_4_,auVar4);
            local_a8[1] = 0;
            local_1f8[0] = 0;
            local_1f8[1] = 0;
            local_1f8[2] = 0;
            local_228[0] = 0;
            local_228[1] = 0;
            local_228[2] = 0;
            local_a8[0] = 0;
            local_a8[2] = 0;
            local_58[0] = 0;
            local_58[1] = 0;
            local_58[2] = 0;
            local_98[0] = 0;
            local_98[1] = 0;
            local_98[2] = 0;
            local_210 = local_160;
            uVar16 = uVar13;
            uVar22 = uVar13;
            if (bVar29 != false) {
              local_218 = 0;
              bVar7 = -(uVar20 != 0) & 0x80;
              uVar17 = uVar12;
              do {
                lVar14 = local_60;
                uVar13 = (uint)uVar17;
                if (2 < uVar13) break;
                uVar2 = *(ushort *)(&DAT_1800fff16 + uVar17 * 2 + local_60);
                if (uVar2 == 0) break;
                uVar20 = uVar13 + (int)uVar12;
                uVar16 = local_200[uVar20];
                local_1e4 = uVar16;
                local_228[uVar17] = uVar16 & 0x7ff;
                uVar25 = uVar16 >> 0x14 & 0x700 | uVar16 & 0x1800;
                uVar22 = uVar16 & 0xf000000;
                local_a8[uVar17] = uVar22;
                uVar27 = uVar25 >> 8;
                uVar23 = uVar16 & 0xff0000;
                local_58[uVar17] = uVar23;
                if (((uVar22 == 0) ||
                    (((((uVar22 == 0x1000000 || (uVar22 == 0xb000000)) || (uVar22 == 0xc000000)) &&
                      ((uVar25 < 0x100 || (uVar27 - 1 < 2)))) ||
                     ((uVar22 == 0xd000000 && ((uVar27 == 0x13 || (uVar27 == 0xe)))))))) &&
                   (bVar15 = -((uVar16 & 0x7ff) <
                              (uint)*(ushort *)((longlong)local_1d8 + (ulonglong)uVar27 * 2)) &
                             (byte)(uVar16 >> 0x1f) & bVar29, bVar15 != 0)) {
                  uVar21 = *(ushort *)(&DAT_1800ffee8 + (ulonglong)uVar27 * 2);
                  local_1f8[uVar17] = (uint)uVar21;
                  bVar18 = false;
                  bVar15 = -((uVar2 & uVar21) != 0) & bVar15;
                  if (((uVar2 >> 0xe & 1) != 0) && (uVar22 != 0)) {
                    bVar15 = 0;
                  }
                  if (((uVar2 & 0x2000) == 0) || (bVar8 = 0, uVar23 == 0xe40000)) {
                    bVar8 = 1;
                  }
                  if ((((uVar23 == 0) || (uVar23 == 0x550000)) || (uVar23 == 0xaa0000)) ||
                     (bVar30 = false, uVar23 == 0xff0000)) {
                    bVar30 = true;
                  }
                  if (((uVar2 >> 0xc & 1) == 0) || (bVar29 = false, bVar30)) {
                    bVar29 = (bool)(bVar8 & bVar15);
                  }
                  if ((local_1e4 & 0x2000) == 0) goto LAB_1800c9141;
                  uVar16 = local_200[uVar20 + 1];
                  uVar23 = (uVar16 >> 0x14 & 0x700 | uVar16 & 0x1800) >> 8;
                  uVar20 = uVar16 & 0xff0000;
                  uVar22 = uVar16 & 0x7ff;
                  if (uVar23 == 3) {
                    if (((uVar20 == 0) || (uVar20 == 0x550000)) ||
                       ((uVar20 == 0xaa0000 || (bVar30 = false, uVar20 == 0xff0000)))) {
                      if (uVar27 != 2) goto LAB_1800c8fd9;
                      goto LAB_1800c8ff9;
                    }
                  }
                  else {
LAB_1800c8fd9:
                    bVar30 = bVar18;
                    if ((((uVar23 == 0xf) && (uVar20 == 0xe40000)) &&
                        ((uVar27 - 1 & 0xfffffffa) == 0)) && (uVar27 != 5)) {
LAB_1800c8ff9:
                      bVar30 = true;
                    }
                  }
                  if ((uVar22 < *(ushort *)((longlong)local_1d8 + (ulonglong)uVar23 * 2)) &&
                     ((uVar16 & 0xf000000) == 0)) {
                    bVar29 = (bool)(bVar30 & bVar29);
                  }
                  else {
                    bVar29 = false;
                  }
                  local_98[uVar17] = uVar16;
                  local_218 = local_218 + 1;
                  if (uVar27 != 1) {
                    if (uVar27 != 2) {
                      if (uVar27 != 3) goto LAB_1800c9141;
                      *(byte *)((ulonglong)uVar22 + 0x40 + (longlong)local_170) =
                           *(byte *)((ulonglong)uVar22 + 0x40 + (longlong)local_170) |
                           (byte)(1 << (uVar16 >> 0x10 & 3)) | (byte)(1 << (uVar16 >> 0x12 & 3)) |
                           (byte)(1 << (uVar16 >> 0x14 & 3)) | (byte)(1 << (uVar16 >> 0x16 & 3));
                      goto LAB_1800c91a5;
                    }
                    uVar16 = 0;
                    if (uVar13 != 0) {
                      do {
                        if (bVar29 == false) break;
                        if (local_1f8[uVar16] == 2) {
                          bVar29 = (bool)(bVar29 & ((local_98[uVar16] >> 0x14 & 0x700 |
                                                    local_98[uVar16] & 0x1800) >> 8 == uVar23 &&
                                                   local_228[uVar16] == local_228[uVar17]));
                        }
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar13);
                    }
                    *(undefined1 *)((longlong)local_170 + 0x44e) = 1;
                    goto LAB_1800c9146;
                  }
                  uVar16 = 0;
                  if (uVar13 != 0) {
                    do {
                      if (bVar29 == false) break;
                      if (local_1f8[uVar16] == 1) {
                        bVar29 = (bool)(bVar29 & local_228[uVar16] == local_228[uVar17]);
                      }
                      uVar16 = uVar16 + 1;
                    } while (uVar16 < uVar13);
                  }
                  *(undefined1 *)((longlong)local_170 + 0x4884) = 1;
                }
                else {
                  bVar29 = false;
LAB_1800c9141:
                  if (uVar27 == 2) {
LAB_1800c9146:
                    uVar16 = 0;
                    if (uVar13 != 0) {
                      do {
                        if (bVar29 == false) break;
                        if (local_1f8[uVar16] == 2) {
                          if ((local_a8[uVar16] + 0xf5000000 & 0xfeffffff) == 0) {
                            bVar18 = (local_a8[uVar17] + 0xf5000000 & 0xfeffffff) == 0;
                          }
                          else {
                            bVar18 = (local_a8[uVar17] + 0xf5000000 & 0xfeffffff) != 0;
                          }
                          bVar29 = (bool)(bVar29 & bVar18);
                        }
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < uVar13);
                    }
                  }
                }
LAB_1800c91a5:
                puVar26 = local_170;
                bVar15 = (&DAT_1800fff13)[local_60];
                if (((local_d0._4_4_ == 0x5f) && (uVar13 == 0)) && (local_98[0] == 0)) {
                  bVar15 = (char)uVar17 + 0xf;
                  if ((*(byte *)((ulonglong)(local_200[local_218 + 1] & 0x7ff) + 0x4880 +
                                (longlong)local_170) & 0x1f) == 2) {
                    bVar15 = (char)uVar17 + 0xb;
                  }
                }
                bVar10 = (byte)local_1e8;
                bVar8 = bVar15 & bVar10;
                if ((&DAT_1800fff12)[local_60] == '\0') {
                  bVar8 = bVar15;
                }
                bVar8 = FUN_1800c6d80(local_58[uVar17],bVar8);
                uVar16 = 0;
                bVar15 = 0;
                if (local_d0._4_4_ != 0x1e) {
                  if ((uVar13 == 2) ||
                     (uVar27 = 1,
                     *(short *)(&DAT_1800fff16 + (ulonglong)(uVar13 + 1) * 2 + lVar14) == 0)) {
                    uVar27 = local_22c;
                  }
                  uVar20 = local_1f8[uVar17];
                  do {
                    if (uVar20 < 0x21) {
                      if (uVar20 == 0x20) {
                        pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x48b3 +
                                         (longlong)puVar26);
                        *pbVar1 = *pbVar1 | bVar8;
                        goto LAB_1800c9388;
                      }
                      if (uVar20 != 1) {
                        if (uVar20 == 2) {
                          pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x41 +
                                           (longlong)puVar26);
                          *pbVar1 = *pbVar1 | bVar8;
                        }
                        else if (uVar20 == 4) {
                          pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x20 +
                                           (longlong)puVar26);
                          *pbVar1 = *pbVar1 | bVar8;
                        }
                        else if (uVar20 == 8) {
                          pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x4893 +
                                           (longlong)puVar26);
                          *pbVar1 = *pbVar1 | bVar8;
                        }
                        else {
                          if (uVar20 != 0x10) goto LAB_1800c938b;
                          *(undefined1 *)
                           ((ulonglong)(local_228[uVar17] + uVar16) + 0x48a3 + (longlong)puVar26) =
                               1;
                        }
                        goto LAB_1800c9388;
                      }
                      if (local_98[uVar17] == 0) {
                        bVar15 = local_1d0[local_228[uVar17]];
                        pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x10 +
                                         (longlong)puVar26);
                        *pbVar1 = *pbVar1 | bVar8;
                      }
                      else {
                        bVar15 = 0xf;
                        lVar14 = 0;
                        do {
                          pbVar1 = (byte *)(lVar14 + 0x10 + (longlong)puVar26);
                          *pbVar1 = *pbVar1 | bVar8;
                          lVar14 = lVar14 + 1;
                        } while (lVar14 != 0x10);
                      }
                    }
                    else {
                      if (uVar20 == 0x40) {
                        pbVar1 = (byte *)((ulonglong)(local_228[uVar17] + uVar16) + 0x40 +
                                         (longlong)puVar26);
                        *pbVar1 = *pbVar1 | bVar8;
                      }
                      else if (uVar20 != 0x80) {
                        if (uVar20 != 0x100) {
                          if (uVar20 == 0x400) {
                            bVar15 = -(*(char *)((ulonglong)local_228[uVar17] + 0x4880 +
                                                (longlong)puVar26) != '\0') & 0xf;
                          }
                          goto LAB_1800c938b;
                        }
                        *(undefined1 *)
                         ((ulonglong)(local_228[uVar17] + uVar16) + 0x48b4 + (longlong)puVar26) = 1;
                        goto LAB_1800c9388;
                      }
                      *(undefined1 *)
                       ((ulonglong)(local_228[uVar17] + uVar16) + 0x48c4 + (longlong)puVar26) = 1;
LAB_1800c9388:
                      bVar15 = 0xf;
                    }
LAB_1800c938b:
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < uVar27);
                }
                lVar14 = 0;
                if ((local_1e4 & 0x2000) == 0) {
                  bVar29 = (bool)(bVar29 & (bVar15 & bVar8) == bVar8);
                }
                if (local_214 == 4) {
                  pbVar1 = (byte *)((ulonglong)local_230 + 0x20 + (longlong)puVar26);
                  *pbVar1 = *pbVar1 | bVar10;
                }
                else if (local_214 == 0x20) {
                  pbVar1 = (byte *)((ulonglong)local_230 + 0x48b3 + (longlong)puVar26);
                  *pbVar1 = *pbVar1 | bVar10;
                }
                else if (local_214 == 0x40) {
                  pbVar1 = (byte *)((ulonglong)local_230 + 0x40 + (longlong)puVar26);
                  *pbVar1 = *pbVar1 | bVar10;
                }
                else if (local_214 == 0x200) {
                  if (local_208 == 0) {
                    pbVar1 = (byte *)((ulonglong)local_230 + 0x4887 + (longlong)puVar26);
                    *pbVar1 = *pbVar1 | bVar10 | bVar7;
                  }
                  else {
                    do {
                      pbVar1 = (byte *)(lVar14 + 0x4887 + (longlong)puVar26);
                      *pbVar1 = *pbVar1 | bVar10 | bVar7;
                      lVar14 = lVar14 + 1;
                    } while (lVar14 != 0xc);
                  }
                }
                uVar12 = (ulonglong)local_218;
                uVar17 = (ulonglong)(uVar13 + 1);
              } while (bVar29 != false);
              uVar13 = local_1f8[1];
              uVar16 = local_228[1];
              uVar22 = local_1f8[0];
              uVar27 = local_d0._4_4_;
            }
            uVar12 = 0;
            if (uVar27 < 0x61) {
              if (uVar27 == 0x60) {
                for (uVar13 = 1; bVar18 = false, uVar13 <= local_158._4_4_; uVar13 = uVar13 + 1) {
                  if (local_150[uVar13] == 1 || local_150[uVar13] == 2) goto LAB_1800c95e0;
                }
              }
              else if (uVar27 < 0x25) {
                if (uVar27 == 0x24) {
                  if ((local_214 != uVar22) || (bVar18 = false, local_230 != local_228[0])) {
LAB_1800c95e0:
                    bVar18 = true;
                  }
                }
                else if (uVar27 < 0x1c) {
                  if (uVar27 == 0x1b) {
                    bVar29 = (bool)(bVar29 & local_158._4_4_ < 0x20);
                    local_150[local_158._4_4_ + 1] = 1;
                    goto LAB_1800c94fb;
                  }
                  if (uVar27 == 0x14) {
LAB_1800c94dc:
                    bVar18 = local_234 == 0xf0000;
                  }
                  else if (uVar27 == 0x15) {
LAB_1800c94d2:
                    bVar18 = local_234 == 0x70000;
                  }
                  else {
                    if (uVar27 == 0x16) goto LAB_1800c94dc;
                    if (uVar27 == 0x17) goto LAB_1800c94d2;
                    if (uVar27 != 0x18) goto LAB_1800c95e9;
                    bVar18 = local_234 == 0x30000;
                  }
                  if ((!bVar18) || (bVar18 = true, local_a8[1] != 0)) goto LAB_1800c94ca;
                }
                else {
                  if (uVar27 != 0x1c) {
                    if (uVar27 == 0x1d) {
                      bVar18 = local_150[local_158._4_4_] == 1;
                      goto LAB_1800c95ae;
                    }
                    if (uVar27 == 0x1e) {
                      bVar29 = (bool)(bVar29 & local_c0._4_4_ == 0x1c);
                      *(int *)((longlong)local_170 + (ulonglong)local_228[0] * 4 + 0x4a28) =
                           (int)((longlong)local_210 - (longlong)param_1 >> 2);
                    }
                    else if (uVar27 == 0x21) {
                      if (((local_234 - 0x10000 & 0xfff8ffff) != 0) ||
                         (bVar7 = 1, local_234 == 0x80000)) {
                        bVar7 = 0;
                      }
                      if (((local_214 == uVar22) && (local_230 == local_228[0])) ||
                         ((local_214 == uVar13 && (local_230 == uVar16)))) {
                        bVar29 = false;
                      }
                      else {
                        bVar29 = (bool)(bVar7 & bVar29);
                      }
                    }
                    goto LAB_1800c95e9;
                  }
                  bVar18 = local_150[local_158._4_4_] == 0;
                }
              }
              else {
                if (uVar27 != 0x25) {
                  if (uVar27 == 0x26) {
                    bVar29 = (bool)(bVar29 & local_158._4_4_ < 0x20);
                    local_150[local_158._4_4_ + 1] = 2;
                  }
                  else {
                    if (uVar27 == 0x27) {
                      bVar18 = local_150[local_158._4_4_] == 2;
LAB_1800c95ae:
                      bVar29 = (bool)(bVar29 & bVar18);
                      local_158 = CONCAT44(local_158._4_4_ - 1,(int)local_158 + -1);
                      goto LAB_1800c95e9;
                    }
                    if ((uVar27 != 0x28) && (uVar27 != 0x29)) {
                      if (uVar27 == 0x2a) {
                        bVar18 = local_150[local_158._4_4_] == 3;
                      }
                      else {
                        if (uVar27 == 0x2b) {
                          bVar18 = local_150[local_158._4_4_] == 3;
                          goto LAB_1800c95ae;
                        }
                        if (uVar27 == 0x2c) {
                          uVar17 = 1;
                          while( true ) {
                            bVar18 = false;
                            if (local_158._4_4_ < (uint)uVar17) break;
                            if (local_150[uVar17] == 1 || local_150[uVar17] == 2)
                            goto LAB_1800c95e0;
                            uVar17 = (ulonglong)((uint)uVar17 + 1);
                          }
                        }
                        else {
                          if (uVar27 != 0x2d) goto LAB_1800c95e9;
                          uVar17 = 1;
                          while( true ) {
                            bVar18 = false;
                            if (local_158._4_4_ < (uint)uVar17) break;
                            if (local_150[uVar17] == 1 || local_150[uVar17] == 2)
                            goto LAB_1800c95e0;
                            uVar17 = (ulonglong)((uint)uVar17 + 1);
                          }
                        }
                      }
                      goto LAB_1800c95e2;
                    }
                    bVar29 = (bool)(bVar29 & local_158._4_4_ < 0x20);
                    local_150[local_158._4_4_ + 1] = 3;
                  }
LAB_1800c94fb:
                  local_158._4_4_ = local_158._4_4_ + 1;
                  local_158 = CONCAT44(local_158._4_4_,(int)local_158 + 1);
                  local_210 = local_160;
                  uVar27 = local_d0._4_4_;
                  goto LAB_1800c95e9;
                }
                if (((local_234 - 0x10000 & 0xfffcffff) == 0) &&
                   (bVar18 = true, local_234 != 0x40000)) goto LAB_1800c95e2;
LAB_1800c94ca:
                bVar18 = false;
              }
LAB_1800c95e2:
              bVar29 = (bool)(bVar29 & bVar18);
            }
LAB_1800c95e9:
            puVar28 = local_210;
            if ((*(short *)(&DAT_1800fff14 + local_60) != 0) &&
               (puVar28 = local_210 + 1, local_208 != 0)) {
              puVar28 = local_210 + 2;
            }
            if (bVar29 != false) {
              while ((uVar13 = (uint)uVar12, uVar13 < 3 &&
                     (*(short *)(&DAT_1800fff16 + uVar12 * 2 + local_60) != 0))) {
                if (((*(short *)(&DAT_1800fff14 + local_60) != 0) || (uVar13 != 0)) &&
                   (local_98[uVar12] != 0)) {
                  puVar28 = puVar28 + 1;
                }
                puVar28 = puVar28 + 1;
                uVar12 = (ulonglong)(uVar13 + 1);
              }
            }
            local_210 = puVar28 + 1;
            local_c0._4_4_ = uVar27;
            puVar26 = local_170;
            uVar13 = local_168;
            goto LAB_1800c9cb1;
          }
          bVar29 = false;
          local_210 = local_160;
          break;
        }
        uVar17 = 0;
        uVar12 = uVar17;
        if (uVar20 == 0) {
          uVar17 = (ulonglong)(local_d0._8_4_ == 0 && local_158._4_4_ == 0);
          uVar12 = 0;
        }
        do {
          if (*(int *)((longlong)puVar26 + uVar12 * 4 + 0x4a28) != 0) {
            local_c0._4_4_ = auVar5._4_4_;
            bVar29 = local_c0._4_4_ == 0x1c;
            goto LAB_1800c97f2;
          }
          uVar16 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar16;
        } while (uVar16 < 0x10);
        bVar29 = (bool)(bVar18 & (byte)uVar17);
LAB_1800c97f2:
        local_210 = local_160 + 1;
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
        local_c0._0_16_ = auVar6;
      }
      local_160 = local_210;
      param_4 = local_res20;
      local_210 = local_160;
    } while (bVar29 != false);
  }
  puVar28 = local_160;
  uVar24 = 2;
  uVar17 = 0;
  uVar12 = uVar17;
  do {
    if ((*(int *)((longlong)param_4 + uVar12 * 4 + 0x4a28) == 0) ||
       (bVar7 = 0, *(char *)((longlong)param_4 + uVar12 + 0x48b4) != '\0')) {
      bVar7 = 1;
    }
    bVar29 = (bool)(bVar7 & bVar29);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 0x10);
  uVar12 = uVar17;
  if (*(char *)((longlong)param_4 + 0x4885) == '\0') {
    do {
      uVar16 = (uint)uVar12;
      uVar13 = *(uint *)((longlong)param_4 + uVar12 * 4 + 0x4850);
      if ((uVar13 < 0x1000000) ||
         (((uVar13 & 0xff0000) == 0 || (uVar13 & 0xff00) == 0) || (char)uVar13 == '\0')) break;
      uVar16 = uVar16 + 1;
      uVar12 = (ulonglong)uVar16;
    } while (uVar16 < 0xc);
    if (uVar16 != 0xc) {
      uVar17 = (ulonglong)bVar29;
    }
  }
  else {
    uVar13 = *(uint *)(param_4 + 0x90a);
    bVar7 = 0;
    if ((uVar13 < 0x1000000) ||
       (((uVar13 & 0xff0000) == 0 || (uVar13 & 0xff00) == 0) || (char)uVar13 == '\0')) {
      bVar7 = 1;
    }
    uVar13 = *(uint *)((longlong)param_4 + 0x4854);
    uVar17 = (ulonglong)(bVar29 & bVar7);
    if (((((char)(uVar13 >> 0x18) != '@') && ((uVar13 & 0xff0000) != 0x400000)) &&
        ((uVar13 & 0xff00) != 0x4000)) && ((char)uVar13 != '@')) {
      do {
        uVar13 = *(uint *)((longlong)param_4 + uVar24 * 4 + 0x4850);
        if ((char)(uVar13 >> 0x18) == '@') {
          return false;
        }
        if ((uVar13 & 0xff0000) == 0x400000) {
          return false;
        }
        if ((uVar13 & 0xff00) == 0x4000) {
          return false;
        }
        if ((char)uVar13 == '@') {
          return false;
        }
        uVar13 = (int)uVar24 + 1;
        uVar24 = (ulonglong)uVar13;
      } while (uVar13 < 0xc);
    }
  }
  bVar29 = false;
  if ((char)uVar17 != '\0') {
    local_res10[0] = 0;
    bVar29 = FUN_1800c6e04((longlong)param_1,(uint *)local_c0._8_8_,(longlong)(param_4 + 0x945),
                           (uint *)&DAT_180104ec0,local_res10);
    *(byte *)((longlong)param_4 + 0x4886) = (byte)local_res10[0];
    *param_5 = (int)((longlong)puVar28 - (longlong)param_1 >> 2);
  }
  return bVar29;
}

