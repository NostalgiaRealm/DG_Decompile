/*
 * _grTexDownloadMipMapLevel@32 at 1800027c0
 * undefined __fastcall _grTexDownloadMipMapLevel@32(int param_1, uint param_2, uint param_3, int param_4, int param_5, uint param_6, uint param_7, undefined8 * param_8)
 * Address ranges: 1800027c0-180002871
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMapLevel_32
               (int param_1,uint param_2,uint param_3,int param_4,int param_5,uint param_6,
               uint param_7,undefined8 *param_8)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
                    /* 0x27c0  76  _grTexDownloadMipMapLevel@32
                       0x27c0  176  grTexDownloadMipMapLevel */
  puVar3 = FUN_1800069ac();
  uVar1 = *(uint *)(&DAT_180063968 + (longlong)(int)param_3 * 4);
  uVar2 = uVar1 >> ((&DAT_180063963)[param_5] & 0x1f);
  if (uVar1 >> ((&DAT_180063963)[param_5] & 0x1f) == 0) {
    uVar2 = 1;
  }
  if (-1 < param_5) {
    uVar1 = uVar2;
  }
  FUN_180008b68((longlong)puVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                (uVar1 & 0xffff) - 1);
  return;
}

