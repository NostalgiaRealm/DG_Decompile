/*
 * FUN_18020ae08 at 18020ae08
 * undefined FUN_18020ae08(void)
 * Address ranges: 18020ae08-18020ae5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020ae08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2);
  return;
}

