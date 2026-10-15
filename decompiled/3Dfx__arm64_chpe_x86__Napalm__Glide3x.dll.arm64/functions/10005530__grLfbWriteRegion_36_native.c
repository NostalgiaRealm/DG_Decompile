/*
 * _grLfbWriteRegion@36_native at 10005530
 * undefined _grLfbWriteRegion@36_native(void)
 * Address ranges: 10005530-1000558f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grLfbWriteRegion_36_native
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
          ulonglong param_5,ulonglong param_6)

{
  undefined4 uVar1;
  ulonglong extraout_x12;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_1000ae60();
  uVar1 = FUN_1000d3f0(auVar2._0_8_ & 0xffffffff,extraout_x12 & 0xffffffff,auVar2._8_8_ & 0xffffffff
                       ,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,
                       param_6 & 0xffffffff);
  return uVar1;
}

