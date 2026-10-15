/*
 * FUN_1802099e0 at 1802099e0
 * undefined FUN_1802099e0(void)
 * Address ranges: 1802099e0-180209a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802099e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2,param_3);
  FUN_180206fa8(param_1);
  return;
}

