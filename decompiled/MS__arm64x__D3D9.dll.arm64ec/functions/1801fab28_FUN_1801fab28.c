/*
 * FUN_1801fab28 at 1801fab28
 * undefined FUN_1801fab28(void)
 * Address ranges: 1801fab28-1801fab5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fab28(longlong param_1)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (param_1 != 0) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,1);
  }
  return;
}

