/*
 * FUN_180050888 at 180050888
 * undefined __cdecl FUN_180050888(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 180050888-180050933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050888(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar3 = param_1 + (ulonglong)param_2 * 0x18c0;
  lVar1 = 0;
  lVar2 = lVar3 + 0x870;
  do {
    if (param_3 == *(longlong **)(lVar2 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  lVar3 = lVar3 + 0x810;
  lVar2 = 0;
  do {
    if (param_3 == *(longlong **)(lVar3 + lVar2 * 8)) {
      *(undefined8 *)(lVar3 + lVar2 * 8) = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xc);
  (**(code **)(*param_3 + 0x10))(param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

