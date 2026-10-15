/*
 * FUN_1801dfaf8 at 1801dfaf8
 * undefined FUN_1801dfaf8(void)
 * Address ranges: 1801dfaf8-1801dfb67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1801dfaf8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  code *extraout_x11;
  
  uVar1 = FUN_1801042e0(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (uVar1 == 1) {
      FUN_1801042e0(*(longlong *)(param_1 + 0x38) + 0x6844);
    }
    uVar2 = (ulonglong)uVar1;
  }
  else {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar2 = (*extraout_x11)();
  }
  return uVar2;
}

