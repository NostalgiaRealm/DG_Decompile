/*
 * _grColorCombine@20_native at 10002fc0
 * undefined _grColorCombine@20_native(void)
 * Address ranges: 10002fc0-10002ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grColorCombine_20_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_100093b8();
  FUN_1000bba0(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff,param_4 & 0xffffffff);
  return;
}

