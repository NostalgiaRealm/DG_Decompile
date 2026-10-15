/*
 * _grLfbReadRegion@28_native at 100044e0
 * undefined _grLfbReadRegion@28_native(void)
 * Address ranges: 100044e0-1000451f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grLfbReadRegion_28_native
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4,
          ulonglong param_5,ulonglong param_6)

{
  undefined4 uVar1;
  ulonglong extraout_x11;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_1001beb0();
  uVar1 = FUN_1001d9f0(auVar2._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar2._8_8_ & 0xffffffff
                       ,param_3 & 0xffffffff,param_4 & 0xffffffff,param_5 & 0xffffffff,
                       param_6 & 0xffffffff);
  return uVar1;
}

