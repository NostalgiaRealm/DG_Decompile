/*
 * _grTexDownloadMipMap@16 at 180002260
 * undefined __fastcall _grTexDownloadMipMap@16(int param_1, uint param_2, uint param_3, uint * param_4)
 * Address ranges: 180002260-1800022ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadMipMap_16(int param_1,uint param_2,uint param_3,uint *param_4)

{
  undefined *puVar1;
  
                    /* 0x2260  88  _grTexDownloadMipMap@16
                       0x2260  245  grTexDownloadMipMap */
  puVar1 = FUN_180015044();
  FUN_180016c2c((longlong)puVar1,param_1,param_2,param_3,*param_4,param_4[1],param_4[2],param_4[3],
                *(undefined8 **)(param_4 + 4));
  return;
}

