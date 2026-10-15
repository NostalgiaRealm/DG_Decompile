/*
 * FUN_18020a990 at 18020a990
 * undefined FUN_18020a990(void)
 * Address ranges: 18020a990-18020a9e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020a990(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2);
  return;
}

