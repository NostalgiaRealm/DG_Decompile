/*
 * FUN_1801b5f50 at 1801b5f50
 * undefined FUN_1801b5f50(void)
 * Address ranges: 1801b5f50-1801b67df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b5f50(undefined8 param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                  uint param_6,ulonglong param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 extraout_x1;
  int iVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  uint local_c0 [2];
  uint local_b8;
  uint local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_6c;
  uint local_60;
  
  if (((param_7 & 1) == 0) || ((*param_2 >> 10 & 1) != 0)) {
    iVar10 = 0xf;
    uVar12 = 0xf;
  }
  else {
    iVar10 = 7;
    uVar12 = 7;
  }
  bVar2 = *(byte *)((longlong)param_2 + 0x6d);
  uVar9 = bVar2 | 0x410700;
  param_2[(ulonglong)bVar2 + 0x22] = 5;
  if ((*param_2 >> 10 & 1) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = *(byte *)((longlong)param_2 + 0x6e) | 0x410700;
    param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6e) + 0x22] = 5;
  }
  if ((*(char *)((longlong)param_2 + 6) == '\0') && ((char)param_2[2] == '\0')) {
    bVar13 = 0;
  }
  else {
    bVar13 = 2;
  }
  if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 7) == '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = 1;
  }
  bVar11 = bVar11 | bVar13;
  if ((param_6 == 0) || ((*param_2 >> 10 & 1) != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar11 == 0) && ((*param_2 >> 10 & 1) == 0)) {
    cVar4 = FUN_1801b2c40(param_2,param_3,param_4);
LAB_1801b6070:
    uVar5 = param_6;
    if (bVar3 && param_5 == 1) goto LAB_1801b609c;
  }
  else {
    cVar4 = '\0';
    if (bVar11 == 0) goto LAB_1801b6070;
  }
  uVar5 = FUN_180213760(param_2 + 4,4,1);
LAB_1801b609c:
  local_98 = 0;
  local_a0 = 0xe4;
  local_b0 = 0xe4;
  local_a8 = CONCAT44(local_a8._4_4_,(uint)bVar2) | 0x410700;
  uVar1 = uVar5;
  if (uVar5 == param_6) {
    uVar1 = 0;
  }
  local_c0[0] = uVar12;
  local_b8 = param_3;
  FUN_180214c88(param_2 + 4,param_1,0x2d,uVar5,local_c0,0x30);
  if (cVar4 != '\0') {
    param_3 = 0;
  }
  if (cVar4 != '\0') {
    param_4 = 0;
  }
  if ((*param_2 >> 10 & 1) == 0) {
    local_6c = 0;
  }
  else {
    if (bVar11 == 0) {
      FUN_1801b2c40(param_2,param_3,param_4);
      param_4 = 0;
      param_3 = 0;
    }
    local_6c = FUN_180213760(param_2 + 4,4,1);
    uVar6 = FUN_180213760(param_2 + 4,extraout_x1,0);
    local_98 = 0;
    local_a0 = 0xe4;
    local_b0 = 0xe4;
    local_a8 = CONCAT44(local_a8._4_4_,local_60);
    local_c0[0] = 0xf;
    local_b8 = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x2d,uVar6,local_c0,0x30);
    FUN_1801b5e38(param_1,param_2,uVar1,uVar6,local_6c,1);
  }
  if ((*(char *)((longlong)param_2 + 5) != '\0') ||
     (uVar7 = 0, *(char *)((longlong)param_2 + 7) != '\0')) {
    if ((bVar11 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    uVar7 = FUN_180213760(param_2 + 4,4,1);
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_a8 = CONCAT44(local_a8._4_4_,0xe4);
    local_c0[0] = uVar7;
    local_b8 = uVar12;
    local_b0 = param_3;
    local_a0 = uVar9;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x201,local_c0,0x38);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar11 == 1) {
        FUN_1801b2c40(param_2,param_3,param_4);
        param_4 = 0;
        param_3 = 0;
      }
      uVar8 = FUN_180213760(param_2 + 4,4,0);
      local_90 = 0;
      local_a0 = local_60;
      local_b8 = 0xf;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = CONCAT44(local_a8._4_4_,0xe4);
      local_c0[0] = uVar8;
      local_b0 = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x201,local_c0,0x38);
      FUN_1801b5e38(param_1,param_2,uVar7,uVar8,local_6c,2);
    }
    if (*(char *)((longlong)param_2 + 5) != '\0') {
      local_c0[0] = local_c0[0] & 0xffffff00;
      uVar5 = param_6;
      if ((bVar11 != 1 || !bVar3) || param_5 != 1) {
        uVar5 = uVar1;
      }
      FUN_1801b2b68(param_1,param_2,uVar5,iVar10,uVar7,uVar1,uVar7,param_4);
    }
    if ((bVar11 == 1) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
    if ((bVar11 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    if (uVar7 == 0) {
      uVar7 = FUN_180213760(param_2 + 4,4,1);
    }
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_a8 = CONCAT44(local_a8._4_4_,0xe4);
    local_c0[0] = uVar7;
    local_b8 = uVar12;
    local_b0 = param_3;
    local_a0 = uVar9;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2001,local_c0,0x38);
    if ((*param_2 >> 10 & 1) != 0) {
      if (bVar11 == 2) {
        FUN_1801b2c40(param_2,param_3,param_4);
      }
      uVar8 = FUN_180213760(param_2 + 4,4,0);
      local_90 = 0;
      local_a0 = local_60;
      local_b8 = 0xf;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = CONCAT44(local_a8._4_4_,0xe4);
      local_c0[0] = uVar8;
      local_b0 = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2001,local_c0,0x38);
      FUN_1801b5e38(param_1,param_2,uVar7,uVar8,local_6c,4);
    }
    if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      local_c0[0] = local_c0[0] & 0xffffff00;
      uVar5 = param_6;
      if (!bVar3 || param_5 != 1) {
        uVar5 = uVar1;
      }
      FUN_1801b2b68(param_1,param_2,uVar1,iVar10,uVar7,uVar1,uVar7,param_4);
    }
    if ((bVar11 == 2) && ((*param_2 >> 10 & 1) == 0)) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if (((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) ||
     ((*(char *)((longlong)param_2 + 7) != '\0' && ((char)param_2[2] != '\0')))) {
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_3);
      }
      param_3 = 0;
    }
    uVar8 = FUN_180213760(param_2 + 4,4,1);
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_a8 = CONCAT44(local_a8._4_4_,0xe4);
    local_c0[0] = uVar8;
    local_b8 = uVar12;
    local_b0 = param_3;
    local_a0 = uVar9;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2201,local_c0,0x38);
    if ((*param_2 >> 10 & 1) != 0) {
      if ((param_3 != 0) && ((param_3 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_3);
      }
      uVar9 = FUN_180213760(param_2 + 4,4,0);
      local_90 = 0;
      local_a0 = local_60;
      local_b8 = 0xf;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = CONCAT44(local_a8._4_4_,0xe4);
      local_c0[0] = uVar9;
      local_b0 = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2201,local_c0,0x38);
      FUN_1801b5e38(param_1,param_2,uVar7,uVar9,local_6c,8);
    }
    FUN_180213800(param_2 + 4,uVar8);
    if ((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      local_c0[0] = local_c0[0] & 0xffffff00;
      FUN_1801b2b68(param_1,param_2,uVar7,0xf,uVar8,uVar7,uVar8,param_4);
      uVar5 = param_6;
      if (!bVar3 || param_5 != 1) {
        uVar5 = uVar1;
      }
      local_c0[0] = CONCAT31(local_c0[0]._1_3_,0x55);
      FUN_1801b2b68(param_1,param_2,uVar1,0xf,uVar7,uVar1,uVar7,param_4);
    }
    if ((*param_2 >> 10 & 1) == 0) {
      if ((param_4 != 0) && ((param_4 & 0x3f00) == 0)) {
        FUN_180213800(param_2 + 4,param_4);
      }
      param_4 = 0;
    }
  }
  if ((((*param_2 >> 10 & 1) != 0) &&
      (FUN_1801b2c88(param_1,param_2,param_4,local_6c), param_4 != 0)) && ((param_4 & 0x3f00) == 0))
  {
    FUN_180213800(param_2 + 4,param_4);
  }
  if (uVar5 != param_6) {
    if (param_5 == 1) {
      if (param_6 != 0) {
        local_a8 = 0;
        local_b0 = 0xe4;
        if (iVar10 != 0xf) {
          local_b0 = 0xa4;
        }
        local_c0[0] = uVar12;
        local_b8 = uVar5;
        FUN_180214c88(param_2 + 4,param_1,0x36,param_6,local_c0,0x20);
      }
    }
    else {
      uVar5 = param_6;
      if (param_6 == 0) {
        uVar5 = uVar1;
      }
      FUN_1801b2908(param_1,param_2,uVar5,iVar10,uVar1,1,param_5);
    }
  }
  if (uVar1 != uVar5) {
    FUN_180213800(param_2 + 4,uVar1);
  }
  FUN_180213800(param_2 + 4,uVar7);
  FUN_180213800(param_2 + 4,local_6c);
  return uVar5;
}

