/*
 * _grLfbWriteRegion@32_native at 10004270
 * undefined _grLfbWriteRegion@32_native(void)
 * Address ranges: 10004270-100042c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grLfbWriteRegion_32_native
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
          ulonglong param_5,ulonglong param_6,ulonglong param_7,undefined4 param_8)

{
  undefined4 uVar1;
  ulonglong extraout_x11;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_1001ba50();
  uVar1 = FUN_1001d4e8(auVar2._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar2._8_8_ & 0xffffffff
                       ,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,
                       param_6 & 0xffffffff,param_7 & 0xffffffff,param_8);
  return uVar1;
}

