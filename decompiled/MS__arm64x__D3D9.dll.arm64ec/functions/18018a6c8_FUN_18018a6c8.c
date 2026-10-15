/*
 * FUN_18018a6c8 at 18018a6c8
 * undefined FUN_18018a6c8(void)
 * Address ranges: 18018a6c8-18018a71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18018a6c8(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  code *extraout_x11;
  
  if (*(uint *)(param_3 + 0x1a8) == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar1 = (*extraout_x11)();
    *(int *)(param_3 + 0x1a8) = (int)uVar1;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_3 + 0x1a8);
  }
  return uVar1;
}

