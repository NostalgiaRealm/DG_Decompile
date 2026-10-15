/*
 * _grTexChromaModeExt@8 at 1800019b4
 * undefined __fastcall _grTexChromaModeExt@8(int param_1, int param_2)
 * Address ranges: 1800019b4-180001a1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexChromaModeExt_8(int param_1,int param_2)

{
  longlong *plVar1;
  bool bVar2;
  WNDPROC pWVar3;
  
                    /* 0x19b4  70  _grTexChromaModeExt@8
                       0x19b4  170  grTexChromaModeExt */
  pWVar3 = (WNDPROC)FUN_1800069ac();
  if (pWVar3[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + 1;
    UNLOCK();
    bVar2 = FUN_180006754(pWVar3,2);
    if (bVar2) {
      plVar1 = *(longlong **)(pWVar3 + 0x18);
      if (param_2 != *(int *)((longlong)param_1 * 0x55 + 0x1c6 + (longlong)plVar1)) {
        (**(code **)(*plVar1 + 0x280))(plVar1,param_1,param_2);
        *(int *)((longlong)param_1 * 0x55 + 0x1c6 + *(longlong *)(pWVar3 + 0x18)) = param_2;
      }
    }
    LOCK();
    *(int *)(pWVar3 + 0x60) = *(int *)(pWVar3 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

