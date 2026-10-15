/*
 * FUN_18013e228 at 18013e228
 * undefined FUN_18013e228(void)
 * Address ranges: 18013e228-18013e26f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18013e228(longlong param_1)

{
  code *extraout_x11;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

