/*
 * FUN_18020a600 at 18020a600
 * undefined FUN_18020a600(void)
 * Address ranges: 18020a600-18020a6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020a600(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180206f40();
  FUN_180206ff8(param_1);
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180225000);
  (*extraout_x11)(uVar1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0x674) = 1;
  FUN_180206fa8(param_1);
  return;
}

