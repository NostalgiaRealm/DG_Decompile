/*
 * FUN_1801b3210 at 1801b3210
 * undefined FUN_1801b3210(void)
 * Address ranges: 1801b3210-1801b359f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801b3210(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_a0 [2];
  int local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if (param_4 != 2) {
    FUN_1801b2908();
    param_4 = 2;
  }
  local_88 = *(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    local_88 = local_88 | 0x10000000;
    local_70 = 0;
    local_80 = 0;
    local_78 = 0x10;
    local_90 = 0;
    local_a0[0] = 1;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x55,param_3,local_a0,0x38);
    local_78 = 0x10;
    local_70 = 0;
    local_80._0_4_ = 1;
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
    local_a0[0] = 2;
    local_90._0_4_ = 0x55;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x55,param_3,local_a0,0x38);
    local_78 = 0x10;
    local_70 = 0;
    local_80 = CONCAT44(local_80._4_4_,2);
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
    local_90 = CONCAT44(local_90._4_4_,0xaa);
    local_a0[0] = 4;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x55,param_3,local_a0,0x38);
    local_a0[0] = 8;
    uVar2 = 0xff;
    uVar1 = 3;
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
  }
  else {
    local_a0[0] = 0xf;
    uVar2 = 0xe4;
    uVar1 = 0xe4;
  }
  local_80 = CONCAT44(local_80._4_4_,uVar1);
  local_78 = 0x10;
  local_70 = 0;
  local_90 = CONCAT44(local_90._4_4_,uVar2);
  local_98 = param_3;
  FUN_180214c88(param_2 + 0x10,param_1,0x55,param_3,local_a0,0x38);
  local_88 = *(uint *)(param_2 + 0x50);
  if (*(uint *)(param_2 + 0x10) < 0x50) {
    local_88 = local_88 | 0x10000000;
    local_70 = 0;
    local_80 = 0;
    local_78 = 0x20;
    local_90 = 0;
    local_a0[0] = 1;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,param_3,local_a0,0x38);
    local_78 = 0x20;
    local_70 = 0;
    local_80._0_4_ = 1;
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
    local_a0[0] = 2;
    local_90._0_4_ = 0x55;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,param_3,local_a0,0x38);
    local_78 = 0x20;
    local_70 = 0;
    local_80 = CONCAT44(local_80._4_4_,2);
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
    local_90 = CONCAT44(local_90._4_4_,0xaa);
    local_a0[0] = 4;
    local_98 = param_3;
    FUN_180214c88(param_2 + 0x10,param_1,0x29,param_3,local_a0,0x38);
    local_a0[0] = 8;
    uVar2 = 0xff;
    uVar1 = 3;
    local_88 = *(uint *)(param_2 + 0x50) | 0x10000000;
  }
  else {
    local_a0[0] = 0xf;
    uVar2 = 0xe4;
    uVar1 = 0xe4;
  }
  local_78 = 0x20;
  local_70 = 0;
  local_98 = param_3;
  local_80._0_4_ = uVar1;
  local_90._0_4_ = uVar2;
  FUN_180214c88(param_2 + 0x10,param_1,0x29,param_3,local_a0,0x38);
  local_78 = 0;
  local_80._0_4_ = 0xee;
  local_90 = CONCAT44(local_90._4_4_,0x44);
  local_a0[0] = 3;
  local_98 = param_3;
  local_88 = param_3;
  FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_3,local_a0,0x30);
  local_78 = 0;
  local_80 = CONCAT44(local_80._4_4_,0x55);
  local_90 = 0;
  local_a0[0] = 1;
  local_98 = param_3;
  local_88 = param_3;
  FUN_180214c88(param_2 + 0x10,param_1,0x3c,param_3,local_a0,0x30);
  local_80 = 0;
  local_78 = 0x40;
  local_88 = *(undefined4 *)(param_2 + 0x5c);
  local_70 = 0;
  local_90 = 0;
  if (param_5 == 0) {
    param_5 = param_3;
  }
  local_a0[0] = 1;
  local_98 = param_3;
  FUN_180214c88(param_2 + 0x10,param_1,1,param_5,local_a0,0x38);
  return param_4;
}

