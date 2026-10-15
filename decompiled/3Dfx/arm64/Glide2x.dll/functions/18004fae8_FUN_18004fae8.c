/*
 * FUN_18004fae8 at 18004fae8
 * undefined __cdecl FUN_18004fae8(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 18004fae8-18004fb6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004fae8(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0 + 0xa70;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar1 + lVar2 * 8)) {
      *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

