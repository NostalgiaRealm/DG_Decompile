/*
 * _grAlphaBlendFunction@16_native at 100027f0
 * undefined _grAlphaBlendFunction@16_native(void)
 * Address ranges: 100027f0-1000281f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaBlendFunction_16_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_100093b8();
  FUN_1000b820(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff);
  return;
}

