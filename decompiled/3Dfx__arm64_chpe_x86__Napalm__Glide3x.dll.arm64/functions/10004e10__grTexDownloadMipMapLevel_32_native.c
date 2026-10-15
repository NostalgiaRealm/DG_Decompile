/*
 * _grTexDownloadMipMapLevel@32_native at 10004e10
 * undefined _grTexDownloadMipMapLevel@32_native(void)
 * Address ranges: 10004e10-10004e9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
               ulonglong param_5,ulonglong param_6,ulonglong param_7,undefined4 param_8)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1000ae60();
  FUN_1000e278(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,param_6 & 0xffffffff,
               param_7 & 0xffffffff,param_8);
  return;
}

