/*
 * FUN_18011abe8 at 18011abe8
 * undefined FUN_18011abe8(void)
 * Address ranges: 18011abe8-18011ac2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011abe8(void)

{
  undefined8 uVar1;
  longlong extraout_x8;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
  (*extraout_x11)(uVar1,*(undefined4 *)(extraout_x8 + 0xb4),*(undefined8 *)(extraout_x8 + 0x28),
                  *(undefined4 *)(extraout_x8 + 0x18),*(undefined4 *)(extraout_x8 + 0x1c));
  return;
}

