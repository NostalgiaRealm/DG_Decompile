/*
 * FUN_18012f1a8 at 18012f1a8
 * undefined FUN_18012f1a8(void)
 * Address ranges: 18012f1a8-18012f20f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18012f1a8(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  code *extraout_x11;
  
  uVar1 = FUN_18012ec60();
  FUN_18012eda8(param_1,1,uVar1);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  lVar2 = (*extraout_x11)(param_1);
  if (lVar2 != 0) {
    thunk_FUN_180223d88(lVar2,0x20,0,0);
  }
  return;
}

