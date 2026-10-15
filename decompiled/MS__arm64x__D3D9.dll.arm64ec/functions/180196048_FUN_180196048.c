/*
 * FUN_180196048 at 180196048
 * undefined FUN_180196048(void)
 * Address ranges: 180196048-180196103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180196048(void)

{
  longlong lVar1;
  longlong in_x3;
  undefined8 *extraout_x8;
  code *extraout_x11;
  undefined1 auVar2 [16];
  
  lVar1 = 0x40;
  if (in_x3 != 0) {
    lVar1 = in_x3 + 0x20;
  }
  auVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(lVar1);
  (*extraout_x11)(auVar2._0_8_,*extraout_x8,auVar2._8_8_ & 0xffffffff);
  return 1;
}

