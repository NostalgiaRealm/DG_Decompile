/*
 * FUN_1003c068 at 1003c068
 * undefined FUN_1003c068(void)
 * Address ranges: 1003c068-1003c423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003c068(undefined8 param_1,int param_2,uint param_3,int param_4,int param_5,
                 undefined8 param_6,ulonglong param_7,undefined4 param_8,int param_9)

{
  ulonglong extraout_x12;
  ulonglong extraout_x12_00;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  undefined4 local_80;
  int iStack_7c;
  undefined4 local_78;
  int local_74;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_50;
  
  if (param_9 == 0) {
    param_9 = param_5;
  }
  local_50 = param_7;
  if ((param_3 - 2 & 0xfffffffb) == 0) {
    local_70 = 0xe4;
    iStack_6c = 0;
    local_80 = 8;
    local_88 = 0x10;
    local_78 = 0xe4;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_9;
    local_74 = param_9;
    FUN_1007a868(&local_90,0x28);
    local_78 = 0xff;
    local_74 = 0;
    local_80 = 8;
    local_88 = 0x44;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_5;
    FUN_1007a868(&local_90,0x20);
    local_78 = 0xe4;
    local_70 = 0xff;
    iStack_6c = 0;
    local_88 = 0x38;
    local_80 = 0xf;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_9;
    local_74 = param_5;
    FUN_1007a868(&local_90,0x28);
  }
  if (param_3 == 5) {
    if (param_5 != param_9) {
      local_78 = 0xf4;
      local_74 = 0;
      local_80 = 0xb;
      local_88 = 0x36;
      local_90 = param_2;
      uStack_8c = param_8;
      iStack_84 = param_5;
      iStack_7c = param_9;
      FUN_1007a868(&local_90,0x20);
    }
    local_68 = 0;
    iStack_6c = param_4 * 0x30 + 0xe8;
    local_70 = (uint)DAT_1009ec1a;
    local_74 = *(undefined4 *)(param_2 + 0x50);
    local_78 = 0xaa;
    local_80 = 4;
    local_88 = 0x38;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_9;
    FUN_1007a868(&local_90,0x2c);
  }
  else if (param_3 == 6) {
    local_68 = 0;
    iStack_6c = param_4 * 0x30 + 0xe8;
    local_70 = (uint)DAT_1009ec1a;
    local_74 = *(undefined4 *)(param_2 + 0x50);
    local_78 = 0xff;
    local_80 = 8;
    local_88 = 0x38;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_5;
    FUN_1007a868(&local_90,0x2c);
  }
  else {
    switch(param_3) {
    case 0:
      local_64 = 0;
      iStack_7c = *(undefined4 *)(param_2 + 0x94);
      local_70 = 0;
      iStack_6c = 0;
      local_78 = 0xe4;
      local_74 = 0;
      local_68 = 0x3f800000;
      local_80 = 0xf;
      local_88 = 0x36;
      local_90 = param_2;
      uStack_8c = param_8;
      iStack_84 = param_5;
      FUN_1007a868(&local_90,0x30);
      break;
    case 1:
    case 4:
    case 7:
      FUN_100798e0(param_2,param_4);
      local_74 = FUN_10079878(param_2,param_4,0,param_4);
      local_68 = 0;
      local_64 = 0;
      local_78 = 0xe4;
      local_80 = 0xf;
      local_88 = 0x45;
      local_90 = param_2;
      uStack_8c = param_8;
      iStack_84 = param_5;
      iStack_7c = param_9;
      FUN_1007a868(&local_90,0x30);
      break;
    case 2:
      FUN_100798e0(param_2,param_4);
      local_74 = FUN_10079878(param_2,extraout_x12 & 0xffffffff,1,extraout_x12 & 0xffffffff);
      local_68 = 0;
      local_64 = 0;
      local_78 = 0xe4;
      local_70 = 0xe4;
      local_80 = 0xf;
      local_88 = 0x45;
      local_90 = param_2;
      uStack_8c = param_8;
      iStack_84 = param_5;
      iStack_7c = param_5;
      FUN_1007a868(&local_90,0x30);
      break;
    case 3:
      FUN_100798e0(param_2,param_4);
      local_74 = FUN_10079878(param_2,extraout_x12_00 & 0xffffffff,2,extraout_x12_00 & 0xffffffff);
      local_68 = 0;
      local_64 = 0;
      local_78 = 0xe4;
      local_70 = 0xe4;
      local_80 = 0xf;
      local_88 = 0x45;
      local_90 = param_2;
      uStack_8c = param_8;
      iStack_84 = param_5;
      iStack_7c = param_9;
      FUN_1007a868(&local_90,0x30);
      break;
    case 5:
    case 6:
      break;
    default:
      goto switchD_1003c23c_default;
    }
  }
  if (((0x9eU >> (ulonglong)(param_3 & 0x1f) & 1) != 0) && ((local_50 >> 0x3c & 1) != 0)) {
    local_68 = 0;
    iStack_6c = param_4 * 0x20 + 0x240;
    local_80 = 0xf;
    local_70 = 0xe4;
    local_74 = *(undefined4 *)(param_2 + 0x50);
    local_78 = 0xe4;
    local_88 = 1;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_5;
    FUN_1007a868(&local_90,0x2c);
    iStack_6c = param_4 * 0x20 + 0x250;
    local_70 = 0xe4;
    local_74 = *(undefined4 *)(param_2 + 0x50);
    local_68 = 0;
    local_80 = 0xf;
    local_78 = 0xe4;
    local_88 = 0x3c;
    local_90 = param_2;
    uStack_8c = param_8;
    iStack_84 = param_5;
    iStack_7c = param_5;
    FUN_1007a868(&local_90,0x2c);
  }
switchD_1003c23c_default:
  return;
}

