/*
 * _grTexDownloadTable@12 at 180003c18
 * undefined __cdecl _grTexDownloadTable@12(int param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 180003c18-180003c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_12(int param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  
                    /* 0x3c18  91  _grTexDownloadTable@12
                       0x3c18  248  grTexDownloadTable */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    FUN_180018640(lVar1,param_1,param_2,param_3,0,0xff);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

