/*
 * FUN_18021a198 at 18021a198
 * undefined FUN_18021a198(void)
 * Address ranges: 18021a198-18021a1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021a198(longlong param_1,undefined8 param_2)

{
  code *extraout_x11;
  
  FUN_18020dc08(*(undefined8 *)(param_1 + 0x40),param_2,1);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(param_2);
  return;
}

