/*
 * FUN_100a22d0 at 100a22d0
 * undefined1 __fastcall FUN_100a22d0(uint * param_1, undefined2 param_2, int * param_3, int * param_4)
 * Address ranges: 100a22d0-100a32fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_100a22d0(uint *param_1,undefined2 param_2,int *param_3,int *param_4)

{
  byte *pbVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined1 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  uint *puVar10;
  byte bVar11;
  byte bVar12;
  undefined2 uVar13;
  byte bVar17;
  uint uVar14;
  uint uVar15;
  uint extraout_EDX;
  uint uVar16;
  uint extraout_EDX_00;
  byte bVar18;
  undefined3 uVar19;
  int *piVar20;
  uint uVar21;
  bool bVar22;
  uint auStack_194 [10];
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined2 local_160;
  undefined2 local_15e;
  undefined2 local_15c;
  undefined2 local_15a;
  undefined2 local_158;
  undefined2 local_156;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined2 local_122;
  undefined2 local_120;
  undefined2 local_11e;
  char local_11c;
  undefined2 *local_118;
  uint local_114;
  int *local_110;
  uint local_10c;
  uint *local_108;
  int local_104;
  uint local_100;
  int local_fc [32];
  uint local_7c [3];
  uint *local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  byte local_69;
  uint local_68;
  uint *local_64;
  uint *local_60;
  uint local_5c [4];
  uint local_4c [5];
  uint local_38;
  uint local_34;
  uint *local_30;
  uint *local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  uint local_10;
  byte local_a;
  char local_9;
  uint local_8;
  
  local_60 = param_1;
  FUN_100cfed0(param_3,0,0x4a70);
  local_14 = (uint *)*param_1;
  if ((local_14 == (uint *)0xfffe0200) || (local_14 == (uint *)0xfffe0201)) {
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  local_16c = 0xc;
  local_16a = 0x20;
  local_168 = 0x10;
  local_166 = 0x20;
  local_15c = 3;
  local_158 = 2;
  local_154 = 8;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_12c = 0;
  local_128 = 0;
  local_120 = 0;
  local_11c = '\x01' - (local_14 < (uint *)0xfffe0201);
  local_160 = 1;
  local_118 = &local_16c;
  local_15e = 1;
  local_108 = local_60 + 1;
  local_150 = 0x10;
  local_130 = 1;
  local_12e = 1;
  local_11e = 1;
  local_114 = 0;
  local_110 = param_3;
  local_10c = 0;
  local_104 = 0;
  local_100 = 0;
  local_164 = param_2;
  local_162 = param_2;
  local_15a = local_15c;
  local_156 = local_158;
  local_152 = local_154;
  local_14e = local_150;
  local_134 = local_150;
  local_132 = local_150;
  local_124 = local_150;
  local_122 = local_150;
  FUN_100cfed0(local_fc,0,0x80);
  puVar10 = local_7c;
  for (iVar9 = 7; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  *(char *)((int)local_110 + 0x4a6d) = (char)local_14;
  *(undefined1 *)(local_110 + 0x129b) = 2;
  local_fc[0] = 0;
  local_9 = '\0';
  if ((char)uVar14 == '\0') {
LAB_100a3244:
    puVar5 = local_60;
    puVar10 = local_108;
    uVar16 = 0;
    do {
      if ((param_3[uVar16 + 0x128a] == 0) || (*(char *)((int)param_3 + uVar16 + 0x48b4) != '\0')) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      bVar11 = (byte)uVar14 & bVar11;
      uVar14 = (uint)bVar11;
      uVar16 = uVar16 + 1;
    } while (uVar16 < 0x10);
    for (uVar16 = 0; (bVar12 = 0, bVar11 != 0 && (bVar12 = (byte)uVar14, uVar16 < 0x10));
        uVar16 = uVar16 + 1) {
      if ((*(char *)((int)param_3 + uVar16 + 0x10) == '\0') ||
         ((local_114 & 1 << ((byte)uVar16 & 0x1f)) != 0)) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      bVar11 = bVar12 & bVar11;
      uVar14 = (uint)bVar11;
    }
    bVar11 = 0;
    if ((*(byte *)((int)param_3 + 0x441) & 0xf) == 0xf) {
      bVar11 = bVar12;
    }
    uVar6 = 0;
    if (bVar11 != 0) {
      local_14 = (uint *)0x0;
      uVar6 = FUN_100a2299(local_60,local_64,(int)(param_3 + 0x128a),(local_11c != '\0') + ' ',
                           (uint *)&local_14);
      *(undefined1 *)((int)param_3 + 0x4886) = local_14._0_1_;
      *param_4 = (int)puVar10 - (int)puVar5 >> 2;
    }
    return uVar6;
  }
  local_10 = local_100;
LAB_100a24b1:
  local_30 = local_108;
  if (local_9 == '\0') {
    local_7c[0] = *local_108;
    local_7c[1] = local_7c[0] & 0xffff;
    local_7c[2] = local_7c[0] & 0xe0ff0000;
    local_1c = local_7c[0] >> 0x1c & 0xffffff01;
    local_69 = (byte)local_1c;
    local_70 = (uint *)0x1;
    local_6c = 0xf0f;
    local_6a = 1;
    local_110[0x129a] = local_110[0x129a] + 1;
    bVar11 = 1U - ((local_7c[0] & 0xc0000000) != 0) & (byte)uVar14;
    if (local_7c[1] == 0x1f) {
      local_18 = local_108[1];
      uVar16 = local_108[2];
      local_a = (byte)local_18 & 0xf;
      local_4c[4] = local_18 >> 0x10;
      local_24 = uVar16 & 0x7ff;
      if ((local_10c == 0) && (local_69 == 0)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      if ((((((local_7c[2] == 0) && ((int)uVar16 < 0)) &&
            ((uVar16 >> 0x14 & 0x700 | uVar16 & 0x1800) == 0x100)) &&
           (((uVar16 & 0xfff0000) == 0xf0000 &&
            (local_24 < (ushort)local_118[(*(char *)((int)local_110 + 0x4a6d) != '\0') + 2])))) &&
          ((local_18 & 0xfff0fff0) == 0x80000000)) && (local_a < 0xe)) {
        bVar18 = 1;
      }
      else {
        bVar18 = 0;
      }
      bVar18 = bVar11 & bVar12 & bVar18;
      uVar14 = (uint)bVar18;
      if (bVar18 != 0) {
        *(byte *)(local_24 + (int)local_110) = (byte)(local_18 >> 0x10) & 0xf ^ (byte)local_18 << 4;
        local_114 = local_114 | 1 << (uVar16 & 0x1f);
      }
LAB_100a3227:
      local_108 = local_108 + 3;
      goto LAB_100a322d;
    }
    if (local_7c[1] == 0x2f) {
      uVar14 = local_108[1];
      local_4c[4] = uVar14 & 0x7ff;
      if ((local_10c == 0) && (local_69 == 0)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      if ((((local_7c[2] == 0) && ((int)uVar14 < 0)) &&
          ((uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) == 0xe00)) &&
         (((uVar14 & 0xfff0000) == 0xf0000 && ((uVar14 & 0x7f0) == 0)))) {
        bVar18 = 1;
      }
      else {
        bVar18 = 0;
      }
      bVar18 = bVar11 & bVar12 & bVar18;
      uVar14 = (uint)bVar18;
      if (bVar18 != 0) {
        *(undefined1 *)(local_4c[4] + 0x49d8 + (int)local_110) = 1;
        local_110[local_4c[4] + 0x127a] = local_108[2];
      }
      goto LAB_100a3227;
    }
    if (local_7c[1] == 0x30) {
      uVar14 = local_108[1];
      local_4c[4] = uVar14 & 0x7ff;
      if ((local_10c == 0) && (local_69 == 0)) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      if ((((local_7c[2] == 0) && ((int)uVar14 < 0)) &&
          ((uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) == 0x700)) &&
         (((uVar14 & 0xfff0000) == 0xf0000 && ((uVar14 & 0x7f0) == 0 && local_108[5] == 0)))) {
        bVar18 = 1;
      }
      else {
        bVar18 = 0;
      }
      bVar18 = bVar11 & bVar12 & bVar18;
      uVar14 = (uint)bVar18;
      if (bVar18 != 0) {
        *(undefined1 *)(local_4c[4] + 0x48c5 + (int)local_110) = 1;
        local_110[local_4c[4] * 4 + 0x1236] = local_108[2];
        local_110[local_4c[4] * 4 + 0x1237] = local_108[3];
        local_110[local_4c[4] * 4 + 0x1238] = local_108[4];
        local_110[local_4c[4] * 4 + 0x1239] = local_108[5];
      }
LAB_100a3011:
      local_108 = local_108 + 6;
      goto LAB_100a322d;
    }
    if (local_7c[1] == 0x51) {
      uVar14 = local_108[1];
      uVar16 = uVar14 & 0x7ff;
      if ((local_10c != 0) || (local_a = 1, local_69 != 0)) {
        local_a = 0;
      }
      if ((((local_7c[2] == 0) && ((int)uVar14 < 0)) &&
          ((local_108[1] >> 0x14 & 0x700 | local_108[1] & 0x1800) == 0x200)) &&
         (((uVar14 & 0xfff0000) == 0xf0000 &&
          (uVar16 < (ushort)local_118[(*(char *)((int)local_110 + 0x4a6d) != '\0') + 4])))) {
        bVar12 = 1;
      }
      else {
        bVar12 = 0;
      }
      bVar12 = bVar11 & local_a & bVar12;
      uVar14 = (uint)bVar12;
      if (bVar12 != 0) {
        uVar7 = local_108[2];
        uVar15 = local_108[3];
        uVar21 = local_108[4];
        uVar3 = local_108[5];
        *(undefined1 *)(uVar16 + 0x44f + (int)local_110) = 1;
        puVar10 = (uint *)(local_110 + uVar16 * 4 + 0x214);
        *puVar10 = uVar7;
        puVar10[1] = uVar15;
        puVar10[2] = uVar21;
        puVar10[3] = uVar3;
      }
      goto LAB_100a3011;
    }
    if (local_7c[1] == 0xfffe) {
      uVar14 = (uint)(bVar11 & (local_69 ^ 1));
      local_108 = local_108 + (local_7c[0] >> 0x10) + 1;
      goto LAB_100a322d;
    }
    if (local_7c[1] == 0xffff) {
      bVar12 = 0;
      if (local_7c[2] == 0) {
        bVar12 = local_69 ^ 1;
      }
      bVar18 = 0;
      if (local_10 == 0) {
        bVar18 = bVar11;
      }
      bVar22 = (bool)(bVar12 & bVar18);
      uVar14 = 0;
      do {
        if (local_110[uVar14 + 0x128a] != 0) {
          bVar22 = local_68 == 0x1c;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 0x10);
      uVar14 = (uint)bVar22;
      local_108 = local_108 + 1;
      local_9 = '\x01';
      goto LAB_100a322d;
    }
    bVar12 = 0;
    if (local_7c[1] < 0x61) {
      bVar12 = bVar11;
    }
    bVar12 = 1U - ((local_7c[0] & 0xe0000000) != 0) & bVar12;
    if (((local_7c[2] >> 0x10 & 0xff) != 0) &&
       ((((local_7c[1] != 0x2d && (local_7c[1] != 0x29)) && (local_7c[1] != 0x5e)) ||
        (0x60000 < (local_7c[0] & 0xff0000))))) {
      bVar12 = 0;
    }
    local_28 = (int)(char)(&DAT_100d37c0)[local_7c[1]];
    if (local_28 == -1) {
LAB_100a25e0:
      bVar11 = 0;
    }
    else {
      iVar9 = local_28 * 0xc;
      if (((((&DAT_100d3828)[iVar9] & 8) != 0) && (local_11c == '\0')) ||
         ((local_69 != 0 &&
          ((((&DAT_100d3828)[iVar9] & 4) != 0 ||
           ((*(short *)(&DAT_100d382e + iVar9) == 0 && (*(short *)(&DAT_100d382c + iVar9) == 0))))))
         )) goto LAB_100a25e0;
      bVar11 = 1;
    }
    local_28 = local_28 * 0xc;
    bVar11 = bVar11 & bVar12;
    local_14 = local_108 + 1;
    uVar16 = *local_14;
    uVar2 = *(ushort *)(&DAT_100d382c + local_28);
    if ((uVar2 != 0) && (-1 < (int)uVar16)) {
      bVar11 = 0;
    }
    if ((local_69 == 0) || (local_11c != '\0')) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    bVar12 = bVar12 & bVar11;
    uVar14 = (uint)bVar12;
    if (bVar12 != 0) {
      if (local_10c == 0) {
        local_64 = local_108;
      }
      local_10c = local_10c + (byte)(&DAT_100d3829)[local_28];
      bVar12 = bVar12 & -(local_10c < 0x100);
      local_8 = (uint)bVar12;
      local_24 = 0;
      local_20 = 0;
      local_38 = 0;
      local_34 = local_34 & 0xffffff00;
      local_2c = local_14;
      if (uVar2 != 0) {
        local_2c = local_108 + 2;
        local_20 = uVar16 & 0x7ff;
        local_4c[3] = ((uVar16 >> 0x14 & 0x700 | uVar16 & 0x1800) >> 8) * 2;
        if ((local_20 <
             (ushort)local_118[(*(char *)((int)local_110 + 0x4a6d) != '\0') + local_4c[3]]) &&
           ((uVar16 & 0xf000000) == 0)) {
          bVar12 = bVar12 & 1U - ((uVar16 & 0xf00000) != 0);
          local_8 = (uint)bVar12;
          if (bVar12 != 0) {
            local_24 = (uint)*(ushort *)(&DAT_100d3798 + local_4c[3]);
            local_8 = (uint)(bVar12 & -((uVar2 & *(ushort *)(&DAT_100d3798 + local_4c[3])) != 0));
          }
        }
        else {
          local_8 = 0;
        }
        local_38 = 0xf0000;
        if ((uVar16 & 0xf0000) != 0) {
          local_38 = uVar16 & 0xf0000;
        }
        local_34 = local_38 >> 0x10;
      }
      local_30 = local_108;
      if (local_69 != 0) {
        uVar14 = *local_2c & 0xff0000;
        if ((((int)*local_2c < 0) &&
            (((byte)(*local_2c >> 0x1c) & 7 | (byte)(*local_2c >> 8) & 0x18) == 0x13)) &&
           ((*local_2c & 0x7ff) == 0)) {
          bVar11 = 1;
        }
        else {
          bVar11 = 0;
        }
        bVar11 = bVar11 & (byte)local_8;
        if (((*local_2c & 0xf000000) != 0) && ((*local_2c & 0xf000000) != 0xd000000)) {
          bVar11 = 0;
        }
        if (((uVar14 == 0xe40000) || (uVar14 == 0)) ||
           ((uVar14 == 0x550000 || ((uVar14 == 0xaa0000 || (uVar14 == 0xff0000)))))) {
          bVar12 = 1;
        }
        else {
          bVar12 = 0;
        }
        local_8 = (uint)(bVar12 & bVar11);
        local_30 = local_108;
        if ((bVar12 & bVar11) != 0) {
          local_2c = local_2c + 1;
          local_30 = local_14;
        }
      }
      uVar14 = local_8;
      puVar10 = local_30;
      local_108 = local_30;
      local_70 = (uint *)FUN_100a1c39(local_7c[1]);
      local_5c[1] = 0;
      local_5c[0] = 0;
      local_5c[2] = 0;
      local_4c[0] = 0;
      local_4c[1] = 0;
      local_4c[2] = 0;
      auStack_194[1] = 0;
      auStack_194[6] = 0;
      auStack_194[7] = 0;
      auStack_194[8] = 0;
      auStack_194[3] = 0;
      auStack_194[4] = 0;
      auStack_194[5] = 0;
      local_4c[3] = 0;
      local_18 = 0;
      piVar20 = local_110;
      if ((char)uVar14 != '\0') {
        do {
          uVar16 = local_18;
          if ((2 < local_18) || (*(short *)(&DAT_100d382e + local_18 * 2 + local_28) == 0)) break;
          local_5c[3] = local_4c[3] + local_18;
          local_8 = local_2c[local_4c[3] + local_18];
          uVar15 = local_8 & 0x7ff;
          uVar21 = (local_8 >> 0x14 & 0x700 | local_8 & 0x1800) >> 8;
          local_14 = (uint *)(local_8 & 0xf000000);
          auStack_194[local_18] = local_8 & 0xf000000;
          uVar7 = local_8 & 0xff0000;
          local_4c[uVar16] = uVar15;
          auStack_194[uVar16 + 6] = uVar7;
          puVar10 = local_14;
          uVar16 = local_18;
          iVar9 = local_28;
          piVar4 = local_110;
          auStack_194[9] = (uint)(*(char *)((int)piVar20 + 0x4a6d) != '\0');
          bVar11 = -(uVar15 < (ushort)local_118[auStack_194[9] + uVar21 * 2]) &
                   (byte)(local_8 >> 0x1f) & (byte)uVar14;
          if (local_14 != (uint *)0x0) {
            if (local_14 == (uint *)0x1000000) {
              if ((uVar21 != 0) && (uVar21 != 1)) {
                bVar22 = uVar21 == 2;
LAB_100a28e3:
                if (!bVar22) goto LAB_100a28e5;
              }
            }
            else if (local_14 == (uint *)0xd000000) {
              if (uVar21 != 0x13) {
                bVar22 = uVar21 == 0xe;
                goto LAB_100a28e3;
              }
            }
            else {
LAB_100a28e5:
              bVar11 = 0;
            }
          }
          local_8 = local_8 & 0x2000;
          uVar19 = (undefined3)(uVar14 >> 8);
          if ((local_8 == 0) || (uVar21 == 2)) {
            bVar12 = 1;
          }
          else {
            bVar12 = 0;
          }
          bVar18 = 0;
          if ((bVar12 & bVar11) != 0) {
            uVar2 = *(ushort *)(&DAT_100d3798 + uVar21 * 2);
            local_5c[local_18] = (uint)uVar2;
            bVar11 = -((*(ushort *)(&DAT_100d382e + uVar16 * 2 + iVar9) & uVar2) != 0) &
                     bVar12 & bVar11;
            if (((*(ushort *)(&DAT_100d382e + uVar16 * 2 + iVar9) & 0x4000) != 0) &&
               (puVar10 != (uint *)0x0)) {
              bVar11 = 0;
            }
            uVar19 = (undefined3)((uint)iVar9 >> 8);
            if (((*(ushort *)(&DAT_100d382e + uVar16 * 2 + iVar9) & 0x2000) == 0) ||
               (auStack_194[uVar16 + 6] == 0xe40000)) {
              bVar18 = 1;
            }
            else {
              bVar18 = 0;
            }
            bVar18 = bVar18 & bVar11;
            uVar8 = FUN_100a1baf(auStack_194[uVar16 + 6]);
            if (((extraout_EDX & 0x1000) != 0) && ((char)uVar8 == '\0')) {
              bVar18 = 0;
            }
            piVar20 = piVar4;
            if (local_8 != 0) {
              uVar14 = local_2c[local_5c[3] + 1];
              local_14 = (uint *)(uVar14 & 0x7ff);
              uVar16 = (uVar14 >> 0x14 & 0x700 | uVar14 & 0x1800) >> 8;
              local_4c[4] = uVar14 & 0xf000000;
              local_5c[3] = uVar14 & 0xff0000;
              if (((uVar16 == 3) &&
                  (uVar8 = FUN_100a1baf(uVar14), uVar16 = extraout_EDX_00, (char)uVar8 != '\0')) ||
                 ((uVar16 == 0xf && (local_5c[3] == 0xe40000)))) {
                bVar11 = 1;
              }
              else {
                bVar11 = 0;
              }
              piVar20 = local_110;
              if ((local_14 < (uint *)(uint)(ushort)local_118[auStack_194[9] + uVar16 * 2]) &&
                 (local_4c[4] == 0)) {
                bVar18 = bVar18 & bVar11;
              }
              else {
                bVar18 = 0;
              }
              if (uVar16 == 3) {
                bVar11 = FUN_100a1bd2(local_5c[3],0xf);
                *(byte *)((int)(local_14 + 0x10) + (int)piVar20) =
                     *(byte *)((int)(local_14 + 0x10) + (int)piVar20) | bVar11;
              }
              local_4c[3] = local_4c[3] + 1;
              auStack_194[local_18 + 3] = uVar14;
              uVar16 = local_18;
            }
          }
          bVar11 = (&DAT_100d382b)[local_28] & (byte)local_34;
          if ((&DAT_100d382a)[local_28] == '\0') {
            bVar11 = (&DAT_100d382b)[local_28];
          }
          bVar11 = FUN_100a1bd2(auStack_194[uVar16 + 6],bVar11);
          puVar10 = (uint *)0x0;
          iVar9 = (uint)bVar11 << 8;
          uVar13 = (undefined2)iVar9;
          if (local_7c[1] != 0x1e) {
            if ((uVar16 == 2) || (*(short *)(&DAT_100d3830 + uVar16 * 2 + local_28) == 0)) {
              local_14 = local_70;
              if (local_70 == (uint *)0x0) goto LAB_100a2b6f;
            }
            else {
              local_14 = (uint *)0x1;
            }
            do {
              bVar11 = (byte)((uint)iVar9 >> 8);
              if (local_5c[uVar16] < 0x11) {
                if (local_5c[uVar16] == 0x10) {
                  *(undefined1 *)((int)puVar10 + local_4c[uVar16] + 0x48a3 + (int)piVar20) = 1;
                }
                else {
                  uVar14 = local_5c[uVar16];
                  if (uVar14 == 1) {
                    pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x10 + (int)piVar20);
                    *pbVar1 = *pbVar1 | bVar11;
                  }
                  else if (uVar14 == 2) {
                    pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x41 + (int)piVar20);
                    *pbVar1 = *pbVar1 | bVar11;
                  }
                  else if (uVar14 == 4) {
                    pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x20 + (int)piVar20);
                    *pbVar1 = *pbVar1 | bVar11;
                  }
                  else {
                    if (uVar14 != 8) goto LAB_100a2b63;
                    pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x4893 + (int)piVar20);
                    *pbVar1 = *pbVar1 | bVar11;
                  }
                }
LAB_100a2b61:
                iVar9 = CONCAT31((int3)((uint)iVar9 >> 8),0xf);
              }
              else {
                uVar14 = local_5c[uVar16];
                if (uVar14 == 0x20) {
                  pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x48b3 + (int)piVar20);
                  *pbVar1 = *pbVar1 | bVar11;
                  goto LAB_100a2b61;
                }
                if (uVar14 == 0x40) {
                  pbVar1 = (byte *)((int)puVar10 + local_4c[uVar16] + 0x40 + (int)piVar20);
                  *pbVar1 = *pbVar1 | bVar11;
LAB_100a2b44:
                  *(undefined1 *)((int)puVar10 + local_4c[uVar16] + 0x48c4 + (int)piVar20) = 1;
                  goto LAB_100a2b61;
                }
                if (uVar14 == 0x80) goto LAB_100a2b44;
                if (uVar14 == 0x100) {
                  *(undefined1 *)((int)puVar10 + local_4c[uVar16] + 0x48b4 + (int)piVar20) = 1;
                  goto LAB_100a2b61;
                }
              }
LAB_100a2b63:
              uVar13 = (undefined2)iVar9;
              puVar10 = (uint *)((int)puVar10 + 1);
            } while (puVar10 < local_14);
          }
LAB_100a2b6f:
          if ((local_8 == 0) || (bVar11 = 0, local_5c[uVar16] == 2)) {
            bVar11 = 1;
          }
          bVar17 = (byte)((ushort)uVar13 >> 8);
          bVar12 = 0;
          if (((byte)uVar13 & bVar17) == bVar17) {
            bVar12 = bVar11;
          }
          uVar14 = CONCAT31(uVar19,bVar18 & bVar12);
          if (local_8 != 0) {
            *(undefined1 *)((int)piVar20 + 0x44e) = 1;
          }
          bVar11 = (byte)local_34;
          if (local_24 == 4) {
            pbVar1 = (byte *)(local_20 + 0x20 + (int)piVar20);
            *pbVar1 = *pbVar1 | bVar11;
          }
          else if (local_24 == 0x20) {
            pbVar1 = (byte *)(local_20 + 0x48b3 + (int)piVar20);
            *pbVar1 = *pbVar1 | bVar11;
          }
          else if (local_24 == 0x40) {
            pbVar1 = (byte *)(local_20 + 0x40 + (int)piVar20);
            *pbVar1 = *pbVar1 | bVar11;
          }
          else if (local_24 == 0x200) {
            *(byte *)(local_20 + 0x441 + (int)piVar20) =
                 (char)local_1c << 7 | *(byte *)(local_20 + 0x441 + (int)piVar20) | bVar11;
          }
          else if (local_24 == 0x400) {
            *(byte *)(local_20 + 0x444 + (int)piVar20) =
                 (char)local_1c << 7 | *(byte *)(local_20 + 0x444 + (int)piVar20) | bVar11;
          }
          else if (local_24 == 0x800) {
            *(byte *)(local_20 + 0x446 + (int)piVar20) =
                 (char)local_1c << 7 | *(byte *)(local_20 + 0x446 + (int)piVar20) | bVar11;
          }
          local_18 = uVar16 + 1;
        } while ((bVar18 & bVar12) != 0);
        local_8 = uVar14;
        puVar10 = local_30;
      }
      local_a = (byte)uVar14;
      if (0x60 < local_7c[1]) goto switchD_100a2c7e_caseD_19;
      uVar19 = (undefined3)(uVar14 >> 8);
      if (local_7c[1] == 0x60) {
        for (uVar14 = 1; bVar11 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
          if ((local_fc[uVar14] == 1) || (local_fc[uVar14] == 2)) goto LAB_100a2eba;
        }
        goto LAB_100a2ebc;
      }
      switch(local_7c[1]) {
      case 0x14:
      case 0x16:
        bVar22 = local_38 == 0xf0000;
        break;
      case 0x15:
      case 0x17:
        bVar22 = local_38 == 0x70000;
        break;
      case 0x18:
        bVar22 = local_38 == 0x30000;
        break;
      default:
        goto switchD_100a2c7e_caseD_19;
      case 0x1b:
        uVar14 = CONCAT31(uVar19,-(local_10 < 0x20) & local_a);
        local_100 = local_10 + 1;
        local_fc[local_10 + 1] = 1;
        goto LAB_100a2d65;
      case 0x1c:
        iVar9 = local_fc[local_10];
        goto LAB_100a2d8a;
      case 0x1d:
        bVar22 = local_fc[local_10] == 1;
        goto LAB_100a2d9d;
      case 0x1e:
        uVar14 = CONCAT31(uVar19,local_a & local_68 == 0x1c);
        local_110[local_4c[0] + 0x128a] = (int)puVar10 - (int)local_60 >> 2;
        goto LAB_100a2ebe;
      case 0x21:
        if (((((local_38 == 0x10000) || (local_38 == 0x20000)) ||
             ((local_38 == 0x40000 || ((local_38 == 0x30000 || (local_38 == 0x50000)))))) ||
            (local_38 == 0x60000)) || (local_38 == 0x70000)) {
          bVar11 = 1;
        }
        else {
          bVar11 = 0;
        }
        uVar14 = CONCAT31(uVar19,local_a & bVar11);
        if ((local_24 != local_5c[0]) || (local_20 != local_4c[0])) {
          if (local_24 == local_5c[1]) {
            bVar22 = local_20 == local_4c[1];
            goto LAB_100a2d06;
          }
          goto LAB_100a2c92;
        }
        goto LAB_100a2c96;
      case 0x24:
        if (local_24 == local_5c[0]) {
          bVar22 = local_20 == local_4c[0];
LAB_100a2d06:
          if (bVar22) goto LAB_100a2c96;
        }
        goto LAB_100a2c92;
      case 0x25:
        if (((local_38 == 0x10000) || (local_38 == 0x20000)) || (local_38 == 0x30000)) {
          bVar11 = 1;
        }
        else {
          bVar11 = 0;
        }
        uVar14 = CONCAT31(uVar19,local_a & bVar11);
        if (local_5c[1] == local_5c[2]) {
          bVar22 = local_4c[1] == local_4c[2];
          goto LAB_100a2d06;
        }
        goto LAB_100a2c92;
      case 0x26:
        uVar14 = CONCAT31(uVar19,local_a & local_10 < 0x20);
        local_100 = local_10 + 1;
        local_fc[local_10 + 1] = 2;
        goto LAB_100a2d65;
      case 0x27:
        bVar22 = local_fc[local_10] == 2;
        goto LAB_100a2d9d;
      case 0x28:
      case 0x29:
        uVar14 = CONCAT31(uVar19,local_a & local_10 < 0x20);
        local_100 = local_10 + 1;
        local_fc[local_10 + 1] = 3;
LAB_100a2d65:
        local_104 = local_104 + 1;
        local_10 = local_100;
        puVar10 = local_108;
        goto LAB_100a2ebe;
      case 0x2a:
        iVar9 = local_fc[local_10] + -3;
LAB_100a2d8a:
        bVar22 = iVar9 == 0;
        goto LAB_100a2c98;
      case 0x2b:
        bVar22 = local_fc[local_10] == 3;
LAB_100a2d9d:
        uVar14 = CONCAT31(uVar19,local_a & bVar22);
        local_10 = local_10 - 1;
        local_104 = local_104 + -1;
        local_100 = local_10;
        goto LAB_100a2ebe;
      case 0x2c:
        for (uVar14 = 1; bVar11 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
          if ((local_fc[uVar14] == 1) || (local_fc[uVar14] == 2)) goto LAB_100a2eba;
        }
        goto LAB_100a2ebc;
      case 0x2d:
        for (uVar14 = 1; bVar11 = 0, uVar14 <= local_10; uVar14 = uVar14 + 1) {
          if ((local_fc[uVar14] == 1) || (local_fc[uVar14] == 2)) goto LAB_100a2eba;
        }
        goto LAB_100a2ebc;
      }
      if ((bVar22) && (auStack_194[1] == 0)) {
LAB_100a2c92:
        bVar22 = true;
      }
      else {
LAB_100a2c96:
        bVar22 = false;
      }
LAB_100a2c98:
      uVar14 = CONCAT31((int3)(uVar14 >> 8),(byte)uVar14 & bVar22);
      goto LAB_100a2ebe;
    }
  }
  goto LAB_100a3244;
LAB_100a2eba:
  bVar11 = 1;
LAB_100a2ebc:
  uVar14 = CONCAT31(uVar19,local_a & bVar11);
LAB_100a2ebe:
  local_8 = uVar14;
switchD_100a2c7e_caseD_19:
  if (*(short *)(&DAT_100d382c + local_28) != 0) {
    puVar10 = puVar10 + 1;
  }
  uVar16 = 0;
  if ((char)uVar14 != '\0') {
    while ((uVar14 = local_8, uVar16 < 3 && (*(short *)(&DAT_100d382e + uVar16 * 2 + local_28) != 0)
           )) {
      if (((*(short *)(&DAT_100d382c + local_28) != 0) || (uVar16 != 0)) &&
         (auStack_194[uVar16 + 3] != 0)) {
        puVar10 = puVar10 + 1;
      }
      puVar10 = puVar10 + 1;
      uVar16 = uVar16 + 1;
    }
  }
  local_108 = puVar10 + 1;
  local_68 = local_7c[1];
LAB_100a322d:
  local_30 = local_108;
  if ((char)uVar14 == '\0') goto LAB_100a3244;
  goto LAB_100a24b1;
}

