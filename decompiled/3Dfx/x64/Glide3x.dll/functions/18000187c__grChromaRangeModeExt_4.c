/*
 * _grChromaRangeModeExt@4 at 18000187c
 * undefined __fastcall _grChromaRangeModeExt@4(int param_1)
 * Address ranges: 18000187c-1800018da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeModeExt_4(int param_1)

{
  longlong *plVar1;
  bool bVar2;
  WNDPROC pWVar3;
  
                    /* 0x187c  11  _grChromaRangeModeExt@4
                       0x187c  111  grChromaRangeModeExt */
  pWVar3 = (WNDPROC)FUN_1800069ac();
  if (pWVar3[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + 1;
    UNLOCK();
    bVar2 = FUN_180006754(pWVar3,1);
    if ((bVar2) &&
       (plVar1 = *(longlong **)(pWVar3 + 0x18), param_1 != *(int *)((longlong)plVar1 + 0x152))) {
      (**(code **)(*plVar1 + 0x270))(plVar1,param_1);
      *(int *)(*(longlong *)(pWVar3 + 0x18) + 0x152) = param_1;
    }
    LOCK();
    *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

