/*
 * FUN_18016ded8 at 18016ded8
 * undefined FUN_18016ded8(void)
 * Address ranges: 18016ded8-18016e08b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016ded8(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  if ((param_5 >> 0x3c & 1) != 0) {
    uVar1 = FUN_180213760(param_2,4,0);
    local_78 = 0;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_88 = param_4;
    FUN_180214c88(param_2,param_3,0x2036,uVar1,local_90,0x20);
    local_48 = 0;
    local_70 = 0xe4;
    local_50 = 0x437f0000;
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0xac));
    local_58 = 0x437f0000;
    local_60 = CONCAT44(local_60._4_4_,0x437f0000);
    local_68 = CONCAT44(local_68._4_4_,0x437f0000);
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_88 = uVar1;
    FUN_180214c88(param_2,param_3,0x38,uVar1,local_90,0x50);
    local_78 = 0;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_88 = uVar1;
    FUN_180214c88(param_2,param_3,0x1c,uVar1,local_90,0x20);
    local_70 = 0xe4;
    local_68 = 0xb0;
    local_60 = 0;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x68));
    local_88 = uVar1;
    FUN_180214c88(param_2,param_3,1,uVar1,local_90,0x38);
    local_78 = 0;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_88 = uVar1;
    FUN_180214c88(param_2,param_3,0x56,uVar1,local_90,0x20);
    local_48 = 0;
    local_50 = 0x3b808081;
    local_58 = 0x3b808081;
    local_60 = CONCAT44(local_60._4_4_,0x3b808081);
    local_68 = CONCAT44(local_68._4_4_,0x3b808081);
    local_70 = 0xe4;
    local_80 = 0xe4;
    local_90[0] = 0xf;
    local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0xac));
    local_88 = uVar1;
    FUN_180214c88(param_2,param_3,0x38,param_4,local_90,0x50);
  }
  return;
}

