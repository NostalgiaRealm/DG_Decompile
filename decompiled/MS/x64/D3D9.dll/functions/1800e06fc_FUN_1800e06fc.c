/*
 * FUN_1800e06fc at 1800e06fc
 * longlong __fastcall FUN_1800e06fc(longlong param_1, longlong param_2)
 * Address ranges: 1800e06fc-1800e0761
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800e06fc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar2 = 0;
  if (*(uint *)(param_1 + 0x650) != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x648) + uVar4 * 8);
      if (*plVar1 == param_2) {
        lVar2 = plVar1[0x1ae];
        break;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *(uint *)(param_1 + 0x650));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return lVar2;
}

