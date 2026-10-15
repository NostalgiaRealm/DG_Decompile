/*
 * FUN_180209c08 at 180209c08
 * undefined FUN_180209c08(void)
 * Address ranges: 180209c08-180209ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209c08(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_2);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(param_1,uVar1,param_3,param_4,param_5,param_6,param_7);
  FUN_180206fa8(param_2);
  return;
}

