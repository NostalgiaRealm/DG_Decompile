/*
 * FUN_18017c4b0 at 18017c4b0
 * undefined FUN_18017c4b0(void)
 * Address ranges: 18017c4b0-18017c7eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017c4b0(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined4 param_5,uint param_6,uint param_7,undefined4 param_8,undefined4 param_9
                  ,undefined4 param_10)

{
  uint uVar1;
  uint uVar2;
  undefined8 extraout_x1;
  undefined4 local_c0 [2];
  uint local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  uVar1 = FUN_180213760(param_3 + 0x20,1,1);
  uVar2 = FUN_180213760(param_3 + 0x20,extraout_x1,1);
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_3 + 0x49c);
  if (param_4 == 0) {
    param_4 = param_6;
  }
  local_68 = 0;
  local_70 = 0x1a4;
  local_80 = 0x40000000;
  local_88._0_4_ = 0x40000000;
  local_90 = 0x40000000;
  local_98 = CONCAT44(local_98._4_4_,0x40000000);
  local_b0._0_4_ = 0x1a4;
  local_c0[0] = 7;
  local_b8 = param_7;
  local_78._0_4_ = param_8;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_5,local_c0,0x60);
  local_98 = 0;
  local_a0 = 0x1a4;
  local_b0._0_4_ = 0x1a4;
  local_a8 = param_7 | 0x80000000;
  local_c0[0] = 7;
  local_b8 = param_8;
  FUN_180214c88(param_3 + 0x20,param_2,0,param_4,local_c0,0x30);
  local_98 = 0;
  local_a0 = 0xa4;
  local_b0._0_4_ = 0xa4;
  local_a8 = param_9;
  local_c0[0] = 1;
  local_b8 = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar1,local_c0,0x30);
  local_b8 = param_4 | 0x80000000;
  local_98 = 0;
  local_a0 = 0xa4;
  local_a8 = param_10;
  local_b0._0_4_ = 0xa4;
  local_c0[0] = 1;
  FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar2,local_c0,0x30);
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_3 + 0x49c);
  local_68 = 0;
  local_70 = 0x1a4;
  local_78 = CONCAT44(local_78._4_4_,param_7);
  local_80 = 0x40000000;
  local_88 = CONCAT44(local_88._4_4_,0x40000000);
  local_90 = 0x40000000;
  local_98._0_4_ = 0x40000000;
  local_b0 = CONCAT44(local_b0._4_4_,0x1a4);
  local_c0[0] = 7;
  local_b8 = param_8;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_6,local_c0,0x60);
  local_88 = 0;
  local_90 = 0x1a4;
  local_b8 = uVar1 | 0x80000000;
  local_a0 = 0x1a4;
  local_a8 = param_9;
  local_b0 = 0;
  local_c0[0] = 7;
  local_98._0_4_ = param_5;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_5,local_c0,0x40);
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_3 + 0x49c);
  local_78 = 0;
  local_b0 = CONCAT44(local_b0._4_4_,0x1a4);
  local_80 = 0x3eaaaaab;
  local_88 = CONCAT44(local_88._4_4_,0x3eaaaaab);
  local_90 = 0x3eaaaaab;
  local_98._0_4_ = 0x3eaaaaab;
  local_c0[0] = 7;
  local_b8 = param_5;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_5,local_c0,0x50);
  local_88 = 0;
  local_90 = 0x1a4;
  local_b8 = uVar2 | 0x80000000;
  local_a0 = 0x1a4;
  local_a8 = param_10;
  local_b0 = 0;
  local_c0[0] = 7;
  local_98._0_4_ = param_6;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_6,local_c0,0x40);
  local_78 = 0;
  local_a0 = 0xe4;
  local_a8 = *(undefined4 *)(param_3 + 0x49c);
  local_80 = 0x3eaaaaab;
  local_88 = CONCAT44(local_88._4_4_,0x3eaaaaab);
  local_90 = 0x3eaaaaab;
  local_98 = CONCAT44(local_98._4_4_,0x3eaaaaab);
  local_b0 = CONCAT44(local_b0._4_4_,0x1a4);
  local_c0[0] = 7;
  local_b8 = param_6;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_6,local_c0,0x50);
  FUN_180213800(param_3 + 0x20,uVar1);
  FUN_180213800(param_3 + 0x20,uVar2);
  return;
}

