/*
 * FUN_18003ebb4 at 18003ebb4
 * undefined __fastcall FUN_18003ebb4(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18003ebb4-18003eca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ebb4(longlong param_1,longlong param_2,uint param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 0x620);
    if (*(int *)(param_1 + 0x10) == 0) {
      plVar4 = (longlong *)&DAT_00000008;
      plVar2 = (longlong *)&DAT_00000010;
      goto LAB_18003ec07;
    }
    do {
      plVar4 = (longlong *)(((ulonglong)uVar3 << 5 | 0x10) + *(longlong *)(param_1 + 8));
      plVar2 = (longlong *)(((ulonglong)uVar3 << 5 | 0x18) + *(longlong *)(param_1 + 8));
LAB_18003ec07:
      plVar4 = (longlong *)*plVar4;
      if (plVar4 != (longlong *)0x0) {
        EnterCriticalSection(lpCriticalSection);
        lVar1 = (ulonglong)param_3 * 0x18c0;
        if (plVar4 == *(longlong **)(param_2 + 0xba8 + lVar1)) {
          *(undefined8 *)(param_2 + 0xba8 + lVar1) = 0;
        }
        (**(code **)(*plVar4 + 0x10))(plVar4);
        LeaveCriticalSection(lpCriticalSection);
      }
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != (longlong *)0x0) {
        EnterCriticalSection(lpCriticalSection);
        lVar1 = (ulonglong)param_3 * 0x18c0;
        if (plVar2 == *(longlong **)(param_2 + 3000 + lVar1)) {
          *(undefined8 *)(param_2 + 3000 + lVar1) = 0;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        LeaveCriticalSection(lpCriticalSection);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  return;
}

