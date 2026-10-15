/*
 * FUN_1801b35a0 at 1801b35a0
 * undefined FUN_1801b35a0(void)
 * Address ranges: 1801b35a0-1801b3bef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b35a0(undefined8 param_1,uint *param_2,uint param_3,undefined4 param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint local_b0 [2];
  uint local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar7 = *param_2;
  if ((((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) == '\0')) &&
      (*(char *)((longlong)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    uVar5 = param_5;
    if (param_5 == 0 || (uVar7 & 0xc00) != 0) {
      uVar5 = param_3;
    }
  }
  else {
    uVar5 = FUN_180213760(param_2 + 4,4,1);
  }
  bVar3 = *(byte *)((longlong)param_2 + 0x6d);
  local_90 = 0;
  local_88 = 0;
  local_a0._0_4_ = 0xe4;
  param_2[(ulonglong)bVar3 + 0x22] = 4;
  uVar9 = (uint)bVar3;
  local_98._0_4_ = uVar9 | 0x410700;
  local_b0[0] = 1;
  uVar6 = 0;
  local_a8 = param_3;
  FUN_180214c88(param_2 + 4,param_1,0x2d,uVar5,local_b0,0x30);
  if ((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 2;
    local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
    local_98._0_4_ = 0xe4;
    local_b0[0] = uVar5;
    local_a0._0_4_ = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x201,local_b0,0x38);
  }
  if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 4;
    local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
    local_98._0_4_ = 0xe4;
    local_b0[0] = uVar5;
    local_a0._0_4_ = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2001,local_b0,0x38);
  }
  if (((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) &&
     ((*(char *)((longlong)param_2 + 6) != '\0' || ((char)param_2[2] != '\0')))) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 8;
    local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
    local_98._0_4_ = 0xe4;
    local_b0[0] = uVar5;
    local_a0._0_4_ = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2201,local_b0,0x38);
  }
  if ((*param_2 >> 10 & 1) != 0) {
    bVar3 = *(char *)((longlong)param_2 + 7) != '\0' | ((char)param_2[2] != '\0') << 1;
    if (bVar3 == 0) {
      uVar6 = (uVar5 & 0xc0000) + 0x40000 | uVar5 & 0xff83ffff | 0x100000;
    }
    else if (bVar3 == 1) {
      uVar6 = (uVar5 & 0xc0000) + 0x80000 | uVar5 & 0xff83ffff | 0x200000;
    }
    else if (bVar3 == 2) {
      uVar6 = (uVar5 & 0xc0000) + 0x40000 | uVar5 & 0xff83ffff | 0x300000;
    }
    else if (bVar3 == 3) {
      uVar6 = FUN_180213760(param_2 + 4,4,1);
    }
    else {
      uVar6 = 0;
    }
    bVar3 = *(byte *)((longlong)param_2 + 0x6e);
    local_90 = 0;
    local_88 = 0;
    local_a0._0_4_ = 0xe4;
    param_2[(ulonglong)bVar3 + 0x22] = 4;
    uVar9 = (uint)bVar3;
    local_98._0_4_ = uVar9 | 0x410700;
    local_b0[0] = 1;
    local_a8 = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x2d,uVar6,local_b0,0x30);
    if ((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0')) {
      local_88 = 0;
      local_80 = 0;
      local_a8 = 2;
      local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
      local_98._0_4_ = 0xe4;
      local_b0[0] = uVar6;
      local_a0._0_4_ = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x201,local_b0,0x38);
    }
    if ((*(char *)((longlong)param_2 + 6) != '\0') || ((char)param_2[2] != '\0')) {
      local_88 = 0;
      local_80 = 0;
      local_a8 = 4;
      local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
      local_98._0_4_ = 0xe4;
      local_b0[0] = uVar6;
      local_a0._0_4_ = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2001,local_b0,0x38);
    }
    if (((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 7) != '\0'))
       && ((*(char *)((longlong)param_2 + 6) != '\0' || ((char)param_2[2] != '\0')))) {
      local_88 = 0;
      local_80 = 0;
      local_a8 = 8;
      local_90 = CONCAT44(local_90._4_4_,uVar9) | 0x410700;
      local_98._0_4_ = 0xe4;
      local_b0[0] = uVar6;
      local_a0._0_4_ = param_3;
      FUN_180214c88(param_2 + 4,param_1,0x8000002d,0x2201,local_b0,0x38);
    }
  }
  if (param_3 != uVar5) {
    FUN_180213800(param_2 + 4,param_3);
  }
  if ((uVar7 & 0xc00) != 0) {
    bVar4 = (*param_2 & 0x400) != 0;
    lVar1 = 5;
    if (bVar4) {
      lVar1 = 7;
    }
    lVar2 = 6;
    if (bVar4) {
      lVar2 = 8;
    }
    uVar7 = (uint)(*(char *)((longlong)param_2 + lVar1) != '\0') |
            (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') << 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar7 = (uVar5 & 0xc0000) + 0x40000 | uVar5 & 0xff83ffff | 0x100000;
    }
    else if (uVar7 == 1) {
      uVar7 = (uVar5 & 0xc0000) + 0x80000 | uVar5 & 0xff83ffff | 0x200000;
    }
    else if (uVar7 == 2) {
      uVar7 = (uVar5 & 0xc0000) + 0x40000 | uVar5 & 0xff83ffff | 0x300000;
    }
    else if (uVar7 == 3) {
      uVar7 = FUN_180213760(param_2 + 4,4,1);
    }
    else {
      uVar7 = 0;
    }
    uVar10 = 0x27;
    if ((*param_2 & 0x1000) == 0) {
      uVar10 = 0x20;
    }
    uVar9 = (uint)(byte)(&DAT_18022d730)[uVar8 & 0xffffffff];
    if ((*param_2 & 0xf) - 3 < 2) {
      uVar11 = 0x84;
      uVar13 = 0x7c;
    }
    else {
      uVar11 = 0x80;
      uVar13 = 0x78;
    }
    uVar12 = (uint)(byte)(&DAT_18022d734)[uVar8 & 0xffffffff];
    local_a0._0_4_ = uVar12 | 0x100;
    local_b0[0] = uVar9;
    if (uVar6 == 0) {
      local_98._0_4_ = param_2[0x17];
      local_80 = 0;
      local_90 = 0;
      local_a8 = uVar5;
      local_88._0_4_ = uVar11;
      FUN_180214c88(param_2 + 4,param_1,1,uVar7,local_b0,0x38);
      local_80 = 0;
      local_88 = CONCAT44(local_88._4_4_,uVar13);
      local_90 = 0;
      local_98 = CONCAT44(local_98._4_4_,param_2[0x17]);
      local_a0 = CONCAT44(local_a0._4_4_,uVar12) | 0x100;
      local_b0[0] = uVar9;
      local_a8 = uVar7;
      FUN_180214c88(param_2 + 4,param_1,uVar10,uVar7,local_b0,0x38);
    }
    else {
      local_88 = 0;
      local_90 = CONCAT44(local_90._4_4_,uVar12) | 0x100;
      local_98 = CONCAT44(local_98._4_4_,uVar6);
      local_a0 = CONCAT44(local_a0._4_4_,uVar12) | 0x100;
      local_a8 = uVar5;
      FUN_180214c88(param_2 + 4,param_1,uVar10,uVar7,local_b0,0x30);
    }
    FUN_1801b2c88(param_1,param_2,param_4,uVar7);
    if ((uVar7 != 0) &&
       (((uVar7 & 0xff) != (uVar5 & 0xff) || ((uVar7 >> 8 & 0x3f) != (uVar5 >> 8 & 0x3f))))) {
      FUN_180213800(param_2 + 4,uVar7);
    }
    if (((uVar6 & 0xff) != (uVar5 & 0xff)) || ((uVar6 >> 8 & 0x3f) != (uVar5 >> 8 & 0x3f))) {
      FUN_180213800(param_2 + 4,uVar6);
    }
  }
  if ((param_5 != 0) && (uVar5 != param_5)) {
    local_a0 = 0;
    local_98 = 0;
    local_b0[0] = 1;
    local_a8 = uVar5;
    FUN_180214c88(param_2 + 4,param_1,0x36,param_5,local_b0,0x20);
    FUN_180213800(param_2 + 4,uVar5);
    uVar5 = param_5;
  }
  return uVar5;
}

