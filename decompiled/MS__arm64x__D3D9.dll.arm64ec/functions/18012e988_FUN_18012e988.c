/*
 * FUN_18012e988 at 18012e988
 * undefined FUN_18012e988(void)
 * Address ranges: 18012e988-18012e9d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012e988(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar1 = (*extraout_x11)();
  if (lVar1 != 0) {
    thunk_FUN_180223e28(lVar1,param_2,param_3);
  }
  return;
}

