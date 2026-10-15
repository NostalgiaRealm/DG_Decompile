/*
 * FUN_100eda90 at 100eda90
 * undefined FUN_100eda90(void)
 * Address ranges: 100eda90-100eee07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_100eda90(uint *param_1,uint *param_2,uint param_3,int *param_4)

{
  uint *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  undefined1 uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong extraout_x1;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong extraout_x11;
  ulonglong uVar32;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  int iVar33;
  uint extraout_w15;
  byte *pbVar34;
  uint uVar35;
  int iVar36;
  uint *puVar37;
  uint local_18c;
  int local_188;
  uint local_184;
  uint local_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  uint local_170;
  uint uStack_16c;
  uint local_168;
  int iStack_164;
  uint local_160;
  uint *local_15c;
  uint local_158 [4];
  byte local_148;
  uint local_144;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 local_130;
  uint *local_128;
  undefined8 local_124;
  int local_11c [32];
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  uint *local_84;
  uint local_80 [4];
  byte local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  uint local_58 [6];
  
  local_60 = param_3 + 0x1000;
  local_15c = param_1;
  local_5c = param_4;
  FUN_101325d0(param_3,0,0x1270);
  uVar28 = *param_1;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_124 = 0;
  bVar13 = uVar28 + 0xfe00 < 2;
  uVar22 = (ulonglong)bVar13;
  local_148 = 0xffff0200 < uVar28;
  param_1 = param_1 + 1;
  local_11c[2] = 0;
  local_11c[3] = 0;
  local_11c[6] = 0;
  local_11c[7] = 0;
  local_11c[4] = 0;
  local_11c[5] = 0;
  local_11c[10] = 0;
  local_11c[0xb] = 0;
  local_11c[8] = 0;
  local_11c[9] = 0;
  local_11c[0xe] = 0;
  local_11c[0xf] = 0;
  local_11c[0xc] = 0;
  local_11c[0xd] = 0;
  local_11c[0x12] = 0;
  local_11c[0x13] = 0;
  local_11c[0x10] = 0;
  local_11c[0x11] = 0;
  local_11c[0x16] = 0;
  local_11c[0x17] = 0;
  local_11c[0x14] = 0;
  local_11c[0x15] = 0;
  local_11c[0x1a] = 0;
  local_11c[0x1b] = 0;
  local_11c[0x18] = 0;
  local_11c[0x19] = 0;
  local_11c[0x1e] = 0;
  local_11c[0x1f] = 0;
  local_11c[0x1c] = 0;
  local_11c[0x1d] = 0;
  uVar19 = (ulonglong)param_3;
  local_11c[0] = 0;
  local_11c[1] = 0;
  uStack_94 = 0;
  uStack_9c = 0;
  local_8c = 0;
  local_84 = (uint *)0x0;
  *(char *)(param_3 + 0x126e) = (char)uVar28;
  *(undefined1 *)(param_3 + 0x126d) = 2;
  *(undefined1 *)(param_3 + 0x14a) = 1;
  *(undefined8 *)(param_3 + 0x1224) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x121c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1234) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x122c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1244) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x123c) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x1254) = 0xffffffffffffffff;
  *(undefined8 *)(param_3 + 0x124c) = 0xffffffffffffffff;
  if (param_2 == (uint *)0x0) {
    uVar28 = 0x200;
    uVar31 = 0x200;
    uVar29 = 0x200;
  }
  else {
    uVar28 = param_2[4];
    uVar31 = uVar28;
    uVar29 = uVar28;
    if ((*param_2 >> 4 & 1) == 0) {
      uVar31 = 0x200;
      uVar29 = 0x20;
    }
  }
  uVar17 = 0;
  uVar24 = (ulonglong)local_148;
  bVar12 = *(char *)(param_3 + 0x126e) == '\0';
  uVar16 = 0x200;
  uVar27 = 0x200;
  if (bVar12) {
    uVar16 = uVar29;
    uVar27 = uVar31;
  }
  uVar31 = 0x200;
  if (bVar12) {
    uVar31 = uVar28;
  }
  local_144 = param_3;
  local_128 = param_1;
  if (!bVar13) {
LAB_100eed14:
    puVar1 = local_15c;
    uVar28 = 0;
    do {
      if ((*(int *)(param_3 + 0x2f0 + uVar28 * 4) == 0) ||
         (*(char *)(uVar28 + param_3 + 0x180) != '\0')) {
        uVar31 = 1;
      }
      else {
        uVar31 = 0;
      }
      uVar28 = uVar28 + 1;
      uVar31 = uVar31 & (uint)uVar22;
      uVar22 = (ulonglong)uVar31;
    } while (uVar28 < 0x10);
    uVar28 = 0;
    do {
      if (*(char *)(param_3 + 0x2a + uVar28) != '\0') {
        *(byte *)(local_60 + 0x26c) =
             (byte)(1 << (ulonglong)(uVar28 & 0x1f)) | *(byte *)(local_60 + 0x26c);
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < 8);
    if (uVar31 != 0) {
      local_184 = 0;
      puVar2 = &DAT_10163af8;
      if ((uVar24 & 0xff) == 0) {
        puVar2 = &DAT_10163ae0;
      }
      bVar14 = FUN_100f0a00(local_15c,uVar17 & 0xffffffff,param_3 + 0x2f0,puVar2,&local_184);
      uVar22 = (ulonglong)bVar14;
      *(undefined1 *)(param_3 + 0x149) = (undefined1)local_184;
      *local_5c = (int)param_1 - (int)puVar1 >> 2;
    }
    return uVar22;
  }
  bVar13 = false;
  uVar26 = 0;
  uVar23 = 0;
  uVar25 = 0;
  uVar32 = 0;
  local_18c = 0;
  local_188 = 0;
  local_160 = param_3;
  local_6c = uVar27;
  local_68 = uVar16;
  local_64 = uVar31;
LAB_100edc04:
  param_3 = local_160;
  if (bVar13) goto LAB_100eed14;
  uVar27 = *param_1;
  uVar29 = uVar27 & 0xe0ff0000;
  uStack_94 = CONCAT44(1,uVar29);
  uVar31 = uVar27 & 0xffff;
  uVar15 = uVar27 >> 0x1c & 1;
  uStack_9c = CONCAT44(uVar27,uVar27) & 0xffffffffffff;
  uVar16 = (uint)((uVar27 & 0xc0000000) == 0) & (uint)uVar22;
  local_8c._0_4_ = CONCAT13((byte)uVar15,0x10f0f);
  uVar28 = (uint)uVar25;
  iVar18 = (int)uVar19;
  if (0x50 < uVar31) {
    if (uVar31 < 0x52) {
      uVar27 = param_1[1];
      uVar31 = uVar27 & 0x7ff;
      if ((uVar28 == 0) && (uVar15 == 0)) {
        uVar28 = 1;
      }
      else {
        uVar28 = 0;
      }
      if (((((uVar29 == 0) && ((int)uVar27 < 0)) &&
           ((uVar27 & 0x1800 | uVar27 >> 0x14 & 0x700) == 0x200)) &&
          (((uVar27 & 0xf000000) == 0 && ((uVar27 & 0xf0000) == 0xf0000)))) &&
         ((uVar27 & 0xf00000) == 0)) {
        uVar29 = 0xe0;
        if ((uVar24 & 0xff) == 0) {
          uVar29 = 0x20;
        }
        uVar27 = 1;
        if (uVar29 <= uVar31) goto LAB_100edcdc;
      }
      else {
LAB_100edcdc:
        uVar27 = 0;
      }
      uVar27 = uVar27 & uVar28 & uVar16;
      uVar22 = (ulonglong)uVar27;
      if (uVar27 != 0) {
        iVar36 = iVar18 + uVar31 * 0x10;
        *(undefined1 *)(uVar31 + iVar18 + 0x331) = 1;
        *(uint *)(iVar36 + 0x414) = param_1[2];
        *(uint *)(iVar36 + 0x418) = param_1[3];
        *(uint *)(iVar36 + 0x41c) = param_1[4];
        *(uint *)(iVar18 + (uVar31 + 0x42) * 0x10) = param_1[5];
      }
      goto LAB_100edd40;
    }
    if (uVar31 == 0xfffe) {
      uVar22 = (ulonglong)((uVar15 ^ 1) & uVar16);
      param_1 = param_1 + (uVar27 >> 0x10) + 1;
      local_128 = param_1;
      goto LAB_100eed04;
    }
    if (uVar31 != 0xffff) goto switchD_100eddf8_caseD_20;
    bVar14 = (byte)uVar15 ^ 1;
    if (uVar29 != 0) {
      bVar14 = 0;
    }
    if ((int)uVar23 != 0) {
      uVar16 = 0;
    }
    local_70 = (byte)uVar16;
    uVar28 = 0;
    do {
      if (*(int *)(iVar18 + uVar28 * 4 + 0x2f0) != 0) {
        bVar13 = local_188 == 0x1c;
        goto LAB_100eddb4;
      }
      uVar28 = uVar28 + 1;
    } while (uVar28 < 0x10);
    bVar13 = (bool)(local_70 & bVar14);
LAB_100eddb4:
    uVar22 = (ulonglong)bVar13;
    bVar13 = true;
    goto LAB_100eecfc;
  }
  switch(uVar31) {
  case 0x1f:
    uVar31 = param_1[1];
    uVar15 = param_1[2];
    uVar27 = uVar15 >> 0x1f;
    if ((uVar31 & 0x87ffffff) != 0x80000000) {
      uVar27 = 0;
    }
    uVar30 = (uVar15 & 0x1800 | uVar15 >> 0x14 & 0x7ff) >> 8;
    if ((uVar28 == 0) && (uVar29 == 0)) {
      uVar28 = 1;
    }
    else {
      uVar28 = 0;
    }
    if ((uVar30 < 0xb) && ((0x40aU >> uVar30 & 1) != 0)) {
      uVar29 = 1;
    }
    else {
      uVar29 = 0;
    }
    uVar29 = uVar29 & uVar28 & uVar27 & uVar16;
    if (uVar29 != 0) {
      puVar2 = &DAT_101636f0;
      if ((uVar24 & 0xff) != 0) {
        puVar2 = &DAT_101636f1;
      }
      uVar28 = uVar15 & 0x7ff;
      if ((byte)puVar2[uVar30 * 2] <= uVar28) {
        uVar29 = 0;
      }
      uVar22 = (ulonglong)uVar29;
      uVar7 = (undefined1)((uVar15 & 0xf0000) >> 0x10);
      if ((uVar15 & 0xf0000) == 0) {
        uVar7 = 0xf;
      }
      if (9 < uVar30 - 1) goto switchD_100edec8_caseD_2;
      switch(uVar30) {
      case 1:
        *(undefined1 *)((int)&local_138 + uVar28 + 4) = uVar7;
        uVar17 = ZEXT48(local_84);
        uVar23 = local_124 >> 0x20;
        uVar26 = local_124 & 0xffffffff;
        uVar22 = (ulonglong)(((uVar15 & 0xf00000) == 0 && (uVar31 & 0x78000000) == 0) & uVar29);
        param_1 = local_128;
        goto LAB_100edf04;
      case 3:
        *(undefined1 *)((int)&local_138 + uVar28 + 6) = uVar7;
        uVar17 = ZEXT48(local_84);
        uVar23 = local_124 >> 0x20;
        uVar26 = local_124 & 0xffffffff;
        uVar22 = (ulonglong)
                 (((uVar31 & 0x78000000) == 0 && (uVar15 & 0x900000) == 0) & (byte)uVar29);
        param_1 = local_128;
        if (((uVar15 & 0xf00000) >> 0x16 & 1) != 0) {
          pbVar34 = (byte *)(((int)uVar28 >> 3) + local_144 + 0x140);
          *pbVar34 = *pbVar34 | (byte)(1 << (ulonglong)(uVar15 & 7));
        }
LAB_100edf04:
        uVar25 = local_140 & 0xffffffff;
        uVar19 = (ulonglong)local_144;
        uVar24 = (ulonglong)local_148;
        local_188 = local_8c._4_4_;
        local_18c = (uint)local_138;
        uVar32 = local_140 >> 0x20;
        break;
      case 10:
        uVar31 = uVar31 & 0x78000000;
        *(byte *)(uVar28 + iVar18 + 0x14f) = (byte)(uVar31 >> 0x1b);
        uVar22 = (ulonglong)
                 (((uVar15 & 0xf00000) == 0 &&
                  ((uVar31 + 0xf0000000 & 0xe7ffffff) == 0 && uVar31 != 0x28000000)) & (byte)uVar29)
        ;
      }
switchD_100edec8_caseD_2:
      param_1 = param_1 + 3;
      local_128 = param_1;
      goto LAB_100eed04;
    }
    uVar22 = 0;
    goto LAB_100eed14;
  default:
switchD_100eddf8_caseD_20:
    if (0x60 < uVar31) {
      uVar16 = 0;
    }
    uVar30 = uVar27 & 0xff0000;
    if ((uVar30 == 0) ||
       ((((uVar31 - 0x29 < 0x36 &&
          ((0x20000000000011U >> ((ulonglong)(uVar31 - 0x29) & 0x3f) & 1) != 0)) &&
         (uVar30 - 0x10000 < 0x50001)) ||
        ((uVar31 == 0x42 && ((uVar30 - 0x10000 & 0xfffeffff) == 0)))))) {
      uVar30 = 1;
    }
    else {
      uVar30 = 0;
    }
    if ((uVar27 & 0xe0000000) != 0) {
      uVar30 = 0;
    }
    cVar10 = *(char *)(uVar31 + 0x101633e0);
    iVar36 = (int)cVar10;
    if (cVar10 == -1) {
LAB_100ee230:
      iVar33 = iVar36 * 0xe;
      uVar27 = 0;
    }
    else {
      iVar33 = (cVar10 * 8 - iVar36) * 2;
      if ((((*(byte *)(iVar33 + 0x10163450) >> 3 & 1) != 0) && ((uVar24 & 0xff) == 0)) ||
         ((uVar15 != 0 &&
          (((*(byte *)(iVar33 + 0x10163450) >> 2 & 1) != 0 ||
           ((*(short *)(&DAT_10163456 + iVar33) == 0 && (*(short *)(iVar33 + 0x10163454) == 0)))))))
         ) goto LAB_100ee230;
      uVar27 = 1;
    }
    puVar1 = param_1 + 1;
    uVar35 = *puVar1;
    if ((uVar15 == 0) || (uVar20 = (uint)uVar24 & 0xff, (uVar24 & 0xff) != 0)) {
      uVar20 = 1;
    }
    uVar20 = uVar20 & (uint)(*(short *)(iVar33 + 0x10163454) == 0 || (int)uVar35 < 0) &
                      uVar27 & uVar30 & uVar16;
    uVar22 = (ulonglong)uVar20;
    if (uVar20 == 0) goto LAB_100eed04;
    local_84 = param_1;
    if (uVar28 != 0) {
      local_84 = (uint *)uVar17;
    }
    bVar14 = *(byte *)(iVar33 + 0x10163450);
    if ((bVar14 & 1) == 0) {
      if ((bVar14 >> 1 & 1) != 0) {
        bVar12 = local_68 <= local_18c;
        *(int *)(iVar18 + 0x1218) = *(int *)(iVar18 + 0x1218) + 1;
        goto LAB_100ee2e0;
      }
    }
    else {
      bVar12 = local_6c <= (uint)uVar32;
LAB_100ee2e0:
      if (bVar12) {
        uVar20 = 0;
      }
    }
    if (local_64 <= uVar28) {
      uVar20 = 0;
    }
    bVar14 = *(byte *)(iVar33 + 0x10163450);
    if ((bVar14 & 1) == 0) {
      if ((bVar14 >> 1 & 1) != 0) {
        local_18c = *(byte *)(iVar33 + 0x10163451) + local_18c;
        local_138 = CONCAT44(local_138._4_4_,local_18c);
      }
    }
    else {
      local_140 = (ulonglong)((uint)*(byte *)(iVar33 + 0x10163451) + (uint)uVar32) << 0x20;
    }
    uVar28 = *(byte *)(iVar33 + 0x10163451) + uVar28;
    uVar25 = (ulonglong)uVar28;
    local_140 = CONCAT44(local_140._4_4_,uVar28);
    if (*(ushort *)(iVar33 + 0x10163454) == 0) {
      uVar35 = 0;
      uVar28 = 0;
      puVar37 = puVar1;
    }
    else {
      puVar2 = &DAT_101636f0;
      if ((uVar24 & 0xff) != 0) {
        puVar2 = &DAT_101636f1;
      }
      uVar16 = (uVar35 & 0x1800 | uVar35 >> 0x14 & 0x7ff) >> 8;
      uVar28 = uVar35 & 0x7ff;
      puVar37 = param_1 + 2;
      if (((byte)puVar2[uVar16 * 2] <= uVar28) || (uVar27 = 1, (uVar35 & 0xf000000) != 0)) {
        uVar27 = 0;
      }
      if (0x700000 < (uVar35 & 0xf00000)) {
        uVar27 = 0;
      }
      uVar20 = uVar27 & uVar20;
      if ((uVar20 != 0) &&
         ((*(ushort *)(&DAT_101633b0 + uVar16 * 2) & *(ushort *)(iVar33 + 0x10163454)) == 0)) {
        uVar20 = 0;
      }
      uVar35 = uVar35 & 0xf0000;
      if (uVar35 == 0) {
        uVar35 = 0xf0000;
      }
      if (uVar31 == 0x41) {
        uVar35 = 7;
      }
      else {
        uVar35 = uVar35 >> 0x10;
      }
    }
    uVar22 = (ulonglong)uVar20;
    if (uVar15 != 0) {
      uVar27 = *puVar37;
      uVar16 = uVar27 & 0xff0000;
      if (((-1 < (int)uVar27) || ((uVar27 & 0x1800 | uVar27 >> 0x14 & 0x700) != 0x1300)) ||
         (uVar15 = 1, (uVar27 & 0x7ff) != 0)) {
        uVar15 = 0;
      }
      uVar16 = (uint)((((uVar16 == 0xe40000 || uVar16 == 0) || uVar16 == 0x550000) ||
                      uVar16 == 0xaa0000) || uVar16 == 0xff0000) &
               (uint)((uVar27 & 0xf000000) == 0xd000000 || (uVar27 & 0xf000000) == 0) &
               uVar15 & uVar20;
      uVar22 = (ulonglong)uVar16;
      if (uVar16 != 0) {
        puVar37 = puVar37 + 1;
        param_1 = puVar1;
        local_128 = puVar1;
      }
    }
    uVar16 = FUN_100f0928(uVar31);
    local_80[0] = 0;
    local_80[1] = 0;
    local_80[2] = 0;
    local_80[3] = 0;
    uStack_94 = CONCAT44(uVar16,(undefined4)uStack_94);
    uVar27 = 0;
    local_158[0] = 0;
    local_158[1] = 0;
    uVar31 = 0;
    local_158[2] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_184 = local_184 & 0xffffff00;
    iVar18 = (int)uVar19;
    uVar17 = extraout_x1;
    uVar32 = extraout_x11;
    uStack_16c = extraout_w15;
    iStack_164 = extraout_w13;
    if ((int)uVar22 != 0) {
      local_170 = (uint)uVar25;
      local_178 = (uint)uVar26;
      uStack_174 = (uint)extraout_x11;
      local_180 = (uint)extraout_x1;
      uStack_17c = (uint)uVar23;
      local_168 = uVar28;
      do {
        if (3 < uVar31) break;
        iVar33 = ((iVar36 * 8 - (int)cVar10) + uVar31) * 2;
        uVar8 = *(ushort *)(&DAT_10163456 + iVar33);
        if (uVar8 == 0) break;
        puVar2 = &DAT_101636f0;
        uVar28 = puVar37[uVar31];
        if ((uVar24 & 0xff) != 0) {
          puVar2 = &DAT_101636f1;
        }
        uVar20 = (uVar28 & 0x1800 | uVar28 >> 0x14 & 0x7ff) >> 8;
        uVar27 = uVar28 & 0x7ff;
        bVar14 = puVar2[uVar20 * 2];
        uVar30 = uVar28 >> 0x1f;
        local_158[uVar31] = uVar27;
        uVar15 = uVar28 & 0xf000000;
        if (bVar14 <= uVar27) {
          uVar30 = 0;
        }
        local_58[uVar31] = uVar15;
        uVar6 = uVar28 & 0xff0000;
        if (((uVar15 == 0) || (uVar15 == 0x1000000 && uVar20 < 4)) ||
           ((uVar15 == 0xd000000 && (uVar20 == 0x13 || uVar20 == 0xe)))) {
          uVar21 = 1;
        }
        else {
          uVar21 = 0;
        }
        uVar21 = uVar21 & uVar30 & (uint)uVar22;
        if (uVar21 == 0) {
          uVar15 = 0;
        }
        else {
          uVar9 = *(ushort *)(&DAT_101633b0 + uVar20 * 2);
          local_80[uVar31] = (uint)uVar9;
          if ((uVar9 & uVar8) == 0) {
            uVar21 = 0;
          }
          bVar12 = ((uVar6 == 0x550000 || uVar6 == 0) || uVar6 == 0xaa0000) || uVar6 == 0xff0000;
          *(bool *)((int)&local_184 + uVar31) = bVar12;
          uVar30 = (uint)uVar24 & 0xff;
          if ((((uVar24 & 0xff) != 0) ||
              (((uVar6 == 0xe40000 || uVar6 == 0xc90000) || uVar6 == 0xd20000) || uVar6 == 0x1b0000)
              ) || (bVar12)) {
            uVar30 = 1;
          }
          bVar12 = false;
          if ((uVar8 & 0x800) != 0) {
            bVar12 = ((uVar6 != 0x550000 && uVar6 != 0) && uVar6 != 0xaa0000) && uVar6 != 0xff0000;
          }
          uVar15 = (uint)!bVar12 &
                   uVar30 & (uint)(uVar6 == 0xe40000 || (uVar8 & 0x1000) == 0) &
                            ((uVar8 & 0x2000) == 0 || uVar15 == 0) & uVar21;
        }
        uVar30 = (uint)*(byte *)(extraout_w12 + 3);
        if (extraout_w14 == 0x5a) {
          if (uVar31 < 2) {
            uVar30 = 3;
          }
        }
        else if ((extraout_w14 == 0x42 && uVar31 == 0) || (extraout_w14 == 0x5d && uVar31 != 1)) {
          uVar30 = 7;
          if ((*(byte *)((param_1[3] & 0x7ff) + iVar18 + 0x14f) & 0x1f) == 2) {
            uVar30 = 3;
          }
          if (uVar29 != 0) {
            uVar30 = uVar30 | 8;
          }
        }
        if (*(char *)(extraout_w12 + 2) != '\0') {
          uVar30 = uVar30 & uVar35;
        }
        uVar20 = 1 << (ulonglong)(uVar6 >> 0x14 & 3);
        if ((uVar30 & 4) == 0) {
          uVar20 = 0;
        }
        uVar21 = 1 << (ulonglong)(uVar6 >> 0x12 & 3);
        if ((uVar30 & 2) == 0) {
          uVar21 = 0;
        }
        uVar11 = 1 << (ulonglong)(uVar6 >> 0x10 & 3);
        if ((uVar30 & 1) == 0) {
          uVar11 = 0;
        }
        uVar6 = 1 << (ulonglong)(uVar6 >> 0x16);
        if ((uVar30 & 8) == 0) {
          uVar6 = 0;
        }
        uVar30 = 0;
        uVar6 = uVar20 | uVar21 | uVar11 | uVar6;
        if (extraout_w14 != 0x1e) {
          if ((uVar31 == 2) || (*(short *)(&DAT_10163458 + iVar33) == 0)) {
            uVar20 = uVar16;
            if (uVar16 == 0) goto LAB_100ee8c8;
          }
          else {
            uVar20 = 1;
          }
          uVar21 = 0;
          uVar11 = local_80[uVar31];
          do {
            if (uVar11 < 0x10) {
              switch(uVar11) {
              case 1:
                pbVar4 = (byte *)((int)&local_138 + uVar21 + uVar27 + 4);
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18);
LAB_100ee7e0:
                uVar30 = (uint)*pbVar4;
                break;
              case 2:
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18 + 0x38);
                uVar30 = 0xf;
                break;
              default:
                goto switchD_100ee864_caseD_3;
              case 4:
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18 + 10);
                bVar14 = *pbVar34;
                uVar30 = (uint)bVar14;
                goto LAB_100ee8b8;
              case 8:
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18 + 0x15f);
                uVar30 = 0xf;
              }
LAB_100ee7e4:
              bVar14 = *pbVar34;
LAB_100ee8b8:
              *pbVar34 = (byte)uVar6 | bVar14;
            }
            else if (uVar11 < 0x11) {
              puVar3 = (undefined1 *)(uVar21 + uVar27 + iVar18 + 0x16f);
LAB_100ee7b4:
              uVar30 = 0xf;
              *puVar3 = 1;
            }
            else if (uVar11 < 0x80) {
              if (uVar11 == 0x20) {
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18 + 0x17f);
                uVar30 = 0xf;
                goto LAB_100ee7e4;
              }
              if ((uVar11 == 0x40) &&
                 (uVar30 = 0xf, *(char *)(uVar21 + uVar27 + iVar18 + 0x14f) == '\0')) {
                uVar30 = 0;
              }
            }
            else {
              if (uVar11 < 0x81) {
                pbVar4 = (byte *)((int)&local_138 + uVar21 + uVar27 + 6);
                pbVar34 = (byte *)(uVar21 + uVar27 + iVar18 + 0x2a);
                goto LAB_100ee7e0;
              }
              if (uVar11 == 0x400) {
                puVar3 = (undefined1 *)(uVar21 + uVar27 + iVar18 + 0x180);
                goto LAB_100ee7b4;
              }
            }
switchD_100ee864_caseD_3:
            uVar21 = uVar21 + 1;
          } while (uVar21 < uVar20);
        }
LAB_100ee8c8:
        uVar15 = uVar15 & (uVar28 >> 0xd ^ 0xffffffff);
        if ((extraout_w14 != 0x58 || uVar31 == 0) && ((uVar6 & 0xff & uVar30) != (uVar6 & 0xff))) {
          uVar15 = 0;
        }
        uVar22 = (ulonglong)uVar15;
        uVar31 = uVar31 + 1;
      } while (uVar15 != 0);
      uVar17 = (ulonglong)local_180;
      uVar23 = (ulonglong)uStack_17c;
      uVar26 = (ulonglong)local_178;
      uVar32 = (ulonglong)uStack_174;
      uVar25 = (ulonglong)local_170;
      uVar27 = local_184 & 0xff;
      uVar28 = local_168;
    }
    if (uStack_16c < 0x80) {
      if (uStack_16c == 4) {
        pbVar34 = (byte *)(uVar28 + iVar18 + 10);
        goto LAB_100ee9b4;
      }
      if (uStack_16c != 0x20) goto LAB_100ee9c0;
LAB_100ee998:
      pbVar34 = (byte *)(uVar28 + iVar18 + 0x17f);
      bVar14 = *pbVar34;
LAB_100ee9bc:
      *pbVar34 = bVar14 | (byte)uVar35;
    }
    else {
      if (uStack_16c < 0x81) {
        pbVar34 = (byte *)(uVar28 + iVar18 + 0x2a);
LAB_100ee9b4:
        bVar14 = *pbVar34;
        goto LAB_100ee9bc;
      }
      if (uStack_16c == 0x100) {
        pbVar34 = (byte *)(uVar28 + iVar18 + 0x14b);
        goto LAB_100ee9b4;
      }
      if (uStack_16c == 0x200) {
        if (((iStack_164 == 0xf0000) && (uVar27 != 0)) && (local_58[0] == 0)) {
          bVar14 = 1;
        }
        else {
          bVar14 = 0;
        }
        if (*(char *)(iVar18 + 0x330) != '\0') {
          bVar14 = 0;
        }
        uVar22 = (ulonglong)(bVar14 & (byte)uVar22);
        *(char *)(iVar18 + 0x330) = '\x01';
        goto LAB_100ee998;
      }
    }
LAB_100ee9c0:
    uVar31 = (uint)uVar22;
    uVar29 = (uint)uVar23;
    iVar33 = extraout_w14;
    switch(extraout_w14) {
    default:
      goto switchD_100ee9dc_caseD_0;
    case 6:
    case 7:
    case 0xe:
    case 0xf:
      goto switchD_100ee9dc_caseD_6;
    case 0x14:
    case 0x16:
      bVar12 = iStack_164 == 0xf0000;
      goto LAB_100ee9ec;
    case 0x15:
    case 0x17:
      bVar12 = iStack_164 == 0x70000;
      goto LAB_100ee9ec;
    case 0x18:
      bVar12 = iStack_164 == 0x30000;
LAB_100ee9ec:
      if ((bVar12) && (local_58[1] == 0)) {
LAB_100ee9f8:
        uVar27 = 1;
      }
      else {
        uVar27 = 0;
      }
switchD_100ee9dc_caseD_6:
      uVar22 = (ulonglong)(uVar27 & uVar31);
      goto switchD_100ee9dc_caseD_0;
    case 0x19:
    case 0x1a:
      goto switchD_100ee9dc_caseD_19;
    case 0x1c:
      bVar12 = local_11c[uVar29] == 0;
      break;
    case 0x1e:
      uVar22 = (ulonglong)(local_188 == 0x1c & uVar31);
      *(int *)(iVar18 + local_158[0] * 4 + 0x2f0) = (int)param_1 - (int)local_15c >> 2;
      goto switchD_100ee9dc_caseD_19;
    case 0x21:
      uVar31 = ((iStack_164 - 0x10000U & 0xfff8ffff) == 0 && iStack_164 != 0x80000) & uVar31;
      if (((uStack_16c == local_80[0]) && (uVar28 == local_158[0])) ||
         ((uStack_16c == local_80[1] && (uVar28 == local_158[1])))) {
        uVar28 = 0;
      }
      else {
LAB_100eec18:
        uVar28 = 1;
      }
      goto LAB_100eec1c;
    case 0x24:
      if ((uStack_16c == local_80[0]) && (uVar27 = 0, uVar28 == local_158[0]))
      goto switchD_100ee9dc_caseD_6;
      goto LAB_100ee9f8;
    case 0x25:
      uVar31 = ((iStack_164 - 0x10000U & 0xfffcffff) == 0 && iStack_164 != 0x40000) & uVar31;
      if ((local_80[1] != local_80[2]) || (uVar28 = 0, local_158[1] != local_158[2]))
      goto LAB_100eec18;
LAB_100eec1c:
      uVar22 = (ulonglong)(uVar28 & uVar31);
      goto switchD_100ee9dc_caseD_0;
    case 0x26:
      piVar5 = local_11c + uVar29 + 1;
      iVar18 = 2;
      goto LAB_100eea84;
    case 0x27:
      bVar12 = local_11c[uVar29] == 2;
      goto LAB_100eeacc;
    case 0x28:
    case 0x29:
      piVar5 = local_11c + uVar29 + 1;
      iVar18 = 3;
LAB_100eea84:
      uVar22 = (ulonglong)(uVar29 < 0x20 & uVar31);
      *piVar5 = iVar18;
      uVar19 = (ulonglong)local_144;
      uVar25 = local_140 & 0xffffffff;
      uVar17 = ZEXT48(local_84);
      uVar26 = (ulonglong)((int)local_124 + 1U);
      uVar23 = (ulonglong)(uVar29 + 1);
      uVar24 = (ulonglong)local_148;
      local_124 = CONCAT44(uVar29 + 1,(int)local_124 + 1U);
      *(undefined1 *)(local_144 + 0x14a) = 0;
      uVar32 = local_140 >> 0x20;
      local_18c = (uint)local_138;
      param_1 = local_128;
      iVar33 = uStack_9c._4_4_;
      goto switchD_100ee9dc_caseD_0;
    case 0x2a:
      bVar12 = local_11c[uVar29] == 3;
      break;
    case 0x2b:
      bVar12 = local_11c[uVar29] == 3;
LAB_100eeacc:
      uVar23 = (ulonglong)(uVar29 - 1);
      uVar28 = (int)uVar26 - 1;
      uVar26 = (ulonglong)uVar28;
      local_124 = CONCAT44(uVar29 - 1,uVar28);
      break;
    case 0x2c:
      uVar16 = 0;
      uVar28 = 1;
      do {
        if (uVar29 < uVar28) break;
        piVar5 = local_11c + uVar28;
        uVar28 = uVar28 + 1;
        bVar12 = *piVar5 - 1U < 2;
        uVar16 = (uint)bVar12;
      } while (!bVar12);
      goto LAB_100eeb58;
    case 0x2d:
      uVar16 = 0;
      uVar28 = 1;
      do {
        if (uVar29 < uVar28) break;
        piVar5 = local_11c + uVar28;
        uVar28 = uVar28 + 1;
        uVar16 = (uint)(*piVar5 - 1U < 2);
      } while (uVar16 == 0);
      goto LAB_100eeb58;
    case 0x41:
      goto switchD_100ee9dc_caseD_41;
    case 0x42:
    case 0x5d:
      *(uint *)(iVar18 + 0x1214) =
           1 << (ulonglong)(local_158[1] & 0x1f) | *(uint *)(iVar18 + 0x1214);
      goto switchD_100ee9dc_caseD_41;
    case 0x60:
      uVar16 = 0;
      uVar28 = 1;
      do {
        if (uVar29 < uVar28) break;
        piVar5 = local_11c + uVar28;
        uVar28 = uVar28 + 1;
        uVar16 = (uint)(*piVar5 - 1U < 2);
      } while (uVar16 == 0);
LAB_100eeb58:
      uVar22 = (ulonglong)(uVar16 & uVar31);
      iVar33 = extraout_w14;
      goto switchD_100ee9dc_caseD_0;
    }
    break;
  case 0x2f:
    uVar27 = param_1[1];
    uVar31 = uVar27 & 0x7ff;
    if ((uVar28 == 0) && (uVar15 == 0)) {
      uVar28 = 1;
    }
    else {
      uVar28 = 0;
    }
    if ((((uVar29 != 0) || (-1 < (int)uVar27)) ||
        ((uVar27 & 0x1800 | uVar27 >> 0x14 & 0x700) != 0xe00)) ||
       ((((uVar27 & 0xf000000) != 0 || ((uVar27 & 0xf0000) != 0xf0000)) ||
        (uVar29 = 1, (uVar27 & 0xf00000) != 0 || 0xf < uVar31)))) {
      uVar29 = 0;
    }
    uVar29 = uVar29 & uVar28 & uVar16;
    uVar22 = (ulonglong)uVar29;
    if (uVar29 != 0) {
      *(undefined1 *)(uVar31 + iVar18 + 0x2a0) = 1;
      *(uint *)(iVar18 + uVar31 * 4 + 0x2b0) = param_1[2];
    }
    goto switchD_100edec8_caseD_2;
  case 0x30:
    uVar27 = param_1[1];
    uVar31 = uVar27 & 0x7ff;
    if ((uVar28 == 0) && (uVar15 == 0)) {
      uVar28 = 1;
    }
    else {
      uVar28 = 0;
    }
    if (((((uVar29 != 0) || (-1 < (int)uVar27)) ||
         ((uVar27 & 0x1800 | uVar27 >> 0x14 & 0x700) != 0x700)) ||
        ((((uVar27 & 0xf000000) != 0 || ((uVar27 & 0xf0000) != 0xf0000)) ||
         (((uVar27 & 0xf00000) != 0 || ((param_1[3] != 0 || (param_1[4] != 0)))))))) ||
       (uVar29 = 1, param_1[5] != 0 || 0xf < uVar31)) {
      uVar29 = 0;
    }
    uVar29 = uVar29 & uVar28 & uVar16;
    uVar22 = (ulonglong)uVar29;
    if (uVar29 != 0) {
      *(undefined1 *)(uVar31 + iVar18 + 400) = 1;
      iVar36 = iVar18 + uVar31 * 0x10;
      *(uint *)(iVar18 + (uVar31 + 0x1a) * 0x10) = param_1[2];
      *(uint *)(iVar36 + 0x1a4) = param_1[3];
      *(uint *)(iVar36 + 0x1a8) = param_1[4];
      *(uint *)(iVar36 + 0x1ac) = param_1[5];
    }
LAB_100edd40:
    param_1 = param_1 + 6;
    local_128 = param_1;
    goto LAB_100eed04;
  }
LAB_100eeca4:
  uVar22 = (ulonglong)(bVar12 & uVar31);
  iVar33 = extraout_w14;
switchD_100ee9dc_caseD_0:
  if (*(short *)(extraout_w12 + 4) != 0) {
    param_1 = param_1 + 1;
  }
  uVar28 = 0;
  if ((int)uVar22 != 0) {
    while ((uVar28 < 4 && (*(short *)(&DAT_10163456 + ((cVar10 * 8 - iVar36) + uVar28) * 2) != 0)))
    {
      param_1 = param_1 + 1;
      uVar28 = uVar28 + 1;
    }
  }
  local_8c = CONCAT44(iVar33,(undefined4)local_8c);
  local_188 = iVar33;
LAB_100eecfc:
  param_1 = param_1 + 1;
  local_128 = param_1;
LAB_100eed04:
  param_3 = local_160;
  if ((int)uVar22 == 0) goto LAB_100eed14;
  goto LAB_100edc04;
switchD_100ee9dc_caseD_41:
  bVar12 = iStack_164 == 0xf0000;
  goto LAB_100eeca4;
switchD_100ee9dc_caseD_19:
  *(undefined1 *)(iVar18 + 0x14a) = 0;
  goto switchD_100ee9dc_caseD_0;
}

