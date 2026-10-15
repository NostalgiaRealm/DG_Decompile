/*
 * FUN_180022388 at 180022388
 * undefined __fastcall FUN_180022388(longlong param_1, ulonglong * param_2)
 * Address ranges: 180022388-1800224b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022388(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_180021fa0(param_1);
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  param_2[1] = 0;
  *param_2 = 0;
  uVar1 = *(uint *)((longlong)param_2 + 0x1c);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1938);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180048b44(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar4 = param_2[3];
  if ((uint)uVar4 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180048b44(lVar3,(uint)uVar4,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  param_2[3] = 0xffffffffffffffff;
  return;
}

