/*
 * FUN_18018a670 at 18018a670
 * undefined FUN_18018a670(void)
 * Address ranges: 18018a670-18018a6c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18018a670(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  code *extraout_x11;
  
  if (*(uint *)(param_3 + 0x1a4) == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar1 = (*extraout_x11)();
    *(int *)(param_3 + 0x1a4) = (int)uVar1;
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_3 + 0x1a4);
  }
  return uVar1;
}

