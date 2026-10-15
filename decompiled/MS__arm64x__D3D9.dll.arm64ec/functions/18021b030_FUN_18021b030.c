/*
 * FUN_18021b030 at 18021b030
 * undefined FUN_18021b030(void)
 * Address ranges: 18021b030-18021b067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18021b030(longlong param_1)

{
  longlong lVar1;
  code *extraout_x11;
  
  lVar1 = *(longlong *)(param_1 + 8);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(lVar1 + 0x6b0);
  return;
}

