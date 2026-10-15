/*
 * FUN_100a81d8 at 100a81d8
 * undefined FUN_100a81d8(void)
 * Address ranges: 100a81d8-100aa4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100a81d8(uint param_1,uint param_2,char param_3,int *param_4)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  char cVar25;
  uint extraout_w11;
  ulonglong extraout_x11;
  undefined1 uVar26;
  byte *pbVar27;
  byte bVar28;
  byte *pbVar29;
  int *local_1f0;
  undefined8 *local_1ec;
  undefined4 local_1e8;
  byte *local_1e4;
  byte *local_1e0;
  byte *local_1dc;
  byte *local_1d8;
  byte *local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  byte local_1a0;
  char local_19f;
  byte *local_19c;
  uint local_198;
  byte *local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  byte *local_160;
  int local_158;
  int iStack_154;
  undefined4 local_150;
  undefined1 local_14c;
  uint local_148;
  byte *local_144;
  uint local_140;
  char local_13c;
  undefined4 local_13b;
  undefined2 local_137;
  undefined1 local_135;
  undefined8 local_134;
  undefined8 local_12c;
  ulonglong local_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  uint local_a8;
  byte *local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  int iStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  local_137 = 0;
  local_135 = 0;
  uVar26 = (undefined1)(param_1 >> 10);
  local_13b = CONCAT13(uVar26,CONCAT12(uVar26,CONCAT11((char)(param_1 >> 8),(char)(param_1 >> 7))))
              & 0x1010101;
  uStack_d4 = 0;
  uStack_dc = 0;
  uStack_c4 = 0;
  local_cc = 0;
  uStack_b4 = 0;
  uStack_bc = 0;
  uStack_ac = 0;
  local_12c = 0;
  uStack_11c = 0;
  local_124 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  local_ec = 0x41040000110400;
  local_134 = (ulonglong)param_2;
  local_104 = (ulonglong)CONCAT24(0x10,(int)&local_e4 + 7);
  bVar4 = false;
  bVar8 = false;
  uStack_f4 = 0x11080000210800;
  local_fc = 0x31080000410800;
  uVar10 = param_1 & 0xf;
  if (uVar10 != 2) {
    if (uVar10 == 1) {
      bVar4 = true;
      bVar8 = true;
    }
    else if (uVar10 == 0) {
      bVar4 = false;
      bVar8 = true;
    }
  }
  if (param_3 == '\0') {
    bVar7 = (param_1 >> 9 & 2) != 0;
    cVar24 = '\x01';
    if (bVar7) {
      cVar24 = '\x02';
    }
    cVar25 = -1;
    if (bVar7) {
      cVar25 = '\x01';
    }
    cVar1 = cVar24;
    cVar5 = -1;
    if (bVar8) {
      cVar1 = cVar24 + '\x01';
      cVar5 = cVar24;
    }
    cVar24 = -1;
    if (bVar4) {
      cVar24 = cVar1;
    }
    local_e4._0_6_ = CONCAT42(0xffffff,CONCAT11(cVar24,cVar5));
    local_e4 = (ulonglong)CONCAT16(cVar25,(undefined6)local_e4);
  }
  else {
    local_e4 = 0x6050403020100;
  }
  local_170 = 0;
  local_190 = 0x43425844;
  local_188 = 0;
  local_168 = 0;
  local_180 = 0x100000000;
  uStack_178 = 0x300000000;
  local_140 = param_1;
  local_13c = param_3;
  local_a0 = param_4;
  FUN_100ef6d8(param_4,&local_190,0x2c);
  local_9c = param_4 + 1;
  local_84 = 1;
  *(int *)(*param_4 + 0x20) = *local_9c - *param_4;
  local_88 = 0x800;
  iStack_90 = FUN_100fece0(0x800);
  local_150 = 0x200;
  local_14c = 1;
  iStack_8c = iStack_90;
  local_158 = FUN_100fece0(0x200);
  iStack_154 = local_158;
  local_98 = FUN_100efa80(&local_158,(uint)local_134);
  local_188 = CONCAT35(local_188._5_3_,0x100000000);
  local_188 = CONCAT44(local_188._4_4_,0x80);
  uVar9 = FUN_100fece0(0x80);
  local_190 = CONCAT44(uVar9,uVar9);
  uVar10 = FUN_100a61e8(local_140 >> 4 & 7);
  local_a8 = uVar10;
  uVar16 = FUN_100a61a0(&local_140);
  if (((uVar16 & 1) == 0) && ((extraout_w11 >> 9 & 1) == 0)) {
    bVar8 = uVar10 != 2;
    bVar21 = local_cc._1_1_;
    if (bVar8) {
      bVar21 = local_cc._3_1_;
    }
    bVar28 = 1;
    if (bVar8) {
      bVar28 = 0xf;
    }
    pbVar27 = (byte *)((int)&local_cc + 1);
    if (bVar8) {
      pbVar27 = (byte *)((int)&local_cc + 3);
    }
    *pbVar27 = bVar21 | bVar28;
    pbVar27 = (byte *)0x110200;
    if (bVar8) {
      pbVar27 = (byte *)0x410200;
    }
  }
  else {
    pbVar27 = (byte *)0x0;
  }
  uVar16 = FUN_100a61a0(&local_140);
  uVar15 = (uint)extraout_x11;
  uVar10 = local_a8;
  if ((uVar16 & 1) != 0) {
    switch(uVar15 & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
      if ((uVar15 >> 0xd & 1) != 0) goto switchD_100a8494_default;
      uVar10 = 2;
      if ((extraout_x11 & 0x8000) == 0) {
        uVar10 = local_a8;
      }
      break;
    case 5:
      break;
    default:
switchD_100a8494_default:
      uVar10 = 0;
    }
  }
  uVar3 = uVar15 >> 0xe & 1;
  if (((uVar15 >> 0xb & 1) == 0) && ((uVar15 >> 10 & 1) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  switch(uVar15 & 0xf) {
  case 5:
    if ((bVar8) || (((uVar15 >> 7 ^ uVar15 >> 8) & 1) != 0)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) goto switchD_100a84fc_caseD_6;
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    pbVar11 = (byte *)FUN_100ee580(&local_134,4,1);
    if ((((char)local_13b == '\0') && (local_13b._1_1_ == '\0')) &&
       ((local_13b._2_1_ == '\0' && (local_13b._3_1_ == '\0')))) {
      local_19c = (byte *)0x0;
    }
    else {
      local_19c = (byte *)FUN_100ee580(&local_134,2,1);
    }
    local_cc = local_cc | 3;
    local_1cc = 0x68;
    local_1c8 = 0;
    local_1d4 = (byte *)uStack_f4;
    local_1d0 = 0xe4;
    local_1dc = (byte *)0x210101;
    local_1d8 = (byte *)0x4;
    local_1e0 = (byte *)0x3;
    local_1e8 = 0x33;
    local_1ec = &local_190;
    local_1f0 = (int *)&local_134;
    local_1e4 = pbVar11;
    FUN_100ef510(&local_1f0,0x2c);
    if (local_19c != (byte *)0x0) {
      if (((char)local_13b == '\0') && (local_13b._2_1_ == '\0')) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      if ((local_13b._1_1_ == '\0') && (local_13b._3_1_ == '\0')) {
        uVar22 = 0;
      }
      else {
        uVar22 = 2;
      }
      local_1e0 = (byte *)(uVar22 | uVar15);
      local_1d8 = (byte *)0x4;
      local_1d4 = (byte *)0x0;
      local_1e8 = 0x1a;
      local_1e4 = local_19c;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      local_1dc = pbVar11;
      FUN_100ef510(&local_1f0,0x20);
    }
    break;
  default:
switchD_100a84fc_caseD_6:
    pbVar13 = (byte *)0x0;
    uVar16 = extraout_x11;
    switch(uVar15 & 0xf) {
    default:
      goto switchD_100a94e0_caseD_0;
    case 5:
      uVar18 = 1;
      break;
    case 6:
      uVar18 = 0;
      break;
    case 7:
      pbVar13 = (byte *)FUN_100a7f60(&local_190,&local_140,0,0,0,uVar3);
      pbVar11 = pbVar13;
      if (((pbVar27 != (byte *)0x0) && (uVar10 == 0)) && (pbVar11 = pbVar27, pbVar27 != pbVar13)) {
        FUN_100ee638(&local_134,pbVar13);
      }
      uVar9 = FUN_100ee580(&local_134,3,0);
      local_1c0 = 0;
      local_1bc = 0;
      local_1d0 = 0x1e4;
      local_1d4 = (byte *)local_ec._4_4_;
      local_1d8 = (byte *)0x1a1;
      local_1e0 = (byte *)0x7;
      local_1ec = &local_190;
      local_1e8 = 0;
      local_1f0 = (int *)&local_134;
      local_1e4 = (byte *)uVar9;
      local_1dc = pbVar13;
      FUN_100ef510(&local_1f0,0x38);
      local_1c0 = 0;
      local_1bc = 0;
      local_1c8 = 0;
      local_1d4 = (byte *)local_ec._4_4_;
      local_1d0 = 0xe4;
      local_1e0 = (byte *)0x1;
      local_1ec = &local_190;
      local_1c4 = 0x3fcc8000;
      local_1e8 = 0x2010;
      local_1f0 = (int *)&local_134;
      local_1cc = 0x3f950000;
      local_1d8 = (byte *)0xa4;
      local_1e4 = pbVar11;
      local_1dc = (byte *)uVar9;
      FUN_100ef510(&local_1f0,0x38);
      local_1c0 = 0;
      local_1bc = 0;
      local_1d8 = (byte *)0xa4;
      local_1c4 = 0xbf500000;
      local_1d4 = (byte *)local_ec._4_4_;
      local_1d0 = 0xe4;
      local_1e0 = (byte *)0x2;
      local_1ec = &local_190;
      local_1c8 = 0xbec80000;
      local_1e8 = 0x2010;
      local_1f0 = (int *)&local_134;
      local_1cc = 0x3f950000;
      local_1e4 = pbVar11;
      local_1dc = (byte *)uVar9;
      FUN_100ef510(&local_1f0,0x38);
      local_1bc = 0;
      local_1c4 = 0;
      local_1c0 = 0;
      local_1c8 = 0x40010000;
      local_1d4 = (byte *)local_ec._4_4_;
      local_1d0 = 0xe4;
      local_1ec = &local_190;
      local_1e8 = 0x2010;
      local_1f0 = (int *)&local_134;
      local_1cc = 0x3f950000;
      local_1d8 = (byte *)0xa4;
      local_1e0 = (byte *)0x4;
      local_1e4 = pbVar11;
      local_1dc = (byte *)uVar9;
      FUN_100ef510(&local_1f0,0x38);
      if ((uVar10 == 0) ||
         (FUN_100a5778(&local_190,&local_140,pbVar11,7,pbVar13,0,uVar10), uVar10 != 2)) {
        local_1d4 = &DAT_3f800000;
      }
      else {
        local_1d4 = (byte *)0xff;
      }
      local_1d0 = 0;
      local_1dc = (byte *)local_ec;
      local_1d8 = &DAT_000000e4;
      local_1e0 = &DAT_00000008;
      local_1ec = &local_190;
      local_1e8 = 0x36;
      local_1f0 = (int *)&local_134;
      local_1e4 = pbVar11;
      FUN_100ef510(&local_1f0,0x24);
      goto LAB_100a9718;
    }
    pbVar13 = (byte *)FUN_100a7f60(&local_190,&local_140,uVar18,pbVar27,uVar10,uVar3);
    goto LAB_100a9718;
  }
  local_1e0 = (byte *)0x3;
  local_1e8 = 0x1b;
  local_1ec = &local_190;
  local_1f0 = (int *)&local_134;
  local_1d8 = (byte *)0x4;
  local_1d4 = (byte *)0x0;
  local_1e4 = pbVar11;
  local_1dc = pbVar11;
  FUN_100ef510(&local_1f0,0x20);
  local_1d4 = (byte *)0x60;
  local_1d0 = 0;
  local_1dc = (byte *)uStack_f4;
  local_1d8 = &DAT_00000010;
  local_1e0 = &DAT_0000000c;
  local_1ec = &local_190;
  local_1e8 = 0x36;
  local_1f0 = (int *)&local_134;
  local_1e4 = pbVar11;
  FUN_100ef510(&local_1f0,0x24);
  pbVar12 = local_19c;
  uVar16 = (ulonglong)local_140;
  pbVar13 = (byte *)0x0;
  switch(local_140 & 0xf) {
  case 0:
    if (pbVar27 == (byte *)0x0 || uVar10 != 1) {
      local_19f = '\0';
      if (pbVar27 != (byte *)0x0) goto LAB_100a86f8;
LAB_100a8704:
      bVar8 = false;
    }
    else {
      local_19f = '\x01';
LAB_100a86f8:
      if ((local_140 >> 0x11 & 1) == 0) goto LAB_100a8704;
      bVar8 = true;
    }
    pbVar13 = pbVar27;
    if (!bVar8) {
      pbVar13 = (byte *)0x0;
    }
    pbVar13 = (byte *)FUN_100a6220(&local_190,&local_140,pbVar11,local_19c,pbVar13);
    if (pbVar13 != pbVar27) {
      local_160 = (byte *)CONCAT31(local_160._1_3_,((byte)uVar3 ^ 1) * '\b' + '\a');
      local_198 = 2;
      if (local_13b._1_1_ == '\0') {
        local_198 = 0;
      }
      local_198 = local_198 | (char)local_13b != '\0';
      pbVar11 = pbVar13;
      if (local_198 != 0) {
        pbVar11 = (byte *)FUN_100ee580(&local_134,4,1);
      }
      local_1c0 = 0;
      uVar26 = local_160._0_1_;
      local_1d0 = 0xe4;
      local_1cc = 0;
      *(undefined4 *)((int)&uStack_c4 + (uint)(byte)local_e4 * 4) = 5;
      local_1c8 = (byte)local_e4 | 0x410700;
      local_1e0 = (byte *)((uint)local_160 & 0xff);
      local_1dc = (byte *)((uint)pbVar13 | 0x10000000);
      local_1c4 = 0xe4;
      local_1d8 = (byte *)0x0;
      local_1d4 = (byte *)local_ec;
      pbVar12 = pbVar27;
      if (local_198 != 0 || local_19f == '\0') {
        pbVar12 = pbVar11;
      }
      local_1e8 = 0xa7;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      local_1e4 = pbVar12;
      local_148 = local_1c8;
      local_144 = local_1e0;
      local_a4 = local_1dc;
      FUN_100ef510(&local_1f0,0x34);
      if (local_198 == 0) {
        if (pbVar12 == pbVar11) {
          pbVar29 = pbVar27;
          if (pbVar27 == (byte *)0x0) {
            pbVar29 = pbVar11;
          }
          FUN_100a5778(&local_190,&local_140,pbVar29,uVar26,pbVar11,1,uVar10);
        }
      }
      else if (local_198 - 1 < 3) {
        local_194 = pbVar13;
        if (local_198 == 3) {
          local_194 = (byte *)FUN_100ee580(&local_134,4,1);
        }
        local_1c0 = 0;
        local_1d0 = 0xe4;
        local_1cc = 0;
        local_1d8 = (byte *)0x1;
        if (local_198 == 2) {
          local_1d8 = (byte *)0x2;
        }
        local_1c8 = local_148;
        local_1c4 = 0xe4;
        local_1d4 = (byte *)local_ec;
        local_1e8 = 0xa7;
        local_1e4 = local_194;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        local_1e0 = local_144;
        local_1dc = local_a4;
        FUN_100ef510(&local_1f0,0x34);
        pbVar29 = local_19c;
        local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
        uVar26 = local_160._0_1_;
        pbVar12 = pbVar27;
        if (local_198 != 3 || local_19f == '\0') {
          pbVar12 = pbVar11;
        }
        FUN_100a59b0(&local_190,&local_140,pbVar12,local_160._0_1_,local_194,pbVar11,local_194,
                     local_19c);
        if (local_198 == 3) {
          local_1e4 = (byte *)FUN_100ee580(&local_134,4,1);
          local_1c4 = 0xe4;
          local_1c0 = 0;
          local_1cc = 0;
          local_1c8 = local_148;
          local_1e0 = local_144;
          local_1dc = local_a4;
          local_1d4 = (byte *)local_ec;
          local_1d0 = 0xe4;
          local_1d8 = (byte *)0x3;
          local_1e8 = 0xa7;
          local_1ec = &local_190;
          local_1f0 = (int *)&local_134;
          local_198 = (uint)local_1e4;
          FUN_100ef510(&local_1f0,0x34);
          local_1c4 = 0xe4;
          local_1c0 = 0;
          local_1cc = 0;
          local_1c8 = local_148;
          local_1e0 = local_144;
          local_1dc = local_a4;
          local_1d4 = (byte *)local_ec;
          local_1d0 = 0xe4;
          local_1d8 = (byte *)0x2;
          local_1e8 = 0xa7;
          local_1ec = &local_190;
          local_1f0 = (int *)&local_134;
          local_1e4 = pbVar13;
          FUN_100ef510(&local_1f0,0x34);
          local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
          FUN_100a59b0(&local_190,&local_140,pbVar13,uVar26,local_198,pbVar13,local_198,pbVar29);
          local_1f0 = (int *)CONCAT31(local_1f0._1_3_,0x55);
          uVar26 = local_160._0_1_;
          pbVar12 = pbVar27;
          if (local_19f == '\0') {
            pbVar12 = pbVar11;
          }
          FUN_100a59b0(&local_190,&local_140,pbVar12,local_160._0_1_,pbVar13,pbVar11,pbVar13,pbVar29
                      );
          if (pbVar12 == pbVar11) {
            pbVar29 = pbVar27;
            if (pbVar27 == (byte *)0x0) {
              pbVar29 = pbVar11;
            }
            FUN_100a5778(&local_190,&local_140,pbVar29,uVar26,pbVar11,1,uVar10);
          }
          FUN_100ee638(&local_134,local_198);
        }
        else if (pbVar12 == pbVar11) {
          pbVar29 = pbVar27;
          if (pbVar27 == (byte *)0x0) {
            pbVar29 = pbVar11;
          }
          FUN_100a5778(&local_190,&local_140,pbVar29,uVar26,pbVar11,1,uVar10);
        }
        if (local_194 != pbVar13) {
          FUN_100ee638(&local_134,local_194);
        }
      }
      if (pbVar11 != pbVar13) {
        FUN_100ee638(&local_134,pbVar13);
      }
      pbVar13 = pbVar11;
      if (pbVar12 != pbVar11) {
        FUN_100ee638(&local_134,pbVar11);
        pbVar13 = pbVar27;
      }
    }
    goto LAB_100a8ad0;
  case 1:
    pbVar13 = (byte *)FUN_100a6718(&local_190,&local_140,pbVar11,local_19c,0,uVar10,pbVar27,uVar3);
    break;
  case 2:
    if ((pbVar27 == (byte *)0x0) || ((local_140 >> 0x11 & 1) == 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    pbVar13 = pbVar27;
    if (!bVar8) {
      pbVar13 = (byte *)0x0;
    }
    pbVar11 = (byte *)FUN_100a6220(&local_190,&local_140,pbVar11,local_19c,pbVar13);
    pbVar13 = pbVar11;
    if (pbVar11 == pbVar27) goto LAB_100a8ad0;
    bVar21 = 2;
    if (local_13b._1_1_ == '\0') {
      bVar21 = 0;
    }
    bVar21 = bVar21 | (char)local_13b != '\0';
    if (3 < bVar21) goto LAB_100a8ad0;
    local_1a0 = (char)(uVar3 ^ 1) * '\b' + 7;
    iVar14 = (uVar3 ^ 1) + 3;
    pbVar29 = pbVar27;
    switch(bVar21) {
    case 0:
      pbVar13 = pbVar27;
      if (pbVar27 == (byte *)0x0) {
        pbVar13 = pbVar11;
      }
      FUN_100a6f10(&local_190,&local_140,pbVar11,0,uVar10,pbVar13,uVar3);
      goto LAB_100a8e30;
    default:
      local_144 = (byte *)FUN_100ee580(&local_134,iVar14,1);
      uVar9 = 0x55;
      if (bVar21 != 1) {
        uVar9 = 0xaa;
      }
      FUN_100a6f10(&local_190,&local_140,pbVar11,uVar9,1,local_144,uVar3);
      FUN_100a6f10(&local_190,&local_140,pbVar11,0,1,pbVar11,uVar3);
      local_19f = pbVar27 != (byte *)0x0 && uVar10 == 1;
      if (pbVar27 == (byte *)0x0 || uVar10 != 1) {
        pbVar29 = pbVar11;
      }
      uVar26 = 0;
      if (bVar21 != 1) {
        uVar26 = 0x55;
      }
      local_1f0 = (int *)CONCAT31(local_1f0._1_3_,uVar26);
      FUN_100a59b0(&local_190,&local_140,pbVar29,local_1a0,local_144,pbVar11,local_144,pbVar12);
      FUN_100ee638(&local_134,local_144);
      if (local_19f == '\0') {
LAB_100a8df4:
        pbVar12 = pbVar27;
        if (pbVar27 == (byte *)0x0) {
          pbVar12 = pbVar11;
        }
        FUN_100a5778(&local_190,&local_140,pbVar12,local_1a0,pbVar11,1,uVar10);
      }
      break;
    case 3:
      uVar16 = 1;
      local_194 = (byte *)FUN_100ee580(&local_134,iVar14,1);
      uVar9 = FUN_100ee580(&local_134,extraout_x1 & 0xffffffff,uVar16 & 0xffffffff);
      FUN_100a6f10(&local_190,&local_140,pbVar11,0x55,1,local_194,uVar3);
      FUN_100a6f10(&local_190,&local_140,pbVar11,0,1,uVar9,uVar3);
      local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
      FUN_100a59b0(&local_190,&local_140,local_194,local_1a0,local_194,uVar9,local_194,pbVar12);
      FUN_100a6f10(&local_190,&local_140,pbVar11,0xff,1,uVar9,uVar3);
      FUN_100a6f10(&local_190,&local_140,pbVar11,0xaa,1,pbVar11,uVar3);
      local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
      FUN_100a59b0(&local_190,&local_140,pbVar11,local_1a0,uVar9,pbVar11,uVar9,pbVar12);
      FUN_100ee638(&local_134,uVar9);
      if (pbVar27 == (byte *)0x0 || uVar10 != 1) {
        pbVar29 = pbVar11;
      }
      local_1f0 = (int *)CONCAT31(local_1f0._1_3_,0x55);
      FUN_100a59b0(&local_190,&local_140,pbVar11,local_1a0,pbVar11,local_194,pbVar11,pbVar12);
      FUN_100ee638(&local_134,local_194);
      if (pbVar27 == (byte *)0x0 || uVar10 != 1) goto LAB_100a8df4;
    }
    if (pbVar29 == pbVar27) {
      FUN_100ee638(&local_134,pbVar11);
      pbVar13 = pbVar27;
LAB_100a8e30:
      if (pbVar13 != pbVar11) {
        FUN_100ee638(&local_134,pbVar11);
      }
    }
LAB_100a8ad0:
    FUN_100ee638(&local_134,local_19c);
    break;
  case 3:
  case 4:
    local_1a0 = ((byte)uVar3 ^ 1) * '\b' + 7;
    local_160 = local_19c;
    uVar9 = 4;
    if ((local_140 & 0xf) == 4) {
      uVar9 = 5;
    }
    *(undefined4 *)((int)&uStack_c4 + (uint)local_e4._5_1_ * 4) = uVar9;
    local_194 = (byte *)(local_e4._5_1_ | 0x410700);
    local_148 = 2;
    iVar14 = 0;
    local_198 = 2;
    if (local_13b._1_1_ == '\0') {
      local_198 = 0;
    }
    pbVar12 = (byte *)0x0;
    local_198 = local_198 | (char)local_13b != '\0';
    if ((pbVar27 == (byte *)0x0) || ((local_140 >> 0xb & 1) != 0)) {
      local_19f = '\0';
    }
    else {
      local_19f = '\x01';
    }
    if ((local_198 != 0) ||
       (FUN_100a5a60(&local_140,pbVar11,local_19c), pbVar13 = pbVar27,
       local_19f == '\0' || uVar10 != 2)) {
      pbVar13 = (byte *)FUN_100ee580(&local_134,4,1);
    }
    local_19c = pbVar13;
    if (pbVar13 == pbVar27) {
      local_19c = (byte *)0x0;
    }
    FUN_100a7218(&local_190,&local_140,0,pbVar13,local_1a0,pbVar11,local_194);
    if (local_198 == 0) {
      local_160 = (byte *)0x0;
      pbVar11 = (byte *)0x0;
    }
    if ((local_140 >> 0xb & 1) != 0) {
      iVar14 = FUN_100ee580(&local_134,4,1);
      FUN_100a7370(&local_190,&local_140,local_19c,iVar14,1,0,iVar14);
    }
    cVar24 = '\0';
    if ((char)local_13b != '\0') {
      if ((local_198 == 1 && pbVar11 != (byte *)0x0) && (((uint)pbVar11 & 0x3f00) == 0)) {
        FUN_100ee638(&local_134,pbVar11);
      }
      uVar16 = 1;
      pbVar12 = (byte *)FUN_100ee580(&local_134,4,1);
      FUN_100a7218(&local_190,&local_140,uVar16 & 0xffffffff,pbVar12,local_1a0,pbVar11,local_194);
      if ((local_140 >> 0xb & 1) != 0) {
        if (iVar14 == 0) {
          iVar14 = FUN_100ee580(&local_134,4,1);
        }
        FUN_100a7370(&local_190,&local_140,pbVar12,iVar14,2,0x55,0);
      }
      local_1d8 = (byte *)0xe4;
      local_1d4 = (byte *)0x0;
      local_1e8 = 0x56;
      local_1e4 = local_19c;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      pbVar13 = (byte *)(uint)local_1a0;
      local_1dc = local_19c;
      local_1e0 = pbVar13;
      FUN_100ef510(&local_1f0,0x20);
      local_1e8 = 0x56;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      local_1d8 = &DAT_000000e4;
      local_1d4 = (byte *)0x0;
      local_1e4 = pbVar12;
      local_1e0 = pbVar13;
      local_1dc = pbVar12;
      FUN_100ef510(&local_1f0,0x20);
      pbVar29 = local_160;
      uVar15 = local_198;
      local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
      local_148 = 1;
      pbVar13 = pbVar27;
      if ((local_198 != 1 || local_19f == '\0') || uVar10 != 1) {
        pbVar13 = local_19c;
      }
      FUN_100a59b0(&local_190,&local_140,pbVar13,local_1a0,pbVar12,local_19c,pbVar12,local_160);
      if ((uVar15 == 1 && pbVar29 != (byte *)0x0) && (((uint)pbVar29 & 0x3f00) == 0)) {
        FUN_100ee638(&local_134,pbVar29);
      }
      cVar24 = (char)local_13b;
    }
    cVar25 = '\0';
    if (local_13b._1_1_ == '\0') {
LAB_100a928c:
      if (cVar24 != '\0') goto LAB_100a9290;
    }
    else {
      if ((local_198 == 2 && pbVar11 != (byte *)0x0) && (((uint)pbVar11 & 0x3f00) == 0)) {
        FUN_100ee638(&local_134,pbVar11);
      }
      if (pbVar12 == (byte *)0x0) {
        pbVar12 = (byte *)FUN_100ee580(&local_134,4,1);
      }
      FUN_100a7218(&local_190,&local_140,2,pbVar12,local_1a0,pbVar11,local_194);
      if ((local_140 >> 0xb & 1) != 0) {
        if (iVar14 == 0) {
          iVar14 = FUN_100ee580(&local_134,4,1);
        }
        FUN_100a7370(&local_190,&local_140,pbVar12,iVar14,4,0xaa,0);
      }
      if ((char)local_13b == '\0') {
        local_1d8 = (byte *)0xe4;
        local_1d4 = (byte *)0x0;
        local_1e8 = 0x56;
        local_1e4 = local_19c;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        pbVar13 = (byte *)(uint)local_1a0;
        local_1dc = local_19c;
        local_1e0 = pbVar13;
        FUN_100ef510(&local_1f0,0x20);
        local_1e8 = 0x56;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        local_1d8 = &DAT_000000e4;
        local_1d4 = (byte *)0x0;
        local_1e4 = pbVar12;
        local_1e0 = pbVar13;
        local_1dc = pbVar12;
        FUN_100ef510(&local_1f0,0x20);
        pbVar29 = local_160;
        local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
        local_148 = 1;
        pbVar13 = pbVar27;
        if (local_19f == '\0' || uVar10 != 1) {
          pbVar13 = local_19c;
        }
        FUN_100a59b0(&local_190,&local_140,local_19c,0xf,pbVar12,local_19c,pbVar12,local_160);
        if ((pbVar29 != (byte *)0x0) && (((uint)pbVar29 & 0x3f00) == 0)) {
          FUN_100ee638(&local_134,pbVar29);
        }
        cVar25 = local_13b._1_1_;
        cVar24 = (char)local_13b;
        goto LAB_100a928c;
      }
      cVar25 = local_13b._1_1_;
LAB_100a9290:
      if (cVar25 != '\0') {
        if ((pbVar11 != (byte *)0x0) && (((uint)pbVar11 & 0x3f00) == 0)) {
          FUN_100ee638(&local_134,pbVar11);
        }
        pbVar13 = (byte *)FUN_100ee580(&local_134,4,1);
        FUN_100a7218(&local_190,&local_140,3,pbVar13,local_1a0,pbVar11,local_194);
        if ((local_140 >> 0xb & 1) != 0) {
          FUN_100a7370(&local_190,&local_140,pbVar13,iVar14,8,0xff,0);
        }
        local_1e8 = 0x56;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        local_1d8 = (byte *)0xe4;
        local_1d4 = (byte *)0x0;
        local_1e0 = (byte *)0xf;
        local_1e4 = pbVar12;
        local_1dc = pbVar12;
        FUN_100ef510(&local_1f0,0x20);
        local_1d8 = &DAT_000000e4;
        local_1d4 = (byte *)0x0;
        local_1e8 = 0x56;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        local_1e0 = (byte *)0xf;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x20);
        pbVar11 = local_160;
        local_148 = 1;
        local_1f0 = (int *)((uint)local_1f0 & 0xffffff00);
        FUN_100a59b0(&local_190,&local_140,pbVar12,0xf,pbVar13,pbVar12,pbVar13,local_160);
        FUN_100ee638(&local_134,pbVar13);
        local_1f0 = (int *)CONCAT31(local_1f0._1_3_,0x55);
        pbVar13 = pbVar27;
        if (local_19f == '\0' || uVar10 != 1) {
          pbVar13 = local_19c;
        }
        FUN_100a59b0(&local_190,&local_140,local_19c,0xf,pbVar12,local_19c,pbVar12,pbVar11);
        if ((pbVar11 != (byte *)0x0) && (((uint)pbVar11 & 0x3f00) == 0)) {
          FUN_100ee638(&local_134,pbVar11);
        }
      }
    }
    if ((local_140 >> 0xb & 1) != 0) {
      FUN_100a5e18(&local_190,&local_140,iVar14,0,local_160,iVar14);
    }
    if (pbVar13 != pbVar27 && local_148 != uVar10) {
      pbVar13 = pbVar27;
      if (pbVar27 == (byte *)0x0) {
        pbVar13 = local_19c;
      }
      FUN_100a5778(&local_190,&local_140,pbVar13,local_1a0,local_19c,local_148,uVar10);
    }
    if (local_19c != pbVar13) {
      FUN_100ee638(&local_134,local_19c);
    }
    FUN_100ee638(&local_134,pbVar12);
    FUN_100ee638(&local_134,iVar14);
    break;
  case 5:
    pbVar13 = (byte *)FUN_100a76a0(&local_190,&local_140,pbVar11,local_19c,uVar10,pbVar27,uVar3);
    break;
  default:
    goto switchD_100a94e0_caseD_0;
  }
LAB_100a9718:
  uVar16 = (ulonglong)local_140;
switchD_100a94e0_caseD_0:
  if (pbVar13 != (byte *)0x0) {
    if (((uint)uVar16 >> 0xd & 1) != 0) {
      local_1e0 = (byte *)0x7;
      local_1e8 = 0x38;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      local_1d0 = 0xff;
      local_1cc = 0;
      local_1d8 = &DAT_000000a4;
      local_1e4 = pbVar13;
      local_1dc = pbVar13;
      local_1d4 = pbVar13;
      FUN_100ef510(&local_1f0,0x28);
      uVar16 = (ulonglong)local_140;
    }
    if ((((uint)uVar16 >> 0xe & 1) != 0) && ((uVar16 & 0x70) != 0)) {
      if (uVar10 == 2) {
        local_1d4 = (byte *)0xff;
      }
      else {
        local_1d4 = &DAT_3f800000;
      }
      local_1d0 = 0;
      local_1dc = (byte *)local_ec;
      local_1d8 = &DAT_000000e4;
      local_1e0 = &DAT_00000008;
      local_1ec = &local_190;
      local_1e8 = 0x36;
      local_1f0 = (int *)&local_134;
      local_1e4 = pbVar27;
      FUN_100ef510(&local_1f0,0x24);
      uVar16 = (ulonglong)local_140;
    }
    if (((uint)uVar16 >> 0xf & 1) != 0) {
      if (uVar10 != 2) {
        FUN_100a5778(&local_190,&local_140,pbVar13,0xf,pbVar13,uVar10,2);
        uVar10 = 2;
      }
      local_1c8 = 0;
      local_1d0 = 0xe4;
      local_1cc = 0xa0;
      local_1e0 = (byte *)0xf;
      local_1d8 = &DAT_000000e4;
      local_1d4 = (byte *)local_fc;
      local_1e8 = 1;
      local_1ec = &local_190;
      local_1f0 = (int *)&local_134;
      local_1e4 = pbVar13;
      local_1dc = pbVar13;
      FUN_100ef510(&local_1f0,0x2c);
      uVar16 = (ulonglong)local_140;
    }
    uVar15 = (uint)uVar16;
    if (((uVar16 & 0x70) == 0) && (((uint)pbVar13 & 0x3f00) == 0)) {
      if ((uVar15 >> 9 & 1) == 0) {
        bVar8 = local_a8 != 2;
        bVar21 = local_cc._1_1_;
        if (bVar8) {
          bVar21 = local_cc._3_1_;
        }
        bVar28 = 1;
        if (bVar8) {
          bVar28 = 0xf;
        }
        pbVar27 = (byte *)((int)&local_cc + 1);
        if (bVar8) {
          pbVar27 = (byte *)((int)&local_cc + 3);
        }
        *pbVar27 = bVar21 | bVar28;
        pbVar27 = (byte *)0x110200;
        if (bVar8) {
          pbVar27 = (byte *)0x410200;
        }
      }
      else {
        pbVar27 = (byte *)0x0;
      }
      if (uVar10 != 2) {
        FUN_100a5778(&local_190,&local_140,pbVar13,0xf,pbVar13,uVar10,2);
      }
      if ((uint)local_134 < 0x50) {
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1cc = 0x10;
        local_1c8 = 0;
        local_1d0 = 0;
        local_1ec = &local_190;
        local_1e8 = 0x55;
        local_1f0 = (int *)&local_134;
        local_1d8 = (byte *)0x0;
        local_1e0 = (byte *)0x1;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x10;
        local_1c8 = 0;
        local_1d8 = (byte *)0x55;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 1;
        local_1ec = &local_190;
        local_1e8 = 0x55;
        local_1f0 = (int *)&local_134;
        local_1e0 = (byte *)0x2;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x10;
        local_1c8 = 0;
        local_1e0 = (byte *)0x4;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 2;
        local_1d8 = (byte *)0xaa;
        local_1ec = &local_190;
        local_1e8 = 0x55;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x10;
        local_1c8 = 0;
        local_1d8 = (byte *)0xff;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 3;
        local_1e0 = (byte *)0x8;
        local_1ec = &local_190;
        local_1e8 = 0x55;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
      }
      else {
        local_1cc = 0x10;
        local_1c8 = 0;
        local_1d4 = (byte *)local_fc;
        local_1d0 = 0xe4;
        local_1ec = &local_190;
        local_1e8 = 0x55;
        local_1f0 = (int *)&local_134;
        local_1d8 = (byte *)0xe4;
        local_1e0 = (byte *)0xf;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
      }
      if ((uint)local_134 < 0x50) {
        local_1d8 = (byte *)0x0;
        local_1cc = 0x20;
        local_1c8 = 0;
        local_1e0 = (byte *)0x1;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 0;
        local_1ec = &local_190;
        local_1e8 = 0x29;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x20;
        local_1c8 = 0;
        local_1d8 = (byte *)0x55;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 1;
        local_1ec = &local_190;
        local_1e8 = 0x29;
        local_1f0 = (int *)&local_134;
        local_1e0 = (byte *)0x2;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x20;
        local_1c8 = 0;
        local_1e0 = (byte *)0x4;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 2;
        local_1d8 = (byte *)0xaa;
        local_1ec = &local_190;
        local_1e8 = 0x29;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
        local_1cc = 0x20;
        local_1c8 = 0;
        local_1d8 = (byte *)0xff;
        local_1d4 = (byte *)((uint)(byte *)local_fc | 0x10000000);
        local_1d0 = 3;
        local_1e0 = (byte *)0x8;
        local_1ec = &local_190;
        local_1e8 = 0x29;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
      }
      else {
        local_1c8 = 0;
        local_1d0 = 0xe4;
        local_1cc = 0x20;
        local_1e0 = (byte *)0xf;
        local_1d8 = (byte *)0xe4;
        local_1d4 = (byte *)local_fc;
        local_1e8 = 0x29;
        local_1ec = &local_190;
        local_1f0 = (int *)&local_134;
        local_1e4 = pbVar13;
        local_1dc = pbVar13;
        FUN_100ef510(&local_1f0,0x2c);
      }
      local_1cc = 0;
      local_1d0 = 0xee;
      local_1d8 = (byte *)0x44;
      local_1e0 = (byte *)0x3;
      local_1ec = &local_190;
      local_1e8 = 0x3c;
      local_1f0 = (int *)&local_134;
      local_1e4 = pbVar13;
      local_1dc = pbVar13;
      local_1d4 = pbVar13;
      FUN_100ef510(&local_1f0,0x28);
      local_1ec = &local_190;
      local_1cc = 0;
      local_1e8 = 0x3c;
      local_1f0 = (int *)&local_134;
      local_1d0 = 0x55;
      local_1d8 = (byte *)0x0;
      local_1e0 = (byte *)0x1;
      local_1e4 = pbVar13;
      local_1dc = pbVar13;
      local_1d4 = pbVar13;
      FUN_100ef510(&local_1f0,0x28);
      local_1d8 = (byte *)0x0;
      local_1cc = 0x40;
      local_1c8 = 0;
      local_1e4 = pbVar27;
      if (pbVar27 == (byte *)0x0) {
        local_1e4 = pbVar13;
      }
      local_1e0 = (byte *)0x1;
      local_1d4 = uStack_f4._4_4_;
      local_1d0 = 0;
      local_1ec = &local_190;
      local_1e8 = 1;
      local_1f0 = (int *)&local_134;
      local_1dc = pbVar13;
      FUN_100ef510(&local_1f0,0x2c);
      uVar10 = 2;
      uVar15 = local_140;
    }
    uVar3 = local_a8;
    if (pbVar27 == (byte *)0x0) {
      uVar22 = uVar15 >> 4 & 7;
      pbVar11 = (byte *)((int)&local_cc + 1);
      if (local_a8 != 2) {
        pbVar11 = (byte *)((int)&local_cc + 3);
      }
      if (uVar10 == local_a8) {
        local_1d4 = (byte *)0x0;
        bVar21 = 1;
        if (local_a8 != 2) {
          bVar21 = 0xf;
        }
        *pbVar11 = bVar21 | *pbVar11;
        pbVar11 = (byte *)0x0;
        if (uVar22 != 0) {
          pbVar11 = &DAT_000000e4;
        }
        pbVar12 = (byte *)0x1;
        if (uVar22 != 0) {
          pbVar12 = (byte *)0xf;
        }
        local_1e4 = (byte *)0x110200;
        if (local_a8 != 2) {
          local_1e4 = (byte *)0x410200;
        }
        local_1ec = &local_190;
        local_1e8 = 0x36;
        local_1f0 = (int *)&local_134;
        local_1e0 = pbVar12;
        local_1dc = pbVar13;
        local_1d8 = pbVar11;
        FUN_100ef510(&local_1f0,0x20);
        if ((local_140 >> 9 & 1) != 0) {
          bVar8 = uVar3 != 2;
          bVar28 = local_cc._2_1_;
          if (bVar8) {
            bVar28 = local_cc._4_1_;
          }
          local_1d4 = (byte *)0x0;
          pbVar29 = (byte *)((int)&local_cc + 2);
          if (bVar8) {
            pbVar29 = (byte *)((int)&local_cc + 4);
          }
          *pbVar29 = bVar28 | bVar21;
          local_1e4 = (byte *)0x110201;
          if (bVar8) {
            local_1e4 = (byte *)0x410201;
          }
          local_1ec = &local_190;
          local_1e8 = 0x36;
          local_1f0 = (int *)&local_134;
          local_1e0 = pbVar12;
          local_1dc = pbVar13;
          local_1d8 = pbVar11;
          FUN_100ef510(&local_1f0,0x20);
        }
      }
      else {
        bVar8 = local_a8 != 2;
        pbVar12 = &DAT_1012cb44;
        if (bVar8) {
          pbVar12 = &DAT_1012cb54;
        }
        local_144 = &DAT_1012cb47;
        if (bVar8) {
          local_144 = &DAT_1012cb57;
        }
        local_a4 = &DAT_1012cb46;
        if (bVar8) {
          local_a4 = &DAT_1012cb56;
        }
        if ((uVar15 >> 9 & 1) == 0) {
          bVar21 = *local_144;
          *pbVar11 = *pbVar12 | *pbVar11;
          FUN_100a5778(&local_190,&local_140,(uint)*local_a4 | (uint)bVar21 << 0x14 | 0x10200,0xf,
                       pbVar13,uVar10,local_a8);
        }
        else {
          FUN_100a5778(&local_190,&local_140,pbVar13,0xf,pbVar13,uVar10,local_a8);
          local_1d4 = (byte *)0x0;
          *pbVar11 = *pbVar12 | *pbVar11;
          pbVar11 = (byte *)0x0;
          if (uVar22 != 0) {
            pbVar11 = &DAT_000000e4;
          }
          pbVar12 = (byte *)0x1;
          if (uVar22 != 0) {
            pbVar12 = (byte *)0xf;
          }
          local_1e4 = (byte *)((uint)*local_a4 | (uint)*local_144 << 0x14 | 0x10200);
          local_1ec = &local_190;
          local_1e8 = 0x36;
          local_1f0 = (int *)&local_134;
          local_1e0 = pbVar12;
          local_1dc = pbVar13;
          local_1d8 = pbVar11;
          FUN_100ef510(&local_1f0,0x20);
          bVar8 = uVar3 != 2;
          bVar21 = local_cc._2_1_;
          if (bVar8) {
            bVar21 = local_cc._4_1_;
          }
          local_1d4 = (byte *)0x0;
          pbVar29 = (byte *)0x1;
          if (bVar8) {
            pbVar29 = (byte *)0xf;
          }
          pbVar2 = (byte *)((int)&local_cc + 2);
          if (bVar8) {
            pbVar2 = (byte *)((int)&local_cc + 4);
          }
          *pbVar2 = bVar21 | (byte)pbVar29;
          local_1e4 = (byte *)0x110201;
          if (bVar8) {
            local_1e4 = (byte *)0x410201;
          }
          local_1ec = &local_190;
          local_1e8 = 0x36;
          local_1f0 = (int *)&local_134;
          local_1e0 = pbVar12;
          local_1dc = pbVar13;
          local_1d8 = pbVar11;
          FUN_100ef510(&local_1f0,0x20);
        }
      }
    }
  }
  if (pbVar13 != pbVar27) {
    FUN_100ee638(&local_134,pbVar13);
  }
  local_1e8 = 0x3e;
  local_1e4 = (byte *)0x0;
  local_1ec = &local_190;
  local_1f0 = (int *)&local_134;
  FUN_100ef510(&local_1f0,0x10);
  if ((((1 << (ulonglong)((byte)local_e4 & 0x1f) & local_12c._4_4_) == 0) &&
      ((1 << (ulonglong)(local_e4._1_1_ & 0x1f) & local_12c._4_4_) == 0)) &&
     ((1 << (ulonglong)(local_e4._2_1_ & 0x1f) & local_12c._4_4_) == 0)) {
    uVar18 = 0;
    if ((1 << (ulonglong)(local_e4._3_1_ & 0x1f) & local_12c._4_4_) == 0) goto LAB_100a9ed8;
  }
  uVar18 = 0x4000;
LAB_100a9ed8:
  FUN_100efd30((uint)local_134,&local_158,uVar18);
  if ((local_12c & 1) != 0) {
    FUN_100efe18((uint)local_134,&local_158,0,0,0xc0,local_134._4_4_ & 1);
  }
  uVar10 = 0;
LAB_100a9f14:
  do {
    cVar24 = *(char *)((int)&uStack_d4 + uVar10 + 7);
    if (cVar24 != '\0') {
      if (uVar10 == 0) {
        FUN_100efff8(&local_158,0);
        uVar10 = 1;
        goto LAB_100a9f14;
      }
      FUN_100effa0(&local_158,uVar10,cVar24,2);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  uVar10 = 0;
  do {
    cVar24 = *(char *)((int)&local_cc + uVar10 + 1);
    if (cVar24 != '\0') {
      FUN_100f0050(&local_158,(&DAT_1012cb46)[uVar10 * 8],cVar24);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 6);
  uVar16 = local_124 & 0xffffffff;
  uVar19 = local_124 >> 0x20;
  pbVar27 = (byte *)0x0;
  uVar20 = local_134 & 0xffffffff;
  do {
    if ((((uint)uVar16 | (uint)uVar19) & 1 << (ulonglong)((uint)pbVar27 & 0x1f)) != 0) {
      iVar14 = FUN_100ef9e8(uVar20 & 0xffffffff);
      if (iVar14 == 0x51 || (iVar14 - 0x40U & 0xffffffee) != 0) {
        uVar16 = extraout_x1_00;
        if (iVar14 != 0x51) goto LAB_100aa038;
        local_1d4 = (byte *)0x0;
        local_1ec = (undefined8 *)&DAT_00000006;
        local_1e8 = 0x600005a;
        local_1f0 = &local_158;
        local_1e4 = (byte *)0x306000;
        local_1e0 = pbVar27;
        local_1dc = pbVar27;
        local_1d8 = pbVar27;
        FUN_100ef760(&local_1f0,0x20);
      }
      else {
        local_1f0 = &local_158;
        local_1ec = (undefined8 *)0x3;
        local_1e8 = 0x300005a;
        local_1e4 = (byte *)0x106000;
        local_1e0 = pbVar27;
        FUN_100ef760(&local_1f0,0x14);
      }
      uVar20 = local_134 & 0xffffffff;
      uVar16 = local_124 & 0xffffffff;
      uVar19 = local_124 >> 0x20;
    }
LAB_100aa038:
    pbVar27 = pbVar27 + 1;
    if ((byte *)0x1 < pbVar27) {
      if ((1 << (ulonglong)(local_e4._5_1_ & 0x1f) & local_12c._4_4_) != 0) {
        FUN_100ee778(&local_134,&local_158,local_e4._5_1_,local_e4._5_1_,local_e4._5_1_);
      }
      uVar10 = local_12c._4_4_;
      if ((1 << (ulonglong)(local_e4._6_1_ & 0x1f) & local_12c._4_4_) != 0) {
        FUN_100ee778(&local_134,&local_158,local_e4._6_1_,local_e4._6_1_,local_e4._6_1_);
        uVar10 = local_12c._4_4_;
      }
      if ((1 << (ulonglong)((byte)local_e4 & 0x1f) & uVar10) != 0) {
        FUN_100ee848(&local_134,&local_158,(byte)local_e4,(byte)local_e4,(uint)(byte)local_e4);
        uVar10 = local_12c._4_4_;
      }
      if ((1 << (ulonglong)(local_e4._1_1_ & 0x1f) & uVar10) != 0) {
        FUN_100ee848(&local_134,&local_158,local_e4._1_1_,local_e4._1_1_,(uint)local_e4._1_1_);
        uVar10 = local_12c._4_4_;
      }
      if ((1 << (ulonglong)(local_e4._2_1_ & 0x1f) & uVar10) != 0) {
        FUN_100ee848(&local_134,&local_158,local_e4._2_1_,local_e4._2_1_,(uint)local_e4._2_1_);
        uVar10 = local_12c._4_4_;
      }
      if ((1 << (ulonglong)(local_e4._3_1_ & 0x1f) & uVar10) != 0) {
        FUN_100ee848(&local_134,&local_158,local_e4._3_1_,local_e4._3_1_,(uint)local_e4._3_1_);
      }
      if (local_104._5_1_ != 0) {
        local_1e8 = 0x2000068;
        local_1ec = (undefined8 *)0x2;
        local_1f0 = &local_158;
        local_1e4 = (byte *)(uint)local_104._5_1_;
        FUN_100ef760(&local_1f0,0x10);
      }
      FUN_100efae8(&local_158,&local_190,local_98);
      iVar14 = local_158;
      FUN_100ef6d8(&iStack_90,local_158,iStack_154 - local_158);
      FUN_100fed00((undefined4)local_190);
      FUN_100fed00(iVar14);
      local_190 = 0x4e475349;
      local_188 = 0x800000000;
      local_14c = 1;
      local_150 = 0x210;
      local_158 = FUN_100fece0(0x210);
      iStack_154 = local_158;
      FUN_100ef6d8(&local_158,&local_190,0x10);
      uVar10 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      do {
        uVar26 = 0xf;
        if (uVar10 == 0) {
          pcVar17 = s_SV_POSITION_1012cb20;
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
          if (uVar10 == 1) {
            pcVar17 = s_TEXCOORD_1012bac0;
            uVar26 = 3;
          }
          else {
            pcVar17 = (char *)0x0;
          }
        }
        uVar15 = FUN_100ef818(&local_80,pcVar17);
        local_190 = (ulonglong)uVar15;
        local_188 = CONCAT44(3,uVar9);
        local_180._0_5_ = CONCAT14(uVar26,uVar10);
        local_180 = (ulonglong)
                    CONCAT15(*(undefined1 *)((int)&uStack_d4 + uVar10 + 7),(undefined5)local_180);
        FUN_100ef6d8(&local_158,&local_190,0x18);
        uVar10 = uVar10 + 1;
      } while (uVar10 < 2);
      FUN_100efb68(&local_158,2,&local_80);
      piVar6 = local_a0;
      iVar14 = local_158;
      FUN_100ef6d8(local_a0,local_158,iStack_154 - local_158);
      FUN_100fed00(iVar14);
      *(int *)(*piVar6 + 0x24) = *local_9c - *piVar6;
      local_190 = 0x4e47534f;
      local_188 = 0x800000000;
      pcVar17 = (char *)((int)&local_cc + 1);
      iVar14 = 0;
      iVar23 = 6;
      do {
        cVar24 = *pcVar17;
        iVar23 = iVar23 + -1;
        pcVar17 = pcVar17 + 1;
        if (cVar24 != '\0') {
          iVar14 = iVar14 + 1;
        }
      } while (iVar23 != 0);
      local_150 = 0x210;
      local_14c = 1;
      local_158 = FUN_100fece0(0x210);
      iStack_154 = local_158;
      FUN_100ef6d8(&local_158,&local_190,0x10);
      uVar10 = 0;
      do {
        if (*(char *)((int)&local_cc + uVar10 + 1) != '\0') {
          iVar23 = uVar10 * 8;
          local_190 = (ulonglong)CONCAT14((&DAT_1012cb45)[iVar23],iVar14 * 0x18 + 8);
          local_188 = (ulonglong)(uint)(&DAT_1012cb40)[uVar10 * 2] << 0x20;
          local_180._0_5_ = CONCAT14((&DAT_1012cb44)[iVar23],(uint)(byte)(&DAT_1012cb46)[iVar23]);
          local_180 = (ulonglong)CONCAT15(~(&DAT_1012cb44)[iVar23],(undefined5)local_180) &
                      0xffff0fffffffffff;
          FUN_100ef6d8(&local_158,&local_190,0x18);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 6);
      FUN_100ef6d8(&local_158,s_SV_TARGET_10136e38,10);
      FUN_100ef6d8(&local_158,0x1012cb74,-(iStack_154 - local_158) & 3);
      piVar6 = local_a0;
      iVar23 = local_158;
      *(int *)(local_158 + 8) = iVar14;
      *(int *)(local_158 + 4) = (iStack_154 - local_158) + -8;
      FUN_100ef6d8(local_a0,local_158,iStack_154 - local_158);
      FUN_100fed00(iVar23);
      iVar14 = iStack_90;
      *(int *)(*piVar6 + 0x28) = *local_9c - *piVar6;
      FUN_100ef6d8(piVar6,iStack_90,iStack_8c - iStack_90);
      FUN_100ef888(piVar6);
      FUN_100fed00(iVar14);
      return 1;
    }
  } while( true );
}

