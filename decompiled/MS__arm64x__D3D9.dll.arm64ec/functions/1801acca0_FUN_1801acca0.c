/*
 * FUN_1801acca0 at 1801acca0
 * undefined FUN_1801acca0(void)
 * Address ranges: 1801acca0-1801acce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801acca0(longlong *param_1)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (*(int *)(*param_1 + 0x38) != 0) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,0,0);
  }
  return;
}

