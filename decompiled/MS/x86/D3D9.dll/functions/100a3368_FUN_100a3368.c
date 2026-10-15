/*
 * FUN_100a3368 at 100a3368
 * undefined1 __fastcall FUN_100a3368(int * param_1, undefined2 param_2, uint param_3, int * param_4, int * param_5)
 * Address ranges: 100a3368-100a4926
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall
FUN_100a3368(int *param_1,undefined2 param_2,uint param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint extraout_EDX;
  uint extraout_EDX_00;
  undefined2 uVar14;
  uint3 uVar13;
  undefined2 extraout_var;
  undefined4 extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint uVar15;
  undefined3 uVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  bool bVar22;
  uint local_1d0 [3];
  uint *local_1c4;
  undefined2 local_1c0;
  undefined2 local_1be;
  undefined2 local_1bc;
  undefined2 local_1ba;
  undefined4 local_1b8;
  undefined2 local_1b4;
  undefined2 local_1b2;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined4 local_1aa;
  undefined2 local_1a6;
  undefined2 local_1a4;
  undefined2 local_1a2;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined2 local_19a;
  uint local_198 [4];
  undefined2 *local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  uint local_168 [16];
  int *local_128;
  uint local_124;
  uint *local_120;
  int local_11c;
  uint local_118;
  int local_114 [32];
  uint local_94 [4];
  undefined2 local_84;
  undefined1 local_82;
  byte local_81;
  uint local_80;
  uint *local_7c;
  uint local_78 [6];
  int *local_60;
  uint *local_5c;
  uint local_58;
  uint local_54;
  uint local_50 [4];
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte local_11;
  uint *local_10;
  byte local_9;
  
  local_60 = param_1;
  FUN_100cfed0(param_4,0,0x4a70);
  *param_4 = -1;
  param_4[1] = -1;
  param_4[2] = -1;
  param_4[3] = -1;
  local_1c4 = (uint *)(param_4 + 0x1214);
  puVar19 = local_1c4;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar19 = 0xffffffff;
    puVar19 = puVar19 + 1;
  }
  iVar7 = *param_1;
  local_18._0_1_ = iVar7 == -0x1fd00;
  local_18._1_3_ = 0xffffff;
  local_1c0 = 0x20;
  local_1b8 = 0;
  local_1b4 = 0xc;
  local_1b0 = 0;
  local_1ac = 4;
  local_1aa = 0;
  local_1a6 = 0;
  local_1a0 = 0;
  local_188 = &local_1c0;
  local_1ba = 1;
  local_1a2 = 1;
  local_19a = 1;
  local_1be = 0x10;
  local_184 = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168[0] = 0xffffffff;
  local_168[1] = 0xffffffff;
  local_168[2] = 0xffffffff;
  local_168[3] = 0xffffffff;
  local_168[4] = 0xffffffff;
  local_168[5] = 0xffffffff;
  local_168[6] = 0xffffffff;
  local_168[7] = 0xffffffff;
  local_168[8] = 0xffffffff;
  local_168[9] = 0xffffffff;
  local_168[10] = 0xffffffff;
  local_168[0xb] = 0xffffffff;
  local_168[0xc] = 0xffffffff;
  local_168[0xd] = 0xffffffff;
  local_168[0xe] = 0xffffffff;
  local_168[0xf] = 0xffffffff;
  local_120 = (uint *)(local_60 + 1);
  local_128 = param_4;
  local_124 = 0;
  local_11c = 0;
  local_118 = 0;
  local_1bc = param_2;
  local_1b2 = local_1be;
  local_1a4 = local_1be;
  local_19c = local_1be;
  FUN_100cfed0(local_114,0,0x80);
  local_198[3] = 2;
  local_11 = '\0';
  puVar19 = local_94;
  for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  local_114[0] = 0;
  *(char *)((int)local_128 + 0x4a6d) = (char)iVar7;
  *(undefined1 *)(local_128 + 0x129b) = 3;
  bVar9 = (byte)local_18;
  if (iVar7 == -0x1fd00) {
    local_1c = local_118;
    local_10 = local_120;
    piVar21 = local_128;
    bVar10 = '\0';
    uVar16 = local_18._1_3_;
LAB_100a3561:
    piVar18 = param_4;
    local_10 = local_120;
    if (bVar10 == '\0') {
      local_94[0] = *local_120;
      local_94[1] = local_94[0] & 0xffff;
      local_94[3] = 1;
      local_94[2] = local_94[0] & 0xe0ff0000;
      local_81 = (byte)(local_94[0] >> 0x1c) & 1;
      local_82 = 1;
      local_3c = (uint)local_81;
      piVar21[0x129a] = piVar21[0x129a] + 1;
      bVar9 = 1U - ((local_94[0] & 0xc0000000) != 0) & bVar9;
      local_84 = 0xf0f;
      local_34 = CONCAT31((int3)(-(local_94[0] & 0xc0000000) >> 8),bVar9);
      if (local_94[1] == 0x1f) {
        local_20 = local_120[1];
        bVar10 = (byte)local_20;
        uVar15 = local_120[2];
        local_9 = bVar10 & 0xf;
        uVar17 = uVar15 & 0x7ff;
        local_24 = local_20 >> 0x10 & 0xffffff0f;
        local_34 = uVar17;
        local_28 = uVar15 >> 0x10 & 0xf;
        uVar12 = (uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800) >> 8;
        if ((local_124 == 0) && (local_81 == 0)) {
          bVar11 = 1;
        }
        else {
          bVar11 = 0;
        }
        if ((local_94[2] == 0) && ((uVar15 & 0x8f000000) == 0x80000000)) {
          local_18._0_1_ = 1;
        }
        else {
          local_18._0_1_ = 0;
        }
        local_18._0_1_ = bVar9 & bVar11 & (byte)local_18;
        local_18._1_3_ = uVar16;
        if (uVar12 == 1) {
          if ((((uVar17 < (ushort)local_188[1]) && ((local_20 & 0xfff0fff0) == 0x80000000)) &&
              ((*(byte *)((int)&local_184 + uVar17) & local_28) == 0 && (uVar15 & 0xf00000) == 0))
             && (local_9 < 0xe)) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          uVar6 = 0;
          bVar9 = (byte)local_18 & bVar9;
          uVar15 = 0;
          do {
            bVar10 = 0;
            if (bVar9 == 0) break;
            uVar6 = FUN_100683ba(local_9,CONCAT31((int3)((uint)uVar6 >> 8),(undefined1)local_24),
                                 local_168[uVar15]);
            bVar9 = bVar9 & ((byte)uVar6 ^ 1);
            uVar15 = uVar15 + 1;
            uVar6 = extraout_EDX_01;
            bVar10 = bVar9;
          } while (uVar15 < 0x10);
          uVar15 = local_28;
          if ((local_9 == 9) && ((byte)local_24 == 0)) {
            bVar9 = 0;
          }
          else {
            bVar9 = 1;
          }
          local_18._0_1_ = bVar10 & bVar9;
          local_18._1_3_ = uVar16;
          if ((bVar10 & bVar9) == 0) goto LAB_100a45f6;
          *(byte *)((int)&local_184 + uVar17) = *(byte *)((int)&local_184 + uVar17) | (byte)local_28
          ;
          bVar9 = (byte)local_24 ^ (char)local_20 << 4;
          local_24 = CONCAT31((int3)(local_24 >> 8),bVar9);
          local_168[uVar17] =
               CONCAT31(CONCAT21(CONCAT11(bVar9,bVar9),bVar9),bVar9) &
               *(uint *)(&DAT_100d3758 + uVar15 * 4) |
               ~*(uint *)(&DAT_100d3758 + uVar15 * 4) & local_168[uVar17];
          *(char *)(uVar17 + (int)local_128) = (char)local_24;
LAB_100a4704:
          local_1c = local_118;
          local_10 = local_120;
        }
        else if (uVar12 == 6) {
          uVar15 = uVar15 & 0xf00000;
          uVar12 = (uint)(ushort)local_188[6];
          uVar14 = (undefined2)(uVar15 >> 0x10);
          if (((uVar17 < uVar12) && (uVar12 = local_20 & 0xfff0fff0, uVar12 == 0x80000000)) &&
             ((uVar15 == 0 || (uVar15 == 0x400000)))) {
            uVar13 = CONCAT21(uVar14,bVar10) & 0xffff0f;
            if ((0xd < local_9) ||
               (uVar12 = param_4[uVar17 + 0x1214] & *(uint *)(&DAT_100d3758 + local_28 * 4),
               uVar12 != *(uint *)(&DAT_100d3758 + local_28 * 4))) goto LAB_100a4670;
            uVar12 = CONCAT31((int3)(uVar12 >> 8),1);
          }
          else {
            uVar13 = CONCAT21(uVar14,bVar10) & 0xffff0f;
LAB_100a4670:
            uVar12 = uVar12 & 0xffffff00;
          }
          uVar15 = 0;
          bVar9 = (byte)local_18 & (byte)uVar12;
          do {
            bVar10 = 0;
            if (bVar9 == 0) break;
            uVar12 = FUN_100683ba((char)uVar13,CONCAT31(uVar13,(undefined1)local_24),
                                  piVar18[uVar15 + 0x1214]);
            uVar13 = CONCAT21(extraout_var,local_9);
            uVar12 = uVar12 ^ 1;
            bVar10 = bVar9 & (byte)uVar12;
            uVar15 = uVar15 + 1;
            bVar9 = bVar10;
          } while (uVar15 < 0xc);
          uVar17 = local_28;
          uVar15 = local_34;
          bVar9 = (byte)local_24;
          if ((local_9 == 9) && (bVar9 == 0)) {
            bVar10 = 0;
          }
          else if ((local_9 == 4) && ((bVar9 == 0 && (local_28 != 0xf)))) {
            local_18._0_1_ = 0;
            local_18._1_3_ = (int3)(uVar12 >> 8);
            goto LAB_100a45f6;
          }
          local_18._0_1_ = bVar10;
          local_18._1_3_ = uVar16;
          if (bVar10 != 0) {
            *(byte *)((int)&local_174 + local_34) =
                 *(byte *)((int)&local_174 + local_34) | (byte)local_28;
            bVar9 = (char)local_20 << 4 ^ bVar9;
            param_4[uVar15 + 0x1214] =
                 CONCAT31(CONCAT21(CONCAT11(bVar9,bVar9),bVar9),bVar9) &
                 *(uint *)(&DAT_100d3758 + uVar17 * 4) |
                 param_4[uVar15 + 0x1214] & ~*(uint *)(&DAT_100d3758 + uVar17 * 4);
            goto LAB_100a4704;
          }
        }
        else if (uVar12 == 10) {
          if (((uVar17 < (ushort)local_188[10]) && ((uVar15 & 0xf00000) == 0)) &&
             ((local_20 & 0x87ffffff) == 0x80000000)) {
            bVar9 = 1;
          }
          else {
            bVar9 = 0;
          }
          uVar15 = local_20 & 0x78000000;
          *(byte *)(uVar17 + 0x4880 + (int)local_128) = (byte)(uVar15 >> 0x1b);
          if (((uVar15 == 0x10000000) || (uVar15 == 0x18000000)) || (uVar15 == 0x20000000)) {
            bVar10 = 1;
          }
          else {
            bVar10 = 0;
          }
          local_18._0_1_ = (byte)local_18 & bVar9 & bVar10;
        }
LAB_100a45f6:
        local_10 = local_10 + 3;
        piVar21 = local_128;
        bVar9 = (byte)local_18;
        uVar16 = local_18._1_3_;
        goto LAB_100a4605;
      }
      if (local_94[1] == 0x2f) {
        uVar15 = local_120[1];
        if ((local_124 == 0) && (local_81 == 0)) {
          bVar10 = 1;
        }
        else {
          bVar10 = 0;
        }
        if ((((local_94[2] == 0) && ((int)uVar15 < 0)) &&
            ((uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800) == 0xe00)) &&
           (((uVar15 & 0xfff0000) == 0xf0000 && ((uVar15 & 0x7f0) == 0)))) {
          local_18._0_1_ = 1;
        }
        else {
          local_18._0_1_ = 0;
        }
        local_18._0_1_ = bVar9 & bVar10 & (byte)local_18;
        local_18._1_3_ = uVar16;
        if ((byte)local_18 != 0) {
          *(undefined1 *)((uVar15 & 0x7ff) + 0x49d8 + (int)local_128) = 1;
          local_128[(uVar15 & 0x7ff) + 0x127a] = local_120[2];
        }
        goto LAB_100a45f6;
      }
      if (local_94[1] == 0x30) {
        uVar15 = local_120[1];
        uVar12 = uVar15 & 0x7ff;
        if ((local_124 == 0) && (local_81 == 0)) {
          bVar10 = 1;
        }
        else {
          bVar10 = 0;
        }
        if ((((local_94[2] == 0) && ((int)uVar15 < 0)) &&
            ((uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800) == 0x700)) &&
           (((uVar15 & 0xfff0000) == 0xf0000 && ((uVar15 & 0x7f0) == 0 && local_120[5] == 0)))) {
          local_18._0_1_ = 1;
        }
        else {
          local_18._0_1_ = 0;
        }
        local_18._0_1_ = bVar9 & bVar10 & (byte)local_18;
        local_18._1_3_ = uVar16;
        if ((byte)local_18 != 0) {
          *(undefined1 *)(uVar12 + 0x48c5 + (int)local_128) = 1;
          local_128[uVar12 * 4 + 0x1236] = local_120[2];
          local_128[uVar12 * 4 + 0x1237] = local_120[3];
          local_128[uVar12 * 4 + 0x1238] = local_120[4];
          local_128[uVar12 * 4 + 0x1239] = local_120[5];
        }
LAB_100a43a9:
        local_10 = local_120 + 6;
        piVar21 = local_128;
        local_18._1_3_ = uVar16;
        bVar9 = (byte)local_18;
        goto LAB_100a4605;
      }
      if (local_94[1] == 0x51) {
        uVar15 = local_120[1];
        uVar12 = uVar15 & 0x7ff;
        if ((local_124 == 0) && (local_81 == 0)) {
          bVar10 = 1;
        }
        else {
          bVar10 = 0;
        }
        if ((((local_94[2] == 0) && ((int)uVar15 < 0)) &&
            ((uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800) == 0x200)) &&
           (((uVar15 & 0xfff0000) == 0xf0000 && (uVar12 < (ushort)local_188[2])))) {
          local_18._0_1_ = 1;
        }
        else {
          local_18._0_1_ = 0;
        }
        local_18._0_1_ = bVar9 & bVar10 & (byte)local_18;
        local_18._1_3_ = uVar16;
        if ((byte)local_18 != 0) {
          uVar15 = local_120[2];
          uVar17 = local_120[3];
          uVar20 = local_120[4];
          uVar3 = local_120[5];
          *(undefined1 *)(uVar12 + 0x44f + (int)local_128) = 1;
          puVar19 = (uint *)(local_128 + uVar12 * 4 + 0x214);
          *puVar19 = uVar15;
          puVar19[1] = uVar17;
          puVar19[2] = uVar20;
          puVar19[3] = uVar3;
        }
        goto LAB_100a43a9;
      }
      if (local_94[1] == 0xfffe) {
        local_18._0_1_ = bVar9 & (local_81 ^ 1);
        local_18._1_3_ = uVar16;
        local_10 = local_120 + (local_94[0] >> 0x10) + 1;
        bVar9 = (byte)local_18;
        uVar16 = local_18._1_3_;
        goto LAB_100a4605;
      }
      if (local_94[1] == 0xffff) {
        bVar10 = 0;
        if (local_94[2] == 0) {
          bVar10 = local_81 ^ 1;
        }
        bVar11 = 0;
        if (local_1c == 0) {
          bVar11 = bVar9;
        }
        bVar9 = bVar10 & bVar11;
        uVar15 = 0;
        do {
          if (local_128[uVar15 + 0x128a] != 0) {
            bVar9 = local_80 == 0x1c;
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < 0x10);
        local_10 = local_120 + 1;
        local_11 = '\x01';
        piVar21 = local_128;
        uVar16 = 0;
        goto LAB_100a4605;
      }
      bVar10 = 0;
      if (local_94[1] < 0x61) {
        bVar10 = bVar9;
      }
      bVar10 = 1U - ((local_94[0] & 0xe0000000) != 0) & bVar10;
      if (((local_94[2] >> 0x10 & 0xff) != 0) &&
         ((((local_94[1] != 0x2d && (local_94[1] != 0x29)) && (local_94[1] != 0x5e)) ||
          (0x60000 < (local_94[0] & 0xff0000))))) {
        bVar10 = 0;
      }
      iVar7 = (int)(char)(&DAT_100d3aa8)[local_94[1]];
      uVar15 = local_94[1];
      if ((iVar7 == -1) ||
         ((local_81 != 0 &&
          ((iVar8 = iVar7 * 0xc, ((&DAT_100d3b10)[iVar8] & 4) != 0 ||
           ((uVar15 = 0, *(short *)(&DAT_100d3b16 + iVar8) == 0 &&
            (*(short *)(&DAT_100d3b14 + iVar8) == 0)))))))) {
        uVar15 = uVar15 & 0xffffff00;
      }
      else {
        uVar15 = CONCAT31((int3)(uVar15 >> 8),1);
      }
      uVar16 = (undefined3)(uVar15 >> 8);
      bVar10 = (byte)uVar15 & bVar10;
      local_50[3] = iVar7 * 0xc;
      local_40 = local_120 + 1;
      uVar2 = *(ushort *)(&DAT_100d3b14 + local_50[3]);
      if ((uVar2 == 0) || ((int)*local_40 < 0)) {
        bVar9 = 0;
        if (bVar10 != 0) {
          if (local_124 == 0) {
            local_7c = local_120;
          }
          local_124 = local_124 + (byte)(&DAT_100d3b11)[local_50[3]];
          bVar9 = bVar10 & -(local_124 < param_3);
          local_54 = 0;
          local_24 = 0;
          local_5c = local_40;
          local_58 = 0;
          local_20 = 0;
          local_38 = local_38 & 0xffffff00;
          uVar15 = local_38;
          local_30 = local_40;
          if (uVar2 != 0) {
            if (((*local_40 & 0xf00000) == 0) || (local_9 = 0, (*local_40 & 0xf00000) == 0x100000))
            {
              local_9 = bVar9;
            }
            local_30 = local_120 + 2;
            local_24 = *local_40 & 0x7ff;
            uVar12 = (*local_40 >> 0x14 & 0x700 | *local_40 & 0x1800) >> 8;
            uVar16 = (undefined3)(local_24 >> 8);
            if ((local_24 < (ushort)local_188[uVar12]) && ((*local_40 & 0xf000000) == 0)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            bVar10 = 0;
            if ((bVar9 & local_9) != 0) {
              local_54 = (uint)*(ushort *)(&DAT_100d3a80 + uVar12 * 2);
              bVar10 = bVar9 & local_9 & -((uVar2 & *(ushort *)(&DAT_100d3a80 + uVar12 * 2)) != 0);
            }
            local_20 = 0xf0000;
            if ((*local_40 & 0xf0000) != 0) {
              local_20 = *local_40 & 0xf0000;
            }
            local_38 = local_20 >> 0x10;
            uVar15 = local_38;
            local_38._0_1_ = (byte)(local_20 >> 0x10);
            bVar11 = bVar10;
            if (((param_4[local_24 + 0x1214] == 0x40404040) && (local_54 == 0x200)) &&
               (bVar11 = 0, (byte)local_38 == 0xf)) {
              bVar11 = bVar10;
            }
            if ((*local_40 & 0x2000) == 0) {
              bVar9 = bVar11;
              if ((uVar12 == 6) &&
                 (bVar9 = 0,
                 (*(byte *)((int)&local_174 + local_24) & (byte)local_38) == (byte)local_38)) {
                bVar9 = bVar11;
              }
            }
            else {
              local_58 = local_120[2];
              local_34 = local_58 & 0xf000000;
              if (((((byte)(local_58 >> 0x1c) & 7 | (byte)(local_58 >> 8) & 0x18) == 0xf) &&
                  ((local_58 & 0xff0000) == 0xe40000)) && (uVar12 == 6)) {
                bVar9 = 1;
              }
              else {
                bVar9 = 0;
              }
              if (((local_58 & 0x7ff) < (uint)(ushort)local_188[uVar12]) && (local_34 == 0)) {
                bVar9 = bVar11 & bVar9;
              }
              else {
                bVar9 = 0;
              }
              *(undefined1 *)((int)local_128 + 0x4885) = 1;
              local_30 = local_120 + 3;
            }
          }
          local_38 = uVar15;
          local_10 = local_120;
          if (local_81 != 0) {
            uVar15 = *local_30 & 0xff0000;
            if ((((int)*local_30 < 0) &&
                (((byte)(*local_30 >> 0x1c) & 7 | (byte)(*local_30 >> 8) & 0x18) == 0x13)) &&
               ((*local_30 & 0x7ff) == 0)) {
              bVar10 = 1;
            }
            else {
              bVar10 = 0;
            }
            bVar10 = bVar10 & bVar9;
            if (((*local_30 & 0xf000000) != 0) && ((*local_30 & 0xf000000) != 0xd000000)) {
              bVar10 = 0;
            }
            if (((uVar15 == 0xe40000) || (uVar15 == 0)) ||
               ((uVar15 == 0x550000 || ((uVar15 == 0xaa0000 || (uVar15 == 0xff0000)))))) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            bVar9 = bVar9 & bVar10;
            local_10 = local_120;
            if (bVar9 != 0) {
              local_30 = local_30 + 1;
              local_10 = local_40;
            }
          }
          local_120 = local_10;
          local_94[3] = FUN_100a1c39(local_94[1]);
          local_78[2] = 0;
          local_78[0] = 0;
          local_78[1] = 0;
          local_50[0] = 0;
          local_50[1] = 0;
          local_50[2] = 0;
          local_78[3] = 0;
          local_78[4] = 0;
          local_78[5] = 0;
          local_1d0[0] = 0;
          local_1d0[1] = 0;
          local_1d0[2] = 0;
          local_198[0] = 0;
          local_198[1] = 0;
          local_198[2] = 0;
          local_28 = 0;
          local_2c = 0;
          uVar15 = local_2c;
          while (((local_2c = uVar15, bVar9 != 0 && (uVar15 < 3)) &&
                 (*(short *)(&DAT_100d3b16 + uVar15 * 2 + local_50[3]) != 0))) {
            local_34 = local_28 + uVar15;
            puVar19 = (uint *)local_30[local_28 + uVar15];
            local_40 = puVar19;
            uVar20 = ((uint)puVar19 >> 0x14 & 0x700 | (uint)puVar19 & 0x1800) >> 8;
            local_1d0[uVar15] = (uint)puVar19 & 0xff0000;
            uVar17 = (uint)puVar19 & 0xf000000;
            local_50[uVar15] = (uint)puVar19 & 0x7ff;
            local_78[uVar15 + 3] = uVar17;
            uVar12 = local_2c;
            uVar15 = local_50[3];
            bVar9 = -(((uint)puVar19 & 0x7ff) < (uint)(ushort)local_188[uVar20]) &
                    (byte)((uint)local_40 >> 0x1f) & bVar9;
            if (((uVar17 == 0) ||
                ((((uVar17 == 0x1000000 || (uVar17 == 0xb000000)) || (uVar17 == 0xc000000)) &&
                 (((uVar20 == 0 || (uVar20 == 1)) || (uVar20 == 2)))))) ||
               ((uVar17 == 0xd000000 && ((uVar20 == 0x13 || (uVar20 == 0xe)))))) {
              local_18._0_1_ = bVar9;
              local_18._1_3_ = uVar16;
              if (bVar9 == 0) goto LAB_100a3a53;
              local_78[local_2c] = (uint)*(ushort *)(&DAT_100d3a80 + uVar20 * 2);
              uVar2 = *(ushort *)(&DAT_100d3b16 + uVar12 * 2 + uVar15);
              bVar9 = -((uVar2 & *(ushort *)(&DAT_100d3a80 + uVar20 * 2)) != 0) & bVar9;
              if (((uVar2 & 0x4000) != 0) && (uVar17 != 0)) {
                bVar9 = 0;
              }
              if (((uVar2 & 0x2000) == 0) || (local_1d0[local_2c] == 0xe40000)) {
                bVar10 = 1;
              }
              else {
                bVar10 = 0;
              }
              bVar9 = bVar10 & bVar9;
              local_18._0_1_ = bVar9;
              uVar6 = FUN_100a1baf(local_1d0[local_2c]);
              if (((extraout_EDX & 0x1000) != 0) && ((char)uVar6 == '\0')) {
                bVar9 = 0;
                local_18._0_1_ = 0;
                local_18._1_3_ = uVar16;
              }
              if (((uint)local_40 & 0x2000) == 0) goto LAB_100a3a53;
              uVar15 = local_30[local_34 + 1];
              local_34 = uVar15 & 0x7ff;
              local_18 = uVar15 & 0xf000000;
              uVar12 = (uVar15 >> 0x14 & 0x700 | uVar15 & 0x1800) >> 8;
              local_5c = (uint *)(uVar15 & 0xff0000);
              if (uVar12 == 3) {
                uVar6 = FUN_100a1baf(uVar15);
                uVar15 = extraout_EDX_00;
                if ((char)uVar6 == '\0') goto LAB_100a3c6a;
                if (uVar20 != 2) goto LAB_100a3c4b;
LAB_100a3c66:
                bVar10 = 1;
              }
              else {
LAB_100a3c4b:
                if (((uVar12 == 0xf) && (local_5c == (uint *)0xe40000)) &&
                   ((uVar20 == 2 || ((uVar20 == 1 || (uVar20 == 6)))))) goto LAB_100a3c66;
LAB_100a3c6a:
                bVar10 = 0;
              }
              if ((local_34 < (ushort)local_188[uVar12]) && (local_18 == 0)) {
                bVar9 = bVar9 & bVar10;
              }
              else {
                bVar9 = 0;
              }
              local_28 = local_28 + 1;
              local_18._0_1_ = bVar9;
              local_18._1_3_ = uVar16;
              local_198[local_2c] = uVar15;
              if (uVar20 != 1) {
                if (uVar20 != 2) {
                  if (uVar20 != 3) goto LAB_100a3a53;
                  bVar10 = FUN_100a1bd2((uint)local_5c,0xf);
                  pbVar1 = (byte *)(local_34 + 0x40 + (int)local_128);
                  *pbVar1 = *pbVar1 | bVar10;
                  goto LAB_100a3ac6;
                }
                uVar15 = 0;
                if (local_2c != 0) {
                  do {
                    if (bVar9 == 0) break;
                    if (local_78[uVar15] == 2) {
                      bVar9 = bVar9 & ((local_198[uVar15] >> 0x14 & 0x700 |
                                       local_198[uVar15] & 0x1800) >> 8 == uVar12 &&
                                      local_50[uVar15] == local_50[local_2c]);
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < local_2c);
                  local_18._0_1_ = bVar9;
                  local_18._1_3_ = uVar16;
                }
                *(undefined1 *)((int)local_128 + 0x44e) = 1;
                goto LAB_100a3a5f;
              }
              uVar15 = 0;
              if (local_2c != 0) {
                do {
                  if (bVar9 == 0) break;
                  if (local_78[uVar15] == 1) {
                    bVar9 = bVar9 & local_50[uVar15] == local_50[local_2c];
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 < local_2c);
                local_18._0_1_ = bVar9;
                local_18._1_3_ = uVar16;
              }
              *(undefined1 *)(local_128 + 0x1221) = 1;
            }
            else {
              bVar9 = 0;
              local_18._0_1_ = 0;
              local_18._1_3_ = uVar16;
LAB_100a3a53:
              if (uVar20 == 2) {
LAB_100a3a5f:
                uVar15 = 0;
                if (local_2c != 0) {
                  do {
                    if (bVar9 == 0) break;
                    if (local_78[uVar15] == 2) {
                      if ((local_78[uVar15 + 3] == 0xb000000) || (local_78[uVar15 + 3] == 0xc000000)
                         ) {
                        if ((local_78[local_2c + 3] == 0xb000000) ||
                           (local_78[local_2c + 3] == 0xc000000)) goto LAB_100a3aaf;
LAB_100a3d89:
                        bVar10 = 0;
                      }
                      else {
                        if ((local_78[local_2c + 3] == 0xb000000) ||
                           (local_78[local_2c + 3] == 0xc000000)) goto LAB_100a3d89;
LAB_100a3aaf:
                        bVar10 = 1;
                      }
                      bVar9 = bVar9 & bVar10;
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 < local_2c);
                  local_18._0_1_ = bVar9;
                  local_18._1_3_ = uVar16;
                }
              }
            }
LAB_100a3ac6:
            uVar12 = local_2c;
            uVar15 = local_94[1];
            bVar10 = (&DAT_100d3b13)[local_50[3]];
            if (((local_94[1] == 0x5f) && (local_2c == 0)) && (local_198[0] == 0)) {
              bVar10 = ((*(byte *)((local_30[local_28 + 1] & 0x7ff) + 0x4880 + (int)local_128) &
                        0x1f) != 2) * '\x04' + 0xb;
            }
            bVar11 = bVar10 & (byte)local_38;
            if ((&DAT_100d3b12)[local_50[3]] == '\0') {
              bVar11 = bVar10;
            }
            bVar10 = FUN_100a1bd2(local_1d0[local_2c],bVar11);
            uVar17 = (uint)bVar10 << 8;
            uVar14 = (undefined2)uVar17;
            if (uVar15 != 0x1e) {
              if ((uVar12 == 2) || (*(short *)(&DAT_100d3b18 + uVar12 * 2 + local_50[3]) == 0)) {
                local_34 = local_94[3];
                if (local_94[3] == 0) goto LAB_100a3f0b;
              }
              else {
                local_34 = 1;
              }
              uVar15 = local_78[uVar12];
              uVar20 = 0;
              do {
                uVar12 = 0;
                bVar9 = (byte)(uVar17 >> 8);
                uVar16 = (undefined3)(uVar17 >> 8);
                if (uVar15 < 0x21) {
                  if (uVar15 == 0x20) {
                    pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x48b3 + uVar20);
                    *pbVar1 = *pbVar1 | bVar9;
                    goto LAB_100a3ef7;
                  }
                  if (uVar15 != 1) {
                    if (uVar15 == 2) {
                      pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x41 + uVar20);
                      *pbVar1 = *pbVar1 | bVar9;
                    }
                    else if (uVar15 == 4) {
                      pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x20 + uVar20);
                      *pbVar1 = *pbVar1 | bVar9;
                    }
                    else if (uVar15 == 8) {
                      pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x4893 + uVar20);
                      *pbVar1 = *pbVar1 | bVar9;
                    }
                    else {
                      if (uVar15 != 0x10) goto LAB_100a3efb;
                      *(undefined1 *)((int)local_128 + local_50[local_2c] + 0x48a3 + uVar20) = 1;
                    }
                    goto LAB_100a3ef7;
                  }
                  if (local_198[local_2c] == 0) {
                    uVar17 = CONCAT31(uVar16,*(undefined1 *)((int)&local_184 + local_50[local_2c]));
                    pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x10 + uVar20);
                    *pbVar1 = *pbVar1 | bVar9;
                  }
                  else {
                    uVar17 = CONCAT31(uVar16,0xf);
                    do {
                      pbVar1 = (byte *)(uVar12 + 0x10 + (int)local_128);
                      *pbVar1 = *pbVar1 | bVar9;
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < 0x10);
                  }
                }
                else {
                  if (uVar15 == 0x40) {
                    pbVar1 = (byte *)((int)local_128 + local_50[local_2c] + 0x40 + uVar20);
                    *pbVar1 = *pbVar1 | bVar9;
                  }
                  else if (uVar15 != 0x80) {
                    if (uVar15 != 0x100) {
                      if (uVar15 == 0x400) {
                        uVar17 = CONCAT31(uVar16,(*(char *)((int)local_128 +
                                                           local_50[local_2c] + 0x4880) == '\0') +
                                                 -1) & 0xffffff0f;
                      }
                      goto LAB_100a3efb;
                    }
                    *(undefined1 *)((int)local_128 + local_50[local_2c] + 0x48b4 + uVar20) = 1;
                    goto LAB_100a3ef7;
                  }
                  *(undefined1 *)((int)local_128 + local_50[local_2c] + 0x48c4 + uVar20) = 1;
LAB_100a3ef7:
                  uVar17 = CONCAT31(uVar16,0xf);
                }
LAB_100a3efb:
                uVar14 = (undefined2)uVar17;
                uVar20 = uVar20 + 1;
                uVar12 = local_2c;
                bVar9 = (byte)local_18;
                uVar16 = local_18._1_3_;
              } while (uVar20 < local_34);
            }
LAB_100a3f0b:
            uVar15 = 0;
            if (((uint)local_40 & 0x2000) == 0) {
              bVar10 = (byte)((ushort)uVar14 >> 8);
              bVar9 = bVar9 & ((byte)uVar14 & bVar10) == bVar10;
              local_18._0_1_ = bVar9;
              local_18._1_3_ = uVar16;
            }
            bVar10 = (byte)local_38;
            if (local_54 == 4) {
              pbVar1 = (byte *)(local_24 + 0x20 + (int)local_128);
              *pbVar1 = *pbVar1 | bVar10;
            }
            else if (local_54 == 0x20) {
              pbVar1 = (byte *)(local_24 + 0x48b3 + (int)local_128);
              *pbVar1 = *pbVar1 | bVar10;
            }
            else if (local_54 == 0x40) {
              pbVar1 = (byte *)(local_24 + 0x40 + (int)local_128);
              *pbVar1 = *pbVar1 | bVar10;
            }
            else if (local_54 == 0x200) {
              if (local_58 == 0) {
                *(byte *)(local_24 + 0x4887 + (int)local_128) =
                     (char)local_3c << 7 | *(byte *)(local_24 + 0x4887 + (int)local_128) | bVar10;
              }
              else {
                do {
                  *(byte *)(uVar15 + 0x4887 + (int)local_128) =
                       (char)local_3c << 7 | *(byte *)(uVar15 + 0x4887 + (int)local_128) | bVar10;
                  uVar15 = uVar15 + 1;
                  uVar12 = local_2c;
                  bVar9 = (byte)local_18;
                  uVar16 = local_18._1_3_;
                } while (uVar15 < 0xc);
              }
            }
            local_2c = uVar12 + 1;
            uVar15 = local_2c;
          }
          if (0x60 < local_94[1]) goto switchD_100a4008_caseD_19;
          if (local_94[1] == 0x60) {
            for (uVar15 = 1; bVar10 = 0, uVar15 <= local_1c; uVar15 = uVar15 + 1) {
              if ((local_114[uVar15] == 1) || (local_114[uVar15] == 2)) goto LAB_100a4238;
            }
            goto LAB_100a423a;
          }
          switch(local_94[1]) {
          case 0x14:
          case 0x16:
            bVar22 = local_20 == 0xf0000;
            break;
          case 0x15:
          case 0x17:
            bVar22 = local_20 == 0x70000;
            break;
          case 0x18:
            bVar22 = local_20 == 0x30000;
            break;
          default:
            goto switchD_100a4008_caseD_19;
          case 0x1b:
            bVar9 = bVar9 & local_1c < 0x20;
            local_118 = local_1c + 1;
            local_114[local_1c + 1] = 1;
            goto LAB_100a40e0;
          case 0x1c:
            iVar7 = local_114[local_1c];
            goto LAB_100a4105;
          case 0x1d:
            bVar22 = local_114[local_1c] == 1;
            goto LAB_100a4118;
          case 0x1e:
            bVar9 = bVar9 & local_80 == 0x1c;
            local_128[local_50[0] + 0x128a] = (int)local_10 - (int)local_60 >> 2;
            local_120 = local_10;
            goto LAB_100a4245;
          case 0x21:
            if (((((local_20 == 0x10000) || (local_20 == 0x20000)) ||
                 ((local_20 == 0x40000 || ((local_20 == 0x30000 || (local_20 == 0x50000)))))) ||
                (local_20 == 0x60000)) || (local_20 == 0x70000)) {
              bVar10 = 1;
            }
            else {
              bVar10 = 0;
            }
            bVar9 = bVar9 & bVar10;
            uVar15 = local_50[1];
            uVar12 = local_78[1];
            if ((local_54 != local_78[0]) || (local_24 != local_50[0])) goto joined_r0x100a4093;
            goto LAB_100a4020;
          case 0x24:
            uVar15 = local_50[0];
            uVar12 = local_78[0];
joined_r0x100a4093:
            if ((local_54 == uVar12) && (local_24 == uVar15)) goto LAB_100a4020;
            goto LAB_100a401c;
          case 0x25:
            if (((local_20 != 0x10000) && (local_20 != 0x20000)) && (local_20 != 0x30000))
            goto LAB_100a4020;
            goto LAB_100a401c;
          case 0x26:
            bVar9 = bVar9 & local_1c < 0x20;
            local_118 = local_1c + 1;
            local_114[local_1c + 1] = 2;
            goto LAB_100a40e0;
          case 0x27:
            bVar22 = local_114[local_1c] == 2;
            goto LAB_100a4118;
          case 0x28:
          case 0x29:
            bVar9 = bVar9 & local_1c < 0x20;
            local_118 = local_1c + 1;
            local_114[local_1c + 1] = 3;
LAB_100a40e0:
            local_11c = local_11c + 1;
            local_1c = local_118;
            goto LAB_100a4245;
          case 0x2a:
            iVar7 = local_114[local_1c] + -3;
LAB_100a4105:
            bVar22 = iVar7 == 0;
            goto LAB_100a4022;
          case 0x2b:
            bVar22 = local_114[local_1c] == 3;
LAB_100a4118:
            bVar9 = bVar9 & bVar22;
            local_1c = local_1c - 1;
            local_11c = local_11c + -1;
            local_118 = local_1c;
            goto switchD_100a4008_caseD_19;
          case 0x2c:
            for (uVar15 = 1; bVar10 = 0, uVar15 <= local_1c; uVar15 = uVar15 + 1) {
              if ((local_114[uVar15] == 1) || (local_114[uVar15] == 2)) goto LAB_100a4238;
            }
            goto LAB_100a423a;
          case 0x2d:
            for (uVar15 = 1; bVar10 = 0, uVar15 <= local_1c; uVar15 = uVar15 + 1) {
              if ((local_114[uVar15] == 1) || (local_114[uVar15] == 2)) goto LAB_100a4238;
            }
            goto LAB_100a423a;
          }
          if ((bVar22) && (local_78[4] == 0)) {
LAB_100a401c:
            bVar22 = true;
          }
          else {
LAB_100a4020:
            bVar22 = false;
          }
LAB_100a4022:
          bVar9 = bVar9 & bVar22;
          goto switchD_100a4008_caseD_19;
        }
      }
      else {
        bVar9 = 0;
      }
    }
    goto LAB_100a481c;
  }
  local_10 = local_120;
LAB_100a481c:
  uVar15 = 0;
  piVar21 = param_4 + 0x128a;
  do {
    bVar10 = 0;
    if ((param_4[uVar15 + 0x128a] == 0) || (*(char *)((int)param_4 + uVar15 + 0x48b4) != '\0')) {
      bVar10 = 1;
    }
    bVar9 = bVar10 & bVar9;
    uVar15 = uVar15 + 1;
  } while (uVar15 < 0x10);
  local_120 = local_10;
  local_11 = bVar9;
  if (*(char *)((int)param_4 + 0x4885) == '\0') {
    uVar15 = 0;
    do {
      uVar6 = FUN_100683ba('\0',(uint)param_4 & 0xffffff00,param_4[uVar15 + 0x1214]);
      if ((char)uVar6 != '\0') break;
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0xc);
    piVar18 = param_4;
    bVar9 = 0;
    if (uVar15 != 0xc) {
      bVar9 = local_11;
    }
  }
  else {
    uVar6 = FUN_100683ba('\0',(uint)param_4 & 0xffffff00,*local_1c4);
    piVar18 = param_4;
    bVar9 = bVar9 & (byte)uVar6;
    uVar6 = FUN_100683ba('\x04',extraout_EDX_02 & 0xffffff00,param_4[0x1215]);
    if ((char)uVar6 == '\0') {
      uVar15 = 2;
      uVar12 = extraout_EDX_03;
      do {
        uVar6 = FUN_100683ba('\x04',uVar12 & 0xffffff00,piVar18[uVar15 + 0x1214]);
        if ((char)uVar6 != '\0') {
          bVar9 = 0;
          break;
        }
        uVar15 = local_198[3] + 1;
        uVar12 = extraout_EDX_04;
        local_198[3] = uVar15;
      } while (uVar15 < 0xc);
    }
  }
  piVar4 = local_60;
  uVar5 = 0;
  if (bVar9 != 0) {
    param_4 = (int *)0x0;
    uVar15 = FUN_100a1c89(local_60,local_7c,(int)piVar21,(uint *)&DAT_100d7360,(uint *)&param_4);
    uVar5 = (undefined1)uVar15;
    *(undefined1 *)((int)piVar18 + 0x4886) = param_4._0_1_;
    *param_5 = (int)local_10 - (int)piVar4 >> 2;
  }
  return uVar5;
LAB_100a4238:
  bVar10 = 1;
LAB_100a423a:
  bVar9 = bVar9 & bVar10;
switchD_100a4008_caseD_19:
  local_120 = local_10;
LAB_100a4245:
  local_10 = local_120;
  if ((*(short *)(&DAT_100d3b14 + local_50[3]) != 0) && (local_10 = local_120 + 1, local_58 != 0)) {
    local_10 = local_120 + 2;
  }
  uVar15 = 0;
  if (bVar9 != 0) {
    while ((uVar15 < 3 && (*(short *)(&DAT_100d3b16 + uVar15 * 2 + local_50[3]) != 0))) {
      if (((*(short *)(&DAT_100d3b14 + local_50[3]) != 0) || (uVar15 != 0)) &&
         (local_198[uVar15] != 0)) {
        local_10 = local_10 + 1;
      }
      local_10 = local_10 + 1;
      uVar15 = uVar15 + 1;
    }
  }
  local_10 = local_10 + 1;
  local_80 = local_94[1];
  piVar21 = local_128;
LAB_100a4605:
  local_120 = local_10;
  bVar10 = local_11;
  if (bVar9 == 0) goto LAB_100a481c;
  goto LAB_100a3561;
}

