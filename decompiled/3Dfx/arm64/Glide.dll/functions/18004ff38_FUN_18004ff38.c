/*
 * FUN_18004ff38 at 18004ff38
 * undefined __cdecl FUN_18004ff38(longlong param_1, longlong param_2)
 * Address ranges: 18004ff38-18004ffdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ff38(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_2 + 0xd78) != 0) {
    uVar2 = *(uint *)(param_2 + 0x10);
    plVar4 = *(longlong **)(param_2 + 0xd80);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
    lVar1 = param_1 + (ulonglong)uVar2 * 0x18c0 + 0xbc0;
    lVar3 = 0;
    do {
      if (plVar4 == *(longlong **)(lVar1 + lVar3 * 8)) {
        *(undefined8 *)(lVar1 + lVar3 * 8) = 0;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
    (**(code **)(**(longlong **)(param_2 + 0xd78) + 0x10))();
    *(undefined8 *)(param_2 + 0xd78) = 0;
    *(undefined8 *)(param_2 + 0xd80) = 0;
  }
  return;
}

