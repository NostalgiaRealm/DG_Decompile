/*
 * _grAlphaBlendFunction@16_native at 10002830
 * undefined _grAlphaBlendFunction@16_native(void)
 * Address ranges: 10002830-1000285f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaBlendFunction_16_native(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1000ae60();
  FUN_1000d708(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff);
  return;
}

