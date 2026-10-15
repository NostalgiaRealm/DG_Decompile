/*
 * _grGet@12_native at 10003700
 * undefined _grGet@12_native(void)
 * Address ranges: 10003700-1000372f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 _grGet_12_native(void)

{
  undefined4 uVar1;
  ulonglong extraout_x11;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_100093b8();
  uVar1 = FUN_100084b0(auVar2._0_8_ & 0xffffffff,extraout_x11 & 0xffffffff,auVar2._8_8_ & 0xffffffff
                      );
  return uVar1;
}

