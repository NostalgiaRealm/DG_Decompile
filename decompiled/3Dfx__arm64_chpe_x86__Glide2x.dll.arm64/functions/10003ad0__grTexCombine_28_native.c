/*
 * _grTexCombine@28_native at 10003ad0
 * undefined _grTexCombine@28_native(void)
 * Address ranges: 10003ad0-10003b0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombine_28_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
               ulonglong param_5,ulonglong param_6)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1001ba50();
  FUN_1001ebf8(auVar1._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar1._8_8_ & 0xffffffff,
               param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,param_6 & 0xffffffff);
  return;
}

