/*
 * FUN_1801887c8 at 1801887c8
 * undefined FUN_1801887c8(void)
 * Address ranges: 1801887c8-180188937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801887c8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_a0 = 0;
  local_98 = 0;
  local_b0[0] = 1;
  local_a8 = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x2f,param_9,local_b0,0x20);
  local_70 = 0;
  local_78 = CONCAT44(local_78._4_4_,param_8);
  local_88 = CONCAT44(local_88._4_4_,param_6);
  local_90 = 0;
  local_a0 = 0;
  local_a8 = param_9;
  local_b0[0] = 1;
  local_80 = param_7;
  local_98._0_4_ = param_5;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_9,local_b0,0x48);
  uVar1 = FUN_180213760(param_3 + 0x20,1,0);
  local_90 = 0;
  local_88 = 0;
  local_98._0_4_ = param_9;
  local_a0 = 0;
  local_a8 = param_9;
  local_b0[0] = 1;
  FUN_180214c88(param_3 + 0x20,param_2,0x39,uVar1,local_b0,0x30);
  local_78 = 0;
  local_70 = 0;
  local_90 = CONCAT44(local_90._4_4_,0xe4);
  local_80 = param_9;
  local_88 = local_88 & 0xffffffff00000000;
  local_a0 = 0;
  local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(param_3 + 0xb8));
  local_b0[0] = 1;
  local_a8 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x37,param_9,local_b0,0x48);
  local_a0 = 0;
  local_98 = 0;
  local_a8 = param_9;
  local_b0[0] = 1;
  FUN_180214c88(param_3 + 0x20,param_2,0x19,param_9,local_b0,0x20);
  return;
}

