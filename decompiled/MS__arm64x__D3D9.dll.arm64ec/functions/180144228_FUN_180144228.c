/*
 * FUN_180144228 at 180144228
 * undefined FUN_180144228(void)
 * Address ranges: 180144228-18014428b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180144228(longlong *param_1)

{
  code *extraout_x11;
  longlong lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_18020d9f8(*(undefined8 *)(*param_1 + 0x1b500),lVar1,0,0);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(lVar1,1);
  }
  return;
}

