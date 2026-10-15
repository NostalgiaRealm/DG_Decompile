/*
 * FUN_180208d98 at 180208d98
 * undefined FUN_180208d98(void)
 * Address ranges: 180208d98-180208e0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208d98(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206ff8();
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4,param_5);
  return;
}

