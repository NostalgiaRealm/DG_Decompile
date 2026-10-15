/*
 * FUN_18017c7f8 at 18017c7f8
 * undefined FUN_18017c7f8(void)
 * Address ranges: 18017c7f8-18017caf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017c7f8(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 local_c0 [2];
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  uint local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  uVar1 = FUN_180213760(param_3 + 0x20,3,1);
  auVar5 = FUN_180213760(param_3 + 0x20,1,1);
  uVar3 = auVar5._0_8_;
  uVar2 = FUN_180213760(param_3 + 0x20,auVar5._8_8_,1);
  if (*(char *)(param_3 + 0x53e) == '\0') {
    local_98 = 0;
    local_a0 = CONCAT44(local_a0._4_4_,0x1a4);
    local_b0 = CONCAT44(local_b0._4_4_,0x1a4);
    local_a8 = CONCAT44(local_a8._4_4_,param_6) | 0x80000000;
    local_c0[0] = 7;
    local_b8 = param_5;
    FUN_180214c88(param_3 + 0x20,param_2,0);
  }
  local_98 = 0;
  local_a0._0_4_ = 0x1a4;
  local_b0._0_4_ = 0x1a4;
  local_c0[0] = 7;
  local_b8 = param_7;
  local_a8._0_4_ = param_8;
  FUN_180214c88(param_3 + 0x20,param_2,0,uVar1,local_c0,0x30);
  local_98 = 0;
  local_a0._0_4_ = 0xa4;
  local_b0._0_4_ = 0xa4;
  local_c0[0] = 1;
  local_b8 = param_4;
  local_a8._0_4_ = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar3 & 0xffffffff,local_c0,0x30);
  local_98 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,0xa4);
  local_b0._0_4_ = 0xa4;
  local_c0[0] = 1;
  local_b8 = param_4;
  local_a8._0_4_ = param_4;
  FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar2,local_c0,0x30);
  local_c0[0] = 7;
  local_a0 = 0;
  local_98 = 0;
  uVar4 = auVar5._0_4_;
  local_b0._0_4_ = 0x1a4;
  local_b8 = param_4;
  local_a8._0_4_ = uVar4;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_4,local_c0,0x30);
  local_a0 = 0;
  local_98 = 0;
  local_b0._0_4_ = 0x1a4;
  local_c0[0] = 7;
  local_b8 = param_4;
  local_a8._0_4_ = uVar2;
  FUN_180214c88(param_3 + 0x20,param_2,0xe,param_4,local_c0,0x30);
  local_78 = param_4 | 0x80000000;
  local_68 = 0;
  local_80 = 0x3f000000;
  local_88 = 0x3f000000;
  local_90 = 0x3f000000;
  local_98 = CONCAT44(local_98._4_4_,0x3f000000);
  local_70 = 0x1a4;
  local_a0._0_4_ = 0xe4;
  local_a8._0_4_ = *(undefined4 *)(param_3 + 0x49c);
  local_b0._0_4_ = 0x1a4;
  local_c0[0] = 7;
  local_b8 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar1,local_c0,0x60);
  local_98 = 0;
  local_a0 = CONCAT44(local_a0._4_4_,0xa4);
  local_b0 = CONCAT44(local_b0._4_4_,0xa4);
  local_c0[0] = 1;
  local_a8 = CONCAT44(local_a8._4_4_,uVar1);
  local_b8 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x10,uVar3 & 0xffffffff,local_c0,0x30);
  local_b0 = 0;
  local_a8 = 0;
  local_c0[0] = 1;
  local_b8 = uVar4;
  FUN_180214c88(param_3 + 0x20,param_2,0x44,uVar3 & 0xffffffff,local_c0,0x20);
  local_a0 = 0;
  local_98 = 0;
  local_c0[0] = 7;
  local_a8 = CONCAT44(local_a8._4_4_,uVar4);
  local_b0 = CONCAT44(local_b0._4_4_,0x1a4);
  local_b8 = uVar1;
  FUN_180214c88(param_3 + 0x20,param_2,0x38,param_4,local_c0,0x30);
  FUN_180213800(param_3 + 0x20,uVar1);
  FUN_180213800(param_3 + 0x20,uVar3 & 0xffffffff);
  FUN_180213800(param_3 + 0x20,uVar2);
  return;
}

