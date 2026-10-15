/*
 * FUN_18021ce08 at 18021ce08
 * undefined FUN_18021ce08(void)
 * Address ranges: 18021ce08-18021ce4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021ce08(longlong param_1)

{
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

