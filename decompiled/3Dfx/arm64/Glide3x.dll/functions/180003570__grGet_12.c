/*
 * _grGet@12 at 180003570
 * uint __cdecl _grGet@12(undefined8 param_1, undefined8 param_2, uint * param_3)
 * Address ranges: 180003570-180003597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _grGet_12(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulonglong extraout_x11;
  undefined1 auVar2 [12];
  
                    /* 0x3570  40  _grGet@12
                       0x3570  140  grGet */
  auVar2 = FUN_180008ce0();
  uVar1 = FUN_180008498(auVar2._0_8_,extraout_x11 & 0xffffffff,auVar2._8_4_,param_3);
  return uVar1;
}

