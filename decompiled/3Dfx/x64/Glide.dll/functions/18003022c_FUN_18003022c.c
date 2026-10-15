/*
 * FUN_18003022c at 18003022c
 * undefined __fastcall FUN_18003022c(longlong param_1)
 * Address ranges: 18003022c-18003034e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003022c(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_18002f9f0(param_1);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if (iVar4 == 1) {
    if (plVar2 == (longlong *)0x0) goto LAB_18003027d;
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_18003027d:
  plVar2 = *(longlong **)(param_1 + 0xd8);
  if (plVar2 != (longlong *)0x0) {
    FUN_180043530(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar1 = *(uint *)(param_1 + 0xec);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1938);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_1800469e0(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0xe8);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_1800469e0(lVar3,uVar1,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffffffffffff;
  return;
}

