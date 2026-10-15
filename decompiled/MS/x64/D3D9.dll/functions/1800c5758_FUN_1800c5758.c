/*
 * FUN_1800c5758 at 1800c5758
 * undefined8 __fastcall FUN_1800c5758(int * param_1, uint param_2, undefined1 * param_3, undefined4 * param_4)
 * Address ranges: 1800c5758-1800c6d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c5758(int *param_1,uint param_2,undefined1 *param_3,undefined4 *param_4)

{
  byte *pbVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  undefined7 extraout_var;
  undefined7 uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  byte bVar27;
  uint uVar28;
  uint *puVar29;
  bool bVar30;
  bool bVar31;
  int *local_res8;
  uint local_res10;
  undefined1 *local_res18;
  undefined4 *local_res20;
  byte local_1d8;
  uint local_1d4;
  int local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  int local_194;
  uint local_190;
  byte local_18c [4];
  uint *local_188;
  uint local_180;
  longlong local_178;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint *local_150;
  undefined8 local_148;
  int local_140 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  uint *local_a0;
  uint local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1800fbea0(param_3,0,0x1270);
  iVar4 = *param_1;
  local_150 = (uint *)(param_1 + 1);
  bVar30 = iVar4 == -0xfd00;
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_168 = param_3;
  FUN_1800fbea0((undefined1 *)local_140,0,0x80);
  local_c0 = 0;
  uStack_b8 = 0;
  local_168[0x126e] = (char)iVar4;
  local_168[0x126d] = 3;
  local_168[0x14a] = 1;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = (uint *)0x0;
  *(undefined8 *)(local_168 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x1224) = 0xffffffffffffffff;
  local_140[0] = 0;
  *(undefined8 *)(local_168 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x1234) = 0xffffffffffffffff;
  bVar9 = false;
  *(undefined8 *)(local_168 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x124c) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x1254) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x118) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x120) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x128) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x130) = 0xffffffffffffffff;
  *(undefined8 *)(local_168 + 0x138) = 0xffffffffffffffff;
  if (iVar4 != -0xfd00) {
LAB_1800c6ce8:
    puVar29 = local_150;
    lVar12 = 0;
    do {
      if ((*(int *)(param_3 + lVar12 * 4 + 0x2f0) == 0) ||
         (bVar21 = 0, param_3[lVar12 + 0x180] != '\0')) {
        bVar21 = 1;
      }
      bVar30 = (bool)(bVar30 & bVar21);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x10);
    param_3[0x126c] = 0xff;
    uVar10 = 0;
    bVar9 = false;
    if (bVar30 != false) {
      local_res8 = (int *)((ulonglong)local_res8 & 0xffffffff00000000);
      bVar9 = FUN_1800c6e04((longlong)param_1,local_a0,(longlong)(param_3 + 0x2f0),
                            (uint *)&DAT_180104e78,(uint *)&local_res8);
      *param_4 = (int)((longlong)puVar29 - (longlong)param_1 >> 2);
      param_3[0x149] = local_res8._0_1_;
      uVar10 = extraout_var;
    }
    return CONCAT71(uVar10,bVar9);
  }
  local_1d4 = local_148._4_4_;
  local_1cc = (int)local_148;
  local_1c4 = (uint)local_160;
  puVar26 = local_168;
  uVar11 = local_148._4_4_;
LAB_1800c5878:
  param_1 = local_res8;
  param_3 = local_res18;
  param_4 = local_res20;
  if (!bVar9) {
    uVar14 = *local_150;
    local_190 = uVar14 & 0xffff;
    uVar13 = (ulonglong)local_190;
    local_98 = uVar14 & 0xe0ff0000;
    uVar19 = uVar14 & 0x10000000;
    bVar31 = uVar19 != 0;
    local_c0 = CONCAT44(uVar14,uVar14) & 0xffffffffffff;
    uStack_b8 = CONCAT44(1,local_98);
    bVar15 = (bool)(bVar30 & (uVar14 & 0xc0000000) == 0);
    local_b0._0_4_ = CONCAT13(bVar31,0x10f0f);
    if (local_190 == 0x1f) {
      uVar14 = local_150[2];
      uVar11 = uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800;
      uVar19 = uVar11 >> 8;
      if ((local_1c4 == 0) && (local_98 == 0)) {
        bVar21 = 1;
      }
      else {
        bVar21 = 0;
      }
      bVar16 = 0;
      if ((0x11 < uVar19) || (bVar7 = 1, (0x20402U >> (uVar11 >> 8) & 1) == 0)) {
        bVar7 = bVar16;
      }
      if (((local_98 != 0) || (-1 < (int)uVar14)) || (bVar17 = 1, (uVar14 & 0xf000000) != 0)) {
        bVar17 = bVar16;
      }
      bVar17 = bVar17 & bVar7 & bVar21 & bVar15;
      if (bVar17 != 0) {
        uVar20 = local_150[1];
        uVar22 = uVar14 & 0x7ff;
        uVar13 = (ulonglong)uVar22;
        bVar30 = (bool)(-(uVar22 < (byte)(&DAT_1800ffb30)[uVar19]) & bVar17);
        uVar24 = uVar14 & 0xf0000;
        if (uVar24 == 0) {
          uVar24 = 0xf0000;
        }
        bVar21 = (byte)uVar20;
        bVar7 = (byte)(uVar24 >> 0x10);
        uVar11 = local_1d4;
        if (uVar19 == 1) {
          bVar16 = (byte)(uVar20 >> 0x10);
          bVar17 = bVar21 & 0xf;
          if (((uVar22 < 10) && ((uVar20 & 0xfff0fff0) == 0x80000000)) &&
             (((uVar14 & 0x900000) == 0 && (bVar17 < 0xe)))) {
            bVar18 = 1;
          }
          else {
            bVar18 = 0;
          }
          bVar18 = bVar30 & bVar18;
          uVar25 = 0;
          bVar27 = bVar16 & 0xf ^ bVar21 << 4;
          do {
            bVar8 = 0;
            if (bVar18 == 0) break;
            uVar19 = *(uint *)(puVar26 + uVar25 * 4 + 0x118);
            if (((uVar19 >> 0x18 == (uint)bVar27) || ((uVar19 >> 0x10 & 0xff) == (uint)bVar27)) ||
               (((uVar19 >> 8 & 0xff) == (uint)bVar27 || ((uVar19 & 0xff) == (uint)bVar27)))) {
              bVar8 = 0;
            }
            else {
              bVar8 = 1;
            }
            bVar18 = bVar18 & bVar8;
            uVar19 = (int)uVar25 + 1;
            uVar25 = (ulonglong)uVar19;
            bVar8 = bVar18;
          } while (uVar19 < 0x10);
          if ((bVar17 == 0xd) || ((bVar17 == 9 && ((uVar20 & 0xf0000) == 0)))) {
            bVar18 = 0;
          }
          else {
            bVar18 = 1;
          }
          bVar30 = (bool)(bVar8 & bVar18);
          if (bVar30 != false) {
            pbVar1 = (byte *)((longlong)&local_160 + uVar13 + 4);
            *pbVar1 = *pbVar1 | bVar7;
            bVar21 = bVar16 & 0xf ^ bVar21 << 4;
            *(uint *)(local_168 + uVar13 * 4 + 0x118) =
                 CONCAT31(CONCAT21(CONCAT11(bVar21,bVar21),bVar21),bVar21) &
                 *(uint *)(&DAT_1800ffb50 + (ulonglong)bVar7 * 4) |
                 *(uint *)(local_168 + uVar13 * 4 + 0x118) &
                 ~*(uint *)(&DAT_1800ffb50 + (ulonglong)bVar7 * 4);
            if (((uVar14 >> 0x16 & 1) != 0) || (bVar17 == 10)) {
              local_168[((longlong)(int)uVar22 >> 3) + 0x140] =
                   local_168[((longlong)(int)uVar22 >> 3) + 0x140] | '\x01' << (uVar14 & 7);
            }
            local_1cc = (int)local_148;
            local_1c4 = (uint)local_160;
            local_1d4 = local_148._4_4_;
            puVar26 = local_168;
            uVar11 = local_148._4_4_;
          }
        }
        else if (uVar19 == 10) {
          uVar19 = uVar20 & 0x78000000;
          if (((((uVar14 & 0x7f0) != 0) || ((uVar20 & 0x87ffffff) != 0x80000000)) ||
              ((uVar14 & 0xf00000) != 0)) ||
             (((uVar19 + 0xf0000000 & 0xe7ffffff) != 0 || (bVar21 = 1, uVar19 == 0x28000000)))) {
            bVar21 = bVar16;
          }
          bVar30 = (bool)(bVar30 & bVar21);
          puVar26[uVar13 + 0x14f] = (byte)(uVar19 >> 0x1b);
        }
        else if (uVar19 == 0x11) {
          if ((((uVar14 & 0x7fe) != 0) || ((uVar20 & 0xfff0fff0) != 0x80000000)) ||
             (((uVar14 & 0xf00000) != 0 || (bVar17 = 1, 0xd < (bVar21 & 0xf))))) {
            bVar17 = bVar16;
          }
          bVar15 = (bool)(bVar17 & bVar30);
          if (uVar22 == 0) {
            if (((uVar24 - 0x10000 & 0xfffcffff) != 0) || (bVar21 = 1, uVar24 == 0x40000)) {
              bVar21 = 0;
            }
            bVar30 = (bool)(bVar21 & bVar15);
            local_158._0_7_ = CONCAT16(bVar7,(undefined6)local_158);
          }
          else if (uVar22 == 1) {
            local_158 = CONCAT17(1,(undefined7)local_158);
            bVar30 = false;
            if (uVar24 == 0xf0000) {
              bVar30 = bVar15;
            }
          }
          else {
            bVar30 = false;
          }
        }
LAB_1800c6ca8:
        local_150 = local_150 + 3;
        goto LAB_1800c6cb0;
      }
      bVar30 = false;
    }
    else {
      if (local_190 == 0x2f) {
        uVar14 = local_150[1];
        if ((local_1c4 != 0) || (bVar31)) {
          bVar21 = 0;
        }
        else {
          bVar21 = 1;
        }
        if ((((local_98 != 0) || (-1 < (int)uVar14)) ||
            (((byte)(uVar14 >> 0x1c) & 7 | (byte)(uVar14 >> 8) & 0x18) != 0xe)) ||
           (bVar16 = 1, (uVar14 & 0xfff07f0) != 0xf0000)) {
          bVar16 = 0;
        }
        bVar30 = (bool)(bVar16 & bVar21 & bVar15);
        if (bVar30 != false) {
          puVar26[(ulonglong)(uVar14 & 0x7ff) + 0x2a0] = 1;
          *(uint *)(puVar26 + (ulonglong)(uVar14 & 0x7ff) * 4 + 0x2b0) = local_150[2];
        }
        goto LAB_1800c6ca8;
      }
      if (local_190 == 0x30) {
        uVar14 = local_150[1];
        if ((local_1c4 != 0) || (bVar31)) {
          bVar21 = 0;
        }
        else {
          bVar21 = 1;
        }
        if (((local_98 != 0) || (-1 < (int)uVar14)) ||
           ((((byte)(uVar14 >> 0x1c) & 7 | (byte)(uVar14 >> 8) & 0x18) != 7 ||
            (bVar16 = 1, (uVar14 & 0xfff07f0) != 0xf0000)))) {
          bVar16 = 0;
        }
        bVar30 = (bool)(bVar16 & bVar21 & bVar15);
        if (bVar30 != false) {
          puVar26[(ulonglong)(uVar14 & 0x7ff) + 400] = 1;
          uVar13 = 0;
          do {
            uVar19 = (int)uVar13 + 1;
            *(uint *)(puVar26 + (ulonglong)((uVar14 & 0x7ff) * 4 + (int)uVar13) * 4 + 0x1a0) =
                 local_150[uVar13 + 2];
            uVar13 = (ulonglong)uVar19;
          } while ((int)uVar19 < 4);
        }
LAB_1800c689b:
        local_150 = local_150 + 6;
        goto LAB_1800c6cb0;
      }
      if (local_190 == 0x51) {
        uVar14 = local_150[1];
        uVar19 = uVar14 & 0x7ff;
        if ((local_1c4 != 0) || (bVar31)) {
          bVar21 = 0;
        }
        else {
          bVar21 = 1;
        }
        if ((((local_98 != 0) || (-1 < (int)uVar14)) ||
            (((byte)(uVar14 >> 0x1c) & 7 | (byte)(uVar14 >> 8) & 0x18) != 2)) ||
           (((uVar14 & 0xfff0000) != 0xf0000 || (bVar16 = 1, 0xdf < uVar19)))) {
          bVar16 = 0;
        }
        bVar30 = (bool)(bVar16 & bVar21 & bVar15);
        if (bVar30 != false) {
          puVar26[(ulonglong)uVar19 + 0x331] = 1;
          uVar13 = 0;
          do {
            uVar14 = (int)uVar13 + 1;
            *(uint *)(puVar26 + (ulonglong)((int)uVar13 + uVar19 * 4) * 4 + 0x414) =
                 local_150[uVar13 + 2];
            uVar13 = (ulonglong)uVar14;
          } while ((int)uVar14 < 4);
        }
        goto LAB_1800c689b;
      }
      if (local_190 == 0xfffe) {
        bVar30 = false;
        if (uVar19 == 0) {
          bVar30 = bVar15;
        }
        local_150 = local_150 + ((uVar14 >> 0x10) + 1);
        goto LAB_1800c6cb0;
      }
      if (local_190 == 0xffff) {
        uVar14 = 0;
        bVar30 = false;
        if (uVar19 == 0) {
          bVar30 = local_98 == 0 && uVar11 == 0;
        }
        do {
          if (*(int *)(puVar26 + (ulonglong)uVar14 * 4 + 0x2f0) != 0) {
            bVar30 = (int)uStack_a8 == 0x1c;
            goto LAB_1800c67d9;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 0x10);
        bVar30 = (bool)(bVar15 & bVar30);
LAB_1800c67d9:
        local_150 = local_150 + 1;
        bVar9 = true;
        goto LAB_1800c6cb0;
      }
      bVar30 = false;
      if (local_190 < 0x61) {
        bVar30 = bVar15;
      }
      uVar11 = uVar14 & 0xff0000;
      if ((uVar11 == 0) ||
         ((((local_190 - 0x29 < 0x36 &&
            ((0x20000000000011U >> ((ulonglong)(local_190 - 0x29) & 0x3f) & 1) != 0)) &&
           (uVar11 < 0x60001)) || ((local_190 == 0x42 && ((uVar11 - 0x10000 & 0xfffeffff) == 0))))))
      {
        bVar21 = (uVar14 & 0xe0000000) == 0 & bVar30;
      }
      else {
        bVar21 = 0;
      }
      bVar30 = false;
      bVar16 = 0;
      cVar2 = (&DAT_1800ff7e0)[uVar13];
      if ((cVar2 != -1) &&
         ((!bVar31 ||
          ((lVar12 = (longlong)cVar2 * 0xe, ((&DAT_1800ff870)[lVar12] & 4) == 0 &&
           ((*(short *)(&DAT_1800ff876 + lVar12) != 0 || (*(short *)(&DAT_1800ff874 + lVar12) != 0))
           )))))) {
        bVar16 = 1;
      }
      local_178 = (longlong)cVar2 * 0xe;
      puVar29 = local_150 + 1;
      uVar11 = *puVar29;
      if (((*(short *)(&DAT_1800ff874 + local_178) == 0) || ((int)uVar11 < 0)) &&
         ((bVar16 & bVar21) != 0)) {
        if (local_1c4 == 0) {
          local_a0 = local_150;
        }
        bVar30 = local_1c4 < local_res10;
        local_1c4 = local_1c4 + (byte)(&DAT_1800ff871)[local_178];
        bVar30 = (bool)(-bVar30 & bVar16 & bVar21);
        local_160 = CONCAT44(local_160._4_4_,local_1c4);
        if (((&DAT_1800ff870)[local_178] & 2) != 0) {
          *(int *)(puVar26 + 0x1218) = *(int *)(puVar26 + 0x1218) + 1;
        }
        local_1ac = 0;
        if (*(ushort *)(&DAT_1800ff874 + local_178) == 0) {
          local_1c8 = 0;
          local_1c0 = 0;
          local_188 = puVar29;
          local_1bc = 0;
        }
        else {
          local_188 = local_150 + 2;
          local_1bc = uVar11 & 0x7ff;
          uVar25 = (ulonglong)((uVar11 >> 0x14 & 0x700 | uVar11 & 0x1800) >> 8);
          if (((local_1bc < (byte)(&DAT_1800ffb30)[uVar25]) && ((uVar11 & 0xf000000) == 0)) &&
             (bVar21 = (uVar11 & 0xf00000) < 0x700001 & bVar30, bVar21 != 0)) {
            local_1ac = (uint)*(ushort *)(&DAT_1800ff848 + uVar25 * 2);
            bVar30 = (bool)(-((*(ushort *)(&DAT_1800ff874 + local_178) &
                              *(ushort *)(&DAT_1800ff848 + uVar25 * 2)) != 0) & bVar21);
          }
          else {
            bVar30 = false;
          }
          local_1c8 = 0xf0000;
          if ((uVar11 & 0xf0000) != 0) {
            local_1c8 = uVar11 & 0xf0000;
          }
          if (local_190 == 0x41) {
            local_1c0 = 7;
          }
          else {
            local_1c0 = local_1c8 >> 0x10;
          }
        }
        if (bVar31) {
          uVar11 = *local_188 & 0xff0000;
          if (((-1 < (int)*local_188) ||
              (((byte)(*local_188 >> 0x1c) & 7 | (byte)(*local_188 >> 8) & 0x18) != 0x13)) ||
             (bVar21 = 1, (*local_188 & 0x7ff) != 0)) {
            bVar21 = 0;
          }
          if (((*local_188 & 0xf000000) == 0) || ((*local_188 & 0xf000000) == 0xd000000)) {
            bVar21 = bVar21 & bVar30;
          }
          else {
            bVar21 = 0;
          }
          if ((((uVar11 == 0xe40000) || (uVar11 == 0)) || (uVar11 == 0x550000)) ||
             ((uVar11 == 0xaa0000 || (bVar16 = 0, uVar11 == 0xff0000)))) {
            bVar16 = 1;
          }
          bVar30 = (bool)(bVar16 & bVar21);
          if (bVar30 != false) {
            local_188 = local_188 + 1;
            local_150 = puVar29;
          }
        }
        puVar29 = local_150;
        local_198 = 1;
        if (local_190 == 0x14) {
LAB_1800c5be1:
          local_198 = 4;
LAB_1800c5be6:
        }
        else {
          if (local_190 == 0x15) {
LAB_1800c5bda:
            local_198 = 3;
            goto LAB_1800c5be6;
          }
          if (local_190 == 0x16) goto LAB_1800c5be1;
          if (local_190 == 0x17) goto LAB_1800c5bda;
          if (local_190 == 0x18) {
            local_198 = 2;
            goto LAB_1800c5be6;
          }
        }
        uStack_b8 = CONCAT44(local_198,uVar14) & 0xffffffffe0ff0000;
        local_18c[0] = 0;
        local_180 = 0;
        local_1d8 = 0;
        uVar25 = 0;
        local_194 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        lVar12 = local_178;
        uVar5 = local_1a8;
        uVar6 = local_b0;
        while (uVar11 = local_190, local_1a8 = uVar5, local_178 = lVar12, local_b0 = uVar6,
              bVar30 != false) {
          uVar14 = (uint)uVar25;
          uVar11 = (uint)uVar13;
          if (3 < uVar14) break;
          uVar3 = *(ushort *)(&DAT_1800ff876 + uVar25 * 2 + lVar12);
          uVar11 = local_190;
          if (uVar3 == 0) break;
          uVar28 = uVar14 + local_194;
          uVar11 = local_188[uVar28];
          uVar20 = uVar11 >> 0x14 & 0x700 | uVar11 & 0x1800;
          *(uint *)((longlong)&local_1a8 + uVar25 * 4) = uVar11 & 0x7ff;
          uVar19 = local_190;
          uVar24 = uVar20 >> 8;
          *(uint *)((longlong)&local_70 + uVar25 * 4) = uVar11 & 0xff0000;
          uVar22 = uVar11 & 0xf000000;
          *(uint *)((longlong)&local_90 + uVar25 * 4) = uVar22;
          if (uVar22 == 0) {
LAB_1800c5e2c:
            bVar21 = -((uVar11 & 0x7ff) < (uint)(byte)(&DAT_1800ffb30)[uVar24]) &
                     (byte)(uVar11 >> 0x1f) & bVar30;
            if (bVar21 == 0) goto LAB_1800c5d17;
            if (uVar24 == 0x11) {
              uVar20 = 0x800;
              if (*(int *)((longlong)&local_1a8 + uVar25 * 4) == 1) {
                uVar20 = 0x1000;
              }
            }
            else {
              uVar20 = (uint)*(ushort *)(&DAT_1800ff848 + (ulonglong)uVar24 * 2);
            }
            *(uint *)((longlong)&local_80 + uVar25 * 4) = uVar20;
            bVar15 = false;
            bVar21 = -((uVar3 & uVar20) != 0) & bVar21;
            bVar16 = 0;
            if (((short)uVar3 < 0) && (*(int *)((longlong)&local_90 + uVar25 * 4) != 0)) {
              bVar21 = bVar16;
            }
            uVar22 = *(uint *)((longlong)&local_70 + uVar25 * 4);
            if (((uVar3 >> 0xe & 1) == 0) || (bVar7 = 0, uVar22 == 0xe40000)) {
              bVar7 = 1;
            }
            bVar7 = bVar7 & bVar21;
            bVar21 = bVar7;
            if (uVar20 == 0x1000) {
              *(undefined4 *)((longlong)&local_70 + uVar25 * 4) = 0;
              bVar21 = 0;
              if (uVar22 == 0xe40000) {
                bVar21 = bVar7;
              }
LAB_1800c5ee8:
              bVar17 = 1;
              bVar7 = bVar21;
            }
            else {
              uVar22 = uVar22 & 0xff0000;
              if ((((uVar22 == 0) || (uVar22 == 0x550000)) || (uVar22 == 0xaa0000)) ||
                 (uVar22 == 0xff0000)) goto LAB_1800c5ee8;
              bVar17 = 0;
            }
            local_18c[uVar25] = bVar17;
            if (((uVar3 >> 0xd & 1) == 0) || (bVar17 != 0)) {
              bVar16 = 1;
            }
            bVar30 = (bool)(bVar16 & bVar7);
            if ((uVar11 >> 0xd & 1) != 0) {
              uVar11 = local_188[uVar28 + 1];
              uVar20 = (uVar11 >> 0x14 & 0x700 | uVar11 & 0x1800) >> 8;
              if (((uVar20 == 0xf) && ((uVar11 & 0xff0000) == 0xe40000)) && (uVar24 == 1)) {
                bVar15 = bVar30;
              }
              if (((uVar11 & 0x7ff) < (uint)(byte)(&DAT_1800ffb30)[uVar20]) &&
                 ((uVar11 & 0xf000000) == 0)) {
                bVar21 = 1;
              }
              else {
                bVar21 = 0;
              }
              local_194 = local_194 + 1;
              *(uint *)((longlong)&local_60 + uVar25 * 4) = uVar11;
              if (uVar24 != 1) goto LAB_1800c5d17;
              bVar30 = (bool)(bVar21 & bVar15);
              uVar13 = 0;
              if (uVar14 != 0) {
                do {
                  if (bVar30 == false) break;
                  if (*(int *)((longlong)&local_80 + uVar13 * 4) == 1) {
                    bVar30 = (bool)(bVar30 & *(int *)((longlong)&local_1a8 + uVar13 * 4) ==
                                             *(int *)((longlong)&local_1a8 + uVar25 * 4));
                  }
                  uVar11 = (int)uVar13 + 1;
                  uVar13 = (ulonglong)uVar11;
                } while (uVar11 < uVar14);
              }
              puVar26[0x147] = 1;
              if (local_b0._4_1_ != '\0') {
                puVar26[0x148] = 1;
              }
            }
          }
          else {
            if (uVar22 == 0x1000000) {
              if ((uVar20 < 0x100) || (((uVar24 - 1 & 0xffffffee) == 0 && (uVar24 != 0x12))))
              goto LAB_1800c5e2c;
            }
            else if ((((uVar22 + 0xf5000000 & 0xfeffffff) == 0) &&
                     (((uVar20 < 0x100 || (uVar24 - 1 < 2)) ||
                      ((uVar24 == 0x11 && (*(int *)((longlong)&local_1a8 + uVar25 * 4) == 0)))))) ||
                    ((uVar22 == 0xd000000 && ((uVar24 == 0x13 || (uVar24 == 0xe))))))
            goto LAB_1800c5e2c;
LAB_1800c5d17:
            bVar30 = false;
          }
          bVar21 = (&DAT_1800ff873)[local_178];
          if (local_190 == 0x5a) {
            if (uVar14 < 2) {
              bVar21 = 3;
            }
          }
          else if (((local_190 == 0x42) && (uVar14 == 0)) || ((local_190 == 0x5d && (uVar14 != 1))))
          {
            bVar21 = 3;
            if ((uint)(byte)puVar26[(ulonglong)(puVar29[3] & 0x7ff) + 0x14f] << 0x1b != 0x10000000)
            {
              bVar21 = 7;
            }
            if ((local_98 != 0) &&
               (bVar21 = 0xb,
               (uint)(byte)puVar26[(ulonglong)(puVar29[3] & 0x7ff) + 0x14f] << 0x1b != 0x10000000))
            {
              bVar21 = 0xf;
            }
          }
          if (((local_190 == 0x5f) && (uVar14 == 0)) &&
             (bVar21 = 0xf, (puVar26[(ulonglong)(puVar29[3] & 0x7ff) + 0x14f] & 0x1f) == 2)) {
            bVar21 = 0xb;
          }
          bVar16 = bVar21 & (byte)local_1c0;
          if ((&DAT_1800ff872)[local_178] == '\0') {
            bVar16 = bVar21;
          }
          bVar21 = FUN_1800c6d80(*(uint *)((longlong)&local_70 + uVar25 * 4),bVar16);
          if (uVar19 != 0x1e) {
            uVar11 = 0;
            if ((uVar14 == 2) ||
               (*(short *)(&DAT_1800ff876 + (ulonglong)(uVar14 + 1) * 2 + lVar12) == 0)) {
              uVar19 = local_198;
              if (local_198 == 0) goto LAB_1800c6216;
            }
            else {
              uVar19 = 1;
            }
            uVar20 = *(uint *)((longlong)&local_80 + uVar25 * 4);
            do {
              if (uVar20 < 0x21) {
                if (uVar20 == 0x20) {
                  local_1d8 = 0xf;
                  puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x17f]
                       = puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) +
                                 0x17f] | bVar21;
                }
                else if (uVar20 == 1) {
                  if (*(int *)((longlong)&local_60 + uVar25 * 4) == 0) {
                    uVar13 = (ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11);
                    local_1d8 = *(byte *)((longlong)&local_160 + uVar13 + 4);
                    puVar26[uVar13] = puVar26[uVar13] | bVar21;
                  }
                  else {
                    local_1d8 = 0xf;
                    lVar12 = 0;
                    do {
                      puVar26[lVar12] = puVar26[lVar12] | bVar21;
                      lVar12 = lVar12 + 1;
                    } while (lVar12 != 10);
                  }
                }
                else if (uVar20 == 2) {
                  local_1d8 = 0xf;
                  puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x38]
                       = puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) +
                                 0x38] | bVar21;
                }
                else if (uVar20 == 4) {
                  uVar13 = (ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11);
                  local_1d8 = puVar26[uVar13 + 10];
                  puVar26[uVar13 + 10] = local_1d8 | bVar21;
                }
                else if (uVar20 == 8) {
                  local_1d8 = 0xf;
                  puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x15f]
                       = puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) +
                                 0x15f] | bVar21;
                }
                else if (uVar20 == 0x10) {
                  local_1d8 = 0xf;
                  puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x16f]
                       = 1;
                }
              }
              else if (uVar20 == 0x40) {
                local_1d8 = -(puVar26[(ulonglong)
                                      (*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x14f
                                     ] != '\0') & 0xf;
              }
              else if (uVar20 == 0x80) {
                local_1d8 = 0xf;
                puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x146] =
                     1;
              }
              else if (uVar20 == 0x400) {
                local_1d8 = 0xf;
                puVar26[(ulonglong)(*(int *)((longlong)&local_1a8 + uVar25 * 4) + uVar11) + 0x180] =
                     1;
              }
              else if (uVar20 == 0x800) {
                puVar26[0x144] = puVar26[0x144] | bVar21;
                local_1d8 = local_158._6_1_;
              }
              else if (uVar20 == 0x1000) {
                puVar26[0x145] = puVar26[0x145] | bVar21;
                local_1d8 = local_158._7_1_;
              }
              uVar11 = uVar11 + 1;
              uVar14 = local_180;
            } while (uVar11 < uVar19);
          }
LAB_1800c6216:
          uVar13 = (ulonglong)local_190;
          if (((local_190 != 0x58) || (uVar14 == 0)) && ((local_190 != 1 || (local_1ac != 4)))) {
            bVar30 = (bool)(bVar30 & (local_1d8 & bVar21) == bVar21);
          }
          uVar25 = (ulonglong)(uVar14 + 1);
          local_180 = uVar14 + 1;
          lVar12 = local_178;
          uVar5 = local_1a8;
          uVar6 = local_b0;
        }
        if (local_1ac == 4) {
          if (uVar11 == 1) {
            puVar26[(ulonglong)local_1bc + 10] =
                 puVar26[(ulonglong)local_1bc + 10] & ~(byte)local_1c0;
            uVar14 = 0;
            do {
              if (((local_1c0 >> (uVar14 & 0x1f) & 1) != 0) &&
                 ((local_1d8 &
                  (byte)(1 << ((byte)((uint)local_70 >> ((char)uVar14 * '\x02' + 0x10U & 0x1f)) & 3)
                        )) != 0)) {
                puVar26[(ulonglong)local_1bc + 10] =
                     puVar26[(ulonglong)local_1bc + 10] | (byte)(1 << (uVar14 & 0x1f));
              }
              uVar14 = uVar14 + 1;
            } while (uVar14 < 4);
          }
          else {
            puVar26[(ulonglong)local_1bc + 10] =
                 puVar26[(ulonglong)local_1bc + 10] | (byte)local_1c0;
          }
        }
        else if (local_1ac == 0x20) {
LAB_1800c62ce:
          puVar26[(ulonglong)local_1bc + 0x17f] =
               puVar26[(ulonglong)local_1bc + 0x17f] | (byte)local_1c0;
        }
        else if (local_1ac == 0x100) {
          puVar26[(ulonglong)local_1bc + 0x14b] =
               puVar26[(ulonglong)local_1bc + 0x14b] | (byte)local_1c0;
        }
        else if (local_1ac == 0x200) {
          puVar26[0x330] = 1;
          bVar30 = (bool)(bVar30 & local_1c8 == 0xf0000);
          goto LAB_1800c62ce;
        }
        bVar31 = false;
        local_1a8._0_4_ = (uint)uVar5;
        local_1a8._4_4_ = (uint)(uVar5 >> 0x20);
        bVar15 = true;
        if (0x21 < uVar11) {
          if (uVar11 < 0x2c) {
            if (uVar11 == 0x2b) {
              bVar30 = (bool)(bVar30 & local_140[local_1d4] == 3);
              local_1d4 = local_1d4 - 1;
              local_1cc = local_1cc + -1;
              local_148 = CONCAT44(local_1d4,local_1cc);
              goto LAB_1800c63e3;
            }
            if (uVar11 == 0x24) {
              if ((local_1ac != (uint)local_80) || (bVar15 = bVar31, local_1bc != (uint)local_1a8))
              {
                bVar15 = true;
              }
              goto LAB_1800c63dc;
            }
            if (uVar11 != 0x25) {
              if (uVar11 == 0x26) {
                bVar30 = (bool)(bVar30 & local_1d4 < 0x20);
                local_140[local_1d4 + 1] = 2;
LAB_1800c6546:
                local_148._4_4_ = local_1d4 + 1;
                local_1cc = (int)local_148 + 1;
                local_1c4 = (uint)local_160;
                local_168[0x14a] = 0;
                local_148 = CONCAT44(local_148._4_4_,local_1cc);
                local_1d4 = local_148._4_4_;
                puVar26 = local_168;
                puVar29 = local_150;
                uVar11 = local_c0._4_4_;
              }
              else if (uVar11 == 0x27) {
                bVar15 = local_140[local_1d4] == 2;
LAB_1800c64f6:
                bVar30 = (bool)(bVar30 & bVar15);
                local_1d4 = local_1d4 - 1;
                local_1cc = local_1cc + -1;
                local_148 = CONCAT44(local_1d4,local_1cc);
              }
              else {
                if ((uVar11 == 0x28) || (uVar11 == 0x29)) {
                  bVar30 = (bool)(bVar30 & local_1d4 < 0x20);
                  local_140[local_1d4 + 1] = 3;
                  goto LAB_1800c6546;
                }
                if (uVar11 == 0x2a) {
                  bVar31 = local_140[local_1d4] == 3;
                  goto LAB_1800c6528;
                }
              }
              goto LAB_1800c63e3;
            }
            if (((local_1c8 - 0x10000 & 0xfffcffff) == 0) && (local_1c8 != 0x40000))
            goto LAB_1800c63dc;
            goto LAB_1800c63d9;
          }
          if (uVar11 == 0x2c) {
            for (uVar14 = 1; bVar31 = false, uVar14 <= local_1d4; uVar14 = uVar14 + 1) {
              if (local_140[uVar14] - 1U < 2) goto LAB_1800c6761;
            }
          }
          else {
            if (uVar11 != 0x2d) {
              if (((uVar11 == 0x42) || (uVar11 == 0x5d)) || (uVar11 == 0x5f)) {
                *(uint *)(puVar26 + 0x1214) =
                     *(uint *)(puVar26 + 0x1214) | 1 << ((byte)(uVar5 >> 0x20) & 0x1f);
              }
              else if (uVar11 == 0x60) {
                for (uVar14 = 1; uVar14 <= local_1d4; uVar14 = uVar14 + 1) {
                  if (local_140[uVar14] - 1U < 2) goto LAB_1800c6761;
                }
                goto LAB_1800c6528;
              }
              goto LAB_1800c63e3;
            }
            for (uVar14 = 1; uVar14 <= local_1d4; uVar14 = uVar14 + 1) {
              if (local_140[uVar14] - 1U < 2) goto LAB_1800c6761;
            }
          }
          goto LAB_1800c6528;
        }
        if (uVar11 == 0x21) {
          if (((local_1c8 - 0x10000 & 0xfff8ffff) != 0) || (local_1c8 == 0x80000)) {
            bVar15 = bVar31;
          }
          if (((local_1ac != (uint)local_80) || (local_1bc != (uint)local_1a8)) &&
             ((local_80._4_4_ = (uint)((ulonglong)local_80 >> 0x20), local_1ac != local_80._4_4_ ||
              (local_1bc != local_1a8._4_4_)))) goto LAB_1800c63dc;
          bVar30 = false;
        }
        else {
          if (uVar11 < 0x18) {
            if (uVar11 == 0x17) {
LAB_1800c646c:
              bVar15 = local_1c8 == 0x70000;
            }
            else {
              if ((((uVar11 == 6) || (uVar11 == 7)) || (uVar11 == 0xe)) || (uVar11 == 0xf)) {
                bVar30 = (bool)(bVar30 & local_18c[0]);
                goto LAB_1800c63e3;
              }
              if (uVar11 != 0x14) {
                if (uVar11 == 0x15) goto LAB_1800c646c;
                if (uVar11 != 0x16) goto LAB_1800c63e3;
              }
              bVar15 = local_1c8 == 0xf0000;
            }
          }
          else {
            if (uVar11 != 0x18) {
              if ((uVar11 == 0x19) || (uVar11 == 0x1a)) {
                puVar26[0x14a] = 0;
              }
              else {
                if (uVar11 == 0x1b) {
                  bVar30 = (bool)(bVar30 & local_1d4 < 0x20);
                  local_140[local_1d4 + 1] = 1;
                  goto LAB_1800c6546;
                }
                if (uVar11 == 0x1c) {
                  bVar31 = local_140[local_1d4] == 0;
                  goto LAB_1800c6528;
                }
                if (uVar11 == 0x1d) {
                  bVar15 = local_140[local_1d4] == 1;
                  goto LAB_1800c64f6;
                }
                if (uVar11 == 0x1e) {
                  local_b0._5_3_ = (undefined3)((ulonglong)uVar6 >> 0x28);
                  local_b0._0_4_ = (undefined4)uVar6;
                  local_b0._0_5_ = CONCAT14(1,(undefined4)local_b0);
                  bVar30 = (bool)(bVar30 & (int)uStack_a8 == 0x1c);
                  *(int *)(puVar26 + (uVar5 & 0xffffffff) * 4 + 0x2f0) =
                       (int)((longlong)puVar29 - (longlong)local_res8 >> 2);
                  puVar26[0x14a] = 0;
                }
              }
              goto LAB_1800c63e3;
            }
            bVar15 = local_1c8 == 0x30000;
          }
          if (bVar15) {
            local_90._4_4_ = (int)((ulonglong)local_90 >> 0x20);
            bVar15 = true;
            if (local_90._4_4_ != 0) goto LAB_1800c63d9;
          }
          else {
LAB_1800c63d9:
            bVar15 = bVar31;
          }
LAB_1800c63dc:
          bVar30 = (bool)(bVar30 & bVar15);
        }
        goto LAB_1800c63e3;
      }
    }
  }
  goto LAB_1800c6ce8;
LAB_1800c6761:
  bVar31 = true;
LAB_1800c6528:
  bVar30 = (bool)(bVar30 & bVar31);
LAB_1800c63e3:
  if (*(short *)(&DAT_1800ff874 + lVar12) != 0) {
    puVar29 = puVar29 + 1;
  }
  uVar13 = 0;
  puVar23 = local_188;
  if (bVar30 != false) {
    while (((uint)uVar13 < 4 && (*(short *)(&DAT_1800ff876 + uVar13 * 2 + lVar12) != 0))) {
      if ((((byte)(*puVar23 >> 0x1c) & 7 | (byte)(*puVar23 >> 8) & 0x18) != 0x11) &&
         (*(int *)((longlong)&local_60 + uVar13 * 4) != 0)) {
        puVar29 = puVar29 + 1;
        puVar23 = puVar23 + 1;
      }
      puVar29 = puVar29 + 1;
      uVar13 = (ulonglong)((uint)uVar13 + 1);
      puVar23 = puVar23 + 1;
    }
  }
  local_150 = puVar29 + 1;
  uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar11);
  uVar11 = local_1d4;
LAB_1800c6cb0:
  param_1 = local_res8;
  param_3 = local_res18;
  param_4 = local_res20;
  if (bVar30 == false) goto LAB_1800c6ce8;
  goto LAB_1800c5878;
}

