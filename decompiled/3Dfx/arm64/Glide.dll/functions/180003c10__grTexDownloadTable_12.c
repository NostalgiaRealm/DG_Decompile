/*
 * _grTexDownloadTable@12 at 180003c10
 * undefined __cdecl _grTexDownloadTable@12(int param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 180003c10-180003c77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_12(int param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  
                    /* 0x3c10  95  _grTexDownloadTable@12
                       0x3c10  256  grTexDownloadTable */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    FUN_180019490(lVar1,param_1,param_2,param_3,0,0xff);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

