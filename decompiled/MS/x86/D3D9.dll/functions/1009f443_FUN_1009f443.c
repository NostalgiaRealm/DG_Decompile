/*
 * FUN_1009f443 at 1009f443
 * undefined1 __fastcall FUN_1009f443(uint * param_1, byte * param_2, int * param_3, int * param_4)
 * Address ranges: 1009f443-100a061c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1009f443(uint *param_1,byte *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  undefined2 uVar12;
  byte bVar15;
  uint uVar13;
  uint uVar14;
  int extraout_EDX;
  undefined3 uVar16;
  byte bVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int *piVar21;
  bool bVar22;
  int local_154 [4];
  uint local_144 [5];
  uint local_130;
  uint local_12c [4];
  char local_11c;
  int *local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint *local_fc;
  int local_f8;
  uint local_f4;
  int local_f0 [32];
  uint local_70 [3];
  uint *local_64;
  undefined2 local_60;
  undefined1 local_5e;
  byte local_5d;
  uint local_5c;
  uint *local_58;
  uint local_50;
  uint *local_4c;
  uint local_48;
  uint local_44 [5];
  uint *local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  uint local_10;
  byte local_a;
  char local_9;
  uint *local_8;
  
  piVar21 = param_3;
  local_4c = param_1;
  FUN_100cfed0(param_3,0,0x1270);
  local_50 = *param_1;
  if ((local_50 == 0xffff0200) || (local_50 == 0xffff0201)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  local_118 = piVar21;
  local_114 = 0;
  local_11c = '\x01' - (local_50 < 0xffff0201);
  local_110 = 0;
  local_fc = local_4c + 1;
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 0;
  FUN_100cfed0(local_f0,0,0x80);
  puVar19 = local_70;
  for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  *(char *)((int)local_118 + 0x126e) = (char)local_50;
  *(undefined1 *)((int)local_118 + 0x126d) = 2;
  *(undefined1 *)((int)local_118 + 0x14a) = 1;
  local_f0[0] = 0;
  piVar21 = local_118 + 0x487;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *piVar21 = -1;
    piVar21 = piVar21 + 1;
  }
  local_48 = 0x200;
  local_144[4] = 0x200;
  local_130 = 0x200;
  uVar14 = local_48;
  if ((param_2 != (byte *)0x0) &&
     (local_144[4] = *(uint *)(param_2 + 0x10), local_130 = local_144[4], uVar14 = local_144[4],
     (*param_2 & 0x10) == 0)) {
    local_130 = 0x20;
    uVar14 = local_48;
  }
  local_48 = uVar14;
  if (*(char *)((int)local_118 + 0x126e) != '\0') {
    local_48 = 0x200;
    local_130 = 0x200;
    local_144[4] = 0x200;
  }
  local_9 = '\0';
  if (bVar11 == 0) {
LAB_100a04e1:
    puVar19 = local_fc;
    piVar21 = param_3;
    uVar14 = 0;
    do {
      if ((param_3[uVar14 + 0xbc] == 0) ||
         (bVar17 = 0, *(char *)((int)param_3 + uVar14 + 0x180) != '\0')) {
        bVar17 = 1;
      }
      bVar11 = bVar11 & bVar17;
      uVar14 = uVar14 + 1;
    } while (uVar14 < 0x10);
    uVar14 = 0;
    piVar1 = param_3 + 0xbc;
    do {
      if (*(char *)((int)param_3 + uVar14 + 0x2a) != '\0') {
        *(byte *)(param_3 + 0x49b) = *(byte *)(param_3 + 0x49b) | (byte)(1 << (uVar14 & 0x1f));
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 8);
    uVar6 = 0;
    if (bVar11 != 0) {
      param_3 = (int *)0x0;
      puVar8 = (uint *)&DAT_100d7324;
      if (local_11c == '\0') {
        puVar8 = (uint *)&DAT_100d7310;
      }
      uVar14 = FUN_100a1c89(local_4c,local_58,(int)piVar1,puVar8,(uint *)&param_3);
      uVar6 = (undefined1)uVar14;
      *(undefined1 *)((int)piVar21 + 0x149) = param_3._0_1_;
      *param_4 = (int)puVar19 - (int)local_4c >> 2;
    }
    return uVar6;
  }
  local_10 = local_f4;
LAB_1009f59f:
  local_8 = local_fc;
  if (local_9 == '\0') {
    local_70[0] = *local_fc;
    local_70[1] = local_70[0] & 0xffff;
    local_64 = (uint *)0x1;
    local_70[2] = local_70[0] & 0xe0ff0000;
    local_5d = (byte)(local_70[0] >> 0x1c) & 1;
    local_14 = (uint)local_5d;
    local_5e = 1;
    bVar11 = 1U - ((local_70[0] & 0xc0000000) != 0) & bVar11;
    local_18 = (uint *)CONCAT31((int3)(-(local_70[0] & 0xc0000000) >> 8),bVar11);
    local_60 = 0xf0f;
    local_44[4] = local_70[2];
    if (local_70[1] == 0x1f) {
      puVar19 = (uint *)local_fc[2];
      local_30 = (uint *)local_fc[1];
      uVar13 = ((uint)puVar19 >> 0x14 & 0x700 | (uint)puVar19 & 0x1800) >> 8;
      uVar14 = (uint)puVar19 & 0x7ff;
      bVar17 = 0;
      if (((uint)local_30 & 0x87ffffff) == 0x80000000) {
        bVar17 = (byte)((uint)puVar19 >> 0x1f);
      }
      if ((local_114 == 0) && (local_70[2] == 0)) {
        bVar15 = 1;
      }
      else {
        bVar15 = 0;
      }
      if (((uVar13 == 1) || (uVar13 == 3)) || (uVar13 == 10)) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      bVar9 = bVar9 & bVar11 & bVar17 & bVar15;
      bVar11 = 0;
      local_28 = uVar14;
      local_18 = puVar19;
      if (bVar9 != 0) {
        bVar11 = -(uVar14 < (byte)(&DAT_100d33cc)[uVar13 * 2 + (uint)(local_11c != '\0')]) & bVar9;
        uVar6 = (undefined1)(((uint)puVar19 & 0xf0000) >> 0x10);
        if (((uint)puVar19 & 0xf0000) == 0) {
          uVar6 = 0xf;
        }
        if (uVar13 == 1) {
          *(undefined1 *)((int)&local_108 + uVar14) = uVar6;
          bVar11 = bVar11 & 1U - (((uint)puVar19 & 0xf00000) != 0) &
                            1U - (((uint)local_30 & 0x78000000) != 0);
        }
        else {
          if (uVar13 != 3) {
            if (uVar13 == 10) {
              uVar13 = (uint)local_30 & 0x78000000;
              *(byte *)(uVar14 + 0x14f + (int)local_118) = (byte)(uVar13 >> 0x1b);
              if (((uVar13 == 0x10000000) || (uVar13 == 0x18000000)) || (uVar13 == 0x20000000)) {
                bVar17 = 1;
              }
              else {
                bVar17 = 0;
              }
              bVar15 = 0;
              if (((uint)puVar19 & 0xf00000) == 0) {
                bVar15 = bVar17;
              }
              bVar11 = bVar11 & bVar15;
            }
            goto LAB_100a04c7;
          }
          uVar13 = (uint)puVar19 & 0xf00000;
          uVar20 = (uint)local_30 & 0x78000000;
          *(undefined1 *)((int)&local_108 + uVar14 + 2) = uVar6;
          if (((uVar13 == 0x200000) || (uVar13 == 0x400000)) ||
             ((uVar13 == 0x600000 || (uVar13 == 0)))) {
            bVar17 = 1;
          }
          else {
            bVar17 = 0;
          }
          bVar15 = 0;
          if (uVar20 == 0) {
            bVar15 = bVar17;
          }
          bVar11 = bVar11 & bVar15;
          if (((uint)puVar19 & 0x400000) != 0) {
            pbVar2 = (byte *)((int)local_118 + ((int)uVar14 >> 3) + 0x140);
            *pbVar2 = *pbVar2 | '\x01' << ((uint)puVar19 & 7);
          }
        }
        local_10 = local_f4;
LAB_100a04c7:
        local_fc = local_fc + 3;
        goto LAB_100a04cd;
      }
    }
    else {
      if (local_70[1] == 0x2f) {
        uVar14 = local_fc[1];
        if ((local_114 == 0) && (local_5d == 0)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((((local_70[2] == 0) && ((int)uVar14 < 0)) &&
            ((uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) == 0xe00)) &&
           (((uVar14 & 0xfff0000) == 0xf0000 && ((uVar14 & 0x7f0) == 0)))) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        bVar11 = bVar11 & bVar17 & bVar15;
        if (bVar11 != 0) {
          *(undefined1 *)((uVar14 & 0x7ff) + 0x2a0 + (int)local_118) = 1;
          local_118[(uVar14 & 0x7ff) + 0xac] = local_fc[2];
        }
        goto LAB_100a04c7;
      }
      if (local_70[1] == 0x30) {
        uVar14 = local_fc[1];
        uVar13 = uVar14 & 0x7ff;
        if ((local_114 == 0) && (local_5d == 0)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((((local_70[2] == 0) && ((int)uVar14 < 0)) &&
            ((uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) == 0x700)) &&
           ((((uVar14 & 0xfff0000) == 0xf0000 && (local_fc[3] == 0)) &&
            ((local_fc[4] == 0 && ((uVar14 & 0x7f0) == 0 && local_fc[5] == 0)))))) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        bVar11 = bVar11 & bVar17 & bVar15;
        if (bVar11 != 0) {
          *(undefined1 *)(uVar13 + 400 + (int)local_118) = 1;
          local_118[uVar13 * 4 + 0x68] = local_fc[2];
          local_118[uVar13 * 4 + 0x69] = local_fc[3];
          local_118[uVar13 * 4 + 0x6a] = local_fc[4];
          local_118[uVar13 * 4 + 0x6b] = local_fc[5];
        }
LAB_100a026f:
        local_fc = local_fc + 6;
        goto LAB_100a04cd;
      }
      if (local_70[1] == 0x51) {
        uVar14 = local_fc[1];
        uVar13 = uVar14 & 0x7ff;
        if ((local_114 == 0) && (local_5d == 0)) {
          bVar17 = 1;
        }
        else {
          bVar17 = 0;
        }
        if ((((local_70[2] == 0) && ((int)uVar14 < 0)) &&
            ((uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) == 0x200)) &&
           (((uVar14 & 0xfff0000) == 0xf0000 && (uVar13 < (byte)(&DAT_100d33d0)[local_11c != '\0']))
           )) {
          bVar15 = 1;
        }
        else {
          bVar15 = 0;
        }
        bVar11 = bVar11 & bVar17 & bVar15;
        if (bVar11 != 0) {
          *(undefined1 *)(uVar13 + 0x331 + (int)local_118) = 1;
          local_118[uVar13 * 4 + 0x105] = local_fc[2];
          local_118[uVar13 * 4 + 0x106] = local_fc[3];
          local_118[uVar13 * 4 + 0x107] = local_fc[4];
          local_118[uVar13 * 4 + 0x108] = local_fc[5];
        }
        goto LAB_100a026f;
      }
      if (local_70[1] == 0xfffe) {
        bVar11 = bVar11 & (local_5d ^ 1);
        local_fc = local_fc + (local_70[0] >> 0x10) + 1;
        goto LAB_100a04cd;
      }
      if (local_70[1] == 0xffff) {
        bVar17 = 0;
        if (local_70[2] == 0) {
          bVar17 = local_5d ^ 1;
        }
        bVar15 = 0;
        if (local_10 == 0) {
          bVar15 = bVar11;
        }
        uVar14 = 0;
        bVar11 = bVar17 & bVar15;
        do {
          if (local_118[uVar14 + 0xbc] != 0) {
            bVar11 = local_5c == 0x1c;
            break;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 0x10);
        local_fc = local_fc + 1;
        local_9 = '\x01';
        goto LAB_100a04cd;
      }
      bVar17 = 0;
      if (local_70[1] < 0x61) {
        bVar17 = bVar11;
      }
      bVar17 = 1U - ((local_70[0] & 0xe0000000) != 0) & bVar17;
      if (((local_70[2] >> 0x10 & 0xff) != 0) &&
         (((((local_70[1] != 0x2d && (local_70[1] != 0x29)) && (local_70[1] != 0x5e)) ||
           (0x60000 < (local_70[0] & 0xff0000))) &&
          ((local_70[1] != 0x42 ||
           (((local_70[0] & 0xff0000) != 0x10000 && ((local_70[0] & 0xff0000) != 0x20000)))))))) {
        bVar17 = 0;
      }
      local_2c = (int)(char)(&DAT_100d30d0)[local_70[1]];
      if (local_2c == -1) {
LAB_1009f6e6:
        bVar11 = 0;
      }
      else {
        iVar10 = local_2c * 0xe;
        if (((((&DAT_100d3138)[iVar10] & 8) != 0) && (local_11c == '\0')) ||
           ((local_5d != 0 &&
            ((((&DAT_100d3138)[iVar10] & 4) != 0 ||
             ((*(short *)(&DAT_100d313e + iVar10) == 0 && (*(short *)(&DAT_100d313c + iVar10) == 0))
             )))))) goto LAB_1009f6e6;
        bVar11 = 1;
      }
      local_2c = local_2c * 0xe;
      bVar11 = bVar11 & bVar17;
      local_18 = local_fc + 1;
      uVar14 = *local_18;
      if ((*(short *)(&DAT_100d313c + local_2c) != 0) && (-1 < (int)uVar14)) {
        bVar11 = 0;
      }
      if ((local_5d == 0) || (local_11c != '\0')) {
        bVar17 = 1;
      }
      else {
        bVar17 = 0;
      }
      bVar17 = bVar17 & bVar11;
      bVar11 = 0;
      if (bVar17 != 0) {
        if (local_114 == 0) {
          local_58 = local_fc;
        }
        bVar15 = (&DAT_100d3138)[local_2c];
        if ((bVar15 & 1) == 0) {
          if ((bVar15 & 2) != 0) {
            local_118[0x486] = local_118[0x486] + 1;
            bVar22 = local_10c < local_130;
            bVar15 = (&DAT_100d3138)[local_2c];
            goto LAB_1009f774;
          }
        }
        else {
          bVar22 = local_110 < local_48;
LAB_1009f774:
          bVar17 = -bVar22 & bVar17;
        }
        bVar11 = -(local_114 < local_144[4]) & bVar17;
        if ((bVar15 & 1) == 0) {
          if ((bVar15 & 2) != 0) {
            local_10c = local_10c + (byte)(&DAT_100d3139)[local_2c];
          }
        }
        else {
          local_110 = local_110 + (byte)(&DAT_100d3139)[local_2c];
        }
        local_114 = local_114 + (byte)(&DAT_100d3139)[local_2c];
        local_28 = 0;
        local_20 = 0;
        local_1c = 0;
        local_24 = local_24 & 0xffffff00;
        local_30 = local_18;
        if (*(ushort *)(&DAT_100d313c + local_2c) != 0) {
          local_30 = local_fc + 2;
          uVar13 = (uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) >> 8;
          local_20 = uVar14 & 0x7ff;
          if ((local_20 < (byte)(&DAT_100d33cc)[uVar13 * 2 + (uint)(local_11c != '\0')]) &&
             ((uVar14 & 0xf000000) == 0)) {
            bVar17 = bVar11 & 1U - (0x700000 < (uVar14 & 0xf00000));
            bVar11 = 0;
            if (bVar17 != 0) {
              local_28 = (uint)*(ushort *)(&DAT_100d30a8 + uVar13 * 2);
              bVar11 = bVar17 & -((*(ushort *)(&DAT_100d313c + local_2c) &
                                  *(ushort *)(&DAT_100d30a8 + uVar13 * 2)) != 0);
            }
          }
          else {
            bVar11 = 0;
          }
          local_1c = 0xf0000;
          if ((uVar14 & 0xf0000) != 0) {
            local_1c = uVar14 & 0xf0000;
          }
          local_24 = local_1c >> 0x10;
          if (local_70[1] == 0x41) {
            local_24 = 7;
          }
        }
        if (local_5d != 0) {
          uVar14 = *local_30 & 0xff0000;
          if ((((int)*local_30 < 0) &&
              (((byte)(*local_30 >> 0x1c) & 7 | (byte)(*local_30 >> 8) & 0x18) == 0x13)) &&
             ((*local_30 & 0x7ff) == 0)) {
            bVar17 = 1;
          }
          else {
            bVar17 = 0;
          }
          bVar17 = bVar17 & bVar11;
          if (((*local_30 & 0xf000000) != 0) && ((*local_30 & 0xf000000) != 0xd000000)) {
            bVar17 = 0;
          }
          if (((uVar14 == 0xe40000) || (uVar14 == 0)) ||
             ((uVar14 == 0x550000 || ((uVar14 == 0xaa0000 || (bVar11 = 0, uVar14 == 0xff0000)))))) {
            bVar11 = 1;
          }
          bVar11 = bVar11 & bVar17;
          if (bVar11 != 0) {
            local_30 = local_30 + 1;
            local_8 = local_18;
          }
        }
        local_fc = local_8;
        local_64 = (uint *)FUN_100a1c39(local_70[1]);
        local_12c[0] = 0;
        local_12c[1] = 0;
        local_12c[2] = 0;
        local_12c[3] = 0;
        uVar14 = 0;
        local_44[0] = 0;
        local_44[1] = 0;
        local_44[2] = 0;
        local_44[3] = 0;
        local_154[0] = 0;
        local_154[1] = 0;
        local_144[0] = 0;
        local_144[1] = 0;
        local_144[2] = 0;
        local_144[3] = 0;
        local_50 = local_50 & 0xffffff00;
        bVar17 = 0;
        if (bVar11 != 0) {
          do {
            if ((3 < uVar14) || (*(short *)(&DAT_100d313e + uVar14 * 2 + local_2c) == 0)) break;
            local_14 = local_30[uVar14];
            uVar13 = (local_14 >> 0x14 & 0x700 | local_14 & 0x1800) >> 8;
            local_18 = (uint *)(local_14 & 0xf000000);
            local_44[uVar14] = local_14 & 0x7ff;
            local_154[uVar14] = (int)local_18;
            local_144[uVar14] = local_14 & 0xff0000;
            local_a = -((local_14 & 0x7ff) <
                       (uint)(byte)(&DAT_100d33cc)[uVar13 * 2 + (uint)(local_11c != '\0')]) &
                      (byte)(local_14 >> 0x1f) & bVar11;
            if (local_18 == (uint *)0x0) {
LAB_1009fa42:
              if (local_a != 0) {
                uVar3 = *(ushort *)(&DAT_100d30a8 + uVar13 * 2);
                local_12c[uVar14] = (uint)uVar3;
                uVar4 = *(ushort *)(&DAT_100d313e + uVar14 * 2 + local_2c);
                bVar11 = -((uVar4 & uVar3) != 0) & local_a;
                if (((uVar4 & 0x2000) != 0) && (local_18 != (uint *)0x0)) {
                  bVar11 = 0;
                }
                if (((uVar4 & 0x1000) == 0) || (local_144[uVar14] == 0xe40000)) {
                  bVar17 = 1;
                }
                else {
                  bVar17 = 0;
                }
                uVar7 = FUN_100a1baf(local_144[uVar14]);
                cVar5 = (char)uVar7;
                *(char *)((int)&local_50 + uVar14) = cVar5;
                if ((((extraout_EDX == 0xe40000) || (extraout_EDX == 0xc90000)) ||
                    (extraout_EDX == 0xd20000)) || (extraout_EDX == 0x1b0000)) {
                  bVar22 = true;
                }
                else {
                  bVar22 = false;
                }
                if (((uVar4 & 0x800) == 0) || (cVar5 != '\0')) {
                  bVar15 = 1;
                }
                else {
                  bVar15 = 0;
                }
                local_a = bVar15 & -((bVar22 || cVar5 != '\0') || local_11c != '\0') &
                                   bVar17 & bVar11;
              }
            }
            else {
              if (local_18 == (uint *)&DAT_01000000) {
                if (((uVar13 != 0) && (uVar13 != 1)) && (uVar13 != 2)) {
                  bVar22 = uVar13 == 3;
LAB_1009fa37:
                  if (!bVar22) goto LAB_1009fa39;
                }
                goto LAB_1009fa42;
              }
              if (local_18 == (uint *)0xd000000) {
                if (uVar13 != 0x13) {
                  bVar22 = uVar13 == 0xe;
                  goto LAB_1009fa37;
                }
                goto LAB_1009fa42;
              }
LAB_1009fa39:
              local_a = 0;
            }
            iVar10 = local_2c;
            uVar13 = local_70[1];
            bVar11 = (&DAT_100d313b)[local_2c];
            if ((local_70[1] == 0x5a) && (uVar14 < 2)) {
              bVar11 = 3;
            }
            if ((((local_70[1] == 0x42) && (uVar14 == 0)) ||
                ((local_70[1] == 0x5d && (uVar14 != 1)))) &&
               (bVar11 = ((*(byte *)((local_8[3] & 0x7ff) + 0x14f + (int)local_118) & 0x1f) != 2) *
                         '\x04' + 3, local_44[4] != 0)) {
              bVar11 = bVar11 | 8;
            }
            bVar17 = bVar11 & (byte)local_24;
            if ((&DAT_100d313a)[local_2c] == '\0') {
              bVar17 = bVar11;
            }
            bVar11 = FUN_100a1bd2(local_144[uVar14],bVar17);
            uVar20 = (uint)bVar11 << 8;
            uVar12 = (undefined2)uVar20;
            if (uVar13 != 0x1e) {
              if ((uVar14 == 2) || (*(short *)(&DAT_100d3140 + uVar14 * 2 + iVar10) == 0)) {
                local_18 = local_64;
                if (local_64 == (uint *)0x0) goto LAB_1009fcfb;
              }
              else {
                local_18 = (uint *)0x1;
              }
              uVar18 = local_12c[uVar14];
              puVar19 = (uint *)0x0;
              do {
                bVar11 = (byte)(uVar20 >> 8);
                uVar16 = (undefined3)(uVar20 >> 8);
                if (uVar18 < 0x11) {
                  if (uVar18 == 0x10) {
                    ((undefined1 *)((int)puVar19 + local_44[uVar14] + 0x16f))[(int)local_118] = 1;
                    goto LAB_1009fcec;
                  }
                  if (uVar18 == 1) {
                    uVar20 = CONCAT31(uVar16,*(undefined1 *)
                                              ((int)&local_108 +
                                              (int)(local_44[uVar14] + (int)puVar19)));
                    pbVar2 = (undefined1 *)(local_44[uVar14] + (int)puVar19) + (int)local_118;
                    *pbVar2 = *pbVar2 | bVar11;
                  }
                  else {
                    if (uVar18 == 2) {
                      pbVar2 = (undefined1 *)((int)puVar19 + local_44[uVar14] + 0x38) +
                               (int)local_118;
                      *pbVar2 = *pbVar2 | bVar11;
                      goto LAB_1009fcec;
                    }
                    if (uVar18 == 4) {
                      bVar17 = ((undefined1 *)((int)puVar19 + local_44[uVar14] + 10))
                               [(int)local_118];
                      uVar20 = CONCAT31(uVar16,bVar17);
                      ((undefined1 *)((int)puVar19 + local_44[uVar14] + 10))[(int)local_118] =
                           bVar17 | bVar11;
                      uVar18 = local_12c[uVar14];
                    }
                    else if (uVar18 == 8) {
                      pbVar2 = (undefined1 *)((int)puVar19 + local_44[uVar14] + 0x15f) +
                               (int)local_118;
                      *pbVar2 = *pbVar2 | bVar11;
                      goto LAB_1009fcec;
                    }
                  }
                }
                else {
                  if (uVar18 != 0x20) {
                    if (uVar18 == 0x40) {
                      uVar20 = CONCAT31(uVar16,(((undefined1 *)
                                                ((int)puVar19 + local_44[uVar14] + 0x14f))
                                                [(int)local_118] == '\0') + -1) & 0xffffff0f;
                    }
                    else if (uVar18 == 0x80) {
                      uVar20 = CONCAT31(uVar16,*(undefined1 *)
                                                ((int)puVar19 +
                                                (int)&local_108 + local_44[uVar14] + 2));
                      pbVar2 = (undefined1 *)((int)puVar19 + local_44[uVar14] + 0x2a) +
                               (int)local_118;
                      *pbVar2 = *pbVar2 | bVar11;
                    }
                    else if (uVar18 == 0x400) {
                      ((undefined1 *)((int)puVar19 + local_44[uVar14] + 0x180))[(int)local_118] = 1;
                      goto LAB_1009fcec;
                    }
                    goto LAB_1009fcee;
                  }
                  pbVar2 = (undefined1 *)((int)puVar19 + local_44[uVar14] + 0x17f) + (int)local_118;
                  *pbVar2 = *pbVar2 | bVar11;
LAB_1009fcec:
                  uVar20 = CONCAT31(uVar16,0xf);
                }
LAB_1009fcee:
                uVar12 = (undefined2)uVar20;
                puVar19 = (uint *)((int)puVar19 + 1);
                uVar13 = local_70[1];
              } while (puVar19 < local_18);
            }
LAB_1009fcfb:
            bVar17 = ~(byte)(local_14 >> 0xd) & local_a;
            if (((uVar13 != 0x58) || (bVar11 = bVar17, uVar14 == 0)) &&
               (bVar15 = (byte)((ushort)uVar12 >> 8), bVar11 = 0, ((byte)uVar12 & bVar15) == bVar15)
               ) {
              bVar11 = bVar17;
            }
            uVar14 = uVar14 + 1;
          } while (bVar11 != 0);
          bVar17 = (byte)local_50;
        }
        bVar15 = (byte)local_24;
        if (local_28 == 4) {
          pbVar2 = (byte *)(local_20 + 10 + (int)local_118);
          *pbVar2 = *pbVar2 | bVar15;
        }
        else if (local_28 == 0x20) {
LAB_1009fdc2:
          pbVar2 = (byte *)(local_20 + 0x17f + (int)local_118);
          *pbVar2 = *pbVar2 | bVar15;
        }
        else if (local_28 == 0x80) {
          pbVar2 = (byte *)(local_20 + 0x2a + (int)local_118);
          *pbVar2 = *pbVar2 | bVar15;
        }
        else if (local_28 == 0x100) {
          pbVar2 = (byte *)(local_20 + 0x14b + (int)local_118);
          *pbVar2 = *pbVar2 | bVar15;
        }
        else if (local_28 == 0x200) {
          if (((local_1c == 0xf0000) && (bVar17 != 0)) && (local_154[0] == 0)) {
            bVar11 = (char)local_118[0xcc] == '\0' & bVar11;
          }
          else {
            bVar11 = 0;
          }
          *(undefined1 *)(local_118 + 0xcc) = 1;
          goto LAB_1009fdc2;
        }
        if (local_70[1] < 0x25) {
          if (local_70[1] == 0x24) {
            if ((local_28 == local_12c[0]) && (local_20 == local_44[0])) goto LAB_1009ff64;
LAB_1009fe50:
            bVar22 = true;
          }
          else {
            if (local_70[1] < 0x18) {
              if (local_70[1] == 0x17) {
LAB_1009fe57:
                bVar22 = local_1c == 0x70000;
              }
              else {
                if ((((local_70[1] == 6) || (local_70[1] == 7)) || (local_70[1] == 0xe)) ||
                   (local_70[1] == 0xf)) goto LAB_100a0059;
                if (local_70[1] != 0x14) {
                  if (local_70[1] == 0x15) goto LAB_1009fe57;
                  if (local_70[1] != 0x16) goto switchD_1009ff86_default;
                }
                bVar22 = local_1c == 0xf0000;
              }
            }
            else {
              if (local_70[1] != 0x18) {
                if ((local_70[1] == 0x19) || (local_70[1] == 0x1a)) {
                  *(undefined1 *)((int)local_118 + 0x14a) = 0;
                }
                else {
                  if (local_70[1] == 0x1c) {
                    bVar22 = local_f0[local_10] == 0;
                    goto LAB_100a011d;
                  }
                  if (local_70[1] == 0x1e) {
                    bVar11 = bVar11 & local_5c == 0x1c;
                    local_118[local_44[0] + 0xbc] = (int)local_8 - (int)local_4c >> 2;
                    *(undefined1 *)((int)local_118 + 0x14a) = 0;
                  }
                  else if (local_70[1] == 0x21) {
                    if (((local_1c == 0x10000) || (local_1c == 0x20000)) ||
                       ((local_1c == 0x40000 ||
                        ((((local_1c == 0x30000 || (local_1c == 0x50000)) || (local_1c == 0x60000))
                         || (local_1c == 0x70000)))))) {
                      bVar17 = 1;
                    }
                    else {
                      bVar17 = 0;
                    }
                    uVar14 = local_20;
                    uVar13 = local_28;
                    if ((local_28 != local_12c[0]) || (local_20 != local_44[0]))
                    goto joined_r0x1009fee8;
                    goto LAB_1009feef;
                  }
                }
                goto switchD_1009ff86_default;
              }
              bVar22 = local_1c == 0x30000;
            }
            if ((bVar22) && (local_154[1] == 0)) goto LAB_1009fe50;
LAB_1009ff64:
            bVar22 = false;
          }
LAB_100a011d:
          bVar11 = bVar11 & bVar22;
          goto switchD_1009ff86_default;
        }
        if (0x41 < local_70[1]) {
          if ((local_70[1] != 0x42) && (local_70[1] != 0x5d)) {
            if (local_70[1] == 0x60) {
              for (uVar14 = 1; bVar17 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
                if ((local_f0[uVar14] == 1) || (local_f0[uVar14] == 2)) goto LAB_100a0057;
              }
              goto LAB_100a0059;
            }
            goto switchD_1009ff86_default;
          }
          local_118[0x485] = local_118[0x485] | 1 << (local_44[1] & 0x1f);
LAB_100a0114:
          bVar22 = local_1c == 0xf0000;
          goto LAB_100a011d;
        }
        if (local_70[1] == 0x41) goto LAB_100a0114;
        switch(local_70[1]) {
        case 0x25:
          uVar14 = local_44[2];
          uVar13 = local_12c[2];
          if (((local_1c == 0x10000) || (local_1c == 0x20000)) || (local_1c == 0x30000)) {
            bVar17 = 1;
          }
          else {
            bVar17 = 0;
          }
joined_r0x1009fee8:
          bVar11 = bVar17 & bVar11;
          if ((uVar13 == local_12c[1]) && (uVar14 == local_44[1])) {
LAB_1009feef:
            bVar11 = 0;
          }
          break;
        case 0x26:
          local_f0[local_10 + 1] = 2;
          goto LAB_1009ffaa;
        case 0x27:
          bVar22 = local_f0[local_10] == 2;
          goto LAB_1009ffdc;
        case 0x28:
        case 0x29:
          local_f0[local_10 + 1] = 3;
LAB_1009ffaa:
          local_f4 = local_10 + 1;
          bVar11 = bVar11 & local_10 < 0x20;
          local_f8 = local_f8 + 1;
          *(undefined1 *)((int)local_118 + 0x14a) = 0;
          local_10 = local_f4;
          local_8 = local_fc;
          break;
        case 0x2a:
          bVar22 = local_f0[local_10] == 3;
          goto LAB_100a011d;
        case 0x2b:
          bVar22 = local_f0[local_10] == 3;
LAB_1009ffdc:
          bVar11 = bVar11 & bVar22;
          local_f4 = local_10 - 1;
          local_f8 = local_f8 + -1;
          local_10 = local_f4;
          break;
        case 0x2c:
          for (uVar14 = 1; bVar17 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
            if ((local_f0[uVar14] == 1) || (local_f0[uVar14] == 2)) goto LAB_100a0057;
          }
          goto LAB_100a0059;
        case 0x2d:
          for (uVar14 = 1; bVar17 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
            if ((local_f0[uVar14] == 1) || (local_f0[uVar14] == 2)) goto LAB_100a0057;
          }
          goto LAB_100a0059;
        }
        goto switchD_1009ff86_default;
      }
    }
  }
  goto LAB_100a04e1;
LAB_100a0057:
  bVar17 = 1;
LAB_100a0059:
  bVar11 = bVar11 & bVar17;
switchD_1009ff86_default:
  if (*(short *)(&DAT_100d313c + local_2c) != 0) {
    local_8 = local_8 + 1;
  }
  uVar14 = 0;
  if (bVar11 != 0) {
    while ((uVar14 < 4 && (*(short *)(&DAT_100d313e + uVar14 * 2 + local_2c) != 0))) {
      local_8 = local_8 + 1;
      uVar14 = uVar14 + 1;
    }
  }
  local_fc = local_8 + 1;
  local_5c = local_70[1];
LAB_100a04cd:
  local_8 = local_fc;
  if (bVar11 == 0) goto LAB_100a04e1;
  goto LAB_1009f59f;
}

