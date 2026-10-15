/*
 * FUN_100a0643 at 100a0643
 * undefined1 __fastcall FUN_100a0643(int * param_1, uint param_2, int * param_3, int * param_4)
 * Address ranges: 100a0643-100a1b86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100a0643(int *param_1,uint param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte extraout_DL;
  uint extraout_EDX;
  byte bVar9;
  undefined1 uVar10;
  undefined3 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  uint uVar17;
  bool bVar18;
  uint local_178 [5];
  uint local_164 [8];
  int *local_144;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  uint *local_130;
  int local_12c;
  uint local_128;
  int local_124 [32];
  uint local_a4 [4];
  undefined2 local_94;
  undefined1 local_92;
  byte local_91;
  char local_90;
  uint local_8c;
  uint *local_88;
  uint local_84 [5];
  uint local_70;
  int *local_6c;
  uint local_68;
  byte local_64 [4];
  uint local_60 [4];
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int *local_1c;
  byte local_16;
  char local_15;
  uint local_14;
  uint *local_10;
  bool local_c;
  undefined3 uStack_b;
  byte local_5;
  
  piVar16 = param_3;
  local_178[4] = param_2;
  local_6c = param_1;
  piVar3 = FUN_100cfed0(param_3,0,0x1270);
  iVar12 = *param_1;
  local_c = iVar12 == -0xfd00;
  uStack_b = (undefined3)((uint)piVar3 >> 8);
  local_144 = piVar16;
  local_130 = (uint *)(param_1 + 1);
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_12c = 0;
  local_128 = 0;
  FUN_100cfed0(local_124,0,0x80);
  puVar15 = local_a4;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  local_124[0] = 0;
  *(char *)((int)local_144 + 0x126e) = (char)iVar12;
  *(undefined1 *)((int)local_144 + 0x126d) = 3;
  *(undefined1 *)((int)local_144 + 0x14a) = 1;
  piVar16 = local_144 + 0x487;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar16 = -1;
    piVar16 = piVar16 + 1;
  }
  local_1c = local_144;
  piVar16 = local_144 + 0x46;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar16 = -1;
    piVar16 = piVar16 + 1;
  }
  local_15 = '\0';
  bVar9 = local_c;
  if (iVar12 == -0xfd00) {
    local_30 = local_12c;
    local_20 = local_128;
    local_10 = local_130;
    local_28 = local_140;
    bVar8 = local_c;
    uVar11 = uStack_b;
    do {
      piVar16 = local_1c;
      local_10 = local_130;
      bVar9 = local_c;
      if (local_15 != '\0') break;
      local_a4[0] = *local_130;
      local_14 = local_a4[0] & 0xffff;
      local_a4[1] = local_14;
      local_4c = local_a4[0] & 0xe0ff0000;
      local_a4[2] = local_4c;
      local_91 = (byte)(local_a4[0] >> 0x1c) & 1;
      local_24 = (uint)local_91;
      local_a4[3] = 1;
      local_92 = 1;
      local_94 = 0xf0f;
      bVar8 = 1U - ((local_a4[0] & 0xc0000000) != 0) & bVar8;
      if (local_14 == 0x1f) {
        uVar13 = local_130[1];
        uVar7 = local_130[2];
        local_84[4] = uVar13;
        local_24 = uVar7 & 0x7ff;
        uVar14 = (uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) >> 8;
        if ((local_28 == 0) && (local_4c == 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        if (((uVar14 == 1) || (uVar14 == 10)) || (uVar14 == 0x11)) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        if ((local_4c == 0) && ((uVar7 & 0x8f000000) == 0x80000000)) {
          local_16 = 1;
        }
        else {
          local_16 = 0;
        }
        local_16 = local_16 & bVar8 & bVar9 & bVar2;
        bVar9 = 0;
        if (local_16 != 0) {
          local_c = (bool)(-(local_24 < (byte)(&DAT_100d3744)[uVar14]) & local_16);
          uVar17 = uVar7 & 0xf0000;
          if (uVar17 == 0) {
            uVar17 = 0xf0000;
          }
          local_48 = (uint *)(uVar17 >> 0x10);
          if (uVar14 == 1) {
            local_5 = (byte)uVar13 & 0xf;
            local_38 = uVar13 >> 0x10 & 0xffffff0f;
            local_2c = uVar7 & 0xf00000;
            if ((((local_24 < 10) && ((uVar13 & 0xfff0fff0) == 0x80000000)) &&
                ((local_2c == 0x200000 ||
                 (((local_2c == 0x400000 || (local_2c == 0x600000)) || (local_2c == 0)))))) &&
               (local_5 < 0xe)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            bVar9 = local_c & bVar9;
            uVar7 = 0;
            uStack_b = uVar11;
            do {
              bVar8 = 0;
              if (bVar9 == 0) break;
              uVar4 = FUN_100683ba(local_5,CONCAT31((int3)(uVar13 >> 8),(undefined1)local_38),
                                   piVar16[uVar7 + 0x46]);
              bVar9 = bVar9 & ((byte)uVar4 ^ 1);
              uVar7 = uVar7 + 1;
              uVar13 = extraout_EDX;
              bVar8 = bVar9;
            } while (uVar7 < 0x10);
            bVar9 = (byte)local_38;
            if ((local_5 == 0xd) || ((local_5 == 9 && (bVar9 == 0)))) {
              bVar2 = 0;
            }
            else {
              bVar2 = 1;
            }
            bVar8 = bVar8 & bVar2;
            local_c = (bool)bVar8;
            uStack_b = uVar11;
            bVar8 = local_c;
            if (bVar8 != 0) {
              *(byte *)((int)&local_13c + local_24) =
                   *(byte *)((int)&local_13c + local_24) | (byte)local_48;
              bVar9 = (char)local_84[4] << 4 ^ bVar9;
              local_1c = local_144;
              local_144[local_24 + 0x46] =
                   CONCAT31(CONCAT21(CONCAT11(bVar9,bVar9),bVar9),bVar9) &
                   *(uint *)(&DAT_100d3758 + ((uint)local_48 & 0xff) * 4) |
                   ~*(uint *)(&DAT_100d3758 + ((uint)local_48 & 0xff) * 4) &
                   local_144[local_24 + 0x46];
              if (((local_2c & 0x400000) != 0) || (local_5 == 10)) {
                pbVar1 = (byte *)((int)local_144 + ((int)local_24 >> 3) + 0x140);
                *pbVar1 = *pbVar1 | '\x01' << (local_24 & 7);
              }
              local_20 = local_128;
              local_30 = local_12c;
              local_28 = local_140;
              local_10 = local_130;
            }
          }
          else if (uVar14 == 10) {
            uVar14 = uVar13 & 0x78000000;
            if (((((uVar7 & 0x7f0) == 0) && ((uVar13 & 0x87ffffff) == 0x80000000)) &&
                ((uVar7 & 0xf00000) == 0)) &&
               (((uVar14 == 0x10000000 || (uVar14 == 0x18000000)) || (uVar14 == 0x20000000)))) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            local_c = (bool)(local_c & bVar9);
            *(byte *)(local_24 + 0x14f + (int)local_1c) = (byte)(uVar14 >> 0x1b);
            uStack_b = uVar11;
            bVar8 = local_c;
          }
          else {
            uStack_b = uVar11;
            bVar8 = local_c;
            if (uVar14 == 0x11) {
              if ((((uVar7 & 0x7fe) == 0) && ((uVar13 & 0xfff0fff0) == 0x80000000)) &&
                 (((uVar7 & 0xf00000) == 0 && (((byte)uVar13 & 0xf) < 0xe)))) {
                bVar9 = 1;
              }
              else {
                bVar9 = 0;
              }
              bVar9 = bVar9 & local_c;
              if (local_24 == 0) {
                if (((uVar17 == 0x10000) || (uVar17 == 0x20000)) ||
                   (local_c = false, uVar17 == 0x30000)) {
                  local_c = true;
                }
                local_c = (bool)(bVar9 & local_c);
                local_134._0_3_ = CONCAT12((char)(uVar17 >> 0x10),(undefined2)local_134);
                bVar8 = local_c;
              }
              else if (local_24 == 1) {
                local_134 = CONCAT13(1,(undefined3)local_134);
                local_c = (bool)0;
                bVar8 = 0;
                if (uVar17 == 0xf0000) {
                  local_c = (bool)bVar9;
                  bVar8 = bVar9;
                }
              }
              else {
                local_c = false;
                bVar8 = 0;
              }
            }
          }
LAB_100a193b:
          local_10 = local_10 + 3;
          goto LAB_100a1941;
        }
        break;
      }
      if (local_14 == 0x2f) {
        uVar13 = local_130[1];
        if ((local_28 == 0) && (local_91 == 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        if (((local_4c == 0) && ((int)uVar13 < 0)) &&
           (((uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800) == 0xe00 &&
            (((uVar13 & 0xfff0000) == 0xf0000 && ((uVar13 & 0x7f0) == 0)))))) {
          local_c = true;
        }
        else {
          local_c = false;
        }
        local_c = (bool)(bVar8 & bVar9 & local_c);
        uStack_b = uVar11;
        bVar8 = local_c;
        if (local_c != false) {
          *(undefined1 *)((uVar13 & 0x7ff) + 0x2a0 + (int)local_1c) = 1;
          local_1c[(uVar13 & 0x7ff) + 0xac] = local_130[2];
        }
        goto LAB_100a193b;
      }
      if (local_14 == 0x30) {
        uVar13 = local_130[1];
        uVar7 = uVar13 & 0x7ff;
        if ((local_28 == 0) && (local_91 == 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        if ((((local_4c == 0) && ((int)uVar13 < 0)) &&
            ((uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800) == 0x700)) &&
           (((uVar13 & 0xfff0000) == 0xf0000 && ((uVar13 & 0x7f0) == 0)))) {
          local_c = true;
        }
        else {
          local_c = false;
        }
        local_c = (bool)(bVar8 & bVar9 & local_c);
        if (local_c != false) {
          *(undefined1 *)(uVar7 + 400 + (int)local_1c) = 1;
          local_1c[uVar7 * 4 + 0x68] = local_130[2];
          local_1c[uVar7 * 4 + 0x69] = local_130[3];
          local_1c[uVar7 * 4 + 0x6a] = local_130[4];
          local_1c[uVar7 * 4 + 0x6b] = local_130[5];
        }
LAB_100a16ba:
        local_10 = local_130 + 6;
        bVar8 = local_c;
        uStack_b = uVar11;
        goto LAB_100a1941;
      }
      if (local_14 == 0x51) {
        uVar13 = local_130[1];
        uVar7 = uVar13 & 0x7ff;
        if ((local_28 == 0) && (local_91 == 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        if ((((local_4c == 0) && ((int)uVar13 < 0)) &&
            ((uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800) == 0x200)) &&
           (((uVar13 & 0xfff0000) == 0xf0000 && (uVar7 < 0xe0)))) {
          local_c = true;
        }
        else {
          local_c = false;
        }
        local_c = (bool)(bVar8 & bVar9 & local_c);
        if (local_c != false) {
          *(undefined1 *)(uVar7 + 0x331 + (int)local_1c) = 1;
          local_1c[uVar7 * 4 + 0x105] = local_130[2];
          local_1c[uVar7 * 4 + 0x106] = local_130[3];
          local_1c[uVar7 * 4 + 0x107] = local_130[4];
          local_1c[uVar7 * 4 + 0x108] = local_130[5];
        }
        goto LAB_100a16ba;
      }
      if (local_14 == 0xfffe) {
        local_c = (bool)(bVar8 & (local_91 ^ 1));
        local_10 = local_130 + (local_a4[0] >> 0x10) + 1;
        bVar8 = local_c;
        uStack_b = uVar11;
        goto LAB_100a1941;
      }
      if (local_14 == 0xffff) {
        local_c = (bool)0;
        if (local_4c == 0) {
          local_c = (bool)(local_91 ^ 1);
        }
        bVar9 = 0;
        if (local_20 == 0) {
          bVar9 = bVar8;
        }
        local_c = (bool)(local_c & bVar9);
        uVar13 = 0;
        do {
          if (local_1c[uVar13 + 0xbc] != 0) {
            local_c = local_8c == 0x1c;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x10);
        local_10 = local_130 + 1;
        local_15 = '\x01';
        bVar8 = local_c;
        uVar11 = 0;
        uStack_b = 0;
        goto LAB_100a1941;
      }
      bVar9 = 0;
      if (local_14 < 0x61) {
        bVar9 = bVar8;
      }
      local_2c = CONCAT31((int3)(-(local_a4[0] & 0xe0000000) >> 8),
                          1U - ((local_a4[0] & 0xe0000000) != 0) & bVar9);
      uVar13 = local_2c;
      if (((local_4c >> 0x10 & 0xff) != 0) &&
         (((((local_14 != 0x2d && (local_14 != 0x29)) && (local_14 != 0x5e)) ||
           (0x60000 < (local_a4[0] & 0xff0000))) &&
          ((local_14 != 0x42 ||
           (((local_a4[0] & 0xff0000) != 0x10000 && ((local_a4[0] & 0xff0000) != 0x20000)))))))) {
        uVar13 = 0;
      }
      bVar8 = 0;
      iVar12 = (int)(char)(&DAT_100d3420)[local_14];
      if ((iVar12 != -1) &&
         ((local_91 == 0 ||
          ((iVar6 = iVar12 * 0xe, ((&DAT_100d3488)[iVar6] & 4) == 0 &&
           ((*(short *)(&DAT_100d348e + iVar6) != 0 || (*(short *)(&DAT_100d348c + iVar6) != 0))))))
         )) {
        bVar8 = 1;
      }
      local_24 = iVar12 * 0xe;
      local_48 = local_130 + 1;
      uVar7 = *local_48;
      bVar8 = bVar8 & (byte)uVar13;
      if ((*(short *)(&DAT_100d348c + local_24) != 0) && (-1 < (int)uVar7)) {
        bVar9 = 0;
        break;
      }
      bVar9 = 0;
      if (bVar8 == 0) break;
      if (local_28 == 0) {
        local_88 = local_130;
      }
      local_c = (bool)(bVar8 & -(local_28 < local_178[4]));
      local_140 = local_28 + (byte)(&DAT_100d3489)[local_24];
      if (((&DAT_100d3488)[local_24] & 2) != 0) {
        local_1c[0x486] = local_1c[0x486] + 1;
      }
      local_38 = 0;
      local_44 = 0;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      local_34 = local_48;
      if (*(ushort *)(&DAT_100d348c + local_24) != 0) {
        local_34 = local_130 + 2;
        uVar13 = (uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) >> 8;
        local_44 = uVar7 & 0x7ff;
        if ((local_44 < (byte)(&DAT_100d3744)[uVar13]) && ((uVar7 & 0xf000000) == 0)) {
          local_2c = 0x700000;
          bVar9 = local_c & 1U - (0x700000 < (uVar7 & 0xf00000));
          local_c = false;
          if (bVar9 != 0) {
            local_38 = (uint)*(ushort *)(&DAT_100d33f4 + uVar13 * 2);
            local_c = (bool)(bVar9 & -((*(ushort *)(&DAT_100d348c + local_24) &
                                       *(ushort *)(&DAT_100d33f4 + uVar13 * 2)) != 0));
          }
        }
        else {
          local_c = false;
        }
        local_40 = 0xf0000;
        if ((uVar7 & 0xf0000) != 0) {
          local_40 = uVar7 & 0xf0000;
        }
        local_50 = local_40 >> 0x10;
        if (local_14 == 0x41) {
          local_50 = 7;
        }
      }
      if (local_91 != 0) {
        uVar13 = *local_34 & 0xff0000;
        if ((((int)*local_34 < 0) &&
            (((byte)(*local_34 >> 0x1c) & 7 | (byte)(*local_34 >> 8) & 0x18) == 0x13)) &&
           ((*local_34 & 0x7ff) == 0)) {
          bVar9 = 1;
        }
        else {
          bVar9 = 0;
        }
        bVar9 = bVar9 & local_c;
        if (((*local_34 & 0xf000000) != 0) && ((*local_34 & 0xf000000) != 0xd000000)) {
          bVar9 = 0;
        }
        if (((uVar13 == 0xe40000) || (uVar13 == 0)) ||
           ((uVar13 == 0x550000 || ((uVar13 == 0xaa0000 || (uVar13 == 0xff0000)))))) {
          local_c = true;
        }
        else {
          local_c = false;
        }
        local_c = (bool)(local_c & bVar9);
        if (local_c != false) {
          local_34 = local_34 + 1;
          local_10 = local_48;
        }
      }
      bVar9 = local_c;
      uStack_b = 0;
      uVar11 = 0;
      local_130 = local_10;
      local_28 = local_140;
      local_84[4] = FUN_100a1c39(local_14);
      local_a4[3] = local_84[4];
      local_164[4] = 0;
      local_164[5] = 0;
      local_164[6] = 0;
      local_164[7] = 0;
      local_60[0] = 0;
      local_60[1] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_84[0] = 0;
      local_84[1] = 0;
      local_84[2] = 0;
      local_84[3] = 0;
      local_164[0] = 0;
      local_164[1] = 0;
      local_164[2] = 0;
      local_164[3] = 0;
      local_178[0] = 0;
      local_178[1] = 0;
      local_178[2] = 0;
      local_178[3] = 0;
      local_64[0] = 0;
      local_5 = 0;
      local_48 = (uint *)0x0;
      local_3c = 0;
      uVar13 = local_3c;
      while (((local_3c = uVar13, bVar9 != 0 && (uVar13 < 4)) &&
             (local_2c = (uint)*(ushort *)(&DAT_100d348e + uVar13 * 2 + local_24),
             *(ushort *)(&DAT_100d348e + uVar13 * 2 + local_24) != 0))) {
        local_70 = uVar13 + (int)local_48;
        uVar7 = local_34[uVar13 + (int)local_48];
        local_68 = uVar7;
        local_60[uVar13] = uVar7 & 0x7ff;
        uVar14 = uVar7 & 0xf000000;
        uVar17 = (uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) >> 8;
        local_164[uVar13] = uVar7 & 0xff0000;
        local_84[uVar13] = uVar14;
        uVar13 = local_3c;
        local_c = (bool)(-((uVar7 & 0x7ff) < (uint)(byte)(&DAT_100d3744)[uVar17]) &
                         (byte)(local_68 >> 0x1f) & bVar9);
        if (uVar14 == 0) {
LAB_100a0c87:
          uStack_b = uVar11;
          if (local_c == false) goto LAB_100a0c12;
          if (uVar17 == 0x11) {
            uVar7 = 0x800;
            if (local_60[local_3c] == 1) {
              uVar7 = 0x1000;
            }
          }
          else {
            uVar7 = (uint)*(ushort *)(&DAT_100d33f4 + uVar17 * 2);
          }
          local_164[local_3c + 4] = uVar7;
          uVar14 = local_2c;
          uVar13 = local_164[uVar13];
          if (uVar7 == 0x1000) {
            uVar13 = 0;
            local_164[local_3c] = 0;
          }
          uVar4 = FUN_100a1baf(uVar13);
          uVar13 = local_3c;
          local_64[local_3c] = (byte)uVar4;
          uVar7 = local_3c;
          uVar11 = (undefined3)(uVar14 >> 8);
          if (((uVar14 & 0x2000) == 0) || ((byte)uVar4 != 0)) {
            bVar8 = 1;
          }
          else {
            bVar8 = 0;
          }
          local_c = (bool)(bVar8 & extraout_DL);
          uStack_b = uVar11;
          bVar9 = local_c;
          uVar11 = uStack_b;
          if ((local_68 & 0x2000) != 0) {
            uVar13 = local_34[local_70 + 1];
            uVar14 = (uVar13 >> 0x14 & 0x700 | uVar13 & 0x1800) >> 8;
            local_70 = uVar13 & 0xf000000;
            if (((uVar14 != 0xf) || ((uVar13 & 0xff0000) != 0xe40000)) ||
               (local_16 = bVar8 & extraout_DL, uVar17 != 1)) {
              local_16 = 0;
            }
            if (((uVar13 & 0x7ff) < (uint)(byte)(&DAT_100d3744)[uVar14]) &&
               ((uVar13 & 0xf000000) == 0)) {
              bVar9 = 1;
            }
            else {
              bVar9 = 0;
            }
            bVar9 = bVar9 & local_16;
            local_48 = (uint *)((int)local_48 + 1);
            local_c = (bool)bVar9;
            local_178[local_3c] = uVar13;
            uVar13 = uVar7;
            if (uVar17 == 1) {
              uVar14 = 0;
              if (uVar7 != 0) {
                do {
                  if (bVar9 == 0) break;
                  if (local_164[uVar14 + 4] == 1) {
                    bVar9 = bVar9 & local_60[uVar14] == local_60[uVar7];
                  }
                  uVar14 = uVar14 + 1;
                } while (uVar14 < uVar7);
                local_c = (bool)bVar9;
                uStack_b = uVar11;
              }
              *(undefined1 *)((int)local_1c + 0x147) = 1;
              if (local_90 != '\0') {
                *(undefined1 *)(local_1c + 0x52) = 1;
              }
            }
            else {
              local_c = false;
              uStack_b = uVar11;
              bVar9 = local_c;
              uVar11 = uStack_b;
            }
          }
        }
        else {
          if (uVar14 != 0x1000000) {
            if (((uVar14 != 0xb000000) && (uVar14 != 0xc000000)) ||
               (((uVar17 != 0 && ((uVar17 != 1 && (uVar17 != 2)))) &&
                ((uVar17 != 0x11 || (local_60[local_3c] != 0)))))) {
              if (uVar14 != 0xd000000) goto LAB_100a0c0d;
              if (uVar17 != 0x13) {
                bVar18 = uVar17 == 0xe;
                goto LAB_100a0c0b;
              }
            }
            goto LAB_100a0c87;
          }
          if (((uVar17 == 0) || (uVar17 == 1)) || (uVar17 == 2)) goto LAB_100a0c87;
          bVar18 = uVar17 == 0x11;
LAB_100a0c0b:
          if (bVar18) goto LAB_100a0c87;
LAB_100a0c0d:
          local_c = false;
          uStack_b = uVar11;
LAB_100a0c12:
          local_c = false;
          uStack_b = uVar11;
          bVar9 = local_c;
        }
        bVar8 = (&DAT_100d348b)[local_24];
        if ((local_14 == 0x5a) && (uVar13 < 2)) {
          bVar8 = 3;
        }
        if ((local_14 == 0x42) && (uVar13 == 0)) {
LAB_100a0c50:
          bVar8 = ((*(byte *)((local_10[3] & 0x7ff) + 0x14f + (int)local_1c) & 0x1f) != 2) * '\x04'
                  + 3;
          if (local_4c != 0) {
            bVar8 = bVar8 | 8;
          }
LAB_100a0e2c:
          if ((local_14 == 0x5f) && (uVar13 == 0)) {
            bVar8 = ((*(byte *)((local_10[3] & 0x7ff) + 0x14f + (int)local_1c) & 0x1f) != 2) *
                    '\x04' + 0xb;
          }
        }
        else {
          if (local_14 != 0x5d) goto LAB_100a0e2c;
          if (uVar13 != 1) goto LAB_100a0c50;
        }
        bVar2 = bVar8 & (byte)local_50;
        if ((&DAT_100d348a)[local_24] == '\0') {
          bVar2 = bVar8;
        }
        local_16 = FUN_100a1bd2(local_164[uVar13],bVar2);
        bVar8 = local_16;
        if (local_14 != 0x1e) {
          if ((uVar13 == 2) || (*(short *)(&DAT_100d3490 + uVar13 * 2 + local_24) == 0)) {
            local_2c = local_84[4];
            if (local_84[4] == 0) goto LAB_100a102a;
          }
          else {
            local_2c = 1;
          }
          uVar14 = (uint)local_16;
          uVar7 = local_164[uVar13 + 4];
          uVar17 = 0;
          do {
            bVar9 = (byte)uVar14;
            if (uVar7 < 0x21) {
              if (uVar7 == 0x20) {
                local_5 = 0xf;
                pbVar1 = (byte *)(local_60[uVar13] + uVar17 + 0x17f + (int)local_1c);
                *pbVar1 = *pbVar1 | bVar9;
              }
              else if (uVar7 == 1) {
                uVar5 = 0;
                if (local_178[uVar13] == 0) {
                  uVar14 = (uint)CONCAT11(*(undefined1 *)
                                           ((int)&local_13c + local_60[uVar13] + uVar17),bVar9);
                  pbVar1 = (byte *)(local_60[uVar13] + uVar17 + (int)local_1c);
                  *pbVar1 = *pbVar1 | bVar9;
                  goto LAB_100a1017;
                }
                local_5 = 0xf;
                do {
                  *(byte *)(uVar5 + (int)local_1c) = *(byte *)(uVar5 + (int)local_1c) | bVar9;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 10);
              }
              else if (uVar7 == 2) {
                local_5 = 0xf;
                pbVar1 = (byte *)(local_60[uVar13] + uVar17 + 0x38 + (int)local_1c);
                *pbVar1 = *pbVar1 | bVar9;
              }
              else if (uVar7 == 4) {
                local_5 = *(byte *)(local_60[uVar13] + uVar17 + 10 + (int)local_1c);
                *(byte *)(local_60[uVar13] + uVar17 + 10 + (int)local_1c) = local_5 | local_16;
                uVar14 = (uint)local_16;
              }
              else if (uVar7 == 8) {
                local_5 = 0xf;
                pbVar1 = (byte *)(local_60[uVar13] + uVar17 + 0x15f + (int)local_1c);
                *pbVar1 = *pbVar1 | bVar9;
              }
              else if (uVar7 == 0x10) {
                local_5 = 0xf;
                *(undefined1 *)(local_60[uVar13] + uVar17 + 0x16f + (int)local_1c) = 1;
              }
            }
            else {
              if (uVar7 == 0x40) {
                uVar14 = (uint)(CONCAT11((*(char *)(local_60[uVar13] + uVar17 + 0x14f +
                                                   (int)local_1c) == '\0') + -1,bVar9) & 0xfff);
                goto LAB_100a1017;
              }
              if (uVar7 == 0x80) {
                local_5 = 0xf;
                *(undefined1 *)(local_60[uVar13] + uVar17 + 0x146 + (int)local_1c) = 1;
              }
              else if (uVar7 == 0x400) {
                local_5 = 0xf;
                *(undefined1 *)(local_60[uVar13] + uVar17 + 0x180 + (int)local_1c) = 1;
              }
              else {
                if (uVar7 == 0x800) {
                  uVar14 = (uint)CONCAT11(local_134._2_1_,bVar9);
                  *(byte *)(local_1c + 0x51) = *(byte *)(local_1c + 0x51) | bVar9;
                }
                else {
                  if (uVar7 != 0x1000) goto LAB_100a101a;
                  uVar14 = (uint)CONCAT11(local_134._3_1_,bVar9);
                  *(byte *)((int)local_1c + 0x145) = *(byte *)((int)local_1c + 0x145) | bVar9;
                }
LAB_100a1017:
                local_5 = (byte)(uVar14 >> 8);
              }
            }
LAB_100a101a:
            bVar8 = (byte)uVar14;
            uVar17 = uVar17 + 1;
            bVar9 = local_c;
            uVar11 = uStack_b;
          } while (uVar17 < local_2c);
        }
LAB_100a102a:
        if (((local_14 != 0x58) || (uVar13 == 0)) && ((local_14 != 1 || (local_38 != 4)))) {
          bVar9 = bVar9 & (bVar8 & local_5) == bVar8;
          local_c = (bool)bVar9;
          uStack_b = uVar11;
        }
        local_3c = uVar13 + 1;
        uVar13 = local_3c;
      }
      bVar8 = (byte)local_50;
      if (local_38 == 4) {
        if (local_14 == 1) {
          local_2c = local_50 & 0xff;
          pbVar1 = (byte *)(local_44 + 10 + (int)local_1c);
          *pbVar1 = *pbVar1 & ~bVar8;
          uVar13 = 0;
          do {
            if (((local_50 & 0xff & 1 << ((byte)uVar13 & 0x1f)) != 0) &&
               ((local_5 &
                (byte)(1 << ((byte)(local_164[0] >> ((byte)uVar13 * '\x02' + 0x10 & 0x1f)) & 3))) !=
                0)) {
              *(byte *)(local_44 + 10 + (int)local_1c) =
                   *(byte *)(local_44 + 10 + (int)local_1c) | (byte)(1 << (uVar13 & 0x1f));
            }
            uVar13 = uVar13 + 1;
            bVar9 = local_c;
            uVar11 = uStack_b;
          } while (uVar13 < 4);
        }
        else {
          pbVar1 = (byte *)(local_44 + 10 + (int)local_1c);
          *pbVar1 = *pbVar1 | bVar8;
        }
      }
      else if (local_38 == 0x20) {
LAB_100a10a0:
        pbVar1 = (byte *)(local_44 + 0x17f + (int)local_1c);
        *pbVar1 = *pbVar1 | bVar8;
      }
      else if (local_38 == 0x100) {
        pbVar1 = (byte *)(local_44 + 0x14b + (int)local_1c);
        *pbVar1 = *pbVar1 | bVar8;
      }
      else if (local_38 == 0x200) {
        *(undefined1 *)(local_1c + 0xcc) = 1;
        bVar9 = bVar9 & local_40 == 0xf0000;
        local_c = (bool)bVar9;
        uStack_b = uVar11;
        goto LAB_100a10a0;
      }
      if (local_14 < 0x22) {
        if (local_14 == 0x21) {
          if ((((((local_40 == 0x10000) || (local_40 == 0x20000)) || (local_40 == 0x40000)) ||
               ((local_40 == 0x30000 || (local_40 == 0x50000)))) || (local_40 == 0x60000)) ||
             (local_40 == 0x70000)) {
            local_c = true;
          }
          else {
            local_c = false;
          }
          local_c = (bool)(local_c & bVar9);
          if (((local_38 == local_164[4]) && (local_44 == local_60[0])) ||
             ((local_38 == local_164[5] && (local_44 == local_60[1])))) {
            local_c = false;
          }
          uStack_b = (int3)(local_40 >> 8);
          goto switchD_100a1351_default;
        }
        if (0x17 < local_14) {
          if (local_14 == 0x18) {
            bVar18 = local_40 == 0x30000;
            goto LAB_100a1184;
          }
          if ((local_14 == 0x19) || (local_14 == 0x1a)) {
            *(undefined1 *)((int)local_1c + 0x14a) = 0;
          }
          else {
            if (local_14 == 0x1b) {
              bVar9 = bVar9 & local_20 < 0x20;
              local_128 = local_20 + 1;
              local_124[local_20 + 1] = 1;
              goto LAB_100a1276;
            }
            if (local_14 == 0x1c) {
              iVar12 = local_124[local_20];
              goto LAB_100a1251;
            }
            if (local_14 == 0x1d) {
              bVar18 = local_124[local_20] == 1;
              goto LAB_100a1222;
            }
            if (local_14 == 0x1e) {
              local_90 = '\x01';
              local_1c[local_60[0] + 0xbc] = (int)local_10 - (int)local_6c >> 2;
              local_c = (bool)(bVar9 & local_8c == 0x1c);
              uStack_b = uVar11;
              *(undefined1 *)((int)local_1c + 0x14a) = 0;
            }
          }
          goto switchD_100a1351_default;
        }
        if (local_14 == 0x17) {
LAB_100a119c:
          bVar18 = local_40 == 0x70000;
LAB_100a1184:
          if ((!bVar18) || (local_84[1] != 0)) goto LAB_100a1190;
          goto LAB_100a118c;
        }
        if ((((local_14 != 6) && (local_14 != 7)) && (local_14 != 0xe)) && (local_14 != 0xf)) {
          if (local_14 != 0x14) {
            if (local_14 == 0x15) goto LAB_100a119c;
            if (local_14 != 0x16) goto switchD_100a1351_default;
          }
          bVar18 = local_40 == 0xf0000;
          goto LAB_100a1184;
        }
        local_c = (bool)(bVar9 & local_64[0]);
        goto LAB_100a1194;
      }
      if (0x42 < local_14) {
        if ((local_14 != 0x5d) && (local_14 != 0x5f)) {
          if (local_14 == 0x60) {
            uVar13 = 0;
            do {
              local_c = false;
              uVar13 = uVar13 + 1;
              if (local_20 < uVar13) goto LAB_100a1478;
            } while ((local_124[uVar13] != 1) && (local_124[uVar13] != 2));
LAB_100a1476:
            local_c = true;
            goto LAB_100a1478;
          }
          goto switchD_100a1351_default;
        }
LAB_100a1526:
        local_1c[0x485] = local_1c[0x485] | 1 << (local_60[1] & 0x1f);
        goto switchD_100a1351_default;
      }
      if (local_14 == 0x42) goto LAB_100a1526;
      switch(local_14) {
      case 0x24:
        if ((local_38 != local_164[4]) || (local_44 != local_60[0])) goto LAB_100a118c;
LAB_100a1190:
        bVar18 = false;
        goto LAB_100a1192;
      case 0x25:
        if (((local_40 != 0x10000) && (local_40 != 0x20000)) && (local_40 != 0x30000))
        goto LAB_100a1190;
LAB_100a118c:
        bVar18 = true;
        goto LAB_100a1192;
      case 0x26:
        bVar9 = bVar9 & local_20 < 0x20;
        local_128 = local_20 + 1;
        local_124[local_20 + 1] = 2;
        goto LAB_100a1276;
      case 0x27:
        bVar18 = local_124[local_20] == 2;
LAB_100a1222:
        local_20 = local_20 - 1;
        local_30 = local_30 + -1;
        local_c = (bool)(bVar9 & bVar18);
        uStack_b = uVar11;
        local_128 = local_20;
        local_12c = local_30;
        break;
      case 0x28:
        bVar9 = bVar9 & local_20 < 0x20;
        local_128 = local_20 + 1;
        local_124[local_20 + 1] = 3;
LAB_100a1276:
        local_30 = local_12c + 1;
        local_12c = local_12c + 1;
        local_1c = local_144;
        *(undefined1 *)((int)local_144 + 0x14a) = 0;
        local_c = (bool)bVar9;
        uStack_b = uVar11;
        local_14 = local_a4[1];
        local_20 = local_128;
        local_28 = local_140;
        local_10 = local_130;
        break;
      case 0x29:
        local_128 = local_20 + 1;
        local_c = (bool)(bVar9 & local_20 < 0x20);
        uStack_b = uVar11;
        local_124[local_128] = 3;
        local_1c = local_144;
        *(undefined1 *)((int)local_144 + 0x14a) = 0;
        local_20 = local_128;
        local_30 = local_12c + 1;
        local_12c = local_12c + 1;
        local_14 = local_a4[1];
        local_28 = local_140;
        local_10 = local_130;
        break;
      case 0x2a:
        iVar12 = local_124[local_20] + -3;
LAB_100a1251:
        bVar18 = iVar12 == 0;
LAB_100a1192:
        local_c = (bool)(bVar9 & bVar18);
LAB_100a1194:
        uStack_b = uVar11;
        break;
      case 0x2b:
        local_128 = local_20 - 1;
        local_c = (bool)(bVar9 & local_124[local_20] == 3);
        uStack_b = uVar11;
        local_30 = local_30 + -1;
        local_20 = local_128;
        local_12c = local_30;
        break;
      case 0x2c:
        for (uVar13 = 1; local_c = false, uVar13 <= local_20; uVar13 = uVar13 + 1) {
          if ((local_124[uVar13] == 1) || (local_124[uVar13] == 2)) goto LAB_100a1476;
        }
        goto LAB_100a1478;
      case 0x2d:
        for (uVar13 = 1; local_c = false, uVar13 <= local_20; uVar13 = uVar13 + 1) {
          if ((local_124[uVar13] == 1) || (local_124[uVar13] == 2)) goto LAB_100a1476;
        }
LAB_100a1478:
        local_c = (bool)(bVar9 & local_c);
        goto LAB_100a1194;
      }
switchD_100a1351_default:
      if (*(short *)(&DAT_100d348c + local_24) != 0) {
        local_10 = local_10 + 1;
      }
      uVar13 = 0;
      puVar15 = local_34;
      if (local_c != false) {
        while ((uVar13 < 4 && (*(short *)(&DAT_100d348e + uVar13 * 2 + local_24) != 0))) {
          if ((((byte)(*puVar15 >> 0x1c) & 7 | (byte)(*puVar15 >> 8) & 0x18) != 0x11) &&
             (local_178[uVar13] != 0)) {
            local_10 = local_10 + 1;
            puVar15 = puVar15 + 1;
          }
          local_10 = local_10 + 1;
          uVar13 = uVar13 + 1;
          puVar15 = puVar15 + 1;
        }
      }
      local_10 = local_10 + 1;
      local_8c = local_14;
      bVar8 = local_c;
      uVar11 = uStack_b;
LAB_100a1941:
      local_130 = local_10;
      bVar9 = local_c;
    } while (bVar8 != 0);
  }
  puVar15 = local_130;
  piVar16 = param_3;
  uVar13 = 0;
  do {
    if ((param_3[uVar13 + 0xbc] == 0) ||
       (bVar8 = 0, *(char *)((int)param_3 + uVar13 + 0x180) != '\0')) {
      bVar8 = 1;
    }
    bVar9 = bVar9 & bVar8;
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x10);
  *(undefined1 *)(param_3 + 0x49b) = 0xff;
  piVar3 = param_3 + 0xbc;
  uVar10 = 0;
  if (bVar9 != 0) {
    param_3 = (int *)0x0;
    uVar13 = FUN_100a1c89(local_6c,local_88,(int)piVar3,(uint *)&DAT_100d7324,(uint *)&param_3);
    uVar10 = (undefined1)uVar13;
    *(undefined1 *)((int)piVar16 + 0x149) = param_3._0_1_;
    *param_4 = (int)puVar15 - (int)local_6c >> 2;
  }
  return uVar10;
}

