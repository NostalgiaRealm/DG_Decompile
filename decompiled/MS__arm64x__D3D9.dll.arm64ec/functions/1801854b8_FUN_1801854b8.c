/*
 * FUN_1801854b8 at 1801854b8
 * undefined FUN_1801854b8(void)
 * Address ranges: 1801854b8-1801856c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801854b8(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_90 [2];
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_88 = param_7;
  uVar2 = FUN_180213760(param_3 + 0x20,1,0);
  if (param_6 == 0) {
    param_6 = param_4;
  }
  lVar1 = param_3 + 0x20;
  if (local_88 == 0) {
    local_58 = 0;
    local_68 = CONCAT44(local_68._4_4_,0xe4);
    local_80 = CONCAT44(local_80._4_4_,0xe4);
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    local_70 = CONCAT44(local_70._4_4_,param_4);
    local_78 = CONCAT44(local_78._4_4_,0xffffffff);
    local_90[0] = 1;
    local_88 = param_4;
    FUN_180214c88(lVar1,param_2,0x10,uVar2,local_90,0x40);
    local_80 = 0;
    local_78 = 0;
    local_90[0] = 1;
    local_88 = uVar2;
    FUN_180214c88(param_3 + 0x20,param_2,0x44,uVar2,local_90,0x20);
  }
  else if (*(int *)(param_3 + 0x20) == 0x10040) {
    local_70 = CONCAT44(local_70._4_4_,local_88);
    local_80 = CONCAT44(local_80._4_4_,0xe4);
    local_88 = *(undefined4 *)(param_3 + 0xb8);
    local_58 = 0;
    local_60 = CONCAT44(local_60._4_4_,0xffffffff);
    local_68 = 0;
    local_78 = CONCAT44(local_78._4_4_,0x3f800000);
    local_90[0] = 1;
    FUN_180214c88(lVar1,param_2,0xe,uVar2,local_90,0x40);
  }
  else {
    local_70 = 0;
    local_78 = CONCAT44(local_78._4_4_,0xffffffff);
    local_80 = 0;
    local_90[0] = 1;
    FUN_180214c88(lVar1,param_2,0x81,uVar2,local_90,0x28);
  }
  local_78._0_4_ = 0xffffffff;
  local_80 = CONCAT44(local_80._4_4_,0x1e4);
  local_90[0] = 7;
  local_68 = 0;
  local_60 = 0;
  local_88 = param_4;
  local_70._0_4_ = uVar2;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_6,local_90,0x38);
  local_60 = 0;
  local_68 = CONCAT44(local_68._4_4_,0x7f800000);
  local_70 = CONCAT44(local_70._4_4_,0xe4);
  local_78._0_4_ = *(undefined4 *)(param_3 + 0xb8);
  local_80 = 0;
  local_90[0] = 1;
  local_88 = uVar2;
  FUN_180214c88(param_3 + 0x20,param_2,0x27,uVar2,local_90,0x38);
  local_70 = 0;
  local_68 = 0;
  local_78 = CONCAT44(local_78._4_4_,uVar2);
  local_80 = CONCAT44(local_80._4_4_,0x1e4);
  local_90[0] = 7;
  local_88 = param_6;
  FUN_180214c88(param_3 + 0x20,param_2,1,param_6,local_90,0x30);
  FUN_180213800(param_3 + 0x20,uVar2);
  return;
}

