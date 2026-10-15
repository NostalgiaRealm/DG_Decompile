/*
 * FUN_18020a9e8 at 18020a9e8
 * undefined FUN_18020a9e8(void)
 * Address ranges: 18020a9e8-18020aa53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020a9e8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4);
  return;
}

