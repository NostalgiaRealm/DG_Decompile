/*
 * _grTexDownloadMipMapLevel@32 at 180003b30
 * undefined __cdecl _grTexDownloadMipMapLevel@32(undefined8 param_1, undefined8 param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 180003b30-180003bb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32
               (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,undefined8 *param_8)

{
  longlong lVar1;
  uint extraout_w1;
  int extraout_w11;
  int extraout_w12;
  
                    /* 0x3b30  93  _grTexDownloadMipMapLevel@32
                       0x3b30  254  grTexDownloadMipMapLevel */
  lVar1 = FUN_180017788();
  FUN_1800192a8(lVar1,extraout_w11,extraout_w1,param_3,param_4,param_5,param_6,param_7,param_8,0,
                extraout_w12);
  return;
}

