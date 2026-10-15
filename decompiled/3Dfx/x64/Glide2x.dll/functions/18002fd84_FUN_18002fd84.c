/*
 * FUN_18002fd84 at 18002fd84
 * undefined __fastcall FUN_18002fd84(longlong param_1)
 * Address ranges: 18002fd84-18002fea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002fd84(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_18002f548(param_1);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if (iVar4 == 1) {
    if (plVar2 == (longlong *)0x0) goto LAB_18002fdd5;
    FUN_180043088(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_18002fdd5:
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != (longlong *)0x0) {
    FUN_180043088(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar1 = *(uint *)(param_1 + 0xec);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1938);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180046538(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180046538(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  return;
}

