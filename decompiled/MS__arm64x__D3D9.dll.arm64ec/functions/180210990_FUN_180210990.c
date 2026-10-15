/*
 * FUN_180210990 at 180210990
 * undefined FUN_180210990(void)
 * Address ranges: 180210990-1802109e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180210990(longlong param_1)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if (*(int *)(param_1 + -0xc) != 0) {
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,0,0);
    *(undefined4 *)(param_1 + -0xc) = 0;
  }
  return;
}

