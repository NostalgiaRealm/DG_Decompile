/*
 * FUN_10058a58 at 10058a58
 * undefined FUN_10058a58(void)
 * Address ranges: 10058a58-1005c05b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10058a58(int param_1)

{
  longlong *plVar1;
  uint *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  ulonglong *puVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  char cVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  undefined8 uVar32;
  int *piVar33;
  int *piVar34;
  int iVar35;
  undefined8 *puVar36;
  int iVar37;
  uint uVar38;
  uint *puVar39;
  byte bVar40;
  ulonglong uVar41;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  code *extraout_w11_26;
  code *extraout_w11_27;
  code *extraout_w11_28;
  code *extraout_w11_29;
  code *extraout_w11_30;
  code *extraout_w11_31;
  ulonglong uVar42;
  uint uVar43;
  char *pcVar44;
  int *piVar45;
  int iVar46;
  int iVar47;
  undefined8 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  byte local_298;
  uint local_294;
  int *local_290;
  code *local_28c;
  byte local_288;
  float local_284;
  uint *local_280;
  uint *local_27c;
  uint local_278 [2];
  undefined8 local_270;
  uint local_268;
  uint local_264;
  longlong local_260;
  uint local_258;
  int local_254;
  uint local_250;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  code *local_200;
  int local_1fc;
  int *local_1f8;
  int *local_1f4;
  undefined4 *local_1f0;
  uint *local_1ec;
  longlong local_1e0;
  int iStack_1d8;
  int iStack_1d4;
  ushort local_1d0 [4];
  int local_1c8 [3];
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  uint local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  uint local_1a0;
  undefined8 local_190;
  uint auStack_188 [9];
  undefined1 auStack_164 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_294 = param_1 + 0x8000;
  local_1fc = param_1 + 0x7000;
  local_284 = (float)(param_1 + 0x4000);
  uVar26 = (*(uint *)(param_1 + 0xf50) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0xf50) & 0x55555555) << 1;
  uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
  uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
  uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
  FUN_10057028(param_1,0);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar45 = (int *)(param_1 + 0xf6b8);
  iVar24 = *piVar45;
  puVar39 = (uint *)(iVar24 + 0x1658);
  if (0xfff < *puVar39) {
    local_290 = (int *)(iVar24 + 0x164c);
    local_28c = (code *)(iVar24 + 0x1654);
    local_1f8 = (int *)(iVar24 + 0x1654);
    iVar37 = 0x20;
    local_280 = puVar39;
    local_200 = local_28c;
    local_1f4 = local_290;
    local_1f0 = (undefined4 *)(iVar24 + 0x1640);
    local_1ec = puVar39;
    do {
      if (DAT_10175c60 == '\0') {
        (*(code *)PTR_FUN_1016c0e4)(local_1d0);
        DAT_10175c5c = (uint)local_1d0[0];
        DAT_10175c60 = '\x01';
      }
      puVar5 = local_1f0;
      uVar28 = 0;
      DAT_10175c5c = DAT_1016fb80 + DAT_10175c5c * DAT_10175c5c & 0xffff;
      DAT_1016fb80 = DAT_1016fb80 + (DAT_10175c5c >> 2) & 0xffff;
      uVar38 = *local_1f4 + (int)(((float)DAT_10175c5c / 65535.0) * (float)(*local_1f8 - 1)) * 0x18;
      piVar33 = *(int **)(uVar38 + 0x10);
      puVar39 = (uint *)(piVar33 + 1);
      uVar25 = 0;
      if (*puVar39 != 0) {
        do {
          local_278[0] = uVar38;
          FUN_1011e7a0(*puVar5,*(undefined4 *)(*piVar33 + uVar28 * 0x74 + 0x70),0,1);
          uVar23 = (*pcVar9)();
          (*extraout_w11)(uVar23);
          uVar25 = *puVar39;
          uVar28 = uVar28 + 1;
          uVar38 = local_278[0];
        } while (uVar28 < uVar25);
      }
      *local_280 = *local_1ec - uVar25;
      uVar28 = *(uint *)local_28c;
      if (uVar28 != 0) {
        uVar41 = *(ulonglong *)(uVar38 + 8);
        uVar25 = 0;
        uVar38 = uVar28;
        do {
          uVar43 = uVar25 + uVar38 >> 1;
          uVar42 = *(ulonglong *)(*local_290 + uVar43 * 0x18);
          uVar10 = uVar43;
          if (uVar42 <= uVar41) {
            if (uVar41 <= uVar42) break;
            uVar25 = uVar43 + 1;
            uVar43 = uVar25;
            uVar10 = uVar38;
          }
          uVar38 = uVar10;
        } while (uVar38 != uVar25);
        if ((uVar43 != uVar28) &&
           (puVar7 = (ulonglong *)(*local_290 + uVar43 * 0x18), *puVar7 == uVar41)) {
          puVar5 = *(undefined4 **)(puVar7 + 2);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_101322d0(*puVar5);
            FUN_10132260(puVar5,0xc);
          }
          uVar43 = uVar43 + 1;
          uVar28 = *(uint *)local_200;
          if (uVar43 < uVar28) {
            do {
              puVar36 = (undefined8 *)(*local_290 + uVar43 * 0x18);
              uVar43 = uVar43 + 1;
              puVar36[-2] = puVar36[1];
              puVar36[-3] = *puVar36;
              puVar36[-1] = puVar36[2];
              uVar28 = *(uint *)local_200;
            } while (uVar43 < uVar28);
          }
          *(uint *)local_200 = uVar28 - 1;
        }
      }
      iVar37 = iVar37 + -1;
    } while (iVar37 != 0);
  }
  piVar33 = (int *)(*(int *)(*piVar45 + 0x1304) + 0x948);
  local_290 = (int *)*piVar33;
  *piVar33 = param_1;
  bVar11 = (int *)param_1 != local_290;
  piVar33 = (int *)(*(int *)(*piVar45 + 0x1304) + 0x634);
  *piVar33 = *piVar33 + 1;
  if ((int *)param_1 != local_290) {
    iVar24 = *(int *)(*piVar45 + 0x1304);
    FUN_1011ec30(*(undefined4 *)(iVar24 + 0x8e4),*(undefined4 *)(param_1 + 0xf808),
                 *(undefined4 *)(iVar24 + 0x8e0),iVar24,*(undefined8 *)(iVar24 + 0x938));
    FUN_10114b80(*(undefined4 *)(*piVar45 + 0x1304),*(undefined4 *)(param_1 + 0xf808));
  }
  bVar19 = FUN_10057b60(param_1,(int)LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10),0,bVar11);
  if ((*(uint *)(param_1 + 0xf674) & 1) != 0) {
    FUN_100392f0(param_1 + 0x7650,(undefined8 *)(param_1 + 0xb650),1);
    *(undefined8 *)(param_1 + 0x6a40) = *(undefined8 *)(param_1 + 0xb650);
    *(undefined8 *)(param_1 + 0x6a48) = *(undefined8 *)(param_1 + 0xb658);
    *(undefined8 *)(param_1 + 0x6a50) = *(undefined8 *)(param_1 + 0xb660);
    *(undefined8 *)(param_1 + 0x6a58) = *(undefined8 *)(param_1 + 0xb668);
    *(undefined8 *)(param_1 + 0x6a60) = *(undefined8 *)(param_1 + 0xb670);
    *(undefined8 *)(param_1 + 0x6a68) = *(undefined8 *)(param_1 + 0xb678);
    *(undefined8 *)(param_1 + 0x6a70) = *(undefined8 *)(param_1 + 0xb680);
    *(undefined8 *)(param_1 + 0x6a78) = *(undefined8 *)(param_1 + 0xb688);
    *(uint *)(param_1 + 0xf674) = *(uint *)(param_1 + 0xf674) & 0xfffffffe;
  }
  bVar18 = true;
  bVar21 = bVar11 | *(byte *)(param_1 + 0xfda3);
  *(byte *)(param_1 + 0xfda3) = bVar21;
  if (((*(char *)(param_1 + 0xf671) != '\0') || (bVar21 != 0)) &&
     (((*(uint *)(param_1 + 0xfd68) | *(uint *)(param_1 + 0xfd40) | *(uint *)(param_1 + 0xfd18)) & 1
      ) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf6dc),param_1 + 0x6910,0xc20,
                          *(char *)(param_1 + 0xf671));
    bVar12 = lVar30 == 0;
    bVar18 = !bVar12;
    *(longlong *)(local_294 + 0x7878) = lVar30;
    *(byte *)(param_1 + 0xf671) = bVar12 & *(byte *)(param_1 + 0xf671);
    *(byte *)(param_1 + 0xfda3) = bVar12 & *(byte *)(param_1 + 0xfda3);
    if (lVar30 != 0) {
      FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),0,lVar30);
    }
  }
  if ((int *)param_1 != local_290) {
    lVar30 = *(longlong *)(local_294 + 0x7880);
    plVar1 = (longlong *)(*(int *)(*piVar45 + 0x1304) + 0x40);
    if (lVar30 != *plVar1) {
      FUN_10113218(*(int *)(*piVar45 + 0x1304));
      uVar23 = (*pcVar9)();
      (*extraout_w11_00)(uVar23,1,lVar30);
      *plVar1 = lVar30;
    }
  }
  bVar21 = 1;
  *(byte *)(param_1 + 0xfda5) = bVar11 | *(byte *)(param_1 + 0xfda5);
  if ((*(uint *)((int)local_284 + 0x2920) & 0xf800) != 0) {
    bVar21 = 1;
    if (*(char *)(param_1 + 0xf672) != '\0') {
      local_28c = (code *)CONCAT31(local_28c._1_3_,1);
      uVar26 = 0;
      do {
        puVar39 = (uint *)(param_1 + (uVar26 + 0x3d9d) * 4);
        while (uVar28 = *puVar39, uVar28 = (uVar28 & 0xaaaaaaaa) >> 1 | (uVar28 & 0x55555555) << 1,
              uVar28 = (uVar28 & 0xcccccccc) >> 2 | (uVar28 & 0x33333333) << 2,
              uVar28 = (uVar28 & 0xf0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f) << 4,
              uVar28 = (uVar28 & 0xff00ff00) >> 8 | (uVar28 & 0xff00ff) << 8,
              uVar28 = (uint)LZCOUNT(uVar28 >> 0x10 | uVar28 << 0x10),
              (1 - (uVar28 >> 5) & 0xff) != 0) {
          pbVar8 = (byte *)(((int)uVar28 >> 3) + (int)puVar39);
          iVar24 = uVar28 + uVar26 * 0x20;
          *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar28 & 7)) ^ 0xff);
          if (0xff < iVar24) break;
          iVar24 = param_1 + iVar24 * 0x40;
          FUN_100392f0(iVar24 + 0x7650,iVar24 + 0xb650,1);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < 8);
      bVar21 = (byte)local_28c;
    }
    if ((*(char *)(param_1 + 0xf672) != '\0') || (*(char *)(param_1 + 0xfda5) != '\0')) {
      lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf6e4),param_1 + 0x7650,0x8000,
                            *(char *)(param_1 + 0xf672));
      bVar12 = lVar30 == 0;
      bVar21 = !bVar12;
      *(longlong *)(local_294 + 0x7888) = lVar30;
      *(bool *)(param_1 + 0xf672) = bVar12;
      *(byte *)(param_1 + 0xfda5) = bVar12 & *(byte *)(param_1 + 0xfda5);
      if (lVar30 != 0) {
        plVar1 = (longlong *)(*(int *)(*piVar45 + 0x1304) + 0x48);
        if (lVar30 != *plVar1) {
          FUN_10113218(*(int *)(*piVar45 + 0x1304));
          uVar23 = (*pcVar9)();
          (*extraout_w11_01)(uVar23,2,lVar30);
          *plVar1 = lVar30;
        }
      }
    }
  }
  bVar12 = true;
  bVar6 = *(byte *)(param_1 + 0xfda4) | bVar11;
  *(byte *)(param_1 + 0xfda4) = bVar6;
  if (((*(char *)(param_1 + 0xf6a3) != '\0') || (bVar6 != 0)) &&
     (local_298 = (byte)*(undefined4 *)(param_1 + 0xfd68), (local_298 >> 3 & 1) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf6e8),param_1 + 0x6440,0x4d0,
                          *(char *)(param_1 + 0xf6a3));
    bVar13 = lVar30 == 0;
    bVar12 = !bVar13;
    *(longlong *)(local_294 + 0x78a8) = lVar30;
    *(byte *)(param_1 + 0xf6a3) = bVar13 & *(byte *)(param_1 + 0xf6a3);
    *(byte *)(param_1 + 0xfda4) = bVar13 & *(byte *)(param_1 + 0xfda4);
    if (lVar30 != 0) {
      FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),5,lVar30);
    }
  }
  bVar13 = true;
  bVar6 = *(byte *)(param_1 + 0xfda6) | bVar11;
  *(byte *)(param_1 + 0xfda6) = bVar6;
  if (((*(char *)(param_1 + 0xf696) != '\0') || (bVar6 != 0)) &&
     ((*(uint *)(param_1 + 0xfd68) >> 4 & 1) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf75c),param_1 + 0x5480,0xec0,
                          *(char *)(param_1 + 0xf696));
    bVar14 = lVar30 == 0;
    bVar13 = !bVar14;
    bVar6 = *(byte *)(param_1 + 0xf696);
    *(longlong *)(local_294 + 0x78b0) = lVar30;
    *(byte *)(param_1 + 0xf696) = bVar6 & bVar14;
    *(byte *)(param_1 + 0xfda6) = *(byte *)(param_1 + 0xfda6) & bVar14;
    if (lVar30 != 0) {
      FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),6,lVar30);
    }
  }
  bVar14 = true;
  bVar6 = *(byte *)(param_1 + 0xfda7) | bVar11;
  *(byte *)(param_1 + 0xfda7) = bVar6;
  if (((*(char *)(param_1 + 0xf694) != '\0') || (bVar6 != 0)) &&
     (((*(uint *)(param_1 + 0xfd40) | *(uint *)(param_1 + 0xfd18)) >> 3 & 1) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf754),param_1 + 0x5190,0x2f0,
                          *(char *)(param_1 + 0xf694));
    bVar15 = lVar30 == 0;
    bVar14 = !bVar15;
    bVar6 = *(byte *)(param_1 + 0xf694);
    *(longlong *)(local_294 + 0x7890) = lVar30;
    *(byte *)(param_1 + 0xf694) = bVar6 & bVar15;
    *(byte *)(param_1 + 0xfda7) = *(byte *)(param_1 + 0xfda7) & bVar15;
    if (lVar30 != 0) {
      FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),3,lVar30);
    }
  }
  bVar15 = true;
  bVar6 = *(byte *)(param_1 + 0xfda8) | bVar11;
  *(byte *)(param_1 + 0xfda8) = bVar6;
  if (((*(char *)(param_1 + 0xf695) != '\0') || (bVar6 != 0)) &&
     (((*(uint *)(param_1 + 0xfd18) | *(uint *)(param_1 + 0xfd40)) >> 4 & 1) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf758),param_1 + 0x1050,
                          *(undefined4 *)(param_1 + 0x7c),*(char *)(param_1 + 0xf695));
    bVar16 = lVar30 == 0;
    bVar15 = !bVar16;
    *(longlong *)(param_1 + 0xf898) = lVar30;
    *(byte *)(param_1 + 0xf695) = *(byte *)(param_1 + 0xf695) & bVar16;
    *(byte *)(param_1 + 0xfda8) = *(byte *)(param_1 + 0xfda8) & bVar16;
    if (lVar30 != 0) {
      if (*(char *)(*(int *)(param_1 + 0xf6c4) + 0xec) == '\0') {
        FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),4,lVar30);
      }
      else {
        *(undefined1 *)(param_1 + 0xfd9e) = 1;
      }
    }
  }
  bVar16 = true;
  bVar6 = bVar11 | *(byte *)(param_1 + 0xfda9);
  *(byte *)(param_1 + 0xfda9) = bVar6;
  if (((*(char *)(param_1 + 0xf697) != '\0') || (bVar6 != 0)) &&
     ((*(uint *)(param_1 + 0xfd68) >> 5 & 1) != 0)) {
    lVar30 = FUN_100565d8(param_1,*(undefined4 *)(param_1 + 0xf760),param_1 + 0x6340,0x100,
                          *(char *)(param_1 + 0xf697));
    bVar17 = lVar30 == 0;
    bVar16 = !bVar17;
    *(longlong *)(local_294 + 0x78b8) = lVar30;
    *(byte *)(param_1 + 0xf697) = bVar17 & *(byte *)(param_1 + 0xf697);
    *(byte *)(param_1 + 0xfda9) = bVar17 & *(byte *)(param_1 + 0xfda9);
    if (lVar30 != 0) {
      FUN_10115010(*(undefined4 *)(*piVar45 + 0x1304),7,lVar30);
    }
  }
  bVar20 = 1;
  bVar6 = *(byte *)(param_1 + 0xfd9c) | *(byte *)(param_1 + 0xf6a0) | *(byte *)(param_1 + 0xf669) |
          bVar11;
  *(byte *)(param_1 + 0xfd9c) = bVar6;
  puVar39 = *(uint **)(param_1 + 0xfd38);
  if (puVar39 == (uint *)0x0) {
    puVar39 = *(uint **)(param_1 + 0xfd60);
  }
  pcVar3 = (char *)(param_1 + 0x7642);
  if (*pcVar3 == '\0') {
    uVar26 = *(int *)(param_1 + 0xfd88) + (int)puVar39;
  }
  else {
    uVar26 = (uint)(*(int *)(param_1 + 0xfa7c) != 0);
  }
  uVar28 = uVar26;
  if (bVar6 == 0) {
    uVar28 = 0;
  }
  if (*(char *)(*(int *)(param_1 + 0xf6c4) + 0xec) != '\0') {
    if (((int *)param_1 == local_290) ||
       (((*(uint *)(param_1 + 0xfd18) | *(uint *)(param_1 + 0xfd40)) >> 4 & 1) == 0)) {
      bVar40 = 0;
    }
    else {
      bVar40 = 1;
    }
    pbVar8 = (byte *)(param_1 + 0xfd9e);
    bVar40 = bVar40 | *pbVar8;
    *pbVar8 = bVar40;
    iVar24 = *(int *)(param_1 + 0xf6c8);
    if (bVar40 != 0) {
      uVar28 = uVar28 + 1;
    }
    if ((*(uint *)(iVar24 + 0x24) <
         *(int *)(*(int *)(iVar24 + 0xc) + *(int *)(iVar24 + 0x18) * 0x20 + 0x10) + uVar28) &&
       ((bVar6 == 0 || (bVar40 == 0)))) {
      *pbVar8 = bVar40 | 1;
      uVar28 = uVar26 + 1;
      *(byte *)(param_1 + 0xfd9c) = bVar6 | 1;
    }
  }
  if (uVar28 == 0) {
LAB_100597b4:
    if (*(char *)(param_1 + 0xfd9e) != '\0') {
      local_1a8 = *(undefined8 *)(param_1 + 0xf898);
      local_1a0 = *(int *)(param_1 + 0x7c) + 0xffU & 0xffffff00;
      uVar23 = (*pcVar9)();
      (*extraout_w11_02)(uVar23,&local_1a8,local_258);
      *(longlong *)(param_1 + 0xf8a0) = local_260;
      local_258 = local_250 + local_258;
      local_260 = local_260 + (ulonglong)local_250;
      *(undefined1 *)(param_1 + 0xfdaa) = 1;
    }
    uVar41 = (ulonglong)local_258;
    if ((*(char *)(param_1 + 0xfd9c) != '\0') && (uVar26 != 0)) {
      if (*pcVar3 == '\0') {
        uVar26 = *(uint *)(param_1 + 0xfd88);
        uVar41 = (ulonglong)uVar26;
        if (uVar26 != 0) {
          local_278[0] = uVar26;
          uVar23 = (*pcVar9)();
          (*extraout_w11_03)(uVar23,1,&local_258,local_278,uVar41 & 0xffffffff);
        }
        *(longlong *)(param_1 + 0xf8c0) = local_260;
        if (puVar39 != (uint *)0x0) {
          local_250 = local_250 * *(uint *)(param_1 + 0xfd88);
          local_260 = local_260 + (ulonglong)local_250;
          local_258 = local_250 + local_258;
          local_27c = puVar39;
          uVar23 = (*pcVar9)();
          (*extraout_w11_04)(uVar23,1,&local_258,&local_27c,puVar39);
        }
        *(longlong *)(param_1 + 0xf8d8) = local_260;
      }
      else if (*(int *)(param_1 + 0xfa7c) != 0) {
        uVar23 = (*pcVar9)();
        (*extraout_w11_05)(uVar23,1,uVar41 & 0xffffffff,*(undefined4 *)(param_1 + 0xf9a0),0);
        *(longlong *)(param_1 + 0xf8c0) = local_260;
      }
    }
  }
  else {
    bVar20 = FUN_1011fe80(*(undefined4 *)(param_1 + 0xf6c8),uVar28,
                          *(undefined4 *)(*(int *)(*piVar45 + 0x1300) + 0xc),
                          *(undefined8 *)(*(int *)(*piVar45 + 0x1304) + 0x938),&local_260);
    if (bVar20 != 0) {
      iVar24 = *(int *)(param_1 + 0xfbc0);
      *(int *)(param_1 + 0xfbc0) = local_254;
      bVar17 = local_254 != iVar24;
      *(byte *)(param_1 + 0xfd9a) = *(byte *)(param_1 + 0xfd9a) | bVar17;
      *(byte *)(param_1 + 0xfd9d) = *(byte *)(param_1 + 0xfd9d) | bVar17;
      if (bVar17 && uVar26 == 0) {
        *(longlong *)(param_1 + 0xf8c0) = local_260;
        *(longlong *)(param_1 + 0xf8d8) = local_260;
      }
      goto LAB_100597b4;
    }
  }
  bVar19 = bVar16 & bVar15 & bVar14 & bVar13 & bVar12 & bVar18 & bVar19 & bVar21 & bVar20;
  *(byte *)(param_1 + 0xf669) = (bVar20 ^ 1) & *(byte *)(param_1 + 0xf669);
  *(byte *)(param_1 + 0xf6a0) = (bVar20 ^ 1) & *(byte *)(param_1 + 0xf6a0);
  local_288 = bVar19;
  if (*pcVar3 == '\0') {
    bVar21 = FUN_10058080(param_1,bVar11);
    local_288 = bVar21 & bVar19;
  }
  if (*(char *)(param_1 + 0xfd9a) != '\0' || (int *)param_1 != local_290) {
    if (*pcVar3 == '\0') {
      piVar33 = (int *)(param_1 + 0xfbc0);
      piVar34 = (int *)(param_1 + 0xfbc4);
      bVar19 = 2;
      if (*(int *)(param_1 + 0xfbc4) == 0) {
        bVar19 = 0;
      }
      switch(bVar19 | *piVar33 != 0) {
      case 0:
        piVar33 = (int *)0x0;
        uVar32 = 0;
        break;
      case 1:
        uVar32 = 1;
        break;
      case 2:
        uVar32 = 1;
        uVar23 = *(undefined4 *)(*piVar45 + 0x1304);
        goto LAB_10059b2c;
      default:
        uVar32 = 2;
      }
LAB_10059b18:
      uVar23 = *(undefined4 *)(*piVar45 + 0x1304);
      piVar34 = piVar33;
LAB_10059b2c:
      FUN_10114a90(uVar23,uVar32,piVar34);
    }
    else if (*(int *)(param_1 + 0xfa7c) != 0) {
      piVar33 = (int *)(param_1 + 0xfbc0);
      uVar32 = 1;
      goto LAB_10059b18;
    }
    *(char *)(param_1 + 0xfd9a) = '\0';
  }
  if (*(char *)(param_1 + 0xfd9e) != '\0') {
    if (*(char *)(param_1 + 0xfdaa) != '\0') {
      FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),4,*(undefined8 *)(param_1 + 0xf8a0));
    }
    *(char *)(param_1 + 0xfd9e) = '\0';
  }
  if (*(char *)(param_1 + 0xfd9c) != '\0') {
    if (*pcVar3 == '\0') {
      if ((*(int *)(param_1 + 0xfd7c) != 0) || (*(char *)(param_1 + 0xfd9d) != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),8,*(undefined8 *)(param_1 + 0xf8c0));
      }
      pcVar44 = (char *)(param_1 + 0xfd9d);
      if ((*(int *)(param_1 + 0xfd80) != 0) || (*pcVar44 != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),9,*(undefined8 *)(param_1 + 0xf8c0));
      }
      if ((*(int *)(param_1 + 0xfd84) != 0) || (*pcVar44 != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),10,*(undefined8 *)(param_1 + 0xf8c0));
      }
      *(undefined4 *)(param_1 + 0xf660) = 0;
      if (((*(int *)(param_1 + 0xfd2c) != 0) || (*(int *)(param_1 + 0xfd54) != 0)) ||
         (*pcVar44 != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),0xd,*(undefined8 *)(param_1 + 0xf8d8));
      }
      if (((*(int *)(param_1 + 0xfd30) != 0) || (*(int *)(param_1 + 0xfd58) != 0)) ||
         (*pcVar44 != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),0xe,*(undefined8 *)(param_1 + 0xf8d8));
      }
      if (((*(int *)(param_1 + 0xfd34) != 0) || (*(int *)(param_1 + 0xfd5c) != 0)) ||
         (*pcVar44 != '\0')) {
        FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),0xf,*(undefined8 *)(param_1 + 0xf8d8));
      }
      *pcVar44 = '\0';
      *(undefined4 *)(param_1 + 0xf698) = 0;
    }
    else if (*(int *)(param_1 + 0xfa7c) != 0) {
      FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),8,*(undefined8 *)(param_1 + 0xf8c0));
    }
    *(undefined1 *)(param_1 + 0xfd9c) = 0;
  }
  if ((*(char *)(param_1 + 0xfda2) != '\0' || (int *)param_1 != local_290) && (*pcVar3 == '\0')) {
    if ((*(int *)(param_1 + 0xfd70) != 0) || (*(char *)(param_1 + 0xfda1) != '\0')) {
      FUN_101150a0(*(undefined4 *)(*piVar45 + 0x1304),0xb,*(undefined8 *)(local_294 + 0x78c8));
    }
    if ((*(int *)(param_1 + 0xfd74) != 0) || (*(char *)(param_1 + 0xfda1) != '\0')) {
      FUN_101150a0(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),0xc,
                   *(undefined8 *)(param_1 + 0xf8c8));
    }
    if ((*(int *)(param_1 + 0xfd20) != 0) || (*(int *)(param_1 + 0xfd48) != 0)) {
      FUN_101150a0(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),0x10,
                   *(undefined8 *)(local_294 + 0x78e0));
    }
    *(char *)(param_1 + 0xfda1) = '\0';
    *(undefined1 *)(param_1 + 0xfda2) = 0;
  }
  if (*(char *)(param_1 + 0xf66a) != '\0' || (int *)param_1 != local_290) {
    uVar26 = (uint)LZCOUNT((uint)*(byte *)(param_1 + 0xfd95));
    iVar24 = 0x20 - uVar26;
    if ((1 - (uVar26 >> 5) & 0xff) == 0) {
      iVar24 = 0;
    }
    iVar37 = param_1 + 0xfa78;
    if (*(int *)(param_1 + 0xfa78) == 0) {
      iVar37 = 0;
    }
    iVar29 = 0xfa5c;
    if (*(char *)(param_1 + 0x763d) == '\0') {
      iVar29 = 0xf9e4;
    }
    FUN_10115820(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),iVar24,iVar29 + param_1,0,
                 iVar37);
    *(int *)(param_1 + 0xf840) = iVar24;
    if (*(int *)(param_1 + 0xfa80) == 0) {
      uVar23 = (*pcVar9)();
      uVar23 = (*extraout_w11_07)(uVar23);
    }
    else {
      uVar23 = (*pcVar9)();
      uVar23 = (*extraout_w11_06)(uVar23);
    }
    *(undefined4 *)(param_1 + 0xf868) = uVar23;
    *(undefined4 *)(param_1 + 0xf86c) = 0;
    *(undefined1 *)(param_1 + 0xf66a) = 0;
    *(undefined1 *)(param_1 + 0xf6a4) = 1;
    *(undefined1 *)(param_1 + 0xfd99) = 1;
  }
  if (*(char *)(param_1 + 0xf66b) != '\0') {
    if (*(char *)(param_1 + 0x7642) == '\0') {
      if (*(int *)(param_1 + 0xfa90) == 0) {
LAB_1005a09c:
        puVar36 = (undefined8 *)(param_1 + 0x7c4);
      }
      else {
        uVar23 = (*pcVar9)();
        cVar22 = (*extraout_w11_08)(uVar23);
        if (cVar22 == '\0') goto LAB_1005a09c;
        if (*(char *)(param_1 + 0x764a) == '\0') {
          puVar36 = (undefined8 *)(param_1 + 0x790);
        }
        else {
          puVar36 = (undefined8 *)(param_1 + 0xb60);
        }
      }
      uStack_238 = puVar36[1];
      local_228 = puVar36[3];
      local_230 = puVar36[2];
      uVar48 = puVar36[5];
      uVar32 = puVar36[4];
      local_210 = *(undefined4 *)(puVar36 + 6);
      local_240._0_4_ = (float)*puVar36;
      uVar23 = 0;
      if (*(int *)(param_1 + 0xfa90) != 0) {
        uVar23 = (float)local_240;
      }
      local_240._4_4_ = (float)((ulonglong)*puVar36 >> 0x20);
      local_240 = CONCAT44(local_240._4_4_,uVar23);
    }
    else {
      uStack_238 = *(undefined8 *)(param_1 + 0xb9c);
      local_240 = *(undefined8 *)(param_1 + 0xb94);
      local_228 = *(undefined8 *)(param_1 + 0xbac);
      local_230 = *(undefined8 *)(param_1 + 0xba4);
      uVar48 = *(undefined8 *)(param_1 + 0xbbc);
      uVar32 = *(undefined8 *)(param_1 + 0xbb4);
      local_210 = *(undefined4 *)(param_1 + 0xbc4);
    }
    uStack_218 = (undefined4)uVar48;
    uStack_214 = (undefined4)((ulonglong)uVar48 >> 0x20);
    local_220 = (undefined4)uVar32;
    uStack_21c = (undefined4)((ulonglong)uVar32 >> 0x20);
    piVar45 = *(int **)(param_1 + 0xf830);
    if ((piVar45 != (int *)0x0) && (*(int *)(param_1 + 0xfa90) != 0)) {
      if ((*piVar45 == 0) || (piVar45[1] == 0)) {
        iVar24 = 0;
      }
      else {
        iVar24 = 1;
      }
      if ((*(int *)(param_1 + 0x790) == 0) || (*(int *)(param_1 + 0x794) == 0)) {
        iVar37 = 0;
      }
      else {
        iVar37 = 1;
      }
      if (iVar24 == iVar37) {
        puVar4 = (undefined1 *)(param_1 + 0xfd9b);
      }
      else {
        uVar23 = (*pcVar9)();
        uVar23 = (*extraout_w11_09)(uVar23);
        iVar24 = FUN_10056f98(param_1,uVar23);
        puVar4 = (undefined1 *)(iVar24 + 0xfd9b);
        *puVar4 = 1;
      }
      iVar24 = 0xb6c;
      if (*(char *)(param_1 + 0x764a) == '\0') {
        iVar24 = 0x79c;
      }
      if ((*(int *)(*(int *)(param_1 + 0xf830) + 0xc) != 0) != (*(int *)(iVar24 + param_1) != 0)) {
        uVar23 = (*pcVar9)();
        uVar23 = (*extraout_w11_10)(uVar23);
        FUN_10056f98(param_1,uVar23);
        *puVar4 = 1;
      }
    }
    uVar23 = FUN_10061858(*(int *)(param_1 + 0xf6b8) + 0x15f0,&local_240);
    *(undefined4 *)(param_1 + 0xf830) = uVar23;
    *(undefined1 *)(param_1 + 0xfd99) = 1;
    *(undefined1 *)(param_1 + 0xf6a4) = 1;
  }
  if (*(char *)(param_1 + 0xf66b) != '\0' || (int *)param_1 != local_290) {
    if ((*(int *)(param_1 + 0xf830) == 0) || (*(int *)(*(int *)(param_1 + 0xf830) + 0xc) != 0)) {
      iVar24 = 0x7580;
      if (*(char *)(param_1 + 0x7642) != '\0') {
        iVar24 = 0x7581;
      }
      bVar19 = *(byte *)(iVar24 + param_1);
      iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
      puVar39 = (uint *)(iVar24 + 0x61c);
      if ((uint)bVar19 != *puVar39) {
        FUN_10113218(iVar24);
        uVar23 = (*pcVar9)();
        (*extraout_w11_11)(uVar23,(uint)bVar19);
        *puVar39 = (uint)bVar19;
      }
    }
    *(char *)(param_1 + 0xf66b) = '\0';
  }
  iVar24 = local_1fc;
  if (*(char *)(param_1 + 0xf66c) != '\0') {
    local_280 = (uint *)(param_1 + 0xdc8);
    auStack_188[2] = 0;
    auStack_188[3] = 0;
    auStack_188[0] = 0;
    auStack_188[1] = 0;
    auStack_188[6] = 0;
    auStack_188[7] = 0;
    auStack_188[4] = 0;
    auStack_188[5] = 0;
    uStack_160 = 0;
    stack0xfffffe98 = 0;
    local_150 = 0;
    uStack_158 = 0;
    uStack_140 = 0;
    uStack_148 = 0;
    local_130 = 0;
    uStack_138 = 0;
    uVar26 = 0;
    uStack_120 = 0;
    uStack_128 = 0;
    local_110 = 0;
    uStack_118 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    local_f0 = 0;
    uStack_f8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    local_d0 = 0;
    uStack_d8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    local_b0 = 0;
    uStack_b8 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_60 = 0;
    uStack_68 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    local_190 = CONCAT44(1,(uint)(*(int *)(param_1 + 0xe7c) == 1));
    local_27c = (uint *)(param_1 + 0xdc8);
    local_28c = pcVar9;
    do {
      if (*(int *)(param_1 + 0xfa80 + uVar26 * 4) != 0) {
        if (*(char *)(iVar24 + 0x649) == '\0') {
          puVar39 = local_280;
          if (*(char *)(param_1 + 0x7642) == '\0') {
            uVar23 = (*pcVar9)();
            cVar22 = (*extraout_w11_13)(uVar23);
            iVar37 = 0xbc8;
            iVar29 = 0xc48;
            goto LAB_1005a458;
          }
        }
        else {
          puVar39 = local_27c;
          if (*(char *)(param_1 + 0x7642) == '\0') {
            uVar23 = (*local_28c)();
            cVar22 = (*extraout_w11_12)(uVar23);
            iVar37 = 0xcc8;
            iVar29 = 0xd48;
LAB_1005a458:
            if (cVar22 == '\0') {
              iVar37 = iVar29;
            }
            puVar39 = (uint *)(iVar37 + uVar26 * 0x20 + param_1);
          }
        }
        uVar48 = *(undefined8 *)(puVar39 + 2);
        uVar32 = *(undefined8 *)puVar39;
        auStack_188[uVar26 * 10 + 2] = (uint)((ulonglong)uVar32 >> 0x20);
        auStack_188[uVar26 * 10 + 3] = (uint)uVar48;
        auStack_188[uVar26 * 10 + 4] = (uint)((ulonglong)uVar48 >> 0x20);
        auStack_188[uVar26 * 10 + 1] = 0;
        auStack_188[uVar26 * 10 + 5] = puVar39[4];
        auStack_188[uVar26 * 10 + 6] = puVar39[5];
        auStack_188[uVar26 * 10 + 7] = puVar39[6];
        auStack_188[uVar26 * 10 + 8] = 0;
        auStack_188[uVar26 * 10] = (uint)uVar32;
        auStack_164[uVar26 * 0x28] = (char)puVar39[7];
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < 4);
    uVar23 = FUN_100610b0(*(int *)(param_1 + 0xf6b8) + 0x1610,&local_190);
    *(undefined4 *)(param_1 + 0xf824) = uVar23;
    if (*(uint *)(param_1 + 0xe3c) < 2) {
      uVar23 = 0xffffffff;
    }
    else {
      uVar23 = *(undefined4 *)(param_1 + 0xe38);
    }
    *(undefined4 *)(param_1 + 0xf828) = uVar23;
    *(undefined1 *)(param_1 + 0xfd99) = 1;
  }
  if (*(char *)(param_1 + 0xf66c) != '\0' || (int *)param_1 != local_290) {
    piVar45 = (int *)(param_1 + 0xe60);
    iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
    if ((((*piVar45 != *(int *)(iVar24 + 0x60c)) ||
         (*(int *)(param_1 + 0xe64) != *(int *)(iVar24 + 0x610))) ||
        (*(int *)(param_1 + 0xe68) != *(int *)(iVar24 + 0x614))) ||
       (*(int *)(param_1 + 0xe6c) != *(int *)(iVar24 + 0x618))) {
      *(int *)(iVar24 + 0x60c) = *piVar45;
      *(undefined4 *)(iVar24 + 0x610) = *(undefined4 *)(param_1 + 0xe64);
      *(undefined4 *)(iVar24 + 0x614) = *(undefined4 *)(param_1 + 0xe68);
      *(undefined4 *)(iVar24 + 0x618) = *(undefined4 *)(param_1 + 0xe6c);
      FUN_10113218(iVar24);
      uVar23 = (*pcVar9)();
      (*extraout_w11_14)(uVar23,piVar45);
    }
    *(undefined1 *)(param_1 + 0xf66c) = 0;
  }
  if (*(char *)(param_1 + 0xf66d) != '\0') {
    piVar45 = (int *)(param_1 + 0xe1c);
    *piVar45 = 0;
    piVar33 = (int *)(param_1 + 0xdf4);
    *piVar33 = 0;
    if (*(int *)(param_1 + 0xfa90) != 0) {
      if (*(uint *)(&DAT_10162c20 + *(int *)(*(int *)(param_1 + 0xfa90) + 0x1c) * 4) == 0x20) {
        *piVar45 = 0;
        *piVar33 = 0;
      }
      else {
        iVar24 = (int)((float)((1 << (ulonglong)
                                     (*(uint *)(&DAT_10162c20 +
                                               *(int *)(*(int *)(param_1 + 0xfa90) + 0x1c) * 4) &
                                     0x1f)) + -1) * *(float *)(param_1 + 0xe70));
        *piVar45 = iVar24;
        *piVar33 = iVar24;
      }
    }
    if (*(char *)(param_1 + 0x7642) == '\0') {
      iVar24 = 0xe10;
      if (*(char *)(local_1fc + 0x648) == '\0') {
        iVar24 = 0xde8;
      }
      puVar36 = (undefined8 *)(iVar24 + param_1);
    }
    else {
      puVar36 = (undefined8 *)&DAT_1016e378;
    }
    uStack_21c = 0;
    uStack_218 = 0;
    local_240 = *puVar36;
    uStack_238 = puVar36[1];
    local_230 = puVar36[2];
    iVar24 = *(int *)((int)puVar36 + 0x1c);
    local_228 = CONCAT44(*(undefined4 *)(puVar36 + 4),*(undefined4 *)(puVar36 + 3));
    local_220 = *(undefined4 *)((int)puVar36 + 0x24);
    *(byte *)(param_1 + 0xf6a1) = *(int *)(param_1 + 0xfa74) != iVar24 | *(byte *)(param_1 + 0xf6a1)
    ;
    *(int *)(param_1 + 0xfa74) = iVar24;
    uVar23 = FUN_10060cf8(*(int *)(param_1 + 0xf6b8) + 0x1620,&local_240);
    *(undefined4 *)(param_1 + 0xf82c) = uVar23;
    *(undefined1 *)(param_1 + 0xfd99) = 1;
    *(undefined1 *)(param_1 + 0xf66d) = 0;
  }
  if (*(char *)(param_1 + 0xf66e) == '\0' && (int *)param_1 == local_290) goto LAB_1005a934;
  if ((*(char *)(param_1 + 0x7642) == '\0') &&
     ((*(int *)((int)local_284 + 0x361c) != 0 || ((*(uint *)((int)local_284 + 0x3634) & 1) != 0))))
  {
    uStack_238 = *(undefined8 *)(param_1 + 0xec8);
    local_240 = *(undefined8 *)(param_1 + 0xec0);
    local_230 = *(undefined8 *)(param_1 + 0xed0);
LAB_1005a8c8:
    local_240 = CONCAT44(*(float *)(param_1 + 0xef4) + local_240._4_4_,
                         *(float *)(param_1 + 0xef0) + (float)local_240);
  }
  else {
    uStack_238 = *(undefined8 *)(param_1 + 0xee0);
    local_240 = *(undefined8 *)(param_1 + 0xed8);
    local_230 = *(undefined8 *)(param_1 + 0xee8);
    if (*(char *)(param_1 + 0x7642) == '\0') goto LAB_1005a8c8;
  }
  if (*(int *)((int)local_284 + 0x361c) == 0) {
    local_230 = 0x3f80000000000000;
  }
  FUN_10115c60(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),1,&local_240);
  *(undefined1 *)(param_1 + 0xf66e) = 0;
LAB_1005a934:
  if ((*(char *)(param_1 + 0xf66d) != '\0') ||
     (*(char *)(param_1 + 0xf6a1) != '\0' || (int *)param_1 != local_290)) {
    iVar24 = *(int *)(param_1 + 0xfa80);
    if ((iVar24 == 0) && (iVar24 = *(int *)(param_1 + 0xfa90), iVar24 == 0)) {
      local_284 = 1.0;
      fVar49 = 1.0;
    }
    else {
      uVar26 = *(uint *)(iVar24 + 0x14);
      (*pcVar9)();
      uVar25 = (*extraout_w11_15)(iVar24,0);
      uVar28 = *(uint *)(iVar24 + 0x18);
      local_284 = (float)uVar25 / (float)uVar26;
      (*pcVar9)();
      uVar26 = (*extraout_w11_16)(iVar24,0);
      fVar49 = (float)uVar26 / (float)uVar28;
    }
    piVar45 = (int *)(param_1 + 0xe50);
    *piVar45 = (int)((float)*(int *)(param_1 + 0xe40) * local_284);
    *(int *)(param_1 + 0xe54) = (int)((float)*(int *)(param_1 + 0xe44) * fVar49);
    *(int *)(param_1 + 0xe58) = (int)((float)*(int *)(param_1 + 0xe48) * local_284);
    *(int *)(param_1 + 0xe5c) = (int)((float)*(int *)(param_1 + 0xe4c) * fVar49);
    if (*(int *)(param_1 + 0xfa74) == 0) {
      uVar23 = (*pcVar9)();
      uVar23 = (*extraout_w11_17)(uVar23,0);
      uVar27 = (*pcVar9)();
      uStack_1bc = (*extraout_w11_18)(uVar27,0);
      local_1c8[0] = 0;
      local_1c8[1] = 0;
      piVar45 = local_1c8;
      local_1c8[2] = uVar23;
    }
    FUN_10115b30(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),1,piVar45);
    *(undefined1 *)(param_1 + 0xf6a1) = 0;
  }
  pcVar3 = (char *)(param_1 + 0xfd99);
  if (*pcVar3 != '\0') {
    iVar24 = 0xfa6c;
    if (*(char *)(param_1 + 0x763d) != '\0') {
      iVar24 = 0xfa70;
    }
    *(undefined4 *)(param_1 + 0xf844) = *(undefined4 *)(iVar24 + param_1);
    uVar23 = FUN_1011a318(*(int *)(param_1 + 0xf6b8) + 0x1640,param_1 + 0xf808);
    *(undefined4 *)(param_1 + 0xfbbc) = uVar23;
  }
  if (*pcVar3 != '\0' || (int *)param_1 != local_290) {
    iVar24 = *(int *)(param_1 + 0xfbbc);
    iVar37 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
    if (iVar24 != *(int *)(iVar37 + 0x18)) {
      FUN_10113218(iVar37);
      uVar23 = (*pcVar9)();
      (*extraout_w11_19)(uVar23,iVar24);
      *(int *)(iVar37 + 0x18) = iVar24;
      *(undefined1 *)(iVar37 + 0x620) = 1;
      *(undefined4 *)(iVar37 + 0x1c) = 0;
    }
    iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
    FUN_1011ec30(*(undefined4 *)(iVar24 + 0x8e4),*(int *)(param_1 + 0xfbbc),
                 *(undefined4 *)(iVar24 + 0x8e0),iVar24,*(undefined8 *)(iVar24 + 0x938));
    *pcVar3 = '\0';
  }
  if (*(char *)(param_1 + 0xfd98) != '\0' || (int *)param_1 != local_290) {
    iVar24 = *(int *)(param_1 + 0xfc18);
    iVar37 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
    piVar45 = (int *)(iVar37 + 0x20);
    if (iVar24 != *piVar45) {
      FUN_10113218(iVar37);
      uVar23 = (*pcVar9)();
      (*extraout_w11_20)(uVar23,iVar24);
      *piVar45 = iVar24;
    }
    *(undefined1 *)(param_1 + 0xfd98) = 0;
  }
  if (*(char *)(param_1 + 0xfd9b) != '\0' || (int *)param_1 != local_290) {
    if ((*(int *)(param_1 + 0x790) == 0) || (*(int *)(param_1 + 0x794) == 0)) {
      local_294 = 0x20;
    }
    else {
      local_294 = 0x10;
    }
    uVar26 = 0;
    iVar24 = 0xb6c;
    if (*(char *)(param_1 + 0x764a) == '\0') {
      iVar24 = 0x79c;
    }
    iVar37 = 0x10;
    if (*(int *)(iVar24 + param_1) == 0) {
      iVar37 = 0x20;
    }
    uVar28 = *(uint *)(param_1 + 0xf8f8);
    if (uVar28 != 0) {
      local_27c = (uint *)(param_1 + 0xf748);
      do {
        uVar25 = local_294;
        *local_27c = 0;
        if (uVar26 < uVar28) {
          piVar45 = (int *)(*(int *)(param_1 + 0xf8f4) + uVar26 * 0x18 + 8);
        }
        else {
          piVar45 = (int *)0x0;
        }
        if (*(char *)((int)piVar45 + 0xb) != '\0' || (int *)param_1 != local_290) {
          uVar28 = 0x80;
          if ((char)piVar45[1] == '\0') {
            uVar28 = 0;
          }
          uVar38 = 0x40;
          if (*(char *)((int)piVar45 + 5) == '\0') {
            uVar38 = 0;
          }
          local_284 = (float)(uVar28 | uVar38);
          if (local_284 == 0.0) {
LAB_1005b350:
            bVar19 = *(byte *)((int)piVar45 + 6);
            if (*(char *)((int)piVar45 + 10) == '\0') {
              if (bVar19 != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = bVar19 - 1;
                  iVar29 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,4,*(undefined8 *)(iVar24 + 0x938));
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && iVar29 != 4) {
                    FUN_10112f60(iVar24,iVar46,iVar47,iVar29,4);
                  }
                }
              }
              if (*(byte *)((int)piVar45 + 7) != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = *(byte *)((int)piVar45 + 7) - 1;
                  iVar29 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,4,*(undefined8 *)(iVar24 + 0x938));
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && iVar29 != 4) {
                    FUN_10112f60(iVar24,iVar46,iVar47,iVar29,4);
                  }
                }
              }
              if (*(byte *)(piVar45 + 2) != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = *(byte *)(piVar45 + 2) - 1;
                  iVar29 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,4,*(undefined8 *)(iVar24 + 0x938));
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && iVar29 != 4) {
                    FUN_10112f60(iVar24,iVar46,iVar47,iVar29,4);
                  }
                }
              }
              if (*(byte *)((int)piVar45 + 9) != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = *(byte *)((int)piVar45 + 9) - 1;
                  iVar29 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,4,*(undefined8 *)(iVar24 + 0x938));
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && iVar29 != 4) {
                    iVar35 = 4;
                    goto LAB_1005b6dc;
                  }
                }
              }
            }
            else {
              if (bVar19 != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = bVar19 - 1;
                  uVar28 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,local_294,*(undefined8 *)(iVar24 + 0x938));
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && uVar28 != uVar25) {
                    if (uVar28 == 0) {
                      uVar38 = 0;
                      if ((uVar25 & 0xfffff33f) != 0) {
                        uVar38 = uVar25;
                      }
                      if (uVar38 == 0) goto LAB_1005b40c;
                    }
                    FUN_10112f60(iVar24,iVar46,iVar47,uVar28,local_294);
                  }
                }
              }
LAB_1005b40c:
              if (*(byte *)((int)piVar45 + 7) != 0) {
                iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
                iVar29 = *(int *)(iVar24 + 0x8e0);
                if ((iVar29 != 0) && (iVar46 = *piVar45, iVar46 != 0)) {
                  iVar47 = *(byte *)((int)piVar45 + 7) - 1;
                  iVar29 = FUN_1011ef68(*(undefined4 *)(iVar24 + 0x8e4),iVar46,iVar47,0,iVar29,
                                        iVar24,iVar37,*(undefined8 *)(iVar24 + 0x938));
                  iVar35 = iVar37;
                  if (*(int *)(*(int *)(iVar24 + 0x8e0) + 0x20) != 3 && iVar29 != iVar37) {
LAB_1005b6dc:
                    FUN_10112f60(iVar24,iVar46,iVar47,iVar29,iVar35);
                  }
                }
              }
            }
          }
          else {
            if (*(char *)(param_1 + 0x7642) == '\0') {
              bVar18 = true;
            }
            else {
              bVar18 = *piVar45 == *(int *)(param_1 + 0xfb7c);
            }
            if (!bVar18) goto LAB_1005b350;
            if (*(char *)((int)piVar45 + 10) == '\0') {
              bVar19 = *(byte *)((int)piVar45 + 6);
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                puVar39 = (uint *)(param_1 + 0xf74c);
                puVar2 = (uint *)(param_1 + 0xf748);
                uVar28 = *puVar39;
                if (*puVar2 == uVar28) {
                  local_28c = (code *)(uVar28 << 1);
                  if (uVar28 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  if (iVar24 == 0) goto LAB_1005b0e4;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                puVar5 = (undefined4 *)(*piVar33 + *puVar2 * 8);
                *puVar5 = 4;
                puVar5[1] = bVar19 - 1;
                *puVar2 = *puVar2 + 1;
              }
LAB_1005b0e4:
              bVar19 = *(byte *)((int)piVar45 + 7);
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                puVar39 = (uint *)(param_1 + 0xf74c);
                puVar2 = (uint *)(param_1 + 0xf748);
                uVar28 = *puVar39;
                if (*puVar2 == uVar28) {
                  local_28c = (code *)(uVar28 << 1);
                  if (uVar28 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  if (iVar24 == 0) goto LAB_1005b19c;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                puVar5 = (undefined4 *)(*piVar33 + *puVar2 * 8);
                *puVar5 = 4;
                puVar5[1] = bVar19 - 1;
                *puVar2 = *puVar2 + 1;
              }
LAB_1005b19c:
              bVar19 = *(byte *)(piVar45 + 2);
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                puVar39 = (uint *)(param_1 + 0xf74c);
                puVar2 = (uint *)(param_1 + 0xf748);
                uVar28 = *puVar39;
                if (*puVar2 == uVar28) {
                  local_28c = (code *)(uVar28 << 1);
                  if (uVar28 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  if (iVar24 == 0) goto LAB_1005b254;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                puVar5 = (undefined4 *)(*piVar33 + *puVar2 * 8);
                *puVar5 = 4;
                puVar5[1] = bVar19 - 1;
                *puVar2 = *puVar2 + 1;
              }
LAB_1005b254:
              bVar19 = *(byte *)((int)piVar45 + 9);
              uVar28 = local_294;
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                puVar39 = (uint *)(param_1 + 0xf74c);
                puVar2 = (uint *)(param_1 + 0xf748);
                uVar28 = *puVar39;
                if (*puVar2 == uVar28) {
                  local_28c = (code *)(uVar28 << 1);
                  if (uVar28 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  uVar28 = local_294;
                  if (iVar24 == 0) goto LAB_1005b30c;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                puVar5 = (undefined4 *)(*piVar33 + *puVar2 * 8);
                *puVar5 = 4;
                puVar5[1] = bVar19 - 1;
                *puVar2 = *puVar2 + 1;
                uVar28 = local_294;
              }
            }
            else {
              uVar28 = local_294;
              if (local_294 == 0x20) {
                uVar28 = (uint)local_284 | 0x20;
              }
              bVar19 = *(byte *)((int)piVar45 + 6);
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                local_280 = (uint *)(param_1 + 0xf748);
                puVar39 = (uint *)(param_1 + 0xf74c);
                uVar25 = *puVar39;
                if (*local_280 == uVar25) {
                  local_28c = (code *)(uVar25 << 1);
                  if (uVar25 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  if (iVar24 == 0) goto LAB_1005af64;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                puVar39 = (uint *)(*piVar33 + *local_280 * 8);
                *puVar39 = uVar28;
                puVar39[1] = bVar19 - 1;
                *local_280 = *local_280 + 1;
              }
LAB_1005af64:
              bVar19 = *(byte *)((int)piVar45 + 7);
              if (bVar19 != 0) {
                piVar33 = (int *)(param_1 + 0xf744);
                local_280 = (uint *)(param_1 + 0xf748);
                puVar39 = (uint *)(param_1 + 0xf74c);
                uVar25 = *puVar39;
                if (*local_280 == uVar25) {
                  local_28c = (code *)(uVar25 << 1);
                  if (uVar25 == 0) {
                    local_28c = (code *)&DAT_00000010;
                  }
                  iVar24 = (int)local_28c * 8;
                  if ((uint)local_28c >> 0x1d != 0) {
                    iVar24 = -1;
                  }
                  iVar24 = FUN_101322b0(iVar24);
                  if (iVar24 == 0) goto LAB_1005b30c;
                  FUN_101325a0(iVar24,*piVar33,((ulonglong)*puVar39 & 0x1fffffff) << 3);
                  FUN_101322d0(*piVar33);
                  *piVar33 = iVar24;
                  *puVar39 = (uint)local_28c;
                }
                piVar33 = (int *)(*piVar33 + *local_280 * 8);
                *piVar33 = iVar37;
                piVar33[1] = bVar19 - 1;
                *local_280 = *local_280 + 1;
              }
            }
LAB_1005b30c:
            local_294 = uVar28;
            FUN_10113e98(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),*piVar45);
          }
          *(undefined1 *)((int)piVar45 + 0xb) = 0;
        }
        uVar28 = *(uint *)(param_1 + 0xf8f8);
        uVar26 = uVar26 + 1;
      } while (uVar26 < uVar28);
    }
    *(undefined1 *)(param_1 + 0xfd9b) = 0;
  }
  local_294 = *(uint *)(param_1 + 0xfd90);
  uVar26 = (local_294 & 0xaaaaaaaa) >> 1 | (local_294 & 0x55555555) << 1;
  uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
  uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
  uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
  uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
  if (*(char *)(param_1 + 0xf66f) == '\0' && (int *)param_1 == local_290) {
    lVar30 = LZCOUNT(uVar26);
    uVar26 = (uint)lVar30;
    if ((1 - (uVar26 >> 5) & 0xff) != 0) {
      pbVar8 = (byte *)((int)&local_294 + ((int)uVar26 >> 3));
      *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar26 & 7)) ^ 0xff);
      while( true ) {
        iVar24 = *(int *)(param_1 + 0xfbd0 + (int)lVar30 * 4);
        if (iVar24 != 0) {
          *(undefined8 *)(iVar24 + 0x20) = *(undefined8 *)(param_1 + 0xfc30);
          piVar45 = (int *)(*(int *)(param_1 + (int)lVar30 * 4 + 0xfbd0) + 0x30);
          do {
            cVar22 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(ZEXT48(piVar45),0x10);
            if (bVar18) {
              *piVar45 = *piVar45 + -1;
              cVar22 = ExclusiveMonitorsStatus();
            }
          } while (cVar22 != '\0');
          DataMemoryBarrier(2,3);
        }
        uVar26 = (local_294 & 0xaaaaaaaa) >> 1 | (local_294 & 0x55555555) << 1;
        uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        lVar30 = LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
        uVar26 = (uint)lVar30;
        if ((1 - (uVar26 >> 5) & 0xff) == 0) break;
        pbVar8 = (byte *)((int)&local_294 + ((int)uVar26 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar26 & 7)) ^ 0xff);
      }
    }
  }
  else {
    lVar30 = LZCOUNT(uVar26);
    uVar26 = (uint)lVar30;
    auStack_188[0] = 0;
    auStack_188[1] = 0;
    local_190 = 0;
    auStack_188[4] = 0;
    auStack_188[5] = 0;
    auStack_188[2] = 0;
    auStack_188[3] = 0;
    stack0xfffffe98 = 0;
    auStack_188[6] = 0;
    auStack_188[7] = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    if ((1 - (uVar26 >> 5) & 0xff) == 0) {
      iVar24 = 0;
    }
    else {
      do {
        iVar24 = (int)lVar30;
        pbVar8 = (byte *)((int)&local_294 + (iVar24 >> 3));
        *pbVar8 = *pbVar8 & ((byte)(1 << (ulonglong)(uVar26 & 7)) ^ 0xff);
        if (*(int *)(param_1 + 0xfbd0 + iVar24 * 4) != 0) {
          uVar23 = (*pcVar9)();
          lVar31 = (*extraout_w11_21)(uVar23);
          iVar37 = param_1 + iVar24 * 4;
          if (lVar31 != 0) {
            uVar28 = *(uint *)(iVar37 + 0x100c);
            (&local_190)[iVar24 * 2] = lVar31 + (ulonglong)uVar28;
            uVar25 = *(uint *)(*(int *)(iVar37 + 0xfbd0) + 0x28);
            uVar26 = uVar25 - uVar28;
            if (uVar25 < uVar28) {
              uVar26 = 0;
            }
            auStack_188[iVar24 * 4] = uVar26;
            auStack_188[iVar24 * 4 + 1] = *(uint *)(iVar37 + 0xfc8);
          }
          piVar45 = (int *)(iVar37 + 0xfbd0);
          uVar23 = (*pcVar9)();
          (*extraout_w11_22)(uVar23,lVar30);
          iVar37 = *piVar45;
          uVar32 = *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x938);
          *(undefined4 *)(iVar37 + 0x10) =
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1300) + 0xc);
          *(undefined8 *)(iVar37 + 0x18) = uVar32;
          iVar37 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
          FUN_1011ec30(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 0x172c0),*piVar45,
                       *(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1300),iVar37,
                       *(undefined8 *)(iVar37 + 0x938));
          *(undefined8 *)(*piVar45 + 0x20) = *(undefined8 *)(param_1 + 0xfc30);
          piVar45 = (int *)(*piVar45 + 0x30);
          do {
            cVar22 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(ZEXT48(piVar45),0x10);
            if (bVar18) {
              *piVar45 = *piVar45 + -1;
              cVar22 = ExclusiveMonitorsStatus();
            }
          } while (cVar22 != '\0');
          DataMemoryBarrier(2,3);
        }
        iVar24 = iVar24 + 1;
        uVar26 = (local_294 & 0xaaaaaaaa) >> 1 | (local_294 & 0x55555555) << 1;
        uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
        uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
        uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
        lVar30 = LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
        uVar26 = (uint)lVar30;
      } while ((1 - (uVar26 >> 5) & 0xff) != 0);
    }
    FUN_101154a0(*(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1304),0,iVar24,&local_190);
    *(undefined1 *)(param_1 + 0xf66f) = 0;
  }
  pbVar8 = (byte *)(param_1 + 0xf670);
  if (*(char *)(param_1 + 0xfd94) == '\0') {
    *pbVar8 = *pbVar8 | bVar11;
  }
  else {
    piVar45 = (int *)(param_1 + 0xfc10);
    uVar23 = (*pcVar9)();
    bVar21 = (*extraout_w11_23)(uVar23);
    bVar19 = *pbVar8;
    *pbVar8 = bVar19 | bVar21;
    if ((bVar19 == 0 && bVar21 == 0) && ((int *)param_1 == local_290)) {
      *(undefined8 *)(*piVar45 + 0x20) = *(undefined8 *)(param_1 + 0xfc30);
      iVar24 = *piVar45;
    }
    else {
      uVar23 = (*pcVar9)();
      local_1e0 = (*extraout_w11_24)(uVar23);
      iStack_1d8 = *(int *)(*piVar45 + 0x28);
      if (*piVar45 == *(int *)(param_1 + 0xf6d0)) {
        iStack_1d4 = 0x2a;
      }
      else {
        iStack_1d4 = *(int *)(param_1 + 0xfc14);
      }
      iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
      if (((*(longlong *)(iVar24 + 0x438) != local_1e0) || (*(int *)(iVar24 + 0x444) != iStack_1d4))
         || (*(int *)(iVar24 + 0x440) != iStack_1d8)) {
        FUN_10113218(iVar24);
        uVar23 = (*pcVar9)();
        (*extraout_w11_25)(uVar23,&local_1e0);
        *(undefined1 *)(iVar24 + 0x620) = 1;
        *(ulonglong *)(iVar24 + 0x440) = CONCAT44(iStack_1d4,iStack_1d8);
        *(longlong *)(iVar24 + 0x438) = local_1e0;
      }
      uVar32 = *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x938);
      iVar24 = *(int *)(param_1 + 0xfc10);
      *(undefined4 *)(iVar24 + 0x10) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1300) + 0xc);
      *(undefined8 *)(iVar24 + 0x18) = uVar32;
      iVar24 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304);
      FUN_1011ec30(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 0x172c0),
                   *(undefined4 *)(param_1 + 0xfc10),
                   *(undefined4 *)(*(int *)(param_1 + 0xf6b8) + 0x1300),iVar24,
                   *(undefined8 *)(iVar24 + 0x938));
      uVar23 = (*pcVar9)();
      (*extraout_w11_26)(uVar23);
      *(undefined1 *)(param_1 + 0xf670) = 0;
      *(undefined8 *)(*(int *)(param_1 + 0xfc10) + 0x20) = *(undefined8 *)(param_1 + 0xfc30);
      iVar24 = *(int *)(param_1 + 0xfc10);
    }
    piVar45 = (int *)(iVar24 + 0x30);
    do {
      cVar22 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(ZEXT48(piVar45),0x10);
      if (bVar11) {
        *piVar45 = *piVar45 + -1;
        cVar22 = ExclusiveMonitorsStatus();
      }
    } while (cVar22 != '\0');
    DataMemoryBarrier(2,3);
  }
  if (*(char *)(param_1 + 0xf6a4) != '\0') {
    iVar24 = *(int *)(param_1 + 0xfa80);
    if (iVar24 != 0) {
      local_270 = 0;
      uVar26 = *(uint *)(param_1 + 0xfa94);
      local_268 = *(uint *)(iVar24 + 0x14) >> (ulonglong)(uVar26 & 0x1f);
      if (local_268 == 0) {
        local_268 = 1;
      }
      local_264 = *(uint *)(iVar24 + 0x18) >> (ulonglong)(uVar26 & 0x1f);
      if (local_264 == 0) {
        local_264 = 1;
      }
      auVar50 = (*pcVar9)(iVar24,uVar26 + *(int *)(param_1 + 0xfaa4) * *(int *)(iVar24 + 0x2c));
      (*extraout_w11_27)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_270);
    }
    iVar24 = *(int *)(param_1 + 0xfa84);
    if (iVar24 != 0) {
      uVar26 = *(uint *)(param_1 + 0xfa98);
      local_270 = 0;
      local_268 = *(uint *)(iVar24 + 0x14) >> (ulonglong)(uVar26 & 0x1f);
      if (local_268 == 0) {
        local_268 = 1;
      }
      local_264 = *(uint *)(iVar24 + 0x18) >> (ulonglong)(uVar26 & 0x1f);
      if (local_264 == 0) {
        local_264 = 1;
      }
      auVar50 = (*pcVar9)(iVar24,uVar26 + *(int *)(param_1 + 0xfaa8) * *(int *)(iVar24 + 0x2c));
      (*extraout_w11_28)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_270);
    }
    iVar24 = *(int *)(param_1 + 0xfa88);
    if (iVar24 != 0) {
      uVar26 = *(uint *)(param_1 + 0xfa9c);
      local_270 = 0;
      local_268 = *(uint *)(iVar24 + 0x14) >> (ulonglong)(uVar26 & 0x1f);
      if (local_268 == 0) {
        local_268 = 1;
      }
      local_264 = *(uint *)(iVar24 + 0x18) >> (ulonglong)(uVar26 & 0x1f);
      if (local_264 == 0) {
        local_264 = 1;
      }
      auVar50 = (*pcVar9)(iVar24,uVar26 + *(int *)(param_1 + 0xfaac) * *(int *)(iVar24 + 0x2c));
      (*extraout_w11_29)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_270);
    }
    iVar24 = *(int *)(param_1 + 0xfa8c);
    if (iVar24 != 0) {
      uVar26 = *(uint *)(param_1 + 0xfaa0);
      local_270 = 0;
      local_268 = *(uint *)(iVar24 + 0x14) >> (ulonglong)(uVar26 & 0x1f);
      if (local_268 == 0) {
        local_268 = 1;
      }
      local_264 = *(uint *)(iVar24 + 0x18) >> (ulonglong)(uVar26 & 0x1f);
      if (local_264 == 0) {
        local_264 = 1;
      }
      auVar50 = (*pcVar9)(iVar24,uVar26 + *(int *)(param_1 + 0xfab0) * *(int *)(iVar24 + 0x2c));
      (*extraout_w11_30)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_270);
    }
    iVar24 = 0xb94;
    if (*(char *)(param_1 + 0x7642) == '\0') {
      iVar24 = 0x790;
    }
    iVar37 = *(int *)(param_1 + 0xfa90);
    if (((iVar37 != 0) && (*(int *)(param_1 + iVar24) != 0)) &&
       (((int *)(param_1 + iVar24))[1] != 0)) {
      uVar26 = *(uint *)(param_1 + 0xfab4);
      local_1b8 = 0;
      local_1b0 = *(uint *)(iVar37 + 0x14) >> (ulonglong)(uVar26 & 0x1f);
      if (local_1b0 == 0) {
        local_1b0 = 1;
      }
      local_1ac = *(uint *)(iVar37 + 0x18) >> (ulonglong)(uVar26 & 0x1f);
      if (local_1ac == 0) {
        local_1ac = 1;
      }
      auVar50 = (*pcVar9)(iVar37,uVar26 + *(int *)(param_1 + 0xfab8) * *(int *)(iVar37 + 0x2c));
      (*extraout_w11_31)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_1b8);
    }
    *(undefined1 *)(param_1 + 0xf6a4) = 0;
  }
  return local_288;
}

