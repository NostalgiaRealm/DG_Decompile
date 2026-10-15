/*
 * FUN_1802105d8 at 1802105d8
 * undefined FUN_1802105d8(void)
 * Address ranges: 1802105d8-180210613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802105d8(longlong param_1)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_1 != 0x40) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,1);
  }
  return;
}

