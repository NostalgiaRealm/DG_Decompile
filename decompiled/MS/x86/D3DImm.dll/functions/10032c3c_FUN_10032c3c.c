/*
 * FUN_10032c3c at 10032c3c
 * undefined __fastcall FUN_10032c3c(undefined4 param_1, undefined4 param_2, int * param_3, int * param_4, int param_5, int param_6, uint param_7, byte param_8, uint param_9, short param_10, uint param_11, uint param_12, uint param_13)
 * Address ranges: 10032c3c-10034f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10032c3c(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4,int param_5,int param_6
            ,uint param_7,byte param_8,uint param_9,short param_10,uint param_11,uint param_12,
            uint param_13)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  float *pfVar4;
  undefined4 extraout_ECX;
  int iVar5;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int iVar6;
  undefined4 extraout_ECX_04;
  char extraout_DL;
  char extraout_DL_00;
  char extraout_DL_01;
  char extraout_DL_02;
  uint extraout_EDX;
  uint extraout_EDX_00;
  int *extraout_EDX_01;
  float *pfVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined1 uVar11;
  uint local_170 [8];
  float local_150;
  byte local_14c;
  uint local_130 [8];
  float local_110 [8];
  float local_f0;
  byte local_ec;
  float local_d0;
  byte local_cc;
  uint local_a4;
  float local_a0;
  byte local_9c;
  float local_74;
  float local_70;
  byte local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  byte local_31;
  float local_30;
  byte local_15;
  float local_14;
  
  local_14 = (float)(param_13 >> 9 & 0xffffff01);
  local_30 = (float)(param_12 >> 9 & 0xffffff01);
  local_15 = SUB41(local_14,0) * '\x02' | SUB41(local_30,0);
  uVar3 = FUN_100580c1(CONCAT31((int3)((uint)local_30 >> 8),0xe4),
                       CONCAT31((int3)((uint)param_2 >> 8),param_8));
  local_50 = (float)CONCAT31(local_50._1_3_,(char)uVar3);
  local_31 = (&DAT_1005ef44)[param_6];
  FUN_1003292f(local_130,param_3,param_4,(ushort)param_9);
  if ((local_31 & 1) == 0) {
    local_60 = 0xffffffff;
    local_70 = 0.0;
    pfVar4 = &local_70;
    local_6c = 0;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
  }
  else {
    pfVar4 = (float *)FUN_10032a15((uint *)&local_70,param_3,param_4,extraout_ECX,param_7,param_12,0
                                  );
  }
  bVar1 = local_31 & 2;
  pfVar7 = &local_d0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  if (bVar1 == 0) {
    local_70 = 0.0;
    local_6c = 0;
    pfVar4 = &local_70;
    local_60 = 0xffffffff;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
  }
  else {
    pfVar4 = (float *)FUN_10032a15((uint *)&local_70,param_3,param_4,0,param_7,param_13,0);
  }
  pfVar7 = &local_a0;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  uVar11 = SUB41(local_50,0);
  switch(param_6) {
  case 2:
    if (local_30._0_1_ != '\0') {
      local_14 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
      goto LAB_1003321f;
    }
  default:
    uVar10 = 0x2036;
    break;
  case 3:
    goto LAB_10034c21;
  case 4:
  case 5:
  case 6:
    uVar10 = 0;
    if (param_6 == 4) {
      uVar10 = 0x2000;
    }
    if (local_15 == 0) {
      FUN_10057c8a(param_3,param_4,uVar10 | 0x38);
    }
    else if ((local_15 == 1) || (local_15 == 2)) {
      FUN_10057c8a(param_3,param_4,uVar10 | 0x32);
    }
    else if (local_15 == 3) {
      FUN_10032c0a((uint *)&local_f0,(int)param_3,uVar11,'\0');
      local_30 = (float)(uint)param_8;
      FUN_10057c8a(param_3,param_4,0x32);
      local_a4 = (uint)local_ec;
      local_50 = local_f0;
      FUN_10057c8a(param_3,param_4,0);
      if ((param_6 == 5) || (param_6 == 6)) {
        local_14 = 2.0;
        if (param_6 != 5) {
          local_14 = 4.0;
        }
        FUN_10032b80(&local_70,(int)param_3,local_14,param_8);
        FUN_10057c8a(param_3,param_4,0x2032);
      }
      else {
        local_14 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
        FUN_10057c8a(param_3,param_4,0x2000);
      }
      param_6 = -1;
    }
    local_31 = FUN_1003283a((int)param_3,param_9);
    if (param_6 != 5) {
      if (param_6 != 6) {
        return;
      }
      local_14 = 4.0;
      FUN_10032b80(&local_70,(int)param_3,0x40800000,param_8);
      uVar10 = 0x2038;
      goto LAB_1003322f;
    }
    goto LAB_1003321f;
  case 7:
  case 8:
  case 9:
    fVar9 = 0.0;
    if (local_30._0_1_ == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.0;
    }
    if (local_14._0_1_ != '\0') {
      fVar9 = 1.0;
    }
    local_14 = fVar9 + fVar8;
    if (param_6 == 8) {
      local_14 = local_14 - 0.5;
LAB_100332a8:
      if ((ABS(local_14) <= 0.01) && (param_6 != 9)) goto LAB_100332c9;
LAB_100332c1:
      local_a4 = 0;
    }
    else {
      if (param_6 == 9) {
        local_14 = (local_14 + local_14) - 1.0;
        goto LAB_100332c1;
      }
      if (param_6 == 7) goto LAB_100332a8;
LAB_100332c9:
      local_a4 = 0x2000;
    }
    local_30 = local_14;
    local_31 = FUN_1003283a((int)param_3,param_9);
    local_50 = (float)(uint)param_8;
    FUN_10057c8a(param_3,param_4,local_a4);
    if ((param_6 != 7) && (param_6 != 8)) {
      if (param_6 != 9) {
        return;
      }
      FUN_10032b80(&local_70,(int)param_3,local_30,param_8);
      local_14 = 2.0;
      FUN_10032b80(local_110,(int)param_3,0x40000000,extraout_DL);
      goto LAB_1003496f;
    }
    if (ABS(local_14) <= 0.01) {
      return;
    }
    FUN_10032b80(&local_70,(int)param_3,local_30,param_8);
    goto LAB_1003346d;
  case 10:
    fVar9 = 0.0;
    if (local_30._0_1_ == '\0') {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 1.0;
    }
    if (local_14._0_1_ != '\0') {
      fVar9 = -1.0;
    }
    local_14 = fVar9 + fVar8;
    local_a4 = (uint)param_8;
    uVar10 = 0x2000;
    if (0.01 < ABS(local_14)) {
      uVar10 = 0;
    }
    FUN_10057c8a(param_3,param_4,uVar10);
    if (ABS(local_14) <= 0.01) {
      return;
    }
    FUN_10032b80(&local_70,(int)param_3,local_14,param_8);
    uVar10 = 0x2000;
    goto LAB_1003322f;
  case 0xb:
    if (local_15 != 0) {
      if ((local_15 == 1) || (local_15 == 2)) {
        local_14 = -1.0;
        FUN_10032b80(&local_70,(int)param_3,0xbf800000,param_8);
        FUN_10032c0a((uint *)local_110,(int)param_3,SUB41(local_50,0),extraout_DL_00);
        FUN_10057c8a(param_3,param_4,0x32);
        uVar10 = 0x2000;
        goto LAB_1003385c;
      }
      if (local_15 != 3) {
        return;
      }
      local_14 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
      goto LAB_1003496f;
    }
    FUN_10032c0a((uint *)&local_70,(int)param_3,uVar11,'\0');
    local_a4 = (uint)local_9c;
    local_14 = (float)(uint)local_cc;
    local_50 = (float)(uint)param_8;
    local_30 = local_a0;
    FUN_10057c8a(param_3,param_4,0);
    goto LAB_10033851;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
    FUN_10032c0a((uint *)&local_150,(int)param_3,uVar11,'\x01');
    FUN_10032a15((uint *)&local_f0,param_3,param_4,extraout_ECX_00,param_7,param_11,0);
    if (local_15 == 0) {
      local_14 = (float)(uint)param_8;
      FUN_10057c8a(param_3,param_4,0);
      FUN_10057c8a(param_3,param_4,0x2032);
      local_110[0] = local_150;
    }
    else {
      if (local_15 == 1) {
        local_14 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
        local_a4 = (uint)local_9c;
        local_14 = (float)(uint)param_8;
        FUN_10057c8a(param_3,param_4,extraout_EDX_00);
        FUN_10057c8a(param_3,param_4,0);
      }
      else {
        if (local_15 != 2) {
          local_110[0] = local_150;
          if (local_15 == 3) {
            local_14 = 1.0;
            FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
            local_14 = (float)(uint)param_8;
            FUN_10057c8a(param_3,param_4,extraout_EDX);
            local_a4 = (uint)local_14c;
            local_30 = local_150;
            FUN_10057c8a(param_3,param_4,0x32);
            FUN_10057c8a(param_3,param_4,0x2000);
            local_110[0] = local_150;
          }
          goto LAB_10033de7;
        }
        local_14 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
        FUN_10032c0a((uint *)local_110,(int)param_3,SUB41(local_50,0),extraout_DL_01);
        local_14 = (float)(uint)param_8;
        FUN_10057c8a(param_3,param_4,0);
        FUN_10057c8a(param_3,param_4,0);
      }
      FUN_10057c8a(param_3,param_4,0x2032);
      local_110[0] = local_150;
    }
    goto LAB_10033de7;
  case 0xf:
    if ((local_15 == 0) || (local_15 == 1)) {
      FUN_10032c0a((uint *)&local_f0,(int)param_3,uVar11,'\0');
      FUN_10032a15((uint *)&local_70,param_3,param_4,extraout_ECX_02,param_7,param_11,0);
      local_14 = (float)(uint)param_8;
      FUN_10057c8a(param_3,param_4,0x32);
      if (local_15 == 1) {
        local_74 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
        FUN_10057c8a(param_3,param_4,0);
      }
    }
    else {
      if ((local_15 != 2) && (local_15 != 3)) {
        return;
      }
      FUN_10032c0a((uint *)&local_f0,(int)param_3,uVar11,'\0');
      local_14 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
      FUN_10032a15((uint *)local_110,param_3,param_4,extraout_ECX_01,param_7,param_11,0);
      local_a4 = (uint)local_6c;
      local_14 = (float)(uint)param_8;
      local_74 = local_70;
      FUN_10057c8a(param_3,param_4,0);
      local_30 = (float)(uint)local_ec;
      local_50 = local_f0;
      FUN_10057c8a(param_3,param_4,0x32);
      if (local_15 == 3) {
        FUN_10057c8a(param_3,param_4,0);
      }
    }
LAB_1003346d:
    uVar10 = 0x2000;
    goto LAB_1003322f;
  case 0x12:
  case 0x14:
    local_74 = 1.0;
    FUN_10032b80(&local_150,(int)param_3,0x3f800000,param_8);
    FUN_10032a15((uint *)local_110,param_3,param_4,extraout_ECX_03,param_7,param_11,param_6 == 0x14)
    ;
    if (param_6 == 0x14) {
      pfVar4 = (float *)FUN_10032c0a(local_170,(int)param_3,SUB41(local_50,0),'\x01');
      pfVar7 = &local_f0;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      FUN_10057c8a(param_3,param_4,0);
    }
    else {
      iVar5 = 8;
      pfVar4 = local_110;
      pfVar7 = &local_70;
      for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      pfVar4 = &local_70;
      pfVar7 = &local_f0;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
    }
    if (local_15 == 0) {
      FUN_10057c8a(param_3,param_4,0x2032);
    }
    else if (local_15 == 1) {
      FUN_10057c8a(param_3,param_4,0x32);
      FUN_10057c8a(param_3,param_4,0x2000);
    }
    else if ((local_15 == 2) || (local_15 == 3)) {
      FUN_10032c0a((uint *)&local_70,(int)param_3,SUB41(local_50,0),'\0');
      local_14 = (float)(uint)param_8;
      FUN_10057c8a(param_3,param_4,0x32);
      if (local_15 == 3) {
        FUN_10057c8a(param_3,param_4,0);
      }
      FUN_10057c8a(param_3,param_4,0x2000);
    }
    local_110[0] = local_f0;
    if (param_6 != 0x14) {
      return;
    }
    goto LAB_10033de7;
  case 0x13:
    goto LAB_1003456b;
  case 0x15:
    local_d0 = -local_d0;
    local_15 = local_15 ^ 1;
LAB_1003456b:
    local_30 = local_d0;
    FUN_10032a15((uint *)&local_f0,param_3,param_4,0,param_7,param_11,0);
    if (local_15 == 0) {
LAB_1003496f:
      FUN_10057c8a(param_3,param_4,0x2032);
      return;
    }
    uVar11 = SUB41(local_50,0);
    if (local_15 == 1) {
      FUN_10032c0a((uint *)local_110,(int)param_3,uVar11,'\0');
      local_74 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
      FUN_10057c8a(param_3,param_4,0);
    }
    else {
      if (local_15 != 2) {
        if (local_15 != 3) {
          return;
        }
        FUN_10032c0a((uint *)local_110,(int)param_3,uVar11,'\x01');
        local_74 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
        FUN_10032c0a((uint *)&local_150,(int)param_3,SUB41(local_50,0),'\0');
        local_74 = (float)(uint)param_8;
        FUN_10057c8a(param_3,param_4,0);
        FUN_10057c8a(param_3,param_4,0);
        FUN_10057c8a(param_3,param_4,0x2032);
LAB_10033de7:
        FUN_10056fd9((int)param_3,(uint)local_110[0]);
        return;
      }
      FUN_10032c0a((uint *)local_110,(int)param_3,uVar11,'\0');
      local_74 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
      FUN_10057c8a(param_3,param_4,0);
    }
LAB_10033851:
    uVar10 = 0x2032;
LAB_1003385c:
    FUN_10057c8a(param_3,param_4,uVar10);
    return;
  case 0x16:
  case 0x17:
    if ((param_8 == 7) && (param_10 != 0)) {
      local_a4 = param_3[0x80];
      if (param_3[0x80] == 0) {
        local_a4 = FUN_10056ee5((int)param_3,4,'\x01');
        param_3[0x80] = local_a4;
      }
      if (SUB41(local_30,0) == '\0') {
        pfVar4 = &local_d0;
        pfVar7 = &local_70;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar7 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          pfVar7 = pfVar7 + 1;
        }
        pfVar4 = &local_70;
        cVar2 = '\0';
      }
      else {
        pfVar4 = (float *)FUN_10032c0a(local_170,(int)param_3,SUB41(local_50,0),'\0');
        cVar2 = SUB41(local_30,0);
      }
      pfVar7 = &local_f0;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        pfVar7 = pfVar7 + 1;
      }
      if (cVar2 != '\0') {
        local_74 = 1.0;
        FUN_10032b80(&local_70,(int)param_3,0x3f800000,'\a');
        FUN_10057c8a(extraout_EDX_01,param_4,0);
      }
      local_74 = (float)(param_5 * 0x30);
      uVar10 = (int)local_74 + 0xc0;
      FUN_100329bf((uint *)&local_70,(int)param_3,uVar10,0x54,0);
      FUN_100329bf((uint *)local_110,(int)param_3,uVar10,0xfe,0);
      local_30 = (float)(uint)local_ec;
      local_50 = local_f0;
      FUN_10057c8a(param_3,param_4,0xf);
      FUN_10057c8a(param_3,param_4,0xf);
      if (param_6 == 0x17) {
        uVar10 = (int)local_74 + 0xd4;
        FUN_100329bf((uint *)local_110,(int)param_3,(int)local_74 + 0xd0,0,0);
        FUN_100329bf((uint *)&local_70,(int)param_3,uVar10,(&DAT_1005ff14)[uVar10 >> 2 & 3],0);
        FUN_10057c8a(param_3,param_4,0x2032);
      }
    }
LAB_10034c21:
    if (local_14._0_1_ != '\0') {
      local_74 = 1.0;
      FUN_10032b80(&local_70,(int)param_3,0x3f800000,param_8);
LAB_1003321f:
      uVar10 = 0x2000;
LAB_1003322f:
      FUN_10057c8a(param_3,param_4,uVar10);
      return;
    }
    if ((ushort)param_13 == (ushort)param_9) {
      return;
    }
    uVar10 = 0x36;
    break;
  case 0x18:
    local_74 = 2.0;
    FUN_10032b80(&local_70,(int)param_3,0x40000000,'\a');
    fVar9 = 0.5;
    if (local_30._0_1_ == '\0') {
      local_74 = -0.5;
    }
    else {
      local_74 = 0.5;
    }
    local_74 = local_74 + local_74;
    if (local_14._0_1_ == '\0') {
      fVar9 = -0.5;
    }
    local_14 = fVar9 + fVar9;
    FUN_10032b80(&local_f0,(int)param_3,local_74,'\a');
    FUN_10032b80(local_110,(int)param_3,local_14,'\a');
    FUN_10032c0a((uint *)&local_150,(int)param_3,0xa4,extraout_DL_02);
    pfVar4 = (float *)FUN_10032a15(local_170,param_3,param_4,extraout_ECX_04,param_7,
                                   param_12 & 0xfeff,0);
    pfVar7 = &local_d0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    pfVar4 = (float *)FUN_10032a15(local_170,param_3,param_4,0,param_7,param_13 & 0xfeff,0);
    pfVar7 = &local_a0;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar7 = pfVar7 + 1;
    }
    local_74 = local_70;
    FUN_10057c8a(param_3,param_4,0x32);
    FUN_10057c8a(param_3,param_4,0x32);
    uVar10 = 0x2010;
    goto LAB_1003322f;
  }
  FUN_10057c8a(param_3,param_4,uVar10);
  return;
}

