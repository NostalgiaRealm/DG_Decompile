/*
 * _guFbReadRegion@24_native at 100042a0
 * undefined _guFbReadRegion@24_native(void)
 * Address ranges: 100042a0-100042df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guFbReadRegion_24_native
               (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong extraout_x11;
  undefined1 auVar1 [16];
  
  auVar1 = FUN_1001beb0();
  FUN_1001d9f0(auVar1._0_8_ & 0xffffffff,(undefined4)DAT_1009f7e4,extraout_x11 & 0xffffffff,
               auVar1._8_8_ & 0xffffffff,param_3 & 0xffffffff,param_4 & 0xffffffff);
  return;
}

