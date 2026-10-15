/*
 * FUN_180209ca8 at 180209ca8
 * undefined FUN_180209ca8(void)
 * Address ranges: 180209ca8-180209d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209ca8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4,param_5);
  FUN_180206fa8(param_1);
  return;
}

