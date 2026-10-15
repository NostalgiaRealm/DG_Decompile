/*
 * _grTexDownloadTable@8 at 1800028e0
 * undefined __fastcall _grTexDownloadTable@8(uint param_1, undefined8 * param_2)
 * Address ranges: 1800028e0-180002938
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexDownloadTable_8(uint param_1,undefined8 *param_2)

{
  WNDPROC pWVar1;
  int iVar2;
  
                    /* 0x28e0  78  _grTexDownloadTable@8
                       0x28e0  178  grTexDownloadTable */
  pWVar1 = (WNDPROC)FUN_1800069ac();
  if (pWVar1[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar1 + 0x60) = *(int *)(pWVar1 + 0x60) + 1;
    UNLOCK();
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(pWVar1 + 0x30) + 0x833)) {
      do {
        FUN_180008d60(pWVar1,iVar2,param_1,param_2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(*(longlong *)(pWVar1 + 0x30) + 0x833));
    }
    LOCK();
    *(int *)(pWVar1 + 0x60) = *(int *)(pWVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

