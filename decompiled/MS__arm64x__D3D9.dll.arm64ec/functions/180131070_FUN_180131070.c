/*
 * FUN_180131070 at 180131070
 * undefined FUN_180131070(void)
 * Address ranges: 180131070-1801310b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180131070(void)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  (*extraout_x11)(uVar1,*(undefined4 *)(extraout_x8 + 0x94),*(undefined4 *)(extraout_x8 + 0x98),
                  *(undefined8 *)(extraout_x8 + 0x28),*(undefined4 *)(extraout_x8 + 0x18));
  return;
}

