/*
 * _grAuxBufferExt@4 at 180001328
 * undefined __fastcall _grAuxBufferExt@4(undefined4 param_1)
 * Address ranges: 180001328-18000137f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAuxBufferExt_4(undefined4 param_1)

{
  bool bVar1;
  WNDPROC pWVar2;
  
                    /* 0x1328  7  _grAuxBufferExt@4
                       0x1328  107  grAuxBufferExt */
  pWVar2 = (WNDPROC)FUN_1800069ac();
  if (pWVar2[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + 1;
    UNLOCK();
    bVar1 = FUN_180006754(pWVar2,3);
    if (bVar1) {
      (**(code **)(**(longlong **)(pWVar2 + 0x18) + 0xc0))(*(longlong **)(pWVar2 + 0x18),param_1);
      *(char *)(*(longlong *)(pWVar2 + 0x18) + 0xf1) = (char)param_1;
    }
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

