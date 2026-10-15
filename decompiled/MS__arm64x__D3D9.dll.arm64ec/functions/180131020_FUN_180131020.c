/*
 * FUN_180131020 at 180131020
 * undefined FUN_180131020(void)
 * Address ranges: 180131020-180131067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180131020(void)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  (*extraout_x11)(uVar1,*(undefined4 *)(extraout_x8 + 0x94),*(undefined4 *)(extraout_x8 + 0x98),
                  *(undefined8 *)(extraout_x8 + 0x28),*(undefined4 *)(extraout_x8 + 0x18));
  return;
}

