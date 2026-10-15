/*
 * FUN_180056660 at 180056660
 * undefined __cdecl FUN_180056660(longlong param_1, longlong * param_2)
 * Address ranges: 180056660-1800566d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056660(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = lVar1 + (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (param_2 == *(longlong **)(lVar2 + 0x708)) {
    *(undefined8 *)(lVar2 + 0x708) = 0;
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  return;
}

