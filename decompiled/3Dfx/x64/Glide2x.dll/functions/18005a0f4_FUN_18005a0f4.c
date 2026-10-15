/*
 * FUN_18005a0f4 at 18005a0f4
 * undefined __fastcall FUN_18005a0f4(longlong param_1, longlong param_2)
 * Address ranges: 18005a0f4-18005a1d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a0f4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0 + param_1;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      plVar1 = *(longlong **)(param_2 + 0xda0 + uVar4 * 8);
      if (plVar1 != (longlong *)0x0) {
        FUN_180043088(*(longlong **)(param_1 + 0x1b500),(ulonglong)plVar1,'\x01');
        (**(code **)(*plVar1 + 0x10))(plVar1);
        *(undefined8 *)(param_2 + 0xda0 + uVar4 * 8) = 0;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_2 + 0x28));
  }
  uVar3 = *(uint *)(param_2 + 0xdb0);
  if (uVar3 != 0xffffffff) {
    lVar2 = *(longlong *)(lVar5 + 0x2230);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    FUN_180046538(lVar2,uVar3,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
  }
  uVar3 = *(uint *)(param_2 + 0xdb4);
  if (uVar3 != 0xffffffff) {
    lVar5 = *(longlong *)(lVar5 + 0x2238);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    FUN_180046538(lVar5,uVar3,2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

