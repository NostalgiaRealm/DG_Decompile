/*
 * FUN_1002da58 at 1002da58
 * undefined FUN_1002da58(void)
 * Address ranges: 1002da58-100301c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002da58(uint param_1,uint param_2,char param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte bVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  int *piVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  undefined8 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  char cVar30;
  char cVar31;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  ulonglong extraout_x11;
  byte bVar32;
  int iVar33;
  char *pcVar34;
  int *local_230;
  int *local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  undefined4 local_210;
  undefined4 local_20c;
  uint local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  char local_1e0;
  byte local_1df;
  uint local_1dc;
  int local_1d8;
  int iStack_1d4;
  undefined4 local_1d0;
  undefined1 local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  int local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_198;
  char local_194;
  undefined4 local_193;
  undefined2 local_18f;
  undefined1 local_18d;
  undefined8 local_18c;
  undefined8 local_184;
  ulonglong local_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined8 local_144;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  int *local_f4;
  int *local_f0;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  uint local_94;
  int iStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  
  local_18f = 0;
  local_18d = 0;
  uVar18 = (undefined1)(param_1 >> 10);
  local_193 = CONCAT13(uVar18,CONCAT12(uVar18,CONCAT11((char)(param_1 >> 8),(char)(param_1 >> 7))))
              & 0x1010101;
  uStack_12c = 0;
  uStack_134 = 0;
  uStack_11c = 0;
  local_124 = 0;
  uStack_10c = 0;
  uStack_114 = 0;
  uStack_104 = 0;
  local_184 = 0;
  uStack_174 = 0;
  local_17c = 0;
  uStack_164 = 0;
  uStack_16c = 0;
  local_144 = 0x41040000110400;
  local_18c = (ulonglong)param_2;
  local_15c = (ulonglong)CONCAT24(0x10,(int)&local_13c + 7);
  bVar13 = false;
  bVar17 = false;
  uStack_14c = 0x11080000210800;
  local_154 = 0x31080000410800;
  uVar20 = param_1 & 0xf;
  if (uVar20 != 2) {
    if (uVar20 == 1) {
      bVar13 = true;
      bVar17 = true;
    }
    else if (uVar20 == 0) {
      bVar13 = false;
      bVar17 = true;
    }
  }
  if (param_3 == '\0') {
    bVar16 = (param_1 >> 9 & 2) != 0;
    cVar30 = '\x01';
    if (bVar16) {
      cVar30 = '\x02';
    }
    cVar31 = -1;
    if (bVar16) {
      cVar31 = '\x01';
    }
    cVar4 = cVar30;
    cVar14 = -1;
    if (bVar17) {
      cVar4 = cVar30 + '\x01';
      cVar14 = cVar30;
    }
    cVar30 = -1;
    if (bVar13) {
      cVar30 = cVar4;
    }
    local_13c._0_6_ = CONCAT42(0xffffff,CONCAT11(cVar30,cVar14));
    local_13c = (ulonglong)CONCAT16(cVar31,(undefined6)local_13c);
  }
  else {
    local_13c = 0x6050403020100;
  }
  local_c8 = 0;
  local_e8 = 0x43425844;
  local_e0 = 0;
  local_c0 = 0;
  uStack_d8 = 0x100000000;
  uStack_d0 = 0x300000000;
  local_198 = param_1;
  local_194 = param_3;
  local_f4 = param_4;
  FUN_10084f80(param_4,&local_e8,0x2c);
  local_f0 = param_4 + 1;
  local_84 = 1;
  *(int *)(*param_4 + 0x20) = *local_f0 - *param_4;
  local_88 = 0x800;
  iStack_90 = FUN_100914b0(0x800);
  local_1b0 = 0x200;
  local_1ac = 1;
  iStack_8c = iStack_90;
  local_1b8 = FUN_100914b0(0x200);
  local_1b4 = local_1b8;
  iVar19 = FUN_100850c0((uint)local_18c);
  local_e0 = (ulonglong)extraout_w11;
  uVar20 = 0x58454853;
  if (iVar19 - 0x40U < 2) {
    uVar20 = 0x52444853;
  }
  local_e8 = (ulonglong)uVar20;
  FUN_10084f80(&local_1b8,&local_e8,0x10);
  local_1cc = 1;
  local_f8 = local_1b4 - local_1b8;
  local_1d0 = 0x80;
  local_1d8 = FUN_100914b0(0x80);
  iStack_1d4 = local_1d8;
  uVar20 = FUN_1002ba68(local_198 >> 4 & 7);
  local_fc = uVar20;
  uVar26 = FUN_1002ba20(&local_198);
  if (((uVar26 & 1) == 0) && ((extraout_w11_00 >> 9 & 1) == 0)) {
    bVar17 = uVar20 != 2;
    bVar11 = local_124._1_1_;
    if (bVar17) {
      bVar11 = local_124._3_1_;
    }
    bVar32 = 1;
    if (bVar17) {
      bVar32 = 0xf;
    }
    pbVar9 = (byte *)((int)&local_124 + 1);
    if (bVar17) {
      pbVar9 = (byte *)((int)&local_124 + 3);
    }
    *pbVar9 = bVar11 | bVar32;
    local_1dc = 0x110200;
    if (bVar17) {
      local_1dc = 0x410200;
    }
  }
  else {
    local_1dc = 0;
  }
  uVar26 = FUN_1002ba20(&local_198);
  uVar20 = (uint)extraout_x11;
  if ((uVar26 & 1) == 0) {
switchD_1002dd4c_caseD_5:
    local_1c8 = local_fc;
  }
  else {
    switch(uVar20 & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
      if ((uVar20 >> 0xd & 1) != 0) goto switchD_1002dd4c_default;
      local_1c8 = 2;
      if ((extraout_x11 & 0x8000) == 0) {
        local_1c8 = local_fc;
      }
      break;
    case 5:
      goto switchD_1002dd4c_caseD_5;
    default:
switchD_1002dd4c_default:
      local_1c8 = 0;
    }
  }
  uVar22 = uVar20 >> 0xe & 1;
  if (((uVar20 >> 0xb & 1) == 0) && ((uVar20 >> 10 & 1) == 0)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  switch(uVar20 & 0xf) {
  case 5:
    if ((bVar17) || (((uVar20 >> 7 ^ uVar20 >> 8) & 1) != 0)) {
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    if (!bVar17) goto switchD_1002ddac_caseD_6;
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    uVar20 = FUN_10083f38(&local_18c,4,1);
    if ((((char)local_193 == '\0') && (local_193._1_1_ == '\0')) &&
       ((local_193._2_1_ == '\0' && (local_193._3_1_ == '\0')))) {
      uVar21 = 0;
    }
    else {
      uVar21 = FUN_10083f38(&local_18c,2,1);
    }
    local_124 = local_124 | 3;
    local_20c = 0x68;
    local_208 = 0;
    local_214 = (uint)uStack_14c;
    local_210 = 0xe4;
    local_218 = 4;
    local_21c = 0x210101;
    local_220 = 3;
    local_228 = 0x33;
    local_22c = &local_1d8;
    local_230 = (int *)&local_18c;
    local_224 = uVar20;
    FUN_10084ec8(&local_230,0x2c);
    if (uVar21 != 0) {
      if (((char)local_193 == '\0') && (local_193._2_1_ == '\0')) {
        local_220 = 0;
      }
      else {
        local_220 = 1;
      }
      if ((local_193._1_1_ == '\0') && (local_193._3_1_ == '\0')) {
        uVar23 = 0;
      }
      else {
        uVar23 = 2;
      }
      local_220 = local_220 | uVar23;
      local_218 = 4;
      local_214 = 0;
      local_228 = 0x1a;
      local_22c = &local_1d8;
      local_230 = (int *)&local_18c;
      local_224 = uVar21;
      local_21c = uVar20;
      FUN_10084ec8(&local_230,0x20);
    }
    break;
  default:
switchD_1002ddac_caseD_6:
    uVar23 = 0;
    uVar26 = extraout_x11;
    switch(uVar20 & 0xf) {
    default:
      goto switchD_1002ede0_caseD_0;
    case 5:
      uVar27 = 1;
      break;
    case 6:
      uVar27 = 0;
      break;
    case 7:
      uVar23 = FUN_1002d7e0(&local_1d8,&local_198,0,0,0,uVar22);
      uVar20 = uVar23;
      if (((local_1dc != 0) && (local_1c8 == 0)) && (uVar20 = local_1dc, local_1dc != uVar23)) {
        FUN_10083ff0(&local_18c,uVar23);
      }
      uVar24 = FUN_10083f38(&local_18c,3,0);
      local_200 = 0;
      local_1fc = 0;
      local_210 = 0x1e4;
      local_214 = local_144._4_4_;
      local_218 = 0x1a1;
      local_220 = 7;
      local_22c = &local_1d8;
      local_228 = 0;
      local_230 = (int *)&local_18c;
      local_224 = uVar24;
      local_21c = uVar23;
      FUN_10084ec8(&local_230,0x38);
      local_200 = 0;
      local_1fc = 0;
      local_208 = 0;
      local_214 = local_144._4_4_;
      local_210 = 0xe4;
      local_220 = 1;
      local_22c = &local_1d8;
      local_204 = 0x3fcc8000;
      local_228 = 0x2010;
      local_230 = (int *)&local_18c;
      local_20c = 0x3f950000;
      local_218 = 0xa4;
      local_224 = uVar20;
      local_21c = uVar24;
      FUN_10084ec8(&local_230,0x38);
      local_200 = 0;
      local_1fc = 0;
      local_218 = 0xa4;
      local_204 = 0xbf500000;
      local_214 = local_144._4_4_;
      local_210 = 0xe4;
      local_220 = 2;
      local_22c = &local_1d8;
      local_208 = 0xbec80000;
      local_228 = 0x2010;
      local_230 = (int *)&local_18c;
      local_20c = 0x3f950000;
      local_224 = uVar20;
      local_21c = uVar24;
      FUN_10084ec8(&local_230,0x38);
      local_1fc = 0;
      local_204 = 0;
      local_200 = 0;
      local_208 = 0x40010000;
      local_214 = local_144._4_4_;
      local_210 = 0xe4;
      local_220 = 4;
      local_22c = &local_1d8;
      local_228 = 0x2010;
      local_230 = (int *)&local_18c;
      local_20c = 0x3f950000;
      local_218 = 0xa4;
      local_224 = uVar20;
      local_21c = uVar24;
      FUN_10084ec8(&local_230,0x38);
      uVar22 = local_1c8;
      if ((local_1c8 == 0) ||
         (FUN_1002aff8(&local_1d8,&local_198,uVar20,7,uVar23,0,local_1c8), uVar22 != 2)) {
        local_214 = 0x3f800000;
      }
      else {
        local_214 = 0xff;
      }
      local_210 = 0;
      local_21c = (uint)local_144;
      local_218 = 0xe4;
      local_220 = 8;
      local_22c = &local_1d8;
      local_228 = 0x36;
      local_230 = (int *)&local_18c;
      local_224 = uVar20;
      FUN_10084ec8(&local_230,0x24);
      goto LAB_1002f024;
    }
    uVar23 = FUN_1002d7e0(&local_1d8,&local_198,uVar27,local_1dc,local_1c8,uVar22);
    goto LAB_1002f024;
  }
  local_218 = 4;
  local_214 = 0;
  local_220 = 3;
  local_228 = 0x1b;
  local_22c = &local_1d8;
  local_230 = (int *)&local_18c;
  local_224 = uVar20;
  local_21c = uVar20;
  FUN_10084ec8(&local_230,0x20);
  local_214 = 0x60;
  local_210 = 0;
  local_21c = (uint)uStack_14c;
  local_218 = 0x10;
  local_220 = 0xc;
  local_22c = &local_1d8;
  local_228 = 0x36;
  local_230 = (int *)&local_18c;
  local_224 = uVar20;
  FUN_10084ec8(&local_230,0x24);
  uVar12 = local_1dc;
  uVar26 = (ulonglong)local_198;
  uVar23 = 0;
  switch(local_198 & 0xf) {
  case 0:
    if (local_1dc == 0 || local_1c8 != 1) {
      local_1e0 = '\0';
      if (local_1dc != 0) goto LAB_1002dfac;
LAB_1002dfb8:
      bVar17 = false;
    }
    else {
      local_1e0 = '\x01';
LAB_1002dfac:
      if ((local_198 >> 0x11 & 1) == 0) goto LAB_1002dfb8;
      bVar17 = true;
    }
    uVar23 = local_1dc;
    if (!bVar17) {
      uVar23 = 0;
    }
    uVar23 = FUN_1002baa0(&local_1d8,&local_198,uVar20,uVar21,uVar23);
    if (uVar23 != uVar12) {
      local_1c4 = CONCAT31(local_1c4._1_3_,((byte)uVar22 ^ 1) * '\b' + '\a');
      local_1a8 = 2;
      if (local_193._1_1_ == '\0') {
        local_1a8 = 0;
      }
      local_1a8 = local_1a8 | (char)local_193 != '\0';
      uVar20 = uVar23;
      if (local_1a8 != 0) {
        uVar20 = FUN_10083f38(&local_18c,4,1);
      }
      uVar5 = local_1a8;
      uVar12 = local_1dc;
      local_200 = 0;
      local_210 = 0xe4;
      local_20c = 0;
      uVar18 = (undefined1)local_1c4;
      *(undefined4 *)((int)&uStack_11c + (uint)(byte)local_13c * 4) = 5;
      local_208 = (byte)local_13c | 0x410700;
      local_220 = local_1c4 & 0xff;
      local_21c = uVar23 | 0x10000000;
      local_204 = 0xe4;
      uVar22 = local_1dc;
      if (local_1a8 != 0 || local_1e0 == '\0') {
        uVar22 = uVar20;
      }
      local_218 = 0;
      local_214 = (uint)local_144;
      local_228 = 0xa7;
      local_22c = &local_1d8;
      local_230 = (int *)&local_18c;
      local_224 = uVar22;
      local_1a4 = local_21c;
      local_1a0 = local_208;
      local_100 = local_220;
      FUN_10084ec8(&local_230,0x34);
      if (uVar5 == 0) {
        if (uVar22 == uVar20) {
          if (uVar12 == 0) {
            uVar12 = uVar20;
          }
          FUN_1002aff8(&local_1d8,&local_198,uVar12,uVar18,uVar20,1,local_1c8);
        }
      }
      else if (uVar5 - 1 < 3) {
        local_1c0 = uVar23;
        if (uVar5 == 3) {
          local_1c0 = FUN_10083f38(&local_18c,4,1);
        }
        uVar12 = local_1a8;
        local_200 = 0;
        local_210 = 0xe4;
        local_20c = 0;
        local_218 = 1;
        if (local_1a8 == 2) {
          local_218 = 2;
        }
        local_208 = local_1a0;
        local_204 = 0xe4;
        local_214 = (uint)local_144;
        local_228 = 0xa7;
        local_224 = local_1c0;
        local_22c = &local_1d8;
        local_230 = (int *)&local_18c;
        local_220 = local_100;
        local_21c = local_1a4;
        FUN_10084ec8(&local_230,0x34);
        uVar5 = local_1dc;
        local_230 = (int *)((uint)local_230 & 0xffffff00);
        uVar18 = (undefined1)local_1c4;
        uVar22 = local_1dc;
        if (uVar12 != 3 || local_1e0 == '\0') {
          uVar22 = uVar20;
        }
        FUN_1002b230(&local_1d8,&local_198,uVar22,(undefined1)local_1c4,local_1c0,uVar20,local_1c0,
                     uVar21);
        if (uVar12 == 3) {
          uVar22 = FUN_10083f38(&local_18c,4,1);
          local_204 = 0xe4;
          local_200 = 0;
          local_20c = 0;
          local_208 = local_1a0;
          local_220 = local_100;
          local_21c = local_1a4;
          local_214 = (uint)local_144;
          local_210 = 0xe4;
          local_218 = 3;
          local_228 = 0xa7;
          local_22c = &local_1d8;
          local_230 = (int *)&local_18c;
          local_224 = uVar22;
          local_1a8 = uVar22;
          FUN_10084ec8(&local_230,0x34);
          local_204 = 0xe4;
          local_200 = 0;
          local_20c = 0;
          local_208 = local_1a0;
          local_220 = local_100;
          local_21c = local_1a4;
          local_214 = (uint)local_144;
          local_210 = 0xe4;
          local_218 = 2;
          local_228 = 0xa7;
          local_22c = &local_1d8;
          local_230 = (int *)&local_18c;
          local_224 = uVar23;
          FUN_10084ec8(&local_230,0x34);
          local_230 = (int *)((uint)local_230 & 0xffffff00);
          FUN_1002b230(&local_1d8,&local_198,uVar23,uVar18,uVar22,uVar23,uVar22,uVar21);
          local_230 = (int *)CONCAT31(local_230._1_3_,0x55);
          uVar18 = (undefined1)local_1c4;
          uVar22 = uVar5;
          if (local_1e0 == '\0') {
            uVar22 = uVar20;
          }
          FUN_1002b230(&local_1d8,&local_198,uVar22,(undefined1)local_1c4,uVar23,uVar20,uVar23,
                       uVar21);
          if (uVar22 == uVar20) {
            if (uVar5 == 0) {
              uVar5 = uVar20;
            }
            FUN_1002aff8(&local_1d8,&local_198,uVar5,uVar18,uVar20,1,local_1c8);
          }
          FUN_10083ff0(&local_18c,local_1a8);
        }
        else if (uVar22 == uVar20) {
          if (uVar5 == 0) {
            uVar5 = uVar20;
          }
          FUN_1002aff8(&local_1d8,&local_198,uVar5,uVar18,uVar20,1,local_1c8);
        }
        if (local_1c0 != uVar23) {
          FUN_10083ff0(&local_18c,local_1c0);
        }
      }
      if (uVar20 != uVar23) {
        FUN_10083ff0(&local_18c,uVar23);
      }
      uVar23 = uVar20;
      if (uVar22 != uVar20) {
        FUN_10083ff0(&local_18c,uVar20);
        uVar23 = local_1dc;
      }
    }
    goto LAB_1002e380;
  case 1:
    uVar23 = FUN_1002bf98(&local_1d8,&local_198,uVar20,uVar21,0,local_1c8,local_1dc,uVar22);
    break;
  case 2:
    if ((local_1dc == 0) || ((local_198 >> 0x11 & 1) == 0)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    uVar23 = local_1dc;
    if (!bVar17) {
      uVar23 = 0;
    }
    uVar20 = FUN_1002baa0(&local_1d8,&local_198,uVar20,uVar21,uVar23);
    uVar23 = uVar20;
    if (uVar20 == uVar12) goto LAB_1002e380;
    local_1a8 = 2;
    if (local_193._1_1_ == '\0') {
      local_1a8 = 0;
    }
    local_1a8 = local_1a8 | (char)local_193 != '\0';
    if (3 < local_1a8) goto LAB_1002e380;
    iVar19 = (uVar22 ^ 1) * 8 + 7;
    local_1e0 = (char)iVar19;
    iVar33 = (uVar22 ^ 1) + 3;
    switch(local_1a8) {
    case 0:
      if (uVar12 == 0) {
        uVar12 = uVar20;
      }
      FUN_1002c790(&local_1d8,&local_198,uVar20,0,local_1c8,uVar12,uVar22);
      goto LAB_1002e730;
    default:
      local_100 = FUN_10083f38(&local_18c,iVar33,1);
      uVar24 = 0x55;
      if (local_1a8 != 1) {
        uVar24 = 0xaa;
      }
      FUN_1002c790(&local_1d8,&local_198,uVar20,uVar24,1,local_100,uVar22);
      FUN_1002c790(&local_1d8,&local_198,uVar20,0,1,uVar20,uVar22);
      uVar5 = local_1c8;
      local_1e0 = uVar12 != 0 && local_1c8 == 1;
      uVar22 = uVar12;
      if (uVar12 == 0 || local_1c8 != 1) {
        uVar22 = uVar20;
      }
      uVar18 = 0;
      if (local_1a8 != 1) {
        uVar18 = 0x55;
      }
      local_230 = (int *)CONCAT31(local_230._1_3_,uVar18);
      FUN_1002b230(&local_1d8,&local_198,uVar22,iVar19,local_100,uVar20,local_100,uVar21);
      FUN_10083ff0(&local_18c,local_100);
      if (local_1e0 == '\0') {
        if (uVar12 == 0) {
          uVar12 = uVar20;
        }
        FUN_1002aff8(&local_1d8,&local_198,uVar12,iVar19,uVar20,1,uVar5);
      }
      bVar17 = uVar22 == local_1dc;
      break;
    case 3:
      uVar26 = 1;
      local_1c4 = FUN_10083f38(&local_18c,iVar33,1);
      uVar24 = FUN_10083f38(&local_18c,extraout_x1 & 0xffffffff,uVar26 & 0xffffffff);
      FUN_1002c790(&local_1d8,&local_198,uVar20,0x55,1,local_1c4,uVar22);
      FUN_1002c790(&local_1d8,&local_198,uVar20,0,1,uVar24,uVar22);
      local_230 = (int *)((uint)local_230 & 0xffffff00);
      FUN_1002b230(&local_1d8,&local_198,local_1c4,iVar19,local_1c4,uVar24,local_1c4,uVar21);
      FUN_1002c790(&local_1d8,&local_198,uVar20,0xff,1,uVar24,uVar22);
      FUN_1002c790(&local_1d8,&local_198,uVar20,0xaa,1,uVar20,uVar22);
      cVar30 = local_1e0;
      local_230 = (int *)((uint)local_230 & 0xffffff00);
      FUN_1002b230(&local_1d8,&local_198,uVar20,local_1e0,uVar24,uVar20,uVar24,uVar21);
      FUN_10083ff0(&local_18c,uVar24);
      uVar22 = local_1c8;
      local_230 = (int *)CONCAT31(local_230._1_3_,0x55);
      bVar17 = local_1c8 != 1;
      local_1a8 = uVar12;
      if (uVar12 == 0 || bVar17) {
        local_1a8 = uVar20;
      }
      FUN_1002b230(&local_1d8,&local_198,uVar20,cVar30,uVar20,local_1c4,uVar20,uVar21);
      FUN_10083ff0(&local_18c,local_1c4);
      if (uVar12 == 0 || bVar17) {
        if (uVar12 == 0) {
          uVar12 = uVar20;
        }
        FUN_1002aff8(&local_1d8,&local_198,uVar12,cVar30,uVar20,1,uVar22);
      }
      bVar17 = local_1a8 == local_1dc;
    }
    uVar12 = local_1dc;
    if (bVar17) {
      FUN_10083ff0(&local_18c,uVar20);
LAB_1002e730:
      uVar23 = uVar12;
      if (uVar12 != uVar20) {
        FUN_10083ff0(&local_18c,uVar20);
      }
    }
LAB_1002e380:
    FUN_10083ff0(&local_18c,uVar21);
    break;
  case 3:
  case 4:
    local_1df = ((byte)uVar22 ^ 1) * '\b' + 7;
    uVar24 = 4;
    if ((local_198 & 0xf) == 4) {
      uVar24 = 5;
    }
    *(undefined4 *)((int)&uStack_11c + (uint)local_13c._5_1_ * 4) = uVar24;
    local_1a4 = local_13c._5_1_ | 0x410700;
    iVar19 = 0;
    local_1a0 = 2;
    uVar22 = 0;
    local_1c0 = 2;
    if (local_193._1_1_ == '\0') {
      local_1c0 = 0;
    }
    local_1c0 = local_1c0 | (char)local_193 != '\0';
    if ((local_1dc == 0) || ((local_198 >> 0xb & 1) != 0)) {
      local_1e0 = '\0';
    }
    else {
      local_1e0 = '\x01';
    }
    local_1c4 = uVar21;
    if ((local_1c0 != 0) ||
       (FUN_1002b2e0(&local_198,uVar20,uVar21), uVar23 = local_1dc,
       local_1e0 == '\0' || local_1c8 != 2)) {
      uVar23 = FUN_10083f38(&local_18c,4,1);
    }
    uVar21 = uVar23;
    if (uVar23 == local_1dc) {
      uVar21 = 0;
    }
    FUN_1002ca98(&local_1d8,&local_198,0,uVar23,local_1df,uVar20,local_1a4);
    if (local_1c0 == 0) {
      local_1c4 = 0;
      uVar20 = 0;
    }
    if ((local_198 >> 0xb & 1) != 0) {
      iVar19 = FUN_10083f38(&local_18c,4,1);
      FUN_1002cbf0(&local_1d8,&local_198,uVar21,iVar19,1,0,iVar19);
    }
    cVar30 = '\0';
    if ((char)local_193 != '\0') {
      if ((local_1c0 == 1 && uVar20 != 0) && ((uVar20 & 0x3f00) == 0)) {
        FUN_10083ff0(&local_18c,uVar20);
      }
      uVar26 = 1;
      uVar22 = FUN_10083f38(&local_18c,4,1);
      FUN_1002ca98(&local_1d8,&local_198,uVar26 & 0xffffffff,uVar22,local_1df,uVar20,local_1a4);
      if ((local_198 >> 0xb & 1) != 0) {
        if (iVar19 == 0) {
          iVar19 = FUN_10083f38(&local_18c,4,1);
        }
        FUN_1002cbf0(&local_1d8,&local_198,uVar22,iVar19,2,0x55,0);
      }
      local_22c = &local_1d8;
      local_214 = 0;
      local_228 = 0x56;
      local_230 = (int *)&local_18c;
      uVar23 = (uint)local_1df;
      local_218 = 0xe4;
      local_224 = uVar21;
      local_220 = uVar23;
      local_21c = uVar21;
      FUN_10084ec8(&local_230,0x20);
      local_22c = &local_1d8;
      local_214 = 0;
      local_228 = 0x56;
      local_230 = (int *)&local_18c;
      local_218 = 0xe4;
      local_224 = uVar22;
      local_220 = uVar23;
      local_21c = uVar22;
      FUN_10084ec8(&local_230,0x20);
      uVar12 = local_1c4;
      local_230 = (int *)((uint)local_230 & 0xffffff00);
      local_1a0 = 1;
      uVar23 = local_1dc;
      if ((local_1c0 != 1 || local_1e0 == '\0') || local_1c8 != 1) {
        uVar23 = uVar21;
      }
      FUN_1002b230(&local_1d8,&local_198,uVar23,local_1df,uVar22,uVar21,uVar22,local_1c4);
      if ((local_1c0 == 1 && uVar12 != 0) && ((uVar12 & 0x3f00) == 0)) {
        FUN_10083ff0(&local_18c,uVar12);
      }
      cVar30 = (char)local_193;
    }
    cVar31 = '\0';
    if (local_193._1_1_ == '\0') {
LAB_1002eb88:
      if (cVar30 != '\0') goto LAB_1002eb8c;
    }
    else {
      if ((local_1c0 == 2 && uVar20 != 0) && ((uVar20 & 0x3f00) == 0)) {
        FUN_10083ff0(&local_18c,uVar20);
      }
      if (uVar22 == 0) {
        uVar22 = FUN_10083f38(&local_18c,4,1);
      }
      FUN_1002ca98(&local_1d8,&local_198,2,uVar22,local_1df,uVar20,local_1a4);
      if ((local_198 >> 0xb & 1) != 0) {
        if (iVar19 == 0) {
          iVar19 = FUN_10083f38(&local_18c,4,1);
        }
        FUN_1002cbf0(&local_1d8,&local_198,uVar22,iVar19,4,0xaa,0);
      }
      if ((char)local_193 == '\0') {
        local_22c = &local_1d8;
        local_214 = 0;
        local_228 = 0x56;
        local_230 = (int *)&local_18c;
        uVar23 = (uint)local_1df;
        local_218 = 0xe4;
        local_224 = uVar21;
        local_220 = uVar23;
        local_21c = uVar21;
        FUN_10084ec8(&local_230,0x20);
        local_22c = &local_1d8;
        local_214 = 0;
        local_228 = 0x56;
        local_230 = (int *)&local_18c;
        local_218 = 0xe4;
        local_224 = uVar22;
        local_220 = uVar23;
        local_21c = uVar22;
        FUN_10084ec8(&local_230,0x20);
        uVar12 = local_1c4;
        local_230 = (int *)((uint)local_230 & 0xffffff00);
        local_1a0 = 1;
        uVar23 = local_1dc;
        if (local_1e0 == '\0' || local_1c8 != 1) {
          uVar23 = uVar21;
        }
        FUN_1002b230(&local_1d8,&local_198,uVar21,0xf,uVar22,uVar21,uVar22,local_1c4);
        if ((uVar12 != 0) && ((uVar12 & 0x3f00) == 0)) {
          FUN_10083ff0(&local_18c,uVar12);
        }
        cVar31 = local_193._1_1_;
        cVar30 = (char)local_193;
        goto LAB_1002eb88;
      }
      cVar31 = local_193._1_1_;
LAB_1002eb8c:
      if (cVar31 != '\0') {
        if ((uVar20 != 0) && ((uVar20 & 0x3f00) == 0)) {
          FUN_10083ff0(&local_18c,uVar20);
        }
        uVar23 = FUN_10083f38(&local_18c,4,1);
        FUN_1002ca98(&local_1d8,&local_198,3,uVar23,local_1df,uVar20,local_1a4);
        if ((local_198 >> 0xb & 1) != 0) {
          FUN_1002cbf0(&local_1d8,&local_198,uVar23,iVar19,8,0xff,0);
        }
        local_22c = &local_1d8;
        local_214 = 0;
        local_228 = 0x56;
        local_230 = (int *)&local_18c;
        local_218 = 0xe4;
        local_220 = 0xf;
        local_224 = uVar22;
        local_21c = uVar22;
        FUN_10084ec8(&local_230,0x20);
        local_22c = &local_1d8;
        local_214 = 0;
        local_228 = 0x56;
        local_230 = (int *)&local_18c;
        local_218 = 0xe4;
        local_220 = 0xf;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x20);
        uVar20 = local_1c4;
        local_230 = (int *)((uint)local_230 & 0xffffff00);
        local_1a0 = 1;
        FUN_1002b230(&local_1d8,&local_198,uVar22,0xf,uVar23,uVar22,uVar23,local_1c4);
        FUN_10083ff0(&local_18c,uVar23);
        local_230 = (int *)CONCAT31(local_230._1_3_,0x55);
        uVar23 = local_1dc;
        if (local_1e0 == '\0' || local_1c8 != 1) {
          uVar23 = uVar21;
        }
        FUN_1002b230(&local_1d8,&local_198,uVar21,0xf,uVar22,uVar21,uVar22,uVar20);
        if ((uVar20 != 0) && ((uVar20 & 0x3f00) == 0)) {
          FUN_10083ff0(&local_18c,uVar20);
        }
      }
    }
    if ((local_198 >> 0xb & 1) != 0) {
      FUN_1002b698(&local_1d8,&local_198,iVar19,0,local_1c4,iVar19);
    }
    if (uVar23 != local_1dc && local_1a0 != local_1c8) {
      uVar23 = local_1dc;
      if (local_1dc == 0) {
        uVar23 = uVar21;
      }
      FUN_1002aff8(&local_1d8,&local_198,uVar23,local_1df,uVar21,local_1a0,local_1c8);
    }
    if (uVar21 != uVar23) {
      FUN_10083ff0(&local_18c,uVar21);
    }
    FUN_10083ff0(&local_18c,uVar22);
    FUN_10083ff0(&local_18c,iVar19);
    break;
  case 5:
    uVar23 = FUN_1002cf20(&local_1d8,&local_198,uVar20,uVar21,local_1c8,local_1dc,uVar22);
    break;
  default:
    goto switchD_1002ede0_caseD_0;
  }
LAB_1002f024:
  uVar26 = (ulonglong)local_198;
switchD_1002ede0_caseD_0:
  if (uVar23 != 0) {
    if (((uint)uVar26 >> 0xd & 1) != 0) {
      local_220 = 7;
      local_228 = 0x38;
      local_22c = &local_1d8;
      local_230 = (int *)&local_18c;
      local_210 = 0xff;
      local_20c = 0;
      local_218 = 0xa4;
      local_224 = uVar23;
      local_21c = uVar23;
      local_214 = uVar23;
      FUN_10084ec8(&local_230,0x28);
      uVar26 = (ulonglong)local_198;
    }
    if ((((uint)uVar26 >> 0xe & 1) != 0) && ((uVar26 & 0x70) != 0)) {
      if (local_1c8 == 2) {
        local_214 = 0xff;
      }
      else {
        local_214 = 0x3f800000;
      }
      local_210 = 0;
      local_21c = (uint)local_144;
      local_218 = 0xe4;
      local_224 = local_1dc;
      local_220 = 8;
      local_22c = &local_1d8;
      local_228 = 0x36;
      local_230 = (int *)&local_18c;
      FUN_10084ec8(&local_230,0x24);
      uVar26 = (ulonglong)local_198;
    }
    uVar20 = local_1c8;
    if (((uint)uVar26 >> 0xf & 1) != 0) {
      if (local_1c8 != 2) {
        FUN_1002aff8(&local_1d8,&local_198,uVar23,0xf,uVar23,local_1c8,2);
        uVar20 = 2;
      }
      local_208 = 0;
      local_210 = 0xe4;
      local_20c = 0xa0;
      local_220 = 0xf;
      local_218 = 0xe4;
      local_214 = (uint)local_154;
      local_228 = 1;
      local_22c = &local_1d8;
      local_230 = (int *)&local_18c;
      local_224 = uVar23;
      local_21c = uVar23;
      FUN_10084ec8(&local_230,0x2c);
      uVar26 = (ulonglong)local_198;
    }
    uVar22 = (uint)uVar26;
    if (((uVar26 & 0x70) == 0) && ((uVar23 & 0x3f00) == 0)) {
      if ((uVar22 >> 9 & 1) == 0) {
        bVar17 = local_fc != 2;
        bVar11 = local_124._1_1_;
        if (bVar17) {
          bVar11 = local_124._3_1_;
        }
        bVar32 = 1;
        if (bVar17) {
          bVar32 = 0xf;
        }
        pbVar9 = (byte *)((int)&local_124 + 1);
        if (bVar17) {
          pbVar9 = (byte *)((int)&local_124 + 3);
        }
        *pbVar9 = bVar11 | bVar32;
        local_1dc = 0x110200;
        if (bVar17) {
          local_1dc = 0x410200;
        }
      }
      else {
        local_1dc = 0;
      }
      if (uVar20 != 2) {
        FUN_1002aff8(&local_1d8,&local_198,uVar23,0xf,uVar23,uVar20,2);
      }
      if ((uint)local_18c < 0x50) {
        local_214 = (uint)local_154 | 0x10000000;
        local_20c = 0x10;
        local_208 = 0;
        local_210 = 0;
        local_22c = &local_1d8;
        local_228 = 0x55;
        local_230 = (int *)&local_18c;
        local_218 = 0;
        local_220 = 1;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x10;
        local_208 = 0;
        local_218 = 0x55;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 1;
        local_22c = &local_1d8;
        local_228 = 0x55;
        local_230 = (int *)&local_18c;
        local_220 = 2;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x10;
        local_208 = 0;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 2;
        local_218 = 0xaa;
        local_220 = 4;
        local_22c = &local_1d8;
        local_228 = 0x55;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x10;
        local_208 = 0;
        local_218 = 0xff;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 3;
        local_220 = 8;
        local_22c = &local_1d8;
        local_228 = 0x55;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
      }
      else {
        local_20c = 0x10;
        local_208 = 0;
        local_214 = (uint)local_154;
        local_210 = 0xe4;
        local_22c = &local_1d8;
        local_228 = 0x55;
        local_230 = (int *)&local_18c;
        local_218 = 0xe4;
        local_220 = 0xf;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
      }
      if ((uint)local_18c < 0x50) {
        local_218 = 0;
        local_20c = 0x20;
        local_208 = 0;
        local_220 = 1;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 0;
        local_22c = &local_1d8;
        local_228 = 0x29;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x20;
        local_208 = 0;
        local_218 = 0x55;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 1;
        local_22c = &local_1d8;
        local_228 = 0x29;
        local_230 = (int *)&local_18c;
        local_220 = 2;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x20;
        local_208 = 0;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 2;
        local_218 = 0xaa;
        local_220 = 4;
        local_22c = &local_1d8;
        local_228 = 0x29;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
        local_20c = 0x20;
        local_208 = 0;
        local_218 = 0xff;
        local_214 = (uint)local_154 | 0x10000000;
        local_210 = 3;
        local_220 = 8;
        local_22c = &local_1d8;
        local_228 = 0x29;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
      }
      else {
        local_208 = 0;
        local_210 = 0xe4;
        local_20c = 0x20;
        local_220 = 0xf;
        local_218 = 0xe4;
        local_214 = (uint)local_154;
        local_228 = 0x29;
        local_22c = &local_1d8;
        local_230 = (int *)&local_18c;
        local_224 = uVar23;
        local_21c = uVar23;
        FUN_10084ec8(&local_230,0x2c);
      }
      local_20c = 0;
      local_210 = 0xee;
      local_218 = 0x44;
      local_220 = 3;
      local_22c = &local_1d8;
      local_228 = 0x3c;
      local_230 = (int *)&local_18c;
      local_224 = uVar23;
      local_21c = uVar23;
      local_214 = uVar23;
      FUN_10084ec8(&local_230,0x28);
      local_22c = &local_1d8;
      local_20c = 0;
      local_228 = 0x3c;
      local_230 = (int *)&local_18c;
      local_210 = 0x55;
      local_218 = 0;
      local_220 = 1;
      local_224 = uVar23;
      local_21c = uVar23;
      local_214 = uVar23;
      FUN_10084ec8(&local_230,0x28);
      local_20c = 0x40;
      local_208 = 0;
      local_218 = 0;
      local_224 = local_1dc;
      if (local_1dc == 0) {
        local_224 = uVar23;
      }
      local_214 = uStack_14c._4_4_;
      local_210 = 0;
      local_22c = &local_1d8;
      local_220 = 1;
      local_228 = 1;
      local_230 = (int *)&local_18c;
      local_21c = uVar23;
      FUN_10084ec8(&local_230,0x2c);
      uVar20 = 2;
      uVar22 = local_198;
    }
    uVar21 = local_fc;
    if (local_1dc == 0) {
      uVar12 = uVar22 >> 4 & 7;
      pbVar9 = (byte *)((int)&local_124 + 1);
      if (local_fc != 2) {
        pbVar9 = (byte *)((int)&local_124 + 3);
      }
      if (uVar20 == local_fc) {
        local_214 = 0;
        bVar11 = 1;
        if (local_fc != 2) {
          bVar11 = 0xf;
        }
        *pbVar9 = bVar11 | *pbVar9;
        uVar20 = 0;
        if (uVar12 != 0) {
          uVar20 = 0xe4;
        }
        uVar22 = 1;
        if (uVar12 != 0) {
          uVar22 = 0xf;
        }
        local_224 = 0x110200;
        if (local_fc != 2) {
          local_224 = 0x410200;
        }
        local_22c = &local_1d8;
        local_228 = 0x36;
        local_230 = (int *)&local_18c;
        local_220 = uVar22;
        local_21c = uVar23;
        local_218 = uVar20;
        FUN_10084ec8(&local_230,0x20);
        if ((local_198 >> 9 & 1) != 0) {
          bVar17 = uVar21 != 2;
          bVar32 = local_124._2_1_;
          if (bVar17) {
            bVar32 = local_124._4_1_;
          }
          local_214 = 0;
          pbVar9 = (byte *)((int)&local_124 + 2);
          if (bVar17) {
            pbVar9 = (byte *)((int)&local_124 + 4);
          }
          *pbVar9 = bVar32 | bVar11;
          local_224 = 0x110201;
          if (bVar17) {
            local_224 = 0x410201;
          }
          local_22c = &local_1d8;
          local_228 = 0x36;
          local_230 = (int *)&local_18c;
          local_220 = uVar22;
          local_21c = uVar23;
          local_218 = uVar20;
          FUN_10084ec8(&local_230,0x20);
        }
      }
      else {
        bVar17 = local_fc != 2;
        pbVar6 = &DAT_100b3534;
        if (bVar17) {
          pbVar6 = &DAT_100b3544;
        }
        pbVar7 = (byte *)0x100b3537;
        if (bVar17) {
          pbVar7 = &DAT_100b3547;
        }
        pbVar8 = &DAT_100b3536;
        if (bVar17) {
          pbVar8 = &DAT_100b3546;
        }
        if ((uVar22 >> 9 & 1) == 0) {
          bVar11 = *pbVar7;
          *pbVar9 = *pbVar6 | *pbVar9;
          FUN_1002aff8(&local_1d8,&local_198,(uint)*pbVar8 | (uint)bVar11 << 0x14 | 0x10200,0xf,
                       uVar23,uVar20,local_fc);
        }
        else {
          FUN_1002aff8(&local_1d8,&local_198,uVar23,0xf,uVar23,uVar20,local_fc);
          local_214 = 0;
          bVar11 = *pbVar7;
          *pbVar9 = *pbVar6 | *pbVar9;
          uVar20 = 0;
          if (uVar12 != 0) {
            uVar20 = 0xe4;
          }
          uVar22 = 1;
          if (uVar12 != 0) {
            uVar22 = 0xf;
          }
          local_224 = (uint)*pbVar8 | (uint)bVar11 << 0x14 | 0x10200;
          local_22c = &local_1d8;
          local_228 = 0x36;
          local_230 = (int *)&local_18c;
          local_220 = uVar22;
          local_21c = uVar23;
          local_218 = uVar20;
          FUN_10084ec8(&local_230,0x20);
          bVar17 = uVar21 != 2;
          bVar11 = local_124._2_1_;
          if (bVar17) {
            bVar11 = local_124._4_1_;
          }
          local_214 = 0;
          uVar21 = 1;
          if (bVar17) {
            uVar21 = 0xf;
          }
          pbVar9 = (byte *)((int)&local_124 + 2);
          if (bVar17) {
            pbVar9 = (byte *)((int)&local_124 + 4);
          }
          *pbVar9 = bVar11 | (byte)uVar21;
          local_224 = 0x110201;
          if (bVar17) {
            local_224 = 0x410201;
          }
          local_22c = &local_1d8;
          local_228 = 0x36;
          local_230 = (int *)&local_18c;
          local_220 = uVar22;
          local_21c = uVar23;
          local_218 = uVar20;
          FUN_10084ec8(&local_230,0x20);
        }
      }
    }
  }
  if (uVar23 != local_1dc) {
    FUN_10083ff0(&local_18c,uVar23);
  }
  local_228 = 0x3e;
  local_224 = 0;
  local_22c = &local_1d8;
  local_230 = (int *)&local_18c;
  FUN_10084ec8(&local_230,0x10);
  if ((uint)local_18c == 0x30051 || ((uint)local_18c - 0x51 & 0xfffcffff) != 0) {
    if ((((uint)local_18c - 0x10040 & 0xfffeffef) != 0 || (uint)local_18c == 0x20040) &&
       ((0x10 < (uint)local_18c - 0x40 ||
        ((0x10003U >> (ulonglong)((uint)local_18c - 0x40 & 0x1f) & 1) == 0)))) goto LAB_1002f8a4;
    uVar20 = FUN_100850c0((uint)local_18c);
    local_228 = extraout_w11_01;
    if (0x4f < uVar20) {
      local_228 = 0;
    }
    local_228 = local_228 | 0x100086a;
    local_22c = (int *)0x1;
    local_230 = &local_1b8;
    FUN_10085008(&local_230,0xc);
  }
  else {
    local_228 = 0x108086a;
    local_22c = (int *)0x1;
    local_230 = &local_1b8;
    FUN_10085008(&local_230,0xc);
  }
LAB_1002f8a4:
  if ((local_184 & 1) != 0) {
    if ((((uint)local_18c - 0x51 & 0xfffcffff) == 0) && ((uint)local_18c != 0x30051)) {
      local_21c = 0;
      local_218 = 0;
      local_228 = (local_18c._4_4_ & 1) << 0xb | 0x7000059;
      local_214 = 0xc;
      local_210 = 0;
      local_224 = 0x308e46;
      local_220 = 0;
      local_22c = (int *)0x7;
      local_230 = &local_1b8;
      FUN_10085008(&local_230,0x24);
    }
    else if (((((uint)local_18c - 0x10040 & 0xfffeffef) == 0) && ((uint)local_18c != 0x20040)) ||
            (((uint)local_18c - 0x40 < 0x11 &&
             ((0x10003U >> (ulonglong)((uint)local_18c - 0x40 & 0x1f) & 1) != 0)))) {
      local_228 = (local_18c._4_4_ & 1) << 0xb | 0x4000059;
      local_21c = 0xc;
      local_224 = 0x208e46;
      local_220 = 0;
      local_22c = (int *)&DAT_00000004;
      local_230 = &local_1b8;
      FUN_10085008(&local_230,0x18);
    }
  }
  uVar20 = 0;
LAB_1002f98c:
  do {
    uVar22 = (uint)*(byte *)((int)&uStack_12c + uVar20 + 7);
    if (uVar22 != 0) {
      local_224 = uVar22 << 4 | 0x101002;
      if (uVar20 == 0) {
        local_228 = 0x4001064;
        local_230 = &local_1b8;
        local_22c = (int *)&DAT_00000004;
        local_220 = 0;
        local_21c = 1;
        FUN_10085008(&local_230,0x18);
        uVar20 = 1;
        goto LAB_1002f98c;
      }
      local_228 = 0x3001062;
      local_230 = &local_1b8;
      local_22c = (int *)0x3;
      local_220 = uVar20;
      FUN_10085008(&local_230,0x14);
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < 2);
  uVar20 = 0;
  do {
    uVar22 = (uint)*(byte *)((int)&local_124 + uVar20 + 1);
    if (uVar22 != 0) {
      local_224 = uVar22 << 4 | 0x102002;
      local_22c = (int *)0x3;
      local_228 = 0x3000065;
      local_220 = (uint)(byte)(&DAT_100b3536)[uVar20 * 8];
      local_230 = &local_1b8;
      FUN_10085008(&local_230,0x14);
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 < 6);
  uVar26 = local_17c & 0xffffffff;
  uVar28 = local_17c >> 0x20;
  uVar20 = 0;
  uVar29 = local_18c & 0xffffffff;
  do {
    if ((((uint)uVar26 | (uint)uVar28) & 1 << (ulonglong)(uVar20 & 0x1f)) != 0) {
      iVar19 = FUN_100850c0(uVar29 & 0xffffffff);
      if (iVar19 == 0x51 || (iVar19 - 0x40U & 0xffffffee) != 0) {
        uVar26 = extraout_x1_00;
        if (iVar19 != 0x51) goto LAB_1002faf0;
        local_214 = 0;
        local_22c = (int *)0x6;
        local_228 = 0x600005a;
        local_230 = &local_1b8;
        local_224 = 0x306000;
        local_220 = uVar20;
        local_21c = uVar20;
        local_218 = uVar20;
        FUN_10085008(&local_230,0x20);
      }
      else {
        local_230 = &local_1b8;
        local_22c = (int *)0x3;
        local_228 = 0x300005a;
        local_224 = 0x106000;
        local_220 = uVar20;
        FUN_10085008(&local_230,0x14);
      }
      uVar29 = local_18c & 0xffffffff;
      uVar26 = local_17c & 0xffffffff;
      uVar28 = local_17c >> 0x20;
    }
LAB_1002faf0:
    uVar20 = uVar20 + 1;
    if (1 < uVar20) {
      if ((1 << (ulonglong)(local_13c._5_1_ & 0x1f) & local_184._4_4_) != 0) {
        FUN_10084130(&local_18c,&local_1b8,local_13c._5_1_,local_13c._5_1_,local_13c._5_1_);
      }
      uVar20 = local_184._4_4_;
      if ((1 << (ulonglong)(local_13c._6_1_ & 0x1f) & local_184._4_4_) != 0) {
        FUN_10084130(&local_18c,&local_1b8,local_13c._6_1_,local_13c._6_1_,local_13c._6_1_);
        uVar20 = local_184._4_4_;
      }
      if ((1 << (ulonglong)((byte)local_13c & 0x1f) & uVar20) != 0) {
        FUN_10084200(&local_18c,&local_1b8,(byte)local_13c,(byte)local_13c,(uint)(byte)local_13c);
        uVar20 = local_184._4_4_;
      }
      if ((1 << (ulonglong)(local_13c._1_1_ & 0x1f) & uVar20) != 0) {
        FUN_10084200(&local_18c,&local_1b8,local_13c._1_1_,local_13c._1_1_,(uint)local_13c._1_1_);
        uVar20 = local_184._4_4_;
      }
      if ((1 << (ulonglong)(local_13c._2_1_ & 0x1f) & uVar20) != 0) {
        FUN_10084200(&local_18c,&local_1b8,local_13c._2_1_,local_13c._2_1_,(uint)local_13c._2_1_);
        uVar20 = local_184._4_4_;
      }
      if ((1 << (ulonglong)(local_13c._3_1_ & 0x1f) & uVar20) != 0) {
        FUN_10084200(&local_18c,&local_1b8,local_13c._3_1_,local_13c._3_1_,(uint)local_13c._3_1_);
      }
      if (local_15c._5_1_ != 0) {
        local_228 = 0x2000068;
        local_22c = (int *)0x2;
        local_230 = &local_1b8;
        local_224 = (uint)local_15c._5_1_;
        FUN_10085008(&local_230,0x10);
      }
      FUN_10084f80(&local_1b8,local_1d8,iStack_1d4 - local_1d8);
      iVar19 = local_1b8;
      *(int *)(local_1b8 + 4) = (local_1b4 - local_1b8) + -8;
      *(uint *)(local_1b8 + 0xc) = ((local_1b4 - local_1b8) - local_f8 >> 2) + 2;
      FUN_10084f80(&iStack_90,local_1b8,local_1b4 - local_1b8);
      FUN_100914d0(local_1d8);
      FUN_100914d0(iVar19);
      local_e8 = 0x4e475349;
      local_e0 = 0x800000000;
      local_1b0 = 0x210;
      local_1ac = 1;
      local_1b8 = FUN_100914b0(0x210);
      local_1b4 = local_1b8;
      FUN_10084f80(&local_1b8,&local_e8,0x10);
      uVar20 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      lStack_48 = 0;
      uStack_50 = 0;
      do {
        uVar18 = 0xf;
        if (uVar20 == 0) {
          pcVar34 = s_SV_POSITION_100b3508;
          uVar24 = 1;
        }
        else {
          uVar24 = 0;
          if (uVar20 == 1) {
            pcVar34 = s_TEXCOORD_100b3408;
            uVar18 = 3;
          }
          else {
            pcVar34 = (char *)0x0;
          }
        }
        uVar22 = 0;
        iVar19 = (int)local_80;
        while ((iVar19 != 0 &&
               (iVar19 = FUN_10091880(pcVar34,*(undefined4 *)((int)&local_80 + uVar22 * 4)),
               iVar19 != 0))) {
          uVar22 = uVar22 + 1;
          iVar19 = *(int *)((int)&local_80 + uVar22 * 4);
        }
        puVar3 = (undefined4 *)((int)&local_80 + uVar22 * 4);
        local_e0 = CONCAT44(3,uVar24);
        pcVar10 = (char *)*puVar3;
        local_e8 = (ulonglong)uVar22;
        if (pcVar10 == (char *)0x0) {
          pcVar10 = pcVar34;
        }
        *puVar3 = pcVar10;
        uStack_d8 = (ulonglong)
                    CONCAT15(*(undefined1 *)((int)&uStack_12c + uVar20 + 7),CONCAT14(uVar18,uVar20))
        ;
        FUN_10084f80(&local_1b8,&local_e8,0x18);
        uVar20 = uVar20 + 1;
      } while (uVar20 < 2);
      iVar33 = 0;
      iVar19 = 0;
      iVar1 = (int)local_80;
      while (iVar1 != 0) {
        uVar24 = *(undefined4 *)((int)&local_80 + iVar19 * 4);
        iVar25 = FUN_100918e0(uVar24);
        FUN_10084f80(&local_1b8,uVar24,iVar25 + 1);
        iVar1 = iVar19 * 4;
        iVar19 = iVar19 + 1;
        *(int *)((int)&local_e8 + iVar1) = iVar33 + 0x38;
        iVar33 = iVar33 + iVar25 + 1;
        iVar1 = *(int *)((int)&local_80 + iVar19 * 4);
      }
      local_f8 = 0xabababab;
      FUN_10084f80(&local_1b8,&local_f8,-iVar33 & 3U);
      piVar15 = local_f4;
      iVar1 = local_1b8;
      *(uint *)(local_1b8 + 4) = iVar33 + (-iVar33 & 3U) + 0x38;
      *(undefined4 *)(local_1b8 + 8) = 2;
      piVar2 = (int *)(local_1b8 + 0x10);
      iVar19 = 2;
      do {
        iVar19 = iVar19 + -1;
        *piVar2 = *(int *)((int)&local_e8 + *piVar2 * 4);
        piVar2 = piVar2 + 6;
      } while (iVar19 != 0);
      FUN_10084f80(local_f4,local_1b8,local_1b4 - local_1b8);
      FUN_100914d0(iVar1);
      iVar19 = 0;
      *(int *)(*piVar15 + 0x24) = *local_f0 - *piVar15;
      local_e8 = 0x4e47534f;
      local_e0 = 0x800000000;
      pcVar34 = (char *)((int)&local_124 + 1);
      iVar33 = 6;
      do {
        cVar30 = *pcVar34;
        iVar33 = iVar33 + -1;
        pcVar34 = pcVar34 + 1;
        if (cVar30 != '\0') {
          iVar19 = iVar19 + 1;
        }
      } while (iVar33 != 0);
      local_1b0 = 0x210;
      local_1ac = 1;
      local_1b8 = FUN_100914b0(0x210);
      local_1b4 = local_1b8;
      FUN_10084f80(&local_1b8,&local_e8,0x10);
      uVar20 = 0;
      do {
        if (*(char *)((int)&local_124 + uVar20 + 1) != '\0') {
          iVar33 = uVar20 * 8;
          local_e8 = (ulonglong)CONCAT14((&DAT_100b3535)[iVar33],iVar19 * 0x18 + 8);
          local_e0 = (ulonglong)(uint)(&DAT_100b3530)[uVar20 * 2] << 0x20;
          uStack_d8._0_5_ = CONCAT14((&DAT_100b3534)[iVar33],(uint)(byte)(&DAT_100b3536)[iVar33]);
          uStack_d8 = (ulonglong)CONCAT15(~(&DAT_100b3534)[iVar33],(undefined5)uStack_d8) &
                      0xffff0fffffffffff;
          FUN_10084f80(&local_1b8,&local_e8,0x18);
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < 6);
      FUN_10084f80(&local_1b8,s_SV_TARGET_100bb6f8,10);
      FUN_10084f80(&local_1b8,0x100b3564,-(local_1b4 - local_1b8) & 3);
      piVar2 = local_f4;
      iVar33 = local_1b8;
      *(int *)(local_1b8 + 8) = iVar19;
      *(int *)(local_1b8 + 4) = (local_1b4 - local_1b8) + -8;
      FUN_10084f80(local_f4,local_1b8,local_1b4 - local_1b8);
      FUN_100914d0(iVar33);
      iVar1 = iStack_90;
      piVar15 = local_f0;
      *(int *)(*piVar2 + 0x28) = *local_f0 - *piVar2;
      FUN_10084f80(piVar2,iStack_90,iStack_8c - iStack_90);
      local_e8 = 0;
      uStack_d8 = 0x1032547698badcfe;
      local_e0 = 0xefcdab8967452301;
      *(int *)(*piVar2 + 0x18) = *piVar15 - *piVar2;
      iVar33 = *piVar2;
      uVar23 = (*piVar15 - iVar33) - 0x14;
      uVar20 = uVar23 & 0xffffffc0;
      uVar22 = uVar23 * 8;
      local_f8 = uVar22;
      FUN_1008c9b8(&local_e8,iVar33 + 0x14,uVar20);
      uVar23 = uVar23 - uVar20;
      iVar19 = uVar20 + iVar33 + 0x14;
      if (uVar23 < 0x38) {
        FUN_1008c9b8(&local_e8,&local_f8,4);
        if (uVar23 != 0) {
          FUN_1008c9b8(&local_e8,iVar19,uVar23);
        }
        FUN_100917a0((int)&local_e0 + uVar23 + 0x14,&DAT_100bd2d0,-uVar23 + 0x3c);
        local_94 = (uVar22 | 4) >> 2;
        uStack_70 = CONCAT44(uStack_bc,local_c0);
        uStack_78 = local_c8;
        local_80 = uStack_d0;
        uStack_68 = uStack_b8;
        lStack_48 = CONCAT44(local_94,uStack_98);
        uStack_58 = uStack_a8;
        local_60 = uStack_b0;
        uStack_50 = uStack_a0;
      }
      else {
        FUN_1008c9b8(&local_e8,iVar19,uVar23);
        FUN_1008c9b8(&local_e8,&DAT_100bd2d0,-uVar23 + 0x40);
        uStack_78 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        local_60 = 0;
        uStack_50 = 0;
        local_80 = (ulonglong)uVar22;
        lStack_48 = (ulonglong)((uVar22 | 4) >> 2) << 0x20;
      }
      FUN_1008bf38(&local_e0,&local_80);
      *(ulonglong *)(iVar33 + 0xc) = uStack_d8;
      *(ulonglong *)(iVar33 + 4) = local_e0;
      FUN_100914d0(iVar1);
      return 1;
    }
  } while( true );
}

