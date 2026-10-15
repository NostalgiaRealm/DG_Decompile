/*
 * FUN_1002aff8 at 1002aff8
 * undefined FUN_1002aff8(void)
 * Address ranges: 1002aff8-1002b213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002aff8(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  uint uVar1;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  uVar1 = param_4 & 0xff;
  uStack_8c = param_1;
  uStack_84 = param_3;
  local_80 = uVar1;
  uStack_7c = param_5;
  switch(param_7) {
  case 0:
    switch(param_6) {
    case 2:
      local_90 = param_2 + 0xc;
      local_78 = 0x1e4;
      local_74 = 0;
      local_88 = 0x56;
      local_80 = param_4 & 0xff;
      uStack_84 = param_5;
      FUN_10084ec8(&local_90,0x20);
    case 1:
      local_5c = 0;
      local_70 = 0xe4;
      local_74 = *(undefined4 *)(param_2 + 0x58);
      local_90 = param_2 + 0xc;
      local_64 = 0x3b808081;
      uStack_60 = 0x3b808081;
      local_6c = 0x3b808081;
      uStack_68 = 0x3b808081;
      local_78 = 0x1e4;
      local_88 = 0x38;
      uStack_8c = param_1;
      uStack_84 = param_3;
      local_80 = uVar1;
      uStack_7c = param_5;
      FUN_10084ec8(&local_90,0x38);
    }
    break;
  case 1:
    switch(param_6) {
    case 0:
      local_5c = 0;
      local_70 = 0xe4;
      local_74 = *(undefined4 *)(param_2 + 0x58);
      local_90 = param_2 + 0xc;
      local_64 = 0x437f0000;
      uStack_60 = 0x437f0000;
      local_6c = 0x437f0000;
      uStack_68 = 0x437f0000;
      local_78 = 0x1e4;
      local_88 = 0x38;
      FUN_10084ec8(&local_90,0x38);
      break;
    case 2:
      local_78 = 0x1e4;
      local_74 = 0;
      local_90 = param_2 + 0xc;
      local_88 = 0x56;
      FUN_10084ec8(&local_90,0x20);
    }
    break;
  case 2:
    if (param_6 == 0) {
      local_44 = 0;
      local_74 = *(undefined4 *)(param_2 + 0x58);
      local_70 = 0xe4;
      local_90 = param_2 + 0xc;
      local_4c = 0x38d1b717;
      uStack_48 = 0x38d1b717;
      local_54 = 0x38d1b717;
      uStack_50 = 0x38d1b717;
      uStack_58 = 0xe4;
      local_88 = 0x32;
      local_64 = 0x437f0000;
      uStack_60 = 0x437f0000;
      local_6c = 0x437f0000;
      uStack_68 = 0x437f0000;
      local_78 = 0x1e4;
      uStack_84 = param_5;
      local_5c = local_74;
      FUN_10084ec8(&local_90,0x50);
    }
    else if (param_6 != 1) {
      return;
    }
    local_90 = param_2 + 0xc;
    local_78 = 0x1e4;
    local_74 = 0;
    local_88 = 0x1c;
    local_80 = param_4 & 0xff;
    uStack_8c = param_1;
    uStack_84 = param_3;
    uStack_7c = param_5;
    FUN_10084ec8(&local_90,0x20);
  }
  return;
}

