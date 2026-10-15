/*
 * _grTexDownloadMipMapLevel@32_native at 10004c20
 * undefined _grTexDownloadMipMapLevel@32_native(void)
 * Address ranges: 10004c20-10004cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
               ulonglong param_5,ulonglong param_6,ulonglong param_7,undefined4 param_8)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_100093b8();
  FUN_1000c2d8(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,param_6 & 0xffffffff,
               param_7 & 0xffffffff,param_8);
  return;
}

