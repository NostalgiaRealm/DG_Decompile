/*
 * FUN_1004ba28 at 1004ba28
 * undefined __fastcall FUN_1004ba28(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4, int param_5, int param_6, uint param_7, byte param_8, uint param_9, short param_10, uint param_11, uint param_12, uint param_13)
 * Address ranges: 1004ba28-1004e189
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_1004ba28(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int param_6
            ,uint param_7,byte param_8,uint param_9,short param_10,uint param_11,uint param_12,
            uint param_13)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  float local_140 [11];
  undefined4 local_114;
  float local_110;
  byte local_10c;
  uint local_f0;
  byte local_ec;
  float local_d0;
  undefined1 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_a1;
  float local_a0;
  byte local_9c;
  float local_80;
  byte local_7c;
  float local_60;
  undefined1 local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_1c;
  float local_18;
  byte local_11;
  
  local_38 = (float)(param_11 >> 9 & 0xffffff01);
  local_1c = (float)(param_13 >> 9 & 0xffffff01);
  local_30 = (float)(param_12 >> 9 & 0xffffff01);
  local_11 = SUB41(local_1c,0) * '\x02' | SUB41(local_30,0);
  local_34 = param_1;
  uVar2 = FUN_100a1889(CONCAT31((int3)((uint)local_30 >> 8),0xe4),
                       CONCAT31((int3)((uint)param_2 >> 8),param_8));
  local_3c = CONCAT31(local_3c._1_3_,(char)uVar2);
  local_a1 = (&DAT_100b260c)[param_6];
  FUN_1004b6c1(&local_f0,param_3,param_4,(ushort)param_9);
  if ((local_a1 & 1) == 0) {
    local_50 = 0xffffffff;
    local_60 = 0.0;
    pfVar3 = &local_60;
    local_5c = 0;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
  }
  else {
    pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,param_12,0);
  }
  pfVar6 = &local_a0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  if ((local_a1 & 2) == 0) {
    local_60 = 0.0;
    local_5c = 0;
    pfVar3 = &local_60;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
  }
  else {
    pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,param_13,0);
  }
  pfVar6 = &local_80;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  if ((local_a1 & 4) == 0) {
    local_60 = 0.0;
    local_5c = 0;
    pfVar3 = &local_60;
    local_50 = 0xffffffff;
    local_4c = 0xffffffff;
    local_48 = 0xffffffff;
    local_44 = 0xffffffff;
  }
  else {
    pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,param_11,0);
  }
  pfVar6 = &local_d0;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  switch(param_6) {
  case 2:
    if (local_30._0_1_ != '\0') {
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
      goto LAB_1004bfd9;
    }
  default:
    uVar9 = 0x2036;
LAB_1004e177:
    FUN_100a138c(param_3,param_4,uVar9);
    return;
  case 3:
    goto LAB_1004d5e3;
  case 4:
  case 5:
  case 6:
    uVar9 = 0;
    if (param_6 == 4) {
      uVar9 = 0x2000;
    }
    if (local_11 == 0) {
      FUN_100a138c(param_3,param_4,uVar9 | 0x38);
    }
    else if ((local_11 == 1) || (local_11 == 2)) {
      FUN_100a138c(param_3,param_4,uVar9 | 0x32);
    }
    else if (local_11 == 3) {
      local_1c = (float)FUN_100a05ed((int)param_3,4,'\0');
      local_30 = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0x32);
      local_3c = local_3c & 0xff;
      FUN_100a138c(param_3,param_4,0);
      if ((param_6 == 5) || (param_6 == 6)) {
        local_38 = 2.0;
        if (param_6 != 5) {
          local_38 = 4.0;
        }
        FUN_1004b99e(&local_60,(int)param_3,local_38,param_8);
        FUN_100a138c(param_3,param_4,0x2032);
      }
      else {
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        FUN_100a138c(param_3,param_4,0x2000);
      }
      param_6 = -1;
    }
    local_ec = FUN_1004b582((int)param_3,param_9);
    if (param_6 != 5) {
      if (param_6 != 6) {
        return;
      }
      local_18 = 4.0;
      FUN_1004b99e(&local_60,(int)param_3,0x40800000,param_8);
      uVar9 = 0x2038;
      goto LAB_1004bfef;
    }
    goto LAB_1004bfd9;
  case 7:
  case 8:
  case 9:
    fVar8 = 0.0;
    if (local_30._0_1_ == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    if (local_1c._0_1_ != '\0') {
      fVar8 = 1.0;
    }
    local_1c = fVar8 + fVar7;
    if (param_6 == 8) {
      local_1c = local_1c - 0.5;
LAB_1004c068:
      if ((ABS(local_1c) <= 0.01) && (param_6 != 9)) goto LAB_1004c086;
LAB_1004c081:
      local_38 = 0.0;
    }
    else {
      if (param_6 == 9) {
        local_1c = (local_1c + local_1c) - 1.0;
        goto LAB_1004c081;
      }
      if (param_6 == 7) goto LAB_1004c068;
LAB_1004c086:
      local_38 = 1.14794e-41;
    }
    local_30 = local_1c;
    local_ec = FUN_1004b582((int)param_3,param_9);
    local_3c = (uint)param_8;
    FUN_100a138c(param_3,param_4,(uint)local_38);
    if ((param_6 != 7) && (param_6 != 8)) {
      if (param_6 != 9) {
        return;
      }
      FUN_1004b99e(&local_60,(int)param_3,local_1c,param_8);
      local_18 = 2.0;
      FUN_1004b99e(&local_110,(int)param_3,0x40000000,param_8);
      goto LAB_1004e137;
    }
    if (ABS(local_30) <= 0.01) {
      return;
    }
    FUN_1004b99e(&local_60,(int)param_3,local_1c,param_8);
    break;
  case 10:
    fVar8 = 0.0;
    if (local_30._0_1_ == '\0') {
      fVar7 = 0.0;
    }
    else {
      fVar7 = 1.0;
    }
    if (local_1c._0_1_ != '\0') {
      fVar8 = -1.0;
    }
    local_1c = fVar8 + fVar7;
    local_18 = (float)(uint)param_8;
    uVar9 = 0x2000;
    if (0.01 < ABS(local_1c)) {
      uVar9 = 0;
    }
    FUN_100a138c(param_3,param_4,uVar9);
    if (ABS(local_1c) <= 0.01) {
      return;
    }
    FUN_1004b99e(&local_60,(int)param_3,local_1c,param_8);
    uVar9 = 0x2000;
    goto LAB_1004bfef;
  case 0xb:
    if (local_11 != 0) {
      if ((local_11 != 1) && (local_11 != 2)) {
        if (local_11 != 3) {
          return;
        }
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        goto LAB_1004e137;
      }
      local_18 = -1.0;
      FUN_1004b99e(&local_60,(int)param_3,0xbf800000,param_8);
      FUN_100a05ed((int)param_3,4,'\0');
      FUN_100a138c(param_3,param_4,0x32);
LAB_1004c4ba:
      uVar9 = 0x2000;
      goto LAB_1004c592;
    }
    uVar9 = FUN_100a05ed((int)param_3,4,'\0');
    FUN_1004925a(&local_60,uVar9,(char)local_3c,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    local_1c = (float)(uint)local_9c;
    local_18 = local_80;
    local_30 = (float)(uint)param_8;
    FUN_100a138c(param_3,param_4,0);
    goto LAB_1004c587;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
    local_38 = (float)FUN_100a05ed((int)param_3,4,'\x01');
    FUN_1004b802((uint *)&local_d0,param_3,param_4,param_5,param_7,param_11,0);
    if (local_11 == 0) {
      local_18 = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0);
      FUN_100a138c(param_3,param_4,0x2032);
      fVar8 = local_38;
    }
    else {
      if (local_11 == 1) {
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        local_18 = (float)(uint)local_7c;
        local_1c = (float)(uint)param_8;
        FUN_100a138c(param_3,param_4,0);
        FUN_100a138c(param_3,param_4,0);
      }
      else {
        if (local_11 != 2) {
          fVar8 = local_38;
          if (local_11 == 3) {
            local_18 = 1.0;
            FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
            local_18 = (float)(uint)param_8;
            FUN_100a138c(param_3,param_4,0);
            local_1c = (float)(local_3c & 0xff);
            FUN_100a138c(param_3,param_4,0x32);
            FUN_100a138c(param_3,param_4,0x2000);
            fVar8 = local_38;
          }
          goto LAB_1004dffc;
        }
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        FUN_100a05ed((int)param_3,4,'\0');
        local_1c = (float)(uint)param_8;
        FUN_100a138c(param_3,param_4,0);
        FUN_100a138c(param_3,param_4,0);
      }
      FUN_100a138c(param_3,param_4,0x2032);
      fVar8 = local_38;
    }
    goto LAB_1004dffc;
  case 0xf:
    if ((local_11 == 0) || (local_11 == 1)) {
      local_1c = (float)FUN_100a05ed((int)param_3,4,'\0');
      FUN_1004b802((uint *)&local_60,param_3,param_4,param_5,param_7,param_11,0);
      local_30 = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0x32);
      if (local_11 == 1) {
        local_18 = 1.0;
        FUN_1004b99e(&local_110,(int)param_3,0x3f800000,param_8);
        FUN_100a138c(param_3,param_4,0);
      }
    }
    else {
      if ((local_11 != 2) && (local_11 != 3)) {
        return;
      }
      local_1c = (float)FUN_100a05ed((int)param_3,4,'\0');
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
      FUN_1004b802((uint *)&local_110,param_3,param_4,param_5,param_7,param_11,0);
      local_30 = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0);
      local_38 = (float)(local_3c & 0xff);
      FUN_100a138c(param_3,param_4,0x32);
      if (local_11 == 3) {
        FUN_100a138c(param_3,param_4,0);
      }
    }
    break;
  case 0x12:
  case 0x14:
    local_18 = 1.0;
    FUN_1004b99e(&local_110,(int)param_3,0x3f800000,param_8);
    FUN_1004b802((uint *)&local_60,param_3,param_4,param_5,param_7,param_11,param_6 == 0x14);
    if (param_6 == 0x14) {
      local_d0 = (float)FUN_100a05ed((int)param_3,4,'\x01');
      local_cc = (undefined1)local_3c;
      local_c0 = 0xffffffff;
      local_bc = 0xffffffff;
      local_b8 = 0xffffffff;
      local_b4 = 0xffffffff;
      iVar4 = 8;
      pfVar3 = &local_d0;
      pfVar6 = local_140;
      for (iVar5 = iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      pfVar3 = local_140;
      pfVar6 = &local_d0;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      FUN_100a138c(param_3,param_4,0);
    }
    else {
      pfVar3 = &local_60;
      pfVar6 = &local_d0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    if (local_11 == 0) {
      FUN_100a138c(param_3,param_4,0x2032);
    }
    else if (local_11 == 1) {
      FUN_100a138c(param_3,param_4,0x32);
      FUN_100a138c(param_3,param_4,0x2000);
    }
    else if ((local_11 == 2) || (local_11 == 3)) {
      local_30 = (float)FUN_100a05ed((int)param_3,4,'\0');
      local_1c = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0x32);
      if (local_11 == 3) {
        FUN_100a138c(param_3,param_4,0);
      }
      FUN_100a138c(param_3,param_4,0x2000);
    }
    fVar8 = local_d0;
    if (param_6 != 0x14) {
      return;
    }
    goto LAB_1004dffc;
  case 0x13:
    goto LAB_1004d09f;
  case 0x15:
    local_a0 = -local_a0;
    local_11 = local_11 ^ 1;
LAB_1004d09f:
    local_30 = local_a0;
    FUN_1004b802((uint *)&local_d0,param_3,param_4,param_5,param_7,param_11,0);
    if (local_11 == 0) {
LAB_1004e137:
      FUN_100a138c(param_3,param_4,0x2032);
      return;
    }
    if (local_11 == 1) {
      FUN_100a05ed((int)param_3,4,'\0');
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
      FUN_100a138c(param_3,param_4,0);
    }
    else {
      if (local_11 != 2) {
        if (local_11 != 3) {
          return;
        }
        local_1c = (float)FUN_100a05ed((int)param_3,4,'\x01');
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        FUN_100a05ed((int)param_3,4,'\0');
        FUN_100a138c(param_3,param_4,0);
        FUN_100a138c(param_3,param_4,0);
LAB_1004dfde:
        fVar8 = local_1c;
        FUN_100a138c(param_3,param_4,0x2032);
LAB_1004dffc:
        FUN_100a068b((int)param_3,(uint)fVar8);
        return;
      }
      FUN_100a05ed((int)param_3,4,'\0');
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
      FUN_100a138c(param_3,param_4,0);
    }
LAB_1004c587:
    uVar9 = 0x2032;
LAB_1004c592:
    FUN_100a138c(param_3,param_4,uVar9);
    return;
  case 0x16:
  case 0x17:
    if ((param_8 == 7) && (param_10 != 0)) {
      FUN_1004b751((uint *)&local_d0,(int)param_3);
      if (SUB41(local_30,0) == '\0') {
        pfVar3 = &local_a0;
        cVar1 = '\0';
      }
      else {
        uVar9 = FUN_100a05ed((int)param_3,4,'\0');
        FUN_1004925a(local_140,uVar9,(char)local_3c,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        cVar1 = SUB41(local_30,0);
        pfVar3 = local_140;
      }
      pfVar6 = &local_110;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      if (cVar1 != '\0') {
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,'\a');
        FUN_100a138c(param_3,param_4,0);
      }
      local_38 = (float)(param_5 * 0x30);
      local_30 = (float)(uint)local_10c;
      FUN_100a138c(param_3,param_4,0xf);
      FUN_100a138c(param_3,param_4,0xf);
      if (param_6 == 0x17) {
        FUN_100a138c(param_3,param_4,0x2032);
      }
    }
LAB_1004d5e3:
    if (local_1c._0_1_ != '\0') {
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
LAB_1004bfd9:
      uVar9 = 0x2000;
      goto LAB_1004bfef;
    }
    if ((ushort)param_13 == (ushort)param_9) {
      return;
    }
    uVar9 = 0x36;
    goto LAB_1004e177;
  case 0x18:
    local_18 = 2.0;
    FUN_1004b99e(&local_60,(int)param_3,0x40000000,'\a');
    fVar8 = 0.5;
    if (local_30._0_1_ == '\0') {
      local_18 = -0.5;
    }
    else {
      local_18 = 0.5;
    }
    local_18 = local_18 + local_18;
    if (local_1c._0_1_ == '\0') {
      fVar8 = -0.5;
    }
    local_1c = fVar8 + fVar8;
    FUN_1004b99e(&local_d0,(int)param_3,local_18,'\a');
    FUN_1004b99e(&local_110,(int)param_3,local_1c,'\a');
    local_18 = (float)FUN_100a05ed((int)param_3,4,'\0');
    pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,
                                   param_12 & 0xfeff,0);
    pfVar6 = &local_a0;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
    }
    pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,
                                   param_13 & 0xfeff,0);
    pfVar6 = &local_80;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar6 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar6 = pfVar6 + 1;
    }
    FUN_100a138c(param_3,param_4,0x32);
    FUN_100a138c(param_3,param_4,0x32);
    uVar9 = 0x2010;
    goto LAB_1004bfef;
  case 0x19:
    if (local_11 == 0) {
      FUN_1004b802((uint *)&local_60,param_3,param_4,param_5,param_7,param_11,0);
      if (local_38._0_1_ == '\0') goto LAB_1004e137;
      local_18 = 1.0;
      FUN_1004b99e(&local_110,(int)param_3,0x3f800000,param_8);
      FUN_100a138c(param_3,param_4,0x32);
      goto LAB_1004c4ba;
    }
    if ((local_11 != 1) && (local_11 != 2)) {
      if (local_11 != 3) {
        return;
      }
      local_1c = (float)FUN_100a05ed((int)param_3,4,'\x01');
      FUN_100a05ed((int)param_3,4,'\0');
      local_18 = 1.0;
      FUN_1004b99e(&local_110,(int)param_3,0x3f800000,param_8);
      local_30 = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0);
      FUN_100a138c(param_3,param_4,0);
      local_18 = (float)(local_3c & 0xff);
      FUN_100a138c(param_3,param_4,(uint)(byte)(SUB41(local_38,0) ^ 1) << 0xd | 0x32);
      fVar8 = local_1c;
      if (local_38._0_1_ != '\0') {
        FUN_100a138c(param_3,param_4,0x2000);
        fVar8 = local_1c;
      }
      goto LAB_1004dffc;
    }
    local_30 = (float)FUN_100a05ed((int)param_3,4,'\0');
    local_1c = (float)(uint)param_8;
    FUN_100a138c(param_3,param_4,0x32);
    if (local_38._0_1_ != '\0') {
      local_18 = 1.0;
      FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
      FUN_100a138c(param_3,param_4,0);
    }
    break;
  case 0x1a:
    if (local_38._0_1_ != '\0') {
      pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,param_13,0);
      pfVar6 = &local_a0;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
      pfVar3 = (float *)FUN_1004b802((uint *)local_140,param_3,param_4,param_5,param_7,param_12,0);
      local_11 = local_30._0_1_ * '\x02' | local_1c._0_1_;
      pfVar6 = &local_80;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar6 = pfVar6 + 1;
      }
    }
    if (local_11 == 0) {
LAB_1004e006:
      local_18 = (float)FUN_100a05ed((int)param_3,4,'\0');
      local_30 = (float)(uint)local_7c;
      local_1c = (float)(uint)param_8;
      FUN_100a138c(param_3,param_4,0);
      if (local_11 == 2) {
        local_114 = 0x3f800000;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        FUN_100a138c(param_3,param_4,0);
      }
      goto LAB_1004e137;
    }
    if (local_11 != 1) {
      if (local_11 != 2) {
        if (local_11 != 3) {
          return;
        }
        local_1c = (float)FUN_100a05ed((int)param_3,4,'\0');
        local_18 = 1.0;
        FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
        local_18 = (float)(uint)param_8;
        FUN_100a138c(param_3,param_4,0);
        local_30 = (float)(local_3c & 0xff);
        FUN_100a138c(param_3,param_4,0x32);
        uVar9 = 0x2000;
        goto LAB_1004bfef;
      }
      goto LAB_1004e006;
    }
    local_1c = (float)FUN_100a05ed((int)param_3,4,'\x01');
    FUN_100a05ed((int)param_3,4,'\0');
    local_18 = 1.0;
    FUN_1004b99e(&local_60,(int)param_3,0x3f800000,param_8);
    local_30 = (float)(uint)param_8;
    FUN_100a138c(param_3,param_4,0);
    FUN_100a138c(param_3,param_4,0);
    goto LAB_1004dfde;
  }
  uVar9 = 0x2000;
LAB_1004bfef:
  FUN_100a138c(param_3,param_4,uVar9);
  return;
}

