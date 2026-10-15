/*
 * FUN_18013dfd8 at 18013dfd8
 * undefined FUN_18013dfd8(void)
 * Address ranges: 18013dfd8-18013e027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013dfd8(longlong param_1)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
    (*extraout_x11)(uVar1,*(undefined8 *)(extraout_x8 + 0x20),0);
  }
  return;
}

