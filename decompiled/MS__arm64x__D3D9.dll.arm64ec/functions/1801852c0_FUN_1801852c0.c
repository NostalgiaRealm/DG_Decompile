/*
 * FUN_1801852c0 at 1801852c0
 * undefined FUN_1801852c0(void)
 * Address ranges: 1801852c0-1801854b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801852c0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  int param_5,int param_6,uint param_7,uint param_8,uint param_9)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 local_b0 [2];
  uint local_a8;
  undefined4 local_a0;
  uint local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  
  uVar1 = param_7 | (uint)(param_7 != 0) << 0x1c;
  param_9 = param_9 | (uint)(param_7 != 0) << 0x1e;
  uVar2 = param_4 & 0xffffffff;
  if (param_5 == 0) {
    local_b0[0] = 1;
    local_a0 = 0xff;
    local_88 = 0;
    local_80 = 0;
    local_a8 = param_9;
    local_98 = param_6;
    local_90 = uVar1;
    FUN_180214c88(param_3 + 0x20,param_2,0x36,param_4,local_b0,0x38);
    local_88 = 0;
    local_80 = 0;
    local_a0 = 0xff;
    local_b0[0] = 2;
    local_a8 = param_9;
    local_98 = param_6 + 0x10;
    local_90 = uVar1;
    FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar2,local_b0,0x38);
    local_88 = 0;
    local_80 = 0;
    local_b0[0] = 4;
    local_a0 = 0xff;
    local_a8 = param_9;
    local_98 = param_6 + 0x20;
    local_90 = uVar1;
    FUN_180214c88(param_3 + 0x20,param_2,0x36,uVar2,local_b0,0x38);
  }
  else {
    param_8 = param_8 & 0xff;
    local_90 = 0xe4;
    local_a0 = 0xe4;
    local_b0[0] = 1;
    local_70 = 0;
    local_a8 = param_5;
    local_98 = param_9;
    local_78 = param_8;
    local_80._0_4_ = uVar1;
    local_88._0_4_ = param_6;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,param_4,local_b0,0x48);
    local_70 = 0;
    local_90 = 0xe4;
    local_a0 = 0xe4;
    local_b0[0] = 2;
    local_a8 = param_5;
    local_98 = param_9;
    local_78 = param_8;
    local_80._0_4_ = uVar1;
    local_88._0_4_ = param_6 + 0x10;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar2,local_b0,0x48);
    local_70 = 0;
    local_80 = CONCAT44(local_80._4_4_,uVar1);
    local_88 = CONCAT44(local_88._4_4_,param_6 + 0x20);
    local_90 = 0xe4;
    local_a0 = 0xe4;
    local_b0[0] = 4;
    local_a8 = param_5;
    local_98 = param_9;
    local_78 = param_8;
    FUN_180214c88(param_3 + 0x20,param_2,0x11,uVar2,local_b0,0x48);
  }
  return;
}

