/*
 * FUN_100434a8 at 100434a8
 * undefined FUN_100434a8(void)
 * Address ranges: 100434a8-100437b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100434a8(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,
                 ulonglong param_9)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint extraout_w11;
  undefined4 extraout_w15;
  uint uVar5;
  undefined4 *local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 local_bc;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  char local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  int local_58 [6];
  
  local_6c = param_6 & 3;
  local_58[0] = ((uint)(param_9 >> 0x1c) & 3) << 3;
  local_58[1] = ((uint)(param_9 >> 0x1e) & 3) << 3;
  uVar2 = (uint)(param_9 >> 0x20);
  local_58[2] = (uVar2 & 3) << 3;
  local_58[3] = (uVar2 >> 2 & 3) << 3;
  uVar4 = param_9 >> 0x28;
  local_6c = local_6c | (local_6c | (local_6c | (param_6 & 0xff) << 2) << 2) << 2;
  local_68 = param_7;
  local_64 = param_3;
  local_60 = uVar4;
  uVar2 = FUN_1007ac30(*param_2);
  uVar5 = param_6 & 0xff;
  if (uVar2 < 0x50) {
    uVar1 = ((uint)uVar4 & 1) << 3 | 7;
    local_70 = (char)uVar1;
    uVar2 = 0;
    if (uVar1 == 0xf) {
      do {
        if (uVar5 != uVar2) {
          local_c0 = 1 << (ulonglong)(uVar2 & 0x1f);
          local_ac = local_58[uVar2];
          local_a8 = 0;
          local_b0 = 0xe4;
          local_b4 = param_2[0x24];
          local_c8 = 0x55;
          local_d0 = param_2;
          uStack_cc = param_8;
          uStack_c4 = param_4;
          local_bc = param_5;
          local_b8 = extraout_w11 & 0xff;
          FUN_1007a868(&local_d0,0x2c);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
    else {
      do {
        if (uVar2 != 3 && uVar5 != uVar2) {
          local_c0 = 1 << (ulonglong)(uVar2 & 0x1f);
          local_ac = local_58[uVar2];
          local_a8 = 0;
          local_b0 = 0xe4;
          local_b4 = param_2[0x24];
          local_c8 = 0x55;
          local_d0 = param_2;
          uStack_cc = param_8;
          uStack_c4 = param_4;
          local_bc = param_5;
          local_b8 = extraout_w11 & 0xff;
          FUN_1007a868(&local_d0,0x2c);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
    if (uVar5 != 3 || local_70 == '\x0f') {
      local_c0 = 1 << (ulonglong)(param_6 & 0x1f);
      local_ac = local_58[uVar5];
      local_a8 = 0;
      local_b0 = 0xe4;
      local_b4 = param_2[0x24];
      local_b8 = local_6c & 0xff;
      local_c8 = 0x55;
      local_d0 = param_2;
      uStack_cc = param_8;
      uStack_c4 = param_4;
      local_bc = param_5;
      FUN_1007a868(&local_d0,0x2c);
    }
    local_a0 = 0xff;
    uStack_9c = 0;
    local_a8 = 0xff;
    uStack_a4 = 0xff;
    local_b0 = 0xe4;
    local_ac = 0xff;
    local_b4 = param_2[0x25];
    local_c0 = (uint)*(byte *)(param_2 + 0x93);
    local_c8 = 1;
    local_b8 = 0xe4;
    local_d0 = param_2;
    uStack_cc = param_8;
    uStack_c4 = param_4;
    local_bc = param_4;
    FUN_1007a868(&local_d0,0x38);
  }
  else {
    local_bc = param_2[0x25];
    local_88 = extraout_w11 & 0xff;
    uStack_84 = 0;
    local_b0 = 8;
    local_ac = 8;
    local_a0 = 0xe4;
    local_c0 = (uint)*(byte *)(param_2 + 0x93);
    local_c8 = 0x8a;
    local_a8 = 8;
    local_b8 = 0xe4;
    local_b4 = 8;
    local_d0 = param_2;
    uStack_cc = param_8;
    uStack_c4 = param_4;
    uStack_a4 = local_bc;
    uStack_9c = extraout_w15;
    uStack_8c = param_5;
    FUN_1007a868(&local_d0,0x50);
  }
  local_b8 = 0xe4;
  local_b4 = 0;
  local_c0 = (uint)*(byte *)(param_2 + 0x93);
  local_c8 = 0x56;
  local_d0 = param_2;
  uStack_cc = param_8;
  uStack_c4 = param_4;
  local_bc = param_4;
  uVar3 = FUN_1007a868(&local_d0,0x20);
  if (((local_60 & 1) == 0) && ((param_9 >> 0x30 & 1) != 0)) {
    local_b4 = param_2[0x8d];
    local_b0 = 0;
    local_bc = param_2[0x24];
    local_b8 = 0xe4;
    local_c0 = 8;
    local_c8 = 0x36;
    local_d0 = param_2;
    uStack_cc = param_8;
    uStack_c4 = param_4;
    uVar3 = FUN_1007a868(&local_d0,0x24);
  }
  FUN_10042fc0(uVar3,param_2,local_64,param_4,local_68,uVar5,param_8);
  return;
}

