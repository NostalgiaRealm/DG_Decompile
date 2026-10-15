/*
 * FUN_1801b2c88 at 1801b2c88
 * undefined FUN_1801b2c88(void)
 * Address ranges: 1801b2c88-1801b2fab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b2c88(undefined8 param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined4 local_70;
  int local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  bVar4 = (*param_2 & 0x400) != 0;
  lVar2 = 5;
  if (bVar4) {
    lVar2 = 7;
  }
  lVar3 = 6;
  if (bVar4) {
    lVar3 = 8;
  }
  uVar1 = (uint)(*(char *)((longlong)param_2 + lVar2) != '\0') |
          (uint)(*(char *)((longlong)param_2 + lVar3) != '\0') << 1;
  if (uVar1 - 1 < 2) {
    uVar6 = FUN_180213760(param_2 + 4,1,0);
    uVar5 = 0x155;
    if (param_3 != 0) {
      local_60 = 0x100;
      if (uVar1 != 1) {
        local_60 = uVar5;
      }
      local_58 = 0;
      local_70 = 0;
      local_90._0_4_ = 0xe4;
      local_78 = local_78 & 0xffffffff00000000;
      local_80 = local_80 & 0xffffffff00000000;
      local_88 = 0;
      local_a0[0] = 1;
      local_68 = param_3;
      local_98._0_4_ = param_2[0x19];
      FUN_180214c88(param_2 + 4,param_1,0x1d,uVar6,local_a0,0x50);
      local_80 = 0;
      local_78 = 0;
      local_a0[0] = 2;
      if (uVar1 != 1) {
        local_a0[0] = 4;
      }
      local_98 = CONCAT44(local_98._4_4_,param_4);
      local_90 = CONCAT44(local_90._4_4_,0x1e4);
      local_88 = uVar6;
      FUN_180214c88(param_2 + 4,param_1,0x3c,param_4,local_a0,0x30);
    }
    local_78 = 0;
    if (uVar1 != 1) {
      uVar5 = 0x1aa;
    }
    local_80 = CONCAT44(local_80._4_4_,uVar5);
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,param_4);
    local_a0[0] = 1;
    local_88 = param_4;
    FUN_180214c88(param_2 + 4,param_1,1,param_4,local_a0,0x30);
  }
  else if (uVar1 == 3) {
    uVar5 = FUN_180213760(param_2 + 4,2,0);
    if (param_3 != 0) {
      local_60 = 0x154;
      local_58 = 0;
      local_70 = 0;
      local_78 = local_78 & 0xffffffff00000000;
      local_80 = local_80 & 0xffffffff00000000;
      local_88 = 0;
      local_90._0_4_ = 0xe4;
      local_a0[0] = 3;
      local_68 = param_3;
      local_98._0_4_ = param_2[0x19];
      FUN_180214c88(param_2 + 4,param_1,0x1d,uVar5,local_a0,0x50);
      local_a0[0] = 10;
      local_80 = 0;
      local_78 = 0;
      local_90._0_4_ = 0xe4;
      local_88 = uVar5;
      local_98._0_4_ = param_4;
      FUN_180214c88(param_2 + 4,param_1,0x3c,param_4,local_a0,0x30);
      local_78 = 0;
      local_a0[0] = 0xc;
      local_80 = CONCAT44(local_80._4_4_,0x55);
      local_90 = CONCAT44(local_90._4_4_,0xe4);
      local_98 = CONCAT44(local_98._4_4_,param_4);
      local_88 = uVar5;
      FUN_180214c88(param_2 + 4,param_1,0x3c,param_4,local_a0,0x30);
    }
    local_78 = 0;
    local_80._0_4_ = 0xfe;
    local_90 = CONCAT44(local_90._4_4_,0x54);
    local_a0[0] = 3;
    local_88 = param_4;
    local_98._0_4_ = param_4;
    FUN_180214c88(param_2 + 4,param_1,1,param_4,local_a0,0x30);
    local_78 = 0;
    local_a0[0] = 1;
    local_80 = CONCAT44(local_80._4_4_,0x55);
    local_90 = 0;
    local_98 = CONCAT44(local_98._4_4_,param_4);
    local_88 = param_4;
    FUN_180214c88(param_2 + 4,param_1,1,param_4,local_a0,0x30);
  }
  local_98 = 0;
  local_90 = 0;
  local_a0[0] = param_4 | 0x10000000;
  FUN_180214c88(param_2 + 4,param_1,~((*param_2 >> 0xc) << 0x12) & 0x40000 | 0xd,0xffffffff,local_a0
                ,0x18);
  return;
}

