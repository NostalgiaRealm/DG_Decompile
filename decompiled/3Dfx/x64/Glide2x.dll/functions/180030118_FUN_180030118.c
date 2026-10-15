/*
 * FUN_180030118 at 180030118
 * undefined __fastcall FUN_180030118(longlong param_1)
 * Address ranges: 180030118-1800301f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030118(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_18002f548(param_1);
  plVar2 = *(longlong **)(param_1 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    FUN_180043088(*(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b500),(ulonglong)plVar2,'\x01');
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x104);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1940);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180046538(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 200) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_180046538(lVar3,uVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  }
  return;
}

