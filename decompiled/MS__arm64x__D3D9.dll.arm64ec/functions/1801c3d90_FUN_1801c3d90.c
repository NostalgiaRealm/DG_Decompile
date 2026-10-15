/*
 * FUN_1801c3d90 at 1801c3d90
 * undefined FUN_1801c3d90(void)
 * Address ranges: 1801c3d90-1801c3def
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801c3d90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  code *extraout_x11;
  
  (*(code *)__hybrid_os_arm64x_dispatch_icall)
            (0x180224000,*(undefined8 *)(param_1 + 0x28),param_3,param_4);
  (*extraout_x11)();
  return;
}

