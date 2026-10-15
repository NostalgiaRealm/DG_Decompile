/*
 * FUN_18004fff8 at 18004fff8
 * undefined __cdecl FUN_18004fff8(longlong param_1, longlong param_2)
 * Address ranges: 18004fff8-1800500e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fff8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar4 = 0;
    do {
      plVar5 = *(longlong **)(param_2 + 0xd98 + uVar4 * 8);
      if (plVar5 != (longlong *)0x0) {
        uVar2 = *(uint *)(param_2 + 0x10);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
        lVar1 = param_1 + (ulonglong)uVar2 * 0x18c0 + 0xbc0;
        lVar3 = 0;
        do {
          if (plVar5 == *(longlong **)(lVar1 + lVar3 * 8)) {
            *(undefined8 *)(lVar1 + lVar3 * 8) = 0;
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 != 4);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
        *(undefined8 *)(param_2 + 0xd98 + uVar4 * 8) = 0;
      }
      plVar5 = *(longlong **)(param_2 + 0xda8 + uVar4 * 8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)(param_2 + 0xda8 + uVar4 * 8) = 0;
      }
      plVar5 = *(longlong **)(param_2 + 0xd88 + uVar4 * 8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)(param_2 + 0xd88 + uVar4 * 8) = 0;
      }
      uVar2 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

