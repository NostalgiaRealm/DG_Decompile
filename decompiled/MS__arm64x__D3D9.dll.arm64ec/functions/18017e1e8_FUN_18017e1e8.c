/*
 * FUN_18017e1e8 at 18017e1e8
 * undefined FUN_18017e1e8(void)
 * Address ranges: 18017e1e8-18017e46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18017e1e8(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 local_90 [2];
  int local_88;
  undefined4 local_80;
  int local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  
  uVar1 = FUN_180213760(param_3 + 0x20,3,1);
  local_88 = *(undefined4 *)(param_3 + 0x4b0);
  local_68 = 0;
  local_70 = CONCAT44(local_70._4_4_,0xa6);
  local_80 = 1;
  local_90[0] = 7;
  local_78 = local_88;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar1,local_90,0x30);
  if (param_4 == 0) {
    param_4 = FUN_180213760(param_3 + 0x20,4,1);
  }
  local_88 = *(undefined4 *)(param_3 + 0x518);
  local_70 = 0;
  local_68 = 0;
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_78 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_4,local_90,0x30);
  local_58 = 0;
  local_70._0_4_ = 0x55;
  local_88 = *(undefined4 *)(param_3 + 0x51c);
  local_60 = 0x1a4;
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_78 = uVar1;
  local_68._0_4_ = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  local_88 = *(undefined4 *)(param_3 + 0x514);
  local_58 = 0;
  local_60 = 0x1a4;
  local_68 = CONCAT44(local_68._4_4_,param_4);
  local_70._0_4_ = 0xaa;
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_78 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  local_68 = 0;
  local_70._0_4_ = 0x1a4;
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_88 = param_4;
  local_78 = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0,param_4,local_90,0x30);
  local_70._0_4_ = 0x55;
  local_78 = *(undefined4 *)(param_3 + 0x4b4);
  local_58 = 0;
  local_60 = 0x1a4;
  local_88 = *(undefined4 *)(param_3 + 0x50c);
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_68._0_4_ = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  local_58 = 0;
  local_60 = 0x1a4;
  local_78 = *(undefined4 *)(param_3 + 0x4b4);
  local_70 = CONCAT44(local_70._4_4_,0xaa);
  local_80 = 0x1a4;
  local_90[0] = 7;
  local_88 = *(undefined4 *)(param_3 + 0x510);
  local_68._0_4_ = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  local_78 = *(undefined4 *)(param_3 + 0x4b4);
  local_58 = 0;
  local_60 = 0x1a4;
  local_68 = CONCAT44(local_68._4_4_,param_4);
  local_88 = *(undefined4 *)(param_3 + 0x508);
  local_70 = 0;
  local_80 = 0x1a4;
  local_90[0] = 7;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,param_4,local_90,0x40);
  FUN_180213800(param_3 + 0x20,uVar1);
  return param_4;
}

