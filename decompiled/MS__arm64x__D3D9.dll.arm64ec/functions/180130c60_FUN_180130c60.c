/*
 * FUN_180130c60 at 180130c60
 * undefined FUN_180130c60(void)
 * Address ranges: 180130c60-180130c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180130c60(void)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  (*extraout_x11)(uVar1,*(undefined4 *)(extraout_x8 + 0x94),*(undefined4 *)(extraout_x8 + 0x98));
  return;
}

