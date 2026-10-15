/*
 * FUN_1801a8248 at 1801a8248
 * undefined FUN_1801a8248(void)
 * Address ranges: 1801a8248-1801a8287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a8248(longlong *param_1)

{
  longlong lVar1;
  code *extraout_x11;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar1 + 0x100,1);
  }
  return;
}

