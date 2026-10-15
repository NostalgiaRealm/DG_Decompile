/*
 * FUN_18005a5dc at 18005a5dc
 * undefined __fastcall FUN_18005a5dc(longlong param_1, longlong param_2)
 * Address ranges: 18005a5dc-18005a6bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a5dc(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 0xd98);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)((ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + 0x2238 + param_1);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180046538(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    lVar3 = 0;
    do {
      FUN_18004367c(*(longlong **)(param_1 + 0x1b500),*(ulonglong *)(param_2 + 0xd88 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2);
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(param_2 + 0xd88 + lVar3 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_180043088(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      *(undefined8 *)(param_2 + 0xd88 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 2);
    (**(code **)(**(longlong **)(param_2 + 0xd80) + 0x10))();
    *(undefined8 *)(param_2 + 0xd80) = 0;
    *(undefined4 *)(param_2 + 0xd98) = 0xffffffff;
  }
  return;
}

