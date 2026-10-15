/*
 * _grTexDownloadMipMap@16_native at 10003cb0
 * undefined _grTexDownloadMipMap@16_native(void)
 * Address ranges: 10003cb0-10003cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1001beb0();
  FUN_1001f460(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff);
  return;
}

