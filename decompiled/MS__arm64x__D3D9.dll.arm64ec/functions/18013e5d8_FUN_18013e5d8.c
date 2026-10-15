/*
 * FUN_18013e5d8 at 18013e5d8
 * undefined FUN_18013e5d8(void)
 * Address ranges: 18013e5d8-18013e627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013e5d8(longlong param_1)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
    (*extraout_x11)(uVar1,*(undefined8 *)(extraout_x8 + 0x18),0);
  }
  return;
}

