/*
 * FUN_1801b52f0 at 1801b52f0
 * undefined FUN_1801b52f0(void)
 * Address ranges: 1801b52f0-1801b5473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b52f0(undefined8 param_1,uint *param_2,int param_3,ulonglong param_4,byte param_5,
                  undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint local_c0 [2];
  uint local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  uint local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  local_b8 = (uint)param_5;
  uVar1 = (uint)param_4;
  if (param_3 == 0) {
    local_98 = 0;
    local_a0 = 0xe4;
    local_a8 = CONCAT44(local_a8._4_4_,param_7);
    local_b0 = 0xe4;
    local_c0[0] = local_b8;
    local_b8 = param_6;
    FUN_180214c88(param_2 + 4,param_1,0x2d,param_4,local_c0,0x30);
  }
  else {
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,0xe4);
    local_a8 = CONCAT44(local_a8._4_4_,0xe4);
    local_c0[0] = uVar1;
    local_b0 = param_6;
    local_a0 = param_7;
    FUN_180214c88(param_2 + 4,param_1,0x8000002d,
                  *(undefined4 *)(&DAT_18022d6e8 + (ulonglong)(param_3 - 1) * 4),local_c0,0x38);
  }
  if ((*param_2 & 0xf) == 4) {
    local_78 = param_2[0x19];
    local_48 = 0;
    local_70 = 0xe4;
    local_50 = 0x3a83126f;
    local_a8 = CONCAT44(local_a8._4_4_,local_78);
    local_58 = 0x3a83126f;
    local_60 = 0x3a83126f;
    local_68 = 0x3a83126f;
    local_80 = 0x437f0000;
    local_88 = 0x437f0000;
    local_90 = CONCAT44(local_90._4_4_,0x437f0000);
    local_98 = CONCAT44(local_98._4_4_,0x437f0000);
    local_a0 = 0xe4;
    local_b0 = 0xe4;
    uVar2 = (uint)param_5;
    local_c0[0] = uVar2;
    local_b8 = uVar1;
    FUN_180214c88(param_2 + 4,param_1,0x32,param_4 & 0xffffffff,local_c0,0x80);
    local_a8 = 0;
    local_b0 = 0xe4;
    local_c0[0] = uVar2;
    local_b8 = uVar1;
    FUN_180214c88(param_2 + 4,param_1,0x40,param_4 & 0xffffffff,local_c0,0x20);
    local_a8 = 0;
    local_b0 = 0xe4;
    local_c0[0] = uVar2;
    local_b8 = uVar1;
    FUN_180214c88(param_2 + 4,param_1,0x1c,param_4 & 0xffffffff,local_c0,0x20);
  }
  return;
}

