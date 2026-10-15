/*
 * _grTexDownloadMipMapLevelPartial@40 at 180003bb8
 * undefined __cdecl _grTexDownloadMipMapLevelPartial@40(undefined8 param_1, undefined8 param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined8 * param_8, int param_9, int param_10)
 * Address ranges: 180003bb8-180003c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevelPartial_40
               (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5,
               uint param_6,uint param_7,undefined8 *param_8,int param_9,int param_10)

{
  longlong lVar1;
  uint extraout_w1;
  int extraout_w11;
  
                    /* 0x3bb8  94  _grTexDownloadMipMapLevelPartial@40
                       0x3bb8  255  grTexDownloadMipMapLevelPartial */
  lVar1 = FUN_180017788();
  FUN_1800192a8(lVar1,extraout_w11,extraout_w1,param_3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_10);
  return;
}

