/*
 * FUN_100770c0 at 100770c0
 * undefined FUN_100770c0(void)
 * Address ranges: 100770c0-10077e2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100770c0(uint param_1,uint *param_2,undefined8 param_3,undefined1 param_4,undefined1 param_5,
            int *param_6,int *param_7,undefined8 *param_8,uint param_9,undefined4 param_10,
            int *param_11,undefined4 param_12,undefined8 *param_13)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte bVar14;
  uint *puVar15;
  uint uVar16;
  char cVar17;
  int extraout_w12;
  int extraout_w12_00;
  int iVar18;
  undefined8 uVar19;
  int iVar20;
  undefined1 auVar21 [16];
  int *local_930;
  int *local_92c;
  undefined4 local_928;
  uint local_924;
  uint local_920;
  undefined4 uStack_91c;
  uint local_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined1 local_8f0 [4];
  uint local_8ec;
  int local_8e8;
  int iStack_8e4;
  undefined4 local_8e0;
  undefined1 local_8dc;
  int local_8d8;
  int iStack_8d4;
  undefined4 local_8d0;
  undefined1 local_8cc;
  int local_8c8;
  int *local_8c4;
  int local_8c0 [4];
  undefined8 local_8b0;
  undefined5 uStack_8a8;
  undefined3 uStack_8a3;
  undefined2 local_8a0;
  undefined8 local_890;
  longlong local_888;
  ulonglong local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined4 local_868;
  undefined8 *local_860;
  byte local_850 [16];
  undefined2 local_840;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7f0 [8];
  undefined8 local_7e8;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined1 local_78c;
  undefined1 auStack_78a [66];
  undefined8 local_748;
  undefined4 local_740;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined1 local_6bc;
  undefined1 uStack_6bb;
  byte abStack_6ba [16];
  undefined2 uStack_6aa;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  uint local_658;
  uint *local_654;
  undefined1 *local_650;
  char local_64a;
  char local_648;
  char local_643;
  char local_642;
  undefined1 local_641;
  undefined1 local_640;
  undefined8 local_370;
  int local_364;
  undefined2 local_352;
  undefined1 local_350;
  undefined1 local_34f;
  
  local_8c4 = param_6;
  local_860 = param_8;
  uVar7 = FUN_100ff690(auStack_7f0,0,0x7b0);
  local_7d0 = 0;
  uStack_7c0 = 0;
  uStack_7c8 = 0;
  local_7b0 = 0;
  uStack_7b8 = 0;
  uVar19 = 0;
  local_641 = 0;
  local_7d8 = (ulonglong)param_9;
  local_7a8._0_6_ = CONCAT24(0x40,auStack_78a);
  local_7a8 = (ulonglong)(uint6)local_7a8;
  local_352 = 0;
  local_350 = 1;
  uStack_728 = 0x11080000210800;
  local_730 = 0x31080000410800;
  local_658 = param_2[0x11] & 0x77fff;
  local_650 = auStack_7f0;
  local_720 = CONCAT44(local_720._4_4_,0x410802);
  local_748 = 0x41040000110400;
  local_740 = 0x20000d00;
  local_7e8 = param_3;
  local_78c = param_5;
  local_654 = param_2;
  local_370 = param_3;
  local_34f = param_4;
  uVar7 = FUN_1007dc80(uVar7,auStack_7f0);
  uVar7 = FUN_10079568(uVar7,auStack_7f0,0,7);
  iVar18 = extraout_w12;
  if ((((local_64a != '\0') || (local_648 != '\0')) || (((uint)local_370 >> 9 & 1) != 0)) &&
     ((local_658 >> 2 & 1) != 0)) {
    uVar7 = FUN_10079568(uVar7,auStack_7f0,3,7);
    iVar18 = extraout_w12_00;
  }
  if (iVar18 != 0) {
    if ((local_658 >> 0x10 & 1) != 0) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,0xf,7);
    }
    if (((local_64a != '\0') || (local_648 != '\0')) && ((local_658 >> 0x11 & 1) != 0)) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,0x10,7);
    }
  }
  if ((local_658 >> 0xb & 1) != 0) {
    uVar7 = FUN_10079568(uVar7,auStack_7f0,1,1);
  }
  if ((local_658 >> 0xc & 1) != 0) {
    uVar7 = FUN_10079568(uVar7,auStack_7f0,1,2);
  }
  if ((local_658 >> 0xd & 1) != 0) {
    uVar7 = FUN_10079568(uVar7,auStack_7f0,1,4);
  }
  if ((local_658 >> 1 & 1) != 0) {
    uVar7 = FUN_10079568(uVar7,auStack_7f0,6,8);
  }
  uVar16 = 0;
  uVar11 = 8;
  uVar12 = 4;
  uVar13 = local_658;
  puVar15 = local_654;
  do {
    if ((((puVar15[8] & puVar15[3]) >> (ulonglong)(uVar16 * 3 & 0x1f) & 7) == 0) &&
       (uVar10 = (puVar15[5] & puVar15[4] & *puVar15) >> (ulonglong)(uVar16 * 3 & 0x1f) & 7,
       ((int)uVar11 << (ulonglong)uVar10 & uVar13) != 0)) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,uVar10 + 7,
                           0xf >> ((int)uVar12 -
                                   ((puVar15[6] & puVar15[1]) >> (ulonglong)(uVar10 * 3) & 7) & 0x1f
                                  ));
      uVar13 = local_658;
      puVar15 = local_654;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 8);
  if (local_643 == '\0') {
    if ((uVar13 & 1) != 0) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,5,0xf);
      uVar13 = local_658;
    }
    if ((uVar13 >> 7 & 1) == 0) goto LAB_10077570;
LAB_10077560:
    uVar11 = 7;
  }
  else {
    uVar16 = 0;
    cVar17 = local_642;
    do {
      if ((puVar15[10] >> (ulonglong)(uVar16 * 3 & 0x1f) & 7) != 0) {
        cVar17 = '\x01';
        local_642 = '\x01';
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 8);
    if ((uVar13 & 1) != 0) {
      if ((puVar15[0xb] & 3) == 1) {
        uVar7 = FUN_10079568(uVar7,auStack_7f0,5,7);
        uVar13 = local_658;
        puVar15 = local_654;
        cVar17 = local_642;
      }
      if ((puVar15[0xb] & 0xc) == 4) {
        uVar7 = FUN_10079568(uVar7,auStack_7f0,5,7);
        uVar13 = local_658;
        puVar15 = local_654;
        cVar17 = local_642;
      }
      if (cVar17 == '\0') {
        if ((puVar15[0xb] & 0x30) == 0x10) {
          uVar11 = 8;
          goto LAB_1007746c;
        }
      }
      else {
        if ((puVar15[0xb] & 0x30) == 0x10) {
          uVar7 = FUN_10079568(uVar7,auStack_7f0,5,0xf);
          uVar13 = local_658;
          puVar15 = local_654;
          cVar17 = local_642;
        }
        if ((puVar15[0xb] & 0xc0) == 0x40) {
          uVar11 = 7;
LAB_1007746c:
          uVar7 = FUN_10079568(uVar7,auStack_7f0,5,uVar11);
          uVar13 = local_658;
          puVar15 = local_654;
          cVar17 = local_642;
        }
      }
    }
    if ((uVar13 >> 1 & 1) == 0) goto LAB_10077570;
    if ((puVar15[0xb] & 3) == 2) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,6,7);
      puVar15 = local_654;
      cVar17 = local_642;
    }
    if ((puVar15[0xb] & 0xc) == 8) {
      uVar7 = FUN_10079568(uVar7,auStack_7f0,6,7);
      puVar15 = local_654;
      cVar17 = local_642;
    }
    if (cVar17 != '\0') {
      if ((puVar15[0xb] & 0x30) == 0x20) {
        uVar7 = FUN_10079568(uVar7,auStack_7f0,6,0xf);
        puVar15 = local_654;
      }
      if ((puVar15[0xb] & 0xc0) != 0x80) goto LAB_10077570;
      goto LAB_10077560;
    }
    if ((puVar15[0xb] & 0x30) != 0x20) goto LAB_10077570;
    uVar11 = 8;
  }
  FUN_10079568(uVar7,auStack_7f0,6,uVar11);
LAB_10077570:
  if (((uint)local_370 >> 9 & 1) != 0) {
    uVar16 = 0;
    if ((uint)uStack_6a8 != 0) {
      do {
        if (abStack_6ba[uVar16] == 3) {
          abStack_6ba[(uint)uStack_6a8] = 0x11;
          uStack_6a8 = CONCAT44(uStack_6a8._4_4_,(uint)uStack_6a8 + 1);
          uStack_6bb = 7;
          break;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < (uint)uStack_6a8);
    }
  }
  local_870 = 0;
  local_890 = 0x43425844;
  local_888 = 0;
  local_868 = 0;
  local_880 = 0x100000000;
  uStack_878 = 0x300000000;
  bVar3 = false;
  FUN_100ef6d8(param_11,&local_890,0x2c);
  local_640 = 1;
  local_888 = CONCAT35(local_888._5_3_,0x100000000);
  local_888 = CONCAT44(local_888._4_4_,0x800);
  uVar7 = FUN_100fece0(0x800);
  local_890 = CONCAT44((int)uVar7,(int)uVar7);
  local_364 = FUN_10078fa0(uVar7,&local_890,auStack_7f0);
  iVar18 = (int)local_890;
  if (local_364 != 0) {
    _uStack_8a8 = CONCAT35(uStack_8a3,0x100000800);
    uVar8 = FUN_100fece0(0x800);
    local_8c8 = (int)uVar8;
    local_8b0 = CONCAT44(local_8c8,local_8c8);
    bVar2 = false;
    local_8d0 = 0x200;
    local_8cc = 1;
    uVar7 = FUN_100fece0(0x200);
    local_8d8 = (int)uVar7;
    iStack_8d4 = local_8d8;
    auVar21 = FUN_10073d68(uVar7,&local_8d8,auStack_7f0);
    uVar11 = auVar21._8_8_;
    uVar7 = auVar21._0_8_;
    local_8c0[0] = auVar21._0_4_;
    iVar20 = local_8d8;
    if (local_8c0[0] != 0) {
      uVar16 = 0;
      uVar13 = param_1;
      if ((uint)uStack_6a8 != 0) {
        do {
          local_8ec = uVar13;
          auVar21 = FUN_100eff50(&local_8d8,uVar11,uVar16,
                                 *(undefined1 *)((int)&uStack_6cc + (uint)abStack_6ba[uVar16]));
          uVar11 = auVar21._8_8_;
          uVar7 = auVar21._0_8_;
          uVar16 = uVar16 + 1;
          param_1 = local_8ec;
          uVar13 = local_8ec;
        } while (uVar16 < (uint)uStack_6a8);
      }
      FUN_10073ec8(uVar7,&local_8d8,auStack_7f0);
      local_8dc = 1;
      local_8e0 = 0x80;
      local_8e8 = FUN_100fece0(0x80);
      iStack_8e4 = local_8e8;
      FUN_10074158(param_1,&local_8e8,0,auStack_7f0);
      local_928 = 0x100003e;
      local_930 = &local_8e8;
      local_92c = (int *)0x1;
      uVar7 = FUN_100ef760(&local_930,0xc);
      uVar7 = FUN_100795f0(uVar7,&local_8d8,auStack_7f0);
      if (((uint)local_7d0 >> 3 & 1) != 0) {
        uVar7 = FUN_100efe18((int)local_7d8,&local_8d8,3,2,0xa0,local_7d8._4_4_ >> 3 & 1);
      }
      FUN_10074000(uVar7,&local_8d8,auStack_7f0);
      FUN_100efae8(&local_8d8,&local_8e8,local_8c0[0]);
      iVar20 = local_8d8;
      FUN_100ef6d8(&local_8b0,local_8d8,iStack_8d4 - local_8d8);
      bVar2 = true;
      FUN_100fed00(local_8e8);
      local_8c8 = local_8b0._4_4_;
      uVar8 = local_8b0;
    }
    uVar7 = FUN_100fed00(iVar20);
    if (bVar2) {
      piVar4 = param_11 + 1;
      *(int *)(*param_11 + 0x20) = *piVar4 - *param_11;
      uVar9 = FUN_10079830(uVar7,param_11,auStack_7f0);
      if ((uVar9 & 1) != 0) {
        *(int *)(*param_11 + 0x24) = *piVar4 - *param_11;
        FUN_100ef6d8(param_11,iVar18,local_890._4_4_ - iVar18);
        *(int *)(*param_11 + 0x28) = *piVar4 - *param_11;
        FUN_100ef6d8(param_11,uVar8 & 0xffffffff,local_8c8 - (int)uVar8);
        FUN_100ef888(param_11);
        if (param_13 != (undefined8 *)0x0) {
          param_13[1] = uStack_7c8;
          *param_13 = local_7d0;
          param_13[3] = uStack_7b8;
          param_13[2] = uStack_7c0;
          param_13[4] = local_7b0;
        }
        bVar3 = true;
      }
    }
    FUN_100fed00(uVar8 & 0xffffffff);
  }
  FUN_100fed00(iVar18);
  if (bVar3) {
    local_870 = 0;
    local_868 = 0;
    local_7d0 = 0;
    uStack_7c0 = 0;
    uStack_7c8 = 0;
    local_7b0 = 0;
    uStack_7b8 = 0;
    uVar19 = 0;
    local_78c = 0;
    uVar16 = (uint)uStack_6a8;
    local_7d8 = ZEXT48(local_8c4);
    local_7a8._0_6_ = CONCAT24(0x40,auStack_78a);
    local_7a8 = (ulonglong)(uint6)local_7a8;
    local_8a0 = CONCAT11(uStack_6bb,local_6bc);
    local_840 = uStack_6aa;
    local_890 = 0x43425844;
    local_888 = 0;
    local_880 = 0x100000000;
    uStack_878 = 0x300000000;
    uVar7 = FUN_100ef6d8(param_7,&local_890,0x2c);
    local_640 = 0;
    uStack_718 = 0;
    local_720 = 0x410802;
    local_748 = 0x41040000110400;
    local_740 = 0x20000d00;
    uStack_708 = 0;
    local_710 = 0;
    uStack_6f8 = 0;
    uStack_700 = 0;
    uStack_6e8 = 0;
    local_6f0 = 0;
    uStack_6d8 = 0;
    uStack_6e0 = 0;
    uStack_6c8 = 0;
    uStack_6c4 = 0;
    local_6d0 = 0;
    uStack_6cc = 0;
    abStack_6ba[2] = 0;
    abStack_6ba[3] = 0;
    abStack_6ba[4] = 0;
    abStack_6ba[5] = 0;
    abStack_6ba[6] = 0;
    abStack_6ba[7] = 0;
    abStack_6ba[8] = 0;
    abStack_6ba[9] = 0;
    uStack_6c0 = 0;
    local_6bc = 0;
    uStack_6bb = 0;
    abStack_6ba[0] = 0;
    abStack_6ba[1] = 0;
    uStack_6a8 = 0;
    abStack_6ba[10] = 0;
    abStack_6ba[0xb] = 0;
    abStack_6ba[0xc] = 0;
    abStack_6ba[0xd] = 0;
    abStack_6ba[0xe] = 0;
    abStack_6ba[0xf] = 0;
    uStack_6aa = 0;
    uStack_698 = 0;
    uStack_6a0 = 0;
    uStack_688 = 0;
    local_690 = 0;
    uStack_678 = 0;
    uStack_680 = 0;
    uStack_668 = 0;
    local_670 = 0;
    local_660 = 0;
    uStack_728 = 0x11080000210800;
    local_730 = 0x31080000410800;
    if (((int)local_7d8 - 0x10051U & 0xfffeffff) == 0) {
      local_641 = 0;
    }
    else {
      local_641 = 1;
      bVar14 = 0;
      uVar13 = 0;
      do {
        pbVar1 = abStack_6ba + uVar13;
        uVar13 = uVar13 + 1;
        *pbVar1 = bVar14;
        bVar14 = bVar14 + 1;
      } while (uVar13 < 0x11);
    }
    uVar13 = 0;
    if (uVar16 != 0) {
      uVar8 = ZEXT48(local_850);
      uVar9 = ZEXT48(&local_8b0);
      do {
        bVar14 = *(byte *)(uVar13 + (int)uVar8);
        if (bVar14 != 0x11) {
          uVar7 = FUN_10079568(uVar7,auStack_7f0,bVar14,*(undefined1 *)((uint)bVar14 + (int)uVar9));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
    piVar4 = param_7 + 1;
    *(int *)(*param_7 + 0x20) = *piVar4 - *param_7;
    uVar8 = FUN_10079830(uVar7,param_7,auStack_7f0);
    if ((uVar8 & 1) != 0) {
      local_8dc = 1;
      *(int *)(*param_7 + 0x24) = *piVar4 - *param_7;
      local_890 = 0x4e47534f;
      local_888 = 0x800000000;
      local_8e0 = 0x210;
      local_8e8 = FUN_100fece0(0x210);
      iStack_8e4 = local_8e8;
      auVar21 = FUN_100ef6d8(&local_8e8,&local_890,0x10);
      uVar13 = 0;
      uStack_828 = 0;
      local_830 = 0;
      uStack_818 = 0;
      uStack_820 = 0;
      uStack_808 = 0;
      local_810 = 0;
      uStack_7f8 = 0;
      uStack_800 = 0;
      if (uVar16 != 0) {
        do {
          local_8c4 = piVar4;
          local_8c8 = 0;
          bVar14 = local_850[uVar13];
          local_8c0[0] = 0;
          local_8ec = 3;
          local_8f0[0] = 0xf;
          FUN_10079680(auVar21._0_8_,auVar21._8_8_,bVar14,&local_8c8,local_8c0,&local_8ec,local_8f0)
          ;
          uVar5 = FUN_100ef818(&local_830,local_8c8);
          local_890 = CONCAT44(local_8c0[0],uVar5);
          local_888 = (ulonglong)local_8ec << 0x20;
          local_880 = (ulonglong)
                      (CONCAT15(~*(byte *)((int)&local_8b0 + (uint)bVar14),
                                CONCAT14(local_8f0[0],uVar13)) & 0xffff000000ff);
          auVar21 = FUN_100ef6d8(&local_8e8,&local_890,0x18);
          uVar13 = uVar13 + 1;
          piVar4 = local_8c4;
        } while (uVar13 < uVar16);
      }
      FUN_100efb68(&local_8e8,uVar16,&local_830);
      iVar18 = local_8e8;
      FUN_100ef6d8(param_7,local_8e8,iStack_8e4 - local_8e8);
      FUN_100fed00(iVar18);
      local_8cc = 1;
      *(int *)(*param_7 + 0x28) = *piVar4 - *param_7;
      local_8d0 = 0x200;
      local_8d8 = FUN_100fece0(0x200);
      iStack_8d4 = local_8d8;
      local_8ec = FUN_100efa80(&local_8d8,(int)local_7d8);
      local_8dc = 1;
      local_8e0 = 0x80;
      local_8e8 = FUN_100fece0(0x80);
      iStack_8e4 = local_8e8;
      FUN_100efd30((int)local_7d8,&local_8d8,0);
      uVar13 = 0;
      if (uVar16 != 0) {
        do {
          bVar14 = local_850[uVar13];
          if (bVar14 != 0x11) {
            FUN_100eff00(&local_8d8,*(undefined1 *)((int)&uStack_718 + (uint)bVar14 * 4 + 4),
                         *(undefined1 *)((int)&local_8b0 + (uint)bVar14));
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar16);
        uVar13 = 0;
        do {
          uVar7 = FUN_100f0050(&local_8d8,uVar13,
                               *(undefined1 *)((int)&local_8b0 + (uint)local_850[uVar13]));
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar16);
        uVar13 = 0;
        local_8c4 = param_7;
        do {
          bVar14 = local_850[uVar13];
          if (bVar14 == 0x11) {
            uVar7 = FUN_100ee580(&local_7d8,1,1);
            uVar5 = (undefined4)uVar7;
            uVar6 = FUN_10079568(uVar7,auStack_7f0,3,7);
            local_928 = 0x10;
            local_92c = &local_8e8;
            local_930 = (int *)&local_7d8;
            local_910 = 0xa4;
            uStack_90c = 0;
            local_918 = 0xa4;
            local_920 = 1;
            local_924 = uVar5;
            uStack_91c = uVar6;
            uStack_914 = uVar6;
            FUN_100ef510(&local_930,0x28);
            local_918 = 0;
            uStack_914 = 0;
            local_928 = 0x44;
            local_92c = &local_8e8;
            local_930 = (int *)&local_7d8;
            local_920 = 1;
            local_924 = uVar5;
            uStack_91c = uVar5;
            FUN_100ef510(&local_930,0x20);
            local_910 = 0;
            uStack_90c = 0;
            local_920 = 7;
            local_928 = 0x38;
            local_92c = &local_8e8;
            local_930 = (int *)&local_7d8;
            local_918 = 0xa4;
            local_924 = uVar13 | 0x410200;
            uStack_91c = uVar6;
            uStack_914 = uVar5;
            FUN_100ef510(&local_930,0x28);
          }
          else {
            uVar10 = (uint)*(byte *)((int)&local_8b0 + (uint)bVar14);
            uVar5 = FUN_10079568(uVar7,auStack_7f0,bVar14);
            local_918 = (uint)*(byte *)(uVar10 + 0x1012c920);
            uStack_914 = 0;
            local_928 = 0x36;
            local_92c = &local_8e8;
            local_930 = (int *)&local_7d8;
            local_924 = uVar13 | 0x410200;
            local_920 = uVar10;
            uStack_91c = uVar5;
            FUN_100ef510(&local_930,0x20);
          }
          uVar7 = FUN_100ee638(&local_7d8,uVar5);
          uVar13 = uVar13 + 1;
          param_7 = local_8c4;
        } while (uVar13 < uVar16);
      }
      local_928 = 0x100003e;
      local_930 = &local_8e8;
      local_92c = (int *)0x1;
      FUN_100ef760(&local_930,0xc);
      if (local_7a8._5_1_ != 0) {
        local_928 = 0x2000068;
        local_92c = (int *)0x2;
        local_930 = &local_8d8;
        local_924 = (uint)local_7a8._5_1_;
        FUN_100ef760(&local_930,0x10);
      }
      FUN_100efae8(&local_8d8,&local_8e8,local_8ec);
      iVar18 = local_8d8;
      FUN_100ef6d8(param_7,local_8d8,iStack_8d4 - local_8d8);
      FUN_100fed00(local_8e8);
      FUN_100fed00(iVar18);
      FUN_100ef888(param_7);
      if (local_860 != (undefined8 *)0x0) {
        local_860[1] = uStack_7c8;
        *local_860 = local_7d0;
        local_860[3] = uStack_7b8;
        local_860[2] = uStack_7c0;
        local_860[4] = local_7b0;
      }
      uVar19 = 1;
    }
  }
  return uVar19;
}

