/*
 * FUN_18018a780 at 18018a780
 * undefined FUN_18018a780(void)
 * Address ranges: 18018a780-18018accb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018a780(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  uint uVar7;
  int local_b0 [2];
  byte local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 local_70;
  uint local_50;
  undefined4 local_4c;
  
  local_4c = param_4;
  uVar4 = FUN_18018a398(param_1,param_3);
  FUN_1801856c8(uVar4,param_2);
  local_a0 = *(undefined4 *)(param_3 + 0x15c);
  local_90 = 0x12345678;
  local_98 = CONCAT44(local_98._4_4_,0xe4);
  local_a8 = 0xf;
  local_b0[0] = 1;
  FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x28);
  uVar5 = (uint)*(undefined8 *)(param_3 + 8);
  local_50 = uVar5 & 0x3f;
  uVar5 = (uVar5 & 0x2a) >> 1 | (uVar5 & 0x15) << 1;
  lVar6 = LZCOUNT(((uVar5 & 0x33333333) >> 2 |
                  ((uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x3030303) << 2) << 4) << 0x18);
  uVar5 = (uint)lVar6;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    uVar7 = 0;
    while( true ) {
      local_78 = 0x12345678;
      *(byte *)((longlong)&local_50 + (longlong)((int)uVar5 >> 3)) =
           *(byte *)((longlong)&local_50 + (longlong)((int)uVar5 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
      local_80 = lVar6 * 0x10 + 0x4f0;
      local_a8 = (byte)(1 << (ulonglong)(uVar7 & 3));
      local_b0[0] = (uVar7 >> 2) + 0xd;
      local_90 = *(undefined4 *)(param_3 + 0xd0);
      local_88 = 0xe4;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a0 = *(undefined4 *)(param_3 + 0x15c);
      FUN_180184ea8(param_1,param_3,param_2,0x11,local_b0,0x40);
      *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) | 1 << (ulonglong)((uint)lVar6 & 0x1f);
      uVar5 = (local_50 & 0xaaaaaaaa) >> 1 | (local_50 & 0x55555555) << 1;
      uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
      uVar5 = (uint)lVar6;
      if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
      uVar7 = uVar7 + 1;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((((uVar5 >> 0x1a & 1) == 0) || ((uVar5 & 0x3000000) == 0)) || ((uVar5 >> 0x1b & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180213760(param_3 + 0x20,1,1);
  }
  FUN_180186a20(param_1,param_2,param_3,uVar3);
  uVar4 = FUN_180187030(param_1,param_2,param_3,uVar3);
  FUN_180184fb8(uVar4,param_3,2);
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(uint *)(param_3 + 0x1ac) >> 0x13 & 1) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_a0 = (*extraout_x11)(param_1,param_2,param_3,4,1);
    local_90 = 0x12345678;
    local_a8 = 0xe;
    local_b0[0] = 4;
    local_98 = 0;
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x28);
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 0xe;
  }
  if (*(byte *)(param_3 + 0x1c7) != 0xf) {
    local_a8 = *(byte *)(param_3 + 0x1c7) ^ 0xf;
    local_70 = 0x12345678;
    local_78 = 0;
    local_90 = 0x3f800000;
    local_a0 = *(undefined4 *)(param_3 + 0xbc);
    local_80 = local_80 & 0xffffffff00000000;
    local_88 = 0;
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_b0[0] = 4;
    FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x48);
  }
  if (*(char *)(param_3 + 0x1c9) == '\0') {
    if ((*(uint *)(param_3 + 0x1ac) & 1) == 0) {
      local_70 = 0x12345678;
      local_78 = 0x3f800000;
      local_80 = CONCAT44(local_80._4_4_,0x3f800000);
      local_88 = 0x3f800000;
      local_90 = 0x3f800000;
      local_a0 = *(undefined4 *)(param_3 + 0xbc);
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = 0xf;
      local_b0[0] = 2;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x48);
    }
    else {
      local_a0 = FUN_18018a670(param_1,param_2,param_3);
      local_90 = 0x12345678;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = 0xf;
      local_b0[0] = 2;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x28);
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      local_70 = 0x12345678;
      local_80 = local_80 & 0xffffffff00000000;
      local_88 = 0;
      local_90 = 0;
      local_98 = CONCAT44(local_98._4_4_,0xe4);
      local_a8 = 0xf;
      if (*(char *)(param_3 + 0x1c8) == '\0') {
        local_a8 = 7;
      }
      local_78 = 0x3f800000;
      local_a0 = *(undefined4 *)(param_3 + 0xbc);
      local_b0[0] = 3;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x48);
    }
    else {
      local_a0 = FUN_18018a6c8(param_1,param_2,param_3);
      local_90 = 0x12345678;
      local_98 = CONCAT44(local_98._4_4_,0xa4);
      local_a8 = 7;
      local_b0[0] = 3;
      FUN_180184ea8(param_1,param_3,param_2,0x36,local_b0,0x28);
    }
    bVar1 = *(byte *)(param_3 + 0x1c5);
    *(byte *)(param_3 + 0x1c5) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_00)(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    bVar1 = *(byte *)(param_3 + 0x1c6);
    *(byte *)(param_3 + 0x1c6) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      (*(code *)puVar2)(0x180224000);
      (*extraout_x11_01)(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
    }
  }
  uVar4 = FUN_180188360(param_1,param_2,param_3);
  FUN_180184fb8(uVar4,param_3,1);
  if (*(char *)(param_3 + 0x1c9) != '\0') {
    uVar4 = FUN_180188938(param_1,param_2,param_3,local_4c);
    bVar1 = *(byte *)(param_3 + 0x1c5);
    *(byte *)(param_3 + 0x1c5) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      (*(code *)puVar2)(0x180224000);
      uVar4 = (*extraout_x11_02)(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    bVar1 = *(byte *)(param_3 + 0x1c6);
    *(byte *)(param_3 + 0x1c6) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      (*(code *)puVar2)(0x180224000);
      uVar4 = (*extraout_x11_03)(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
    }
    FUN_180184fb8(uVar4,param_3,4);
  }
  return;
}

