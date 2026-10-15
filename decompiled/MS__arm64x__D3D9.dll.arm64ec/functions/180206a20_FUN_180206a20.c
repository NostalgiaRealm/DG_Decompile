/*
 * FUN_180206a20 at 180206a20
 * undefined FUN_180206a20(void)
 * Address ranges: 180206a20-180206a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180206a20(longlong param_1,longlong param_2)

{
  code *extraout_x11;
  
  if (param_2 != 0) {
    FUN_18020dc08(*(undefined8 *)(param_1 + 0x1b500),param_2,1);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_2);
  }
  return;
}

