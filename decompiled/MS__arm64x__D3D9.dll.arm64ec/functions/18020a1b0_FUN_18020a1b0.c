/*
 * FUN_18020a1b0 at 18020a1b0
 * undefined FUN_18020a1b0(void)
 * Address ranges: 18020a1b0-18020a24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020a1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_180206fa8(param_1);
  return;
}

