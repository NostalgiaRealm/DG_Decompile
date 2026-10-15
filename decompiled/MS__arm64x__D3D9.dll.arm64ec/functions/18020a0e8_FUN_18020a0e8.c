/*
 * FUN_18020a0e8 at 18020a0e8
 * undefined FUN_18020a0e8(void)
 * Address ranges: 18020a0e8-18020a127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18020a0e8(longlong param_1)

{
  code *extraout_x11;
  
  if (*(longlong *)(param_1 + 0xb10) == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
  }
  return 0x80004005;
}

