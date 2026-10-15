/*
 * FUN_180050758 at 180050758
 * undefined __cdecl FUN_180050758(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 180050758-1800507ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050758(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar2 = lVar3 + 0x710;
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  lVar3 = lVar3 + 0x790;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar3 + lVar2 * 8)) {
      *(undefined8 *)(lVar3 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

