/*
 * FUN_1801b2908 at 1801b2908
 * undefined FUN_1801b2908(void)
 * Address ranges: 1801b2908-1801b2b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b2908(undefined8 param_1,longlong param_2,undefined4 param_3,byte param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  uint local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_b8 = param_5;
  if (param_7 == 0) {
    if (param_6 != 0) {
      if (param_6 != 1) {
        if (param_6 != 2) {
          return;
        }
        local_a8 = 0;
        local_c0[0] = (uint)param_4;
        local_b0 = 0x1e4;
        FUN_180214c88(param_2 + 0x10,param_1,0x56,param_5,local_c0,0x20);
      }
      local_78 = 0;
      local_a0 = 0xe4;
      local_b0 = 0x1e4;
      local_80 = 0x3b808081;
      local_88 = 0x3b808081;
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 100));
      local_90 = 0x3b808081;
      local_98 = 0x3b808081;
      local_c0[0] = (uint)param_4;
      local_b8 = param_5;
      FUN_180214c88(param_2 + 0x10,param_1,0x38,param_3,local_c0,0x50);
    }
  }
  else if (param_7 == 1) {
    if (param_6 == 0) {
      local_78 = 0;
      local_a0 = 0xe4;
      local_80 = 0x437f0000;
      local_88 = 0x437f0000;
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 100));
      local_b0 = 0x1e4;
      local_90 = 0x437f0000;
      local_98 = 0x437f0000;
      local_c0[0] = (uint)param_4;
      FUN_180214c88(param_2 + 0x10,param_1,0x38,param_3,local_c0,0x50);
    }
    else if (param_6 == 2) {
      local_a8 = 0;
      local_c0[0] = (uint)param_4;
      local_b0 = 0x1e4;
      FUN_180214c88(param_2 + 0x10,param_1,0x56,param_3,local_c0,0x20);
    }
  }
  else if (param_7 == 2) {
    if (param_6 == 0) {
      local_48 = 0;
      local_70 = 0xe4;
      local_50 = 0x38d1b717;
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 100));
      local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(param_2 + 100));
      local_58 = 0x38d1b717;
      local_60 = 0x38d1b717;
      local_68 = 0x38d1b717;
      local_80 = 0x437f0000;
      local_88 = 0x437f0000;
      local_90 = 0x437f0000;
      local_98 = 0x437f0000;
      local_a0 = 0xe4;
      local_b0 = 0x1e4;
      local_c0[0] = (uint)param_4;
      FUN_180214c88(param_2 + 0x10,param_1,0x32,param_5,local_c0,0x80);
    }
    else if (param_6 != 1) {
      return;
    }
    local_a8 = 0;
    local_c0[0] = (uint)param_4;
    local_b0 = 0x1e4;
    local_b8 = param_5;
    FUN_180214c88(param_2 + 0x10,param_1,0x1c,param_3,local_c0,0x20);
  }
  return;
}

