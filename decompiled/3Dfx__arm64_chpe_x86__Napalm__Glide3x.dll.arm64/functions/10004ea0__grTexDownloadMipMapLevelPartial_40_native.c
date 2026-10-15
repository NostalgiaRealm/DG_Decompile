/*
 * _grTexDownloadMipMapLevelPartial@40_native at 10004ea0
 * undefined _grTexDownloadMipMapLevelPartial@40_native(void)
 * Address ranges: 10004ea0-10004ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevelPartial_40_native
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

