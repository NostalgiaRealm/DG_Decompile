/*
 * FUN_18012f2d0 at 18012f2d0
 * undefined FUN_18012f2d0(void)
 * Address ranges: 18012f2d0-18012f317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012f2d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x1;
  code *extraout_x11;
  
  if (*(longlong *)(DAT_18024d950 + 0x78) == 0) {
    thunk_FUN_180223edc(param_2);
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(extraout_x1);
  }
  return;
}

