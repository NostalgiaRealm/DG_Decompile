/*
 * _grTexChromaRangeExt@16 at 180001a1c
 * undefined __fastcall _grTexChromaRangeExt@16(int param_1, uint param_2, uint param_3)
 * Address ranges: 180001a1c-180001afa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexChromaRangeExt_16(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  WNDPROC pWVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  
                    /* 0x1a1c  71  _grTexChromaRangeExt@16
                       0x1a1c  171  grTexChromaRangeExt */
  pWVar2 = (WNDPROC)FUN_1800069ac();
  if (pWVar2[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + 1;
    UNLOCK();
    bVar1 = FUN_180006754(pWVar2,2);
    if (bVar1) {
      plVar9 = *(longlong **)(pWVar2 + 0x18);
      uVar3 = FUN_18000acc4((longlong)plVar9,(ulonglong)param_2);
      uVar3 = uVar3 & 0xffffffff;
      uVar4 = FUN_18000acc4((longlong)plVar9,(ulonglong)param_3);
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = 0xff000000;
      iVar10 = 3;
      do {
        uVar7 = uVar5 & (uint)uVar4;
        uVar8 = uVar5 & (uint)uVar3;
        if (uVar7 < uVar8) {
          uVar4 = (ulonglong)((uint)uVar4 & ~uVar5 | uVar8);
          uVar3 = (ulonglong)((uint)uVar3 & ~uVar5 | uVar7);
        }
        uVar5 = uVar5 >> 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      lVar6 = (longlong)param_1 * 0x55;
      if (((int)uVar3 != *(int *)(lVar6 + 0x1be + (longlong)plVar9)) ||
         ((int)uVar4 != *(int *)(lVar6 + 0x1c2 + (longlong)plVar9))) {
        (**(code **)(*plVar9 + 0x288))(plVar9,param_1,uVar3,uVar4);
        *(int *)(lVar6 + 0x1be + *(longlong *)(pWVar2 + 0x18)) = (int)uVar3;
        *(int *)(lVar6 + 0x1c2 + *(longlong *)(pWVar2 + 0x18)) = (int)uVar4;
      }
    }
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

