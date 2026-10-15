/*
 * FUN_18020a130 at 18020a130
 * undefined FUN_18020a130(void)
 * Address ranges: 18020a130-18020a1a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18020a130(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  FUN_180222c50(param_1 + 0x20,0,0x660);
  *(undefined4 *)(param_1 + 0x670) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x668) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x66c) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
  *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,param_2);
  return;
}

