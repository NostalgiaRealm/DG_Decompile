/*
 * FUN_10043090 at 10043090
 * undefined FUN_10043090(void)
 * Address ranges: 10043090-100432af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043090(undefined8 param_1,undefined4 *param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 byte param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 ulonglong param_13)

{
  uint uVar1;
  undefined4 *local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  local_88 = param_4 & 0xff;
  local_98 = 0x2d;
  uStack_9c = param_11;
  local_80 = 0xe4;
  local_7c = 0;
  local_90 = 0xf;
  local_a0 = param_2;
  local_94 = param_5;
  local_8c = param_3;
  local_84 = param_6;
  FUN_1007a868(&local_a0,0x28);
  if ((param_13 >> 0x32 & 1) != 0) {
    local_84 = param_2[0x25];
    local_54 = 0;
    local_80 = 0xe4;
    local_5c = 0x3a83126f;
    uStack_58 = 0x3a83126f;
    local_68 = 0xe4;
    local_88 = 0xe4;
    local_98 = 0x32;
    local_64 = 0x3a83126f;
    uStack_60 = 0x3a83126f;
    local_74 = 0x437f0000;
    local_70 = 0x437f0000;
    local_7c = 0x437f0000;
    local_78 = 0x437f0000;
    local_90 = 0xf;
    uStack_9c = param_11;
    local_a0 = param_2;
    local_94 = param_5;
    local_8c = param_5;
    local_6c = local_84;
    FUN_1007a868(&local_a0,0x50);
    local_98 = 0x40;
    local_88 = 0xe4;
    local_84 = 0;
    local_90 = 0xf;
    uStack_9c = param_11;
    local_a0 = param_2;
    local_94 = param_7;
    local_8c = param_5;
    FUN_1007a868(&local_a0,0x20);
    local_98 = 0x1c;
    local_88 = 0xe4;
    local_84 = 0;
    local_90 = 0xf;
    uStack_9c = param_11;
    local_a0 = param_2;
    local_94 = param_7;
    local_8c = param_7;
    FUN_1007a868(&local_a0,0x20);
    param_5 = param_7;
  }
  uVar1 = FUN_1007ac30(*param_2);
  if (uVar1 < 0x50) {
    local_78 = 0xe4;
    local_68 = 1;
    local_64 = 0;
    local_6c = 0x100;
    local_70 = 0x10000;
    local_74 = 0x1000000;
    local_94 = param_2[0x26];
    local_80 = 0xe4;
    local_88 = 0xf;
    uStack_9c = param_11;
    local_90 = 0;
    local_98 = 0x26;
    local_a0 = param_2;
    local_8c = param_7;
    local_84 = param_5;
    FUN_1007a868(&local_a0,0x40);
  }
  else {
    local_6c = 0;
    local_74 = 8;
    local_70 = 0;
    local_78 = 0x10;
    local_80 = 0xe4;
    local_7c = 0x18;
    local_98 = 0x29;
    local_88 = 0xe4;
    local_90 = 0xf;
    uStack_9c = param_11;
    local_a0 = param_2;
    local_94 = param_7;
    local_8c = param_5;
    FUN_1007a868(&local_a0,0x38);
  }
  uStack_9c = param_11;
  local_80 = 0xfe;
  local_7c = 0;
  local_88 = 0x54;
  local_90 = 3;
  local_98 = 0x3c;
  local_a0 = param_2;
  local_94 = param_7;
  local_8c = param_7;
  local_84 = param_7;
  FUN_1007a868(&local_a0,0x28);
  local_88 = 0;
  local_98 = 0x3c;
  local_80 = 0x55;
  local_7c = 0;
  local_90 = (uint)param_9;
  uStack_9c = param_11;
  local_a0 = param_2;
  local_94 = param_8;
  local_8c = param_7;
  local_84 = param_7;
  FUN_1007a868(&local_a0,0x28);
  return;
}

