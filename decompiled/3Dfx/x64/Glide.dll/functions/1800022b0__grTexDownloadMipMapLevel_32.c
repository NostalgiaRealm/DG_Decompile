/*
 * _grTexDownloadMipMapLevel@32 at 1800022b0
 * undefined __fastcall _grTexDownloadMipMapLevel@32(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 1800022b0-180002304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               uint param_7,undefined8 *param_8)

{
  undefined *puVar1;
  
                    /* 0x22b0  93  _grTexDownloadMipMapLevel@32
                       0x22b0  254  grTexDownloadMipMapLevel */
  puVar1 = FUN_180015384();
  FUN_1800175f0((longlong)puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

