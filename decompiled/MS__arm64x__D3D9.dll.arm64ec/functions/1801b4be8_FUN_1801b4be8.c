/*
 * FUN_1801b4be8 at 1801b4be8
 * undefined FUN_1801b4be8(void)
 * Address ranges: 1801b4be8-1801b4f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b4be8(undefined8 param_1,uint *param_2,uint param_3,byte param_4,int param_5,
                  uint param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_100 [2];
  uint local_f8;
  uint local_f0;
  uint local_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  int local_b0;
  int local_a8;
  int local_a0;
  uint local_98;
  uint local_90;
  undefined8 local_88;
  int local_58 [6];
  
  uVar5 = (param_7 ^ 1) << 3;
  uVar4 = param_6;
  if ((param_6 & 0x3f00) == 0x200) {
    uVar4 = param_3;
  }
  uVar3 = param_6;
  if (param_5 != 2) {
    uVar3 = uVar4;
  }
  uVar4 = *param_2;
  local_58[0] = (uVar4 >> 0x12 & 3) << 3;
  local_e8 = 7;
  if ((uVar4 & 0x4000000) == 0) {
    local_e8 = 8;
  }
  local_58[1] = (uVar4 >> 0x14 & 3) << 3;
  local_d8 = 7;
  uVar2 = local_d8;
  if ((uVar4 & 0x8000000) == 0) {
    uVar2 = 8;
  }
  local_58[2] = (uVar4 >> 0x16 & 3) << 3;
  if ((uVar4 & 0x10000000) == 0) {
    local_d8 = 8;
  }
  local_58[3] = (uVar4 >> 0x18 & 3) << 3;
  local_100[0] = 7;
  uVar7 = local_100[0];
  if ((uVar4 & 0x20000000) == 0) {
    uVar7 = 8;
  }
  if (param_2[4] < 0x50) {
    uVar6 = (uint)param_4;
    uVar1 = uVar6 & 3;
    uVar7 = 0;
    do {
      if (((uVar1 != uVar7) &&
          (local_100[0] = 1 << (ulonglong)(uVar7 & 0x1f), ((uVar5 & 0xff | 7) & local_100[0]) != 0))
         && ((*param_2 & 0x40000000) == 0 || uVar7 != 3)) {
        local_d0 = 0;
        local_d8 = local_58[uVar7];
        local_e0 = CONCAT44(local_e0._4_4_,0xe4);
        local_e8 = param_2[0x18];
        local_f8 = param_3;
        local_f0 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x55,uVar3,local_100,0x38);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < 4);
    local_100[0] = 1 << (ulonglong)uVar1;
    uVar7 = uVar5 & 0xff | 7;
    if (((local_100[0] & uVar7) != 0) && ((*param_2 & 0x40000000) == 0 || uVar1 != 3)) {
      local_d0 = 0;
      local_d8 = local_58[uVar1];
      local_e0 = CONCAT44(local_e0._4_4_,0xe4);
      local_e8 = param_2[0x18];
      local_f8 = param_3;
      local_f0 = uVar6;
      FUN_180214c88(param_2 + 4,param_1,0x55,uVar3,local_100,0x38);
    }
    local_b8 = 0;
    local_e0 = CONCAT44(local_e0._4_4_,0xe4);
    local_f0 = 0xe4;
    local_100[0] = 7;
    if ((uVar4 & 0x40000000) == 0) {
      local_100[0] = 0xf;
    }
    local_100[0] = local_100[0] & uVar7;
    local_c0 = 0xff;
    local_c8 = 0xff;
    local_d0 = CONCAT44(local_d0._4_4_,0xff);
    local_d8 = 0xff;
    local_e8 = param_2[0x19];
    local_f8 = uVar3;
    FUN_180214c88(param_2 + 4,param_1,1,uVar3,local_100,0x50);
  }
  else {
    local_f8 = param_2[0x19];
    local_88 = 0;
    local_90 = (uint)param_4;
    local_b8 = CONCAT44(local_b8._4_4_,local_58[0]);
    local_c0 = 0xe4;
    local_d0 = CONCAT44(local_d0._4_4_,uVar7);
    local_e0 = CONCAT44(local_e0._4_4_,uVar2);
    local_f0 = 0xe4;
    if ((uVar4 & 0x40000000) == 0) {
      local_100[0] = 0xf;
    }
    local_100[0] = (uVar5 & 0xff | 7) & local_100[0];
    local_c8 = local_f8;
    local_b0 = local_58[1];
    local_a8 = local_58[2];
    local_a0 = local_58[3];
    local_98 = param_3;
    FUN_180214c88(param_2 + 4,param_1,0x8a,uVar3,local_100,0x80);
  }
  if (((*param_2 >> 0x1e & 1) != 0) && ((*param_2 >> 0xe & 1) == 0)) {
    local_e0 = 0;
    local_e8 = 0xff;
    local_f8 = param_2[0x18];
    local_f0 = 0xe4;
    local_100[0] = 8;
    FUN_180214c88(param_2 + 4,param_1,0x36,uVar3,local_100,0x28);
  }
  if (param_5 != 2) {
    FUN_1801b2908(param_1,param_2,param_6,uVar5 | 7,uVar3,2,param_5);
  }
  return;
}

