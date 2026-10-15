/*
 * FUN_100929f8 at 100929f8
 * undefined FUN_100929f8(void)
 * Address ranges: 100929f8-1009379f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100929f8(undefined4 param_1,uint *param_2,undefined8 param_3,undefined1 param_4,
            undefined1 param_5,uint param_6,int *param_7,undefined8 *param_8,uint param_9,
            undefined4 param_10,int *param_11,undefined4 param_12,undefined8 *param_13)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  uint uVar17;
  char cVar18;
  int extraout_w12;
  int extraout_w12_00;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  undefined1 auVar22 [16];
  int *local_9c0;
  int *local_9bc;
  undefined4 local_9b8;
  uint local_9b4;
  uint local_9b0;
  uint uStack_9ac;
  uint local_9a8;
  uint uStack_9a4;
  undefined4 local_9a0;
  undefined4 uStack_99c;
  undefined1 local_980 [8];
  int local_978;
  int iStack_974;
  undefined4 local_970;
  undefined1 local_96c;
  uint local_968 [2];
  int local_960;
  int iStack_95c;
  undefined4 local_958;
  undefined1 local_954;
  int local_950;
  uint local_94c;
  int *local_948;
  undefined8 local_940;
  undefined5 uStack_938;
  undefined3 uStack_933;
  undefined2 local_930;
  undefined4 local_920;
  undefined8 local_918;
  longlong local_910;
  ulonglong local_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined4 local_8f0;
  undefined8 *local_8e8;
  byte local_8e0 [16];
  undefined2 local_8d0;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined1 auStack_880 [8];
  undefined8 local_878;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined1 local_81c;
  undefined1 auStack_81a [66];
  undefined8 local_7d8;
  undefined4 local_7d0;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined1 local_74c;
  undefined1 uStack_74b;
  byte abStack_74a [16];
  undefined2 uStack_73a;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined4 local_6e8;
  uint local_6e4;
  uint *local_6e0;
  undefined1 *local_6dc;
  char local_6d6;
  char local_6d4;
  char local_6cf;
  char local_6ce;
  undefined1 local_6cd;
  undefined1 local_6cc;
  undefined8 local_370;
  int local_364;
  undefined2 local_352;
  undefined1 local_350;
  undefined1 local_34f;
  
  local_94c = param_6;
  local_920 = param_1;
  local_8e8 = param_8;
  uVar9 = FUN_101325d0(auStack_880,0,0x840);
  local_860 = 0;
  uStack_850 = 0;
  uStack_858 = 0;
  local_840 = 0;
  uStack_848 = 0;
  uVar20 = 0;
  local_6cd = 0;
  local_868 = (ulonglong)param_9;
  local_838._0_6_ = CONCAT24(0x40,auStack_81a);
  local_838 = (ulonglong)(uint6)local_838;
  local_352 = 0;
  local_350 = 1;
  uStack_7b8 = 0x11080000210800;
  local_7c0 = 0x31080000410800;
  local_6e4 = param_2[0x11] & 0x77fff;
  local_6dc = auStack_880;
  local_7b0 = CONCAT44(local_7b0._4_4_,0x410802);
  local_7d8 = 0x41040000110400;
  local_7d0 = 0x20000d00;
  local_878 = param_3;
  local_81c = param_5;
  local_6e0 = param_2;
  local_370 = param_3;
  local_34f = param_4;
  uVar9 = FUN_1009ceb0(uVar9,auStack_880);
  uVar9 = FUN_100985b8(uVar9,auStack_880,0,7);
  iVar19 = extraout_w12;
  if ((((local_6d6 != '\0') || (local_6d4 != '\0')) || (((uint)local_370 >> 9 & 1) != 0)) &&
     ((local_6e4 >> 2 & 1) != 0)) {
    uVar9 = FUN_100985b8(uVar9,auStack_880,3,7);
    iVar19 = extraout_w12_00;
  }
  if (iVar19 != 0) {
    if ((local_6e4 >> 0x10 & 1) != 0) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,0xf,7);
    }
    if (((local_6d6 != '\0') || (local_6d4 != '\0')) && ((local_6e4 >> 0x11 & 1) != 0)) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,0x10,7);
    }
  }
  if ((local_6e4 >> 0xb & 1) != 0) {
    uVar9 = FUN_100985b8(uVar9,auStack_880,1,1);
  }
  if ((local_6e4 >> 0xc & 1) != 0) {
    uVar9 = FUN_100985b8(uVar9,auStack_880,1,2);
  }
  if ((local_6e4 >> 0xd & 1) != 0) {
    uVar9 = FUN_100985b8(uVar9,auStack_880,1,4);
  }
  if ((local_6e4 >> 1 & 1) != 0) {
    uVar9 = FUN_100985b8(uVar9,auStack_880,6,8);
  }
  uVar17 = 0;
  uVar12 = 8;
  uVar13 = 4;
  uVar14 = local_6e4;
  puVar16 = local_6e0;
  do {
    if ((((puVar16[8] & puVar16[3]) >> (ulonglong)(uVar17 * 3 & 0x1f) & 7) == 0) &&
       (uVar7 = (puVar16[5] & puVar16[4] & *puVar16) >> (ulonglong)(uVar17 * 3 & 0x1f) & 7,
       ((int)uVar12 << (ulonglong)uVar7 & uVar14) != 0)) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,uVar7 + 7,
                           0xf >> ((int)uVar13 -
                                   ((puVar16[6] & puVar16[1]) >> (ulonglong)(uVar7 * 3) & 7) & 0x1f)
                          );
      uVar14 = local_6e4;
      puVar16 = local_6e0;
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 8);
  if (local_6cf == '\0') {
    if ((uVar14 & 1) != 0) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,5,0xf);
      uVar14 = local_6e4;
    }
    if ((uVar14 >> 7 & 1) == 0) goto LAB_10092ea8;
LAB_10092e98:
    uVar12 = 7;
  }
  else {
    uVar17 = 0;
    cVar18 = local_6ce;
    do {
      if ((puVar16[10] >> (ulonglong)(uVar17 * 3 & 0x1f) & 7) != 0) {
        cVar18 = '\x01';
        local_6ce = '\x01';
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < 8);
    if ((uVar14 & 1) != 0) {
      if ((puVar16[0xb] & 3) == 1) {
        uVar9 = FUN_100985b8(uVar9,auStack_880,5,7);
        uVar14 = local_6e4;
        puVar16 = local_6e0;
        cVar18 = local_6ce;
      }
      if ((puVar16[0xb] & 0xc) == 4) {
        uVar9 = FUN_100985b8(uVar9,auStack_880,5,7);
        uVar14 = local_6e4;
        puVar16 = local_6e0;
        cVar18 = local_6ce;
      }
      if (cVar18 == '\0') {
        if ((puVar16[0xb] & 0x30) == 0x10) {
          uVar12 = 8;
          goto LAB_10092da4;
        }
      }
      else {
        if ((puVar16[0xb] & 0x30) == 0x10) {
          uVar9 = FUN_100985b8(uVar9,auStack_880,5,0xf);
          uVar14 = local_6e4;
          puVar16 = local_6e0;
          cVar18 = local_6ce;
        }
        if ((puVar16[0xb] & 0xc0) == 0x40) {
          uVar12 = 7;
LAB_10092da4:
          uVar9 = FUN_100985b8(uVar9,auStack_880,5,uVar12);
          uVar14 = local_6e4;
          puVar16 = local_6e0;
          cVar18 = local_6ce;
        }
      }
    }
    if ((uVar14 >> 1 & 1) == 0) goto LAB_10092ea8;
    if ((puVar16[0xb] & 3) == 2) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,6,7);
      puVar16 = local_6e0;
      cVar18 = local_6ce;
    }
    if ((puVar16[0xb] & 0xc) == 8) {
      uVar9 = FUN_100985b8(uVar9,auStack_880,6,7);
      puVar16 = local_6e0;
      cVar18 = local_6ce;
    }
    if (cVar18 != '\0') {
      if ((puVar16[0xb] & 0x30) == 0x20) {
        uVar9 = FUN_100985b8(uVar9,auStack_880,6,0xf);
        puVar16 = local_6e0;
      }
      if ((puVar16[0xb] & 0xc0) != 0x80) goto LAB_10092ea8;
      goto LAB_10092e98;
    }
    if ((puVar16[0xb] & 0x30) != 0x20) goto LAB_10092ea8;
    uVar12 = 8;
  }
  FUN_100985b8(uVar9,auStack_880,6,uVar12);
LAB_10092ea8:
  if (((uint)local_370 >> 9 & 1) != 0) {
    uVar17 = 0;
    if ((uint)uStack_738 != 0) {
      do {
        if (abStack_74a[uVar17] == 3) {
          abStack_74a[(uint)uStack_738] = 0x11;
          uStack_738 = CONCAT44(uStack_738._4_4_,(uint)uStack_738 + 1);
          uStack_74b = 7;
          break;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < (uint)uStack_738);
    }
  }
  local_8f8 = 0;
  local_918 = 0x43425844;
  local_910 = 0;
  local_8f0 = 0;
  local_908 = 0x100000000;
  uStack_900 = 0x300000000;
  bVar4 = false;
  FUN_10122c50(param_11,&local_918,0x2c);
  local_6cc = 1;
  local_910 = CONCAT35(local_910._5_3_,0x100000000);
  local_910 = CONCAT44(local_910._4_4_,0x800);
  uVar9 = FUN_101322b0(0x800);
  local_918 = CONCAT44((int)uVar9,(int)uVar9);
  local_364 = FUN_10095708(uVar9,&local_918,auStack_880);
  iVar19 = (int)local_918;
  if (local_364 != 0) {
    _uStack_938 = CONCAT35(uStack_933,0x100000800);
    uVar10 = FUN_101322b0(0x800);
    local_950 = (int)uVar10;
    local_940 = CONCAT44(local_950,local_950);
    bVar3 = false;
    local_958 = 0x200;
    local_954 = 1;
    uVar9 = FUN_101322b0(0x200);
    local_960 = (int)uVar9;
    iStack_95c = local_960;
    auVar22 = FUN_1008f690(uVar9,&local_960,auStack_880);
    uVar12 = auVar22._8_8_;
    uVar9 = auVar22._0_8_;
    local_968[0] = auVar22._0_4_;
    iVar21 = local_960;
    if (local_968[0] != 0) {
      uVar17 = 0;
      if ((uint)uStack_738 != 0) {
        do {
          auVar22 = FUN_101234c8(&local_960,uVar12,uVar17,
                                 *(undefined1 *)((int)&uStack_75c + (uint)abStack_74a[uVar17]));
          uVar12 = auVar22._8_8_;
          uVar9 = auVar22._0_8_;
          uVar17 = uVar17 + 1;
        } while (uVar17 < (uint)uStack_738);
      }
      FUN_1008f7f0(uVar9,&local_960,auStack_880);
      local_96c = 1;
      local_970 = 0x80;
      local_978 = FUN_101322b0(0x80);
      iStack_974 = local_978;
      FUN_1008fa80(local_920,&local_978,0,auStack_880);
      local_9b8 = 0x100003e;
      local_9c0 = &local_978;
      local_9bc = (int *)0x1;
      uVar9 = FUN_10122cd8(&local_9c0,0xc);
      uVar9 = FUN_100986a8(uVar9,&local_960,auStack_880);
      if (((uint)local_860 >> 3 & 1) != 0) {
        uVar9 = FUN_10123390((int)local_868,&local_960,3,2,0x2f0,local_868._4_4_ >> 3 & 1);
      }
      FUN_1008f928(uVar9,&local_960,auStack_880);
      FUN_10123060(&local_960,&local_978,local_968[0]);
      iVar21 = local_960;
      FUN_10122c50(&local_940,local_960,iStack_95c - local_960);
      bVar3 = true;
      FUN_101322d0(local_978);
      local_950 = local_940._4_4_;
      uVar10 = local_940;
    }
    uVar9 = FUN_101322d0(iVar21);
    if (bVar3) {
      piVar5 = param_11 + 1;
      *(int *)(*param_11 + 0x20) = *piVar5 - *param_11;
      uVar11 = FUN_10098928(uVar9,param_11,auStack_880,1);
      if ((uVar11 & 1) != 0) {
        *(int *)(*param_11 + 0x24) = *piVar5 - *param_11;
        FUN_10122c50(param_11,iVar19,local_918._4_4_ - iVar19);
        *(int *)(*param_11 + 0x28) = *piVar5 - *param_11;
        FUN_10122c50(param_11,uVar10 & 0xffffffff,local_950 - (int)uVar10);
        FUN_10122e00(param_11);
        if (param_13 != (undefined8 *)0x0) {
          param_13[1] = uStack_858;
          *param_13 = local_860;
          param_13[3] = uStack_848;
          param_13[2] = uStack_850;
          param_13[4] = local_840;
        }
        bVar4 = true;
      }
    }
    FUN_101322d0(uVar10 & 0xffffffff);
  }
  FUN_101322d0(iVar19);
  if (bVar4) {
    local_8f8 = 0;
    local_8f0 = 0;
    local_860 = 0;
    uStack_850 = 0;
    uStack_858 = 0;
    local_840 = 0;
    uStack_848 = 0;
    uVar20 = 0;
    local_81c = 0;
    uVar17 = (uint)uStack_738;
    local_868 = (ulonglong)local_94c;
    local_838._0_6_ = CONCAT24(0x40,auStack_81a);
    local_838 = (ulonglong)(uint6)local_838;
    local_930 = CONCAT11(uStack_74b,local_74c);
    local_8d0 = uStack_73a;
    local_918 = 0x43425844;
    local_910 = 0;
    local_908 = 0x100000000;
    uStack_900 = 0x300000000;
    uVar9 = FUN_10122c50(param_7,&local_918,0x2c);
    local_6cc = 0;
    uStack_7a8 = 0;
    local_7b0 = 0x410802;
    local_7d8 = 0x41040000110400;
    local_7d0 = 0x20000d00;
    uStack_798 = 0;
    local_7a0 = 0;
    uStack_788 = 0;
    uStack_790 = 0;
    uStack_778 = 0;
    local_780 = 0;
    uStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    uStack_754 = 0;
    local_760 = 0;
    uStack_75c = 0;
    abStack_74a[2] = 0;
    abStack_74a[3] = 0;
    abStack_74a[4] = 0;
    abStack_74a[5] = 0;
    abStack_74a[6] = 0;
    abStack_74a[7] = 0;
    abStack_74a[8] = 0;
    abStack_74a[9] = 0;
    uStack_750 = 0;
    local_74c = 0;
    uStack_74b = 0;
    abStack_74a[0] = 0;
    abStack_74a[1] = 0;
    uStack_738 = 0;
    abStack_74a[10] = 0;
    abStack_74a[0xb] = 0;
    abStack_74a[0xc] = 0;
    abStack_74a[0xd] = 0;
    abStack_74a[0xe] = 0;
    abStack_74a[0xf] = 0;
    uStack_73a = 0;
    uStack_728 = 0;
    uStack_730 = 0;
    uStack_718 = 0;
    local_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_6f8 = 0;
    local_700 = 0;
    local_6f0 = 0;
    local_6e8 = 0;
    uStack_7b8 = 0x11080000210800;
    local_7c0 = 0x31080000410800;
    if (((int)local_868 - 0x10051U & 0xfffeffff) == 0) {
      local_6cd = 0;
    }
    else {
      local_6cd = 1;
      bVar15 = 0;
      uVar14 = 0;
      do {
        pbVar1 = abStack_74a + uVar14;
        uVar14 = uVar14 + 1;
        *pbVar1 = bVar15;
        bVar15 = bVar15 + 1;
      } while (uVar14 < 0x11);
    }
    uVar14 = 0;
    if (uVar17 != 0) {
      uVar10 = ZEXT48(local_8e0);
      uVar11 = ZEXT48(&local_940);
      do {
        bVar15 = *(byte *)(uVar14 + (int)uVar10);
        if (bVar15 != 0x11) {
          uVar9 = FUN_100985b8(uVar9,auStack_880,bVar15,*(undefined1 *)((uint)bVar15 + (int)uVar11))
          ;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar17);
    }
    piVar5 = param_7 + 1;
    *(int *)(*param_7 + 0x20) = *piVar5 - *param_7;
    uVar10 = FUN_10098928(uVar9,param_7,auStack_880,0);
    if ((uVar10 & 1) != 0) {
      local_96c = 1;
      *(int *)(*param_7 + 0x24) = *piVar5 - *param_7;
      local_918 = 0x4e47534f;
      local_910 = 0x800000000;
      local_970 = 0x210;
      local_978 = FUN_101322b0(0x210);
      iStack_974 = local_978;
      uVar9 = FUN_10122c50(&local_978,&local_918,0x10);
      uVar14 = 0;
      uStack_8b8 = 0;
      local_8c0 = 0;
      uStack_8a8 = 0;
      uStack_8b0 = 0;
      uStack_898 = 0;
      local_8a0 = 0;
      uStack_888 = 0;
      uStack_890 = 0;
      if (uVar17 != 0) {
        do {
          local_948 = piVar5;
          local_950 = 0;
          local_94c = 0;
          bVar15 = local_8e0[uVar14];
          local_968[0] = 3;
          local_980[0] = 0xf;
          FUN_10098738(uVar9,auStack_880,bVar15,&local_950,&local_94c,local_968,local_980,1);
          uVar6 = FUN_10122d90(&local_8c0,local_950);
          local_918 = CONCAT44(local_94c,uVar6);
          local_910 = (ulonglong)local_968[0] << 0x20;
          local_908 = (ulonglong)
                      (CONCAT15(~*(byte *)((int)&local_940 + (uint)bVar15),
                                CONCAT14(local_980[0],uVar14)) & 0xffff000000ff);
          uVar9 = FUN_10122c50(&local_978,&local_918,0x18);
          uVar14 = uVar14 + 1;
          piVar5 = local_948;
        } while (uVar14 < uVar17);
      }
      FUN_101230e0(&local_978,uVar17,&local_8c0);
      iVar19 = local_978;
      FUN_10122c50(param_7,local_978,iStack_974 - local_978);
      FUN_101322d0(iVar19);
      local_96c = 1;
      *(int *)(*param_7 + 0x28) = *piVar5 - *param_7;
      local_970 = 0x200;
      local_978 = FUN_101322b0(0x200);
      iStack_974 = local_978;
      local_968[0] = FUN_10122ff8(&local_978,(int)local_868);
      local_954 = 1;
      local_958 = 0x80;
      local_960 = FUN_101322b0(0x80);
      iStack_95c = local_960;
      FUN_101232a8((int)local_868,&local_978,0);
      uVar14 = 0;
      if (uVar17 != 0) {
        do {
          bVar15 = local_8e0[uVar14];
          if (bVar15 != 0x11) {
            FUN_10123478(&local_978,*(undefined1 *)((int)&uStack_7a8 + (uint)bVar15 * 4 + 4),
                         *(undefined1 *)((int)&local_940 + (uint)bVar15));
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
        uVar14 = 0;
        do {
          FUN_101235c8(&local_978,uVar14,*(undefined1 *)((int)&local_940 + (uint)local_8e0[uVar14]))
          ;
          uVar6 = local_920;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar17);
        uVar14 = 0;
        local_948 = param_7;
        do {
          bVar15 = local_8e0[uVar14];
          if (bVar15 == 0x11) {
            uVar7 = FUN_10121590(&local_868,1,1);
            uVar8 = FUN_10098500(uVar6,&local_960,auStack_880,3,7);
            local_9b0 = 1;
            local_9b8 = 0x10;
            local_9bc = &local_960;
            local_9c0 = (int *)&local_868;
            local_9a0 = 0xa4;
            uStack_99c = 0;
            local_9a8 = 0xa4;
            local_9b4 = uVar7;
            uStack_9ac = uVar8;
            uStack_9a4 = uVar8;
            FUN_10122a88(&local_9c0,0x28);
            local_9a8 = 0;
            uStack_9a4 = 0;
            local_9b0 = 1;
            local_9b8 = 0x44;
            local_9bc = &local_960;
            local_9c0 = (int *)&local_868;
            local_9b4 = uVar7;
            uStack_9ac = uVar7;
            FUN_10122a88(&local_9c0,0x20);
            local_9a0 = 0;
            uStack_99c = 0;
            local_9b0 = 7;
            local_9b8 = 0x38;
            local_9bc = &local_960;
            local_9c0 = (int *)&local_868;
            local_9a8 = 0xa4;
            local_9b4 = uVar14 | 0x410200;
            uStack_9ac = uVar8;
            uStack_9a4 = uVar7;
            FUN_10122a88(&local_9c0,0x28);
            if ((uVar8 & 0x3f00) == 0) {
              FUN_10121648(&local_868,uVar8);
            }
          }
          else {
            bVar2 = *(byte *)((int)&local_940 + (uint)bVar15);
            uVar7 = FUN_10098500(uVar6,&local_960,auStack_880,bVar15,bVar2);
            local_9b0 = (uint)bVar2;
            local_9a8 = (uint)*(byte *)(local_9b0 + 0x101623c0);
            uStack_9a4 = 0;
            local_9b8 = 0x36;
            local_9bc = &local_960;
            local_9c0 = (int *)&local_868;
            local_9b4 = uVar14 | 0x410200;
            uStack_9ac = uVar7;
            FUN_10122a88(&local_9c0,0x20);
          }
          FUN_10121648(&local_868,uVar7);
          uVar14 = uVar14 + 1;
          param_7 = local_948;
        } while (uVar14 < uVar17);
      }
      local_9b8 = 0x100003e;
      local_9c0 = &local_960;
      local_9bc = (int *)0x1;
      FUN_10122cd8(&local_9c0,0xc);
      if (local_838._5_1_ != 0) {
        local_9b8 = 0x2000068;
        local_9bc = (int *)0x2;
        local_9c0 = &local_978;
        local_9b4 = (uint)local_838._5_1_;
        FUN_10122cd8(&local_9c0,0x10);
      }
      FUN_10123060(&local_978,&local_960,local_968[0]);
      iVar19 = local_978;
      FUN_10122c50(param_7,local_978,iStack_974 - local_978);
      FUN_101322d0(local_960);
      FUN_101322d0(iVar19);
      FUN_10122e00(param_7);
      if (local_8e8 != (undefined8 *)0x0) {
        local_8e8[1] = uStack_858;
        *local_8e8 = local_860;
        local_8e8[3] = uStack_848;
        local_8e8[2] = uStack_850;
        local_8e8[4] = local_840;
      }
      uVar20 = 1;
    }
  }
  return uVar20;
}

