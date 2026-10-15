/*
 * FUN_180209fa8 at 180209fa8
 * undefined FUN_180209fa8(void)
 * Address ranges: 180209fa8-18020a00b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209fa8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206ff8();
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4);
  return;
}

