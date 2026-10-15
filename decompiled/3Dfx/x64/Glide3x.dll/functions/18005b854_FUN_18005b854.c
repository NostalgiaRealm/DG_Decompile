/*
 * FUN_18005b854 at 18005b854
 * undefined __fastcall FUN_18005b854(longlong param_1, ulonglong param_2)
 * Address ranges: 18005b854-18005ba1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b854(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (param_2 & 0xffffffff) * 0x1ac0;
  plVar2 = *(longlong **)(param_1 + 0x2378 + lVar4);
  if (plVar2 != (longlong *)0x0) {
    FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
    plVar2 = *(longlong **)(param_1 + 0x2370 + lVar4);
    if (plVar2 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar2 = *(longlong **)(param_1 + 0x2398 + lVar4);
    if (plVar2 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar2 = *(longlong **)(param_1 + 0x2388 + lVar4);
    if (plVar2 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar2 = *(longlong **)(param_1 + 0x2390 + lVar4);
    if (plVar2 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    plVar2 = *(longlong **)(param_1 + 0x2380 + lVar4);
    if (plVar2 != (longlong *)0x0) {
      FUN_180045694(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar2,'\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    uVar1 = *(uint *)(param_1 + 0x236c + lVar4);
    *(undefined8 *)(param_1 + 0x2378 + lVar4) = 0;
    *(undefined8 *)(param_1 + 0x2370 + lVar4) = 0;
    *(undefined8 *)(param_1 + 0x2398 + lVar4) = 0;
    *(undefined8 *)(param_1 + 0x2388 + lVar4) = 0;
    *(undefined8 *)(param_1 + 0x2390 + lVar4) = 0;
    *(undefined8 *)(param_1 + 0x2380 + lVar4) = 0;
    if (uVar1 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x2238 + lVar4);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180048b44(lVar3,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    }
    uVar1 = *(uint *)(param_1 + 0x2368 + lVar4);
    if (uVar1 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x2230 + lVar4);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180048b44(lVar3,uVar1,2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    }
    *(undefined8 *)(param_1 + 0x2368 + lVar4) = 0xffffffffffffffff;
  }
  return;
}

