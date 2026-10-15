/*
 * FUN_180053540 at 180053540
 * undefined __cdecl FUN_180053540(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 180053540-1800535c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053540(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = param_1 + (ulonglong)param_2 * 0x18c0 + 0xbc0;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar1 + lVar2 * 8)) {
      *(undefined8 *)(lVar1 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 4);
  (**(code **)(*param_3 + 0x10))(param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

