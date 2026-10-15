/*
 * FUN_180088e14 at 180088e14
 * undefined __fastcall FUN_180088e14(undefined8 * param_1)
 * Address ranges: 180088e14-180088ec5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180088e14(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 2) != 0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 2) == 0) {
      plVar2 = (longlong *)&DAT_00000008;
      goto LAB_180088e48;
    }
    do {
      plVar2 = (longlong *)(param_1[1] + uVar4 * 0x18 + 0x10);
LAB_180088e48:
      lVar1 = param_1[3];
      uVar3 = *(uint *)(param_1 + 4);
      plVar2 = (longlong *)*plVar2;
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
      if (plVar2 == *(longlong **)(lVar1 + 0xbb0 + (ulonglong)uVar3 * 0x18c0)) {
        *(undefined8 *)(lVar1 + 0xbb0 + (ulonglong)uVar3 * 0x18c0) = 0;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 2));
  }
  FUN_1800fbcf0((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

