/*
 * _guFbWriteRegion@24_native at 100042f0
 * undefined _guFbWriteRegion@24_native(void)
 * Address ranges: 100042f0-10004347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFbWriteRegion_24_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1001beb0();
  FUN_1001d858(auVar1._0_8_ & 0xffffffff,DAT_1009f7e4._4_4_,extraout_x11 & 0xffffffff,
               auVar1._8_8_ & 0xffffffff,DAT_1009f7c4,param_3 & 0xffffffff);
  return;
}

