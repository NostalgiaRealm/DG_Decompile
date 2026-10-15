/*
 * _grChromaRangeExt@12 at 1800018dc
 * undefined __fastcall _grChromaRangeExt@12(uint param_1, uint param_2)
 * Address ranges: 1800018dc-1800019b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeExt_12(uint param_1,uint param_2)

{
  bool bVar1;
  WNDPROC pWVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  
                    /* 0x18dc  10  _grChromaRangeExt@12
                       0x18dc  110  grChromaRangeExt */
  pWVar2 = (WNDPROC)FUN_1800069ac();
  if (pWVar2[100] != (WNDPROC)0x0) {
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + 1;
    UNLOCK();
    bVar1 = FUN_180006754(pWVar2,1);
    if (bVar1) {
      plVar7 = *(longlong **)(pWVar2 + 0x18);
      uVar3 = FUN_18000acc4((longlong)plVar7,(ulonglong)param_1);
      uVar3 = uVar3 & 0xffffffff;
      uVar4 = FUN_18000acc4((longlong)plVar7,(ulonglong)param_2);
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = 0xff000000;
      iVar9 = 3;
      do {
        uVar6 = uVar5 & (uint)uVar4;
        uVar8 = uVar5 & (uint)uVar3;
        if (uVar6 < uVar8) {
          uVar4 = (ulonglong)((uint)uVar4 & ~uVar5 | uVar8);
          uVar3 = (ulonglong)((uint)uVar3 & ~uVar5 | uVar6);
        }
        uVar5 = uVar5 >> 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (((int)uVar3 != *(int *)((longlong)plVar7 + 0x14a)) ||
         ((int)uVar4 != *(int *)((longlong)plVar7 + 0x14e))) {
        (**(code **)(*plVar7 + 0x278))(plVar7,uVar3,uVar4);
        *(int *)(*(longlong *)(pWVar2 + 0x18) + 0x14a) = (int)uVar3;
        *(int *)(*(longlong *)(pWVar2 + 0x18) + 0x14e) = (int)uVar4;
      }
    }
    LOCK();
    *(int *)(pWVar2 + 0x60) = *(int *)(pWVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

