/*
 * _grTexDownloadTable@8 at 180004b38
 * undefined __cdecl _grTexDownloadTable@8(uint param_1, undefined8 * param_2)
 * Address ranges: 180004b38-180004bc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_8(uint param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
                    /* 0x4b38  78  _grTexDownloadTable@8
                       0x4b38  178  grTexDownloadTable */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833)) {
      do {
        FUN_18000b518(lVar1,iVar2,param_1,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x833));
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

