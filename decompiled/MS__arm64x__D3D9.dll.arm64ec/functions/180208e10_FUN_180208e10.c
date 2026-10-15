/*
 * FUN_180208e10 at 180208e10
 * undefined FUN_180208e10(void)
 * Address ranges: 180208e10-180208e83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180208e10(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206ff8();
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4,param_5);
  return;
}

