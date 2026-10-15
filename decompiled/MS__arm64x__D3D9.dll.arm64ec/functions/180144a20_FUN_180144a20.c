/*
 * FUN_180144a20 at 180144a20
 * undefined FUN_180144a20(void)
 * Address ranges: 180144a20-180144a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180144a20(longlong param_1)

{
  longlong lVar1;
  code *extraout_x11;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10)
  ;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar1 + 0x40);
  return;
}

