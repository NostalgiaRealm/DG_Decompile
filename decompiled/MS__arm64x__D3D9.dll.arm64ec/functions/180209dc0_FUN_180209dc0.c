/*
 * FUN_180209dc0 at 180209dc0
 * undefined FUN_180209dc0(void)
 * Address ranges: 180209dc0-180209e33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209dc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4);
  FUN_180206fa8(param_1);
  return;
}

