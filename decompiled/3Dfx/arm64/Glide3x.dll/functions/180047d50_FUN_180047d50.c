/*
 * FUN_180047d50 at 180047d50
 * undefined __cdecl FUN_180047d50(longlong param_1, LPVOID param_2)
 * Address ranges: 180047d50-180047dff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047d50(longlong param_1,LPVOID param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)((longlong)param_2 + lVar2 * 0x24 + 0x1c);
    if (uVar1 != 0xffffffff) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_18004d518(lVar3,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180048948(*(longlong *)(param_1 + 0x18),(uint *)((longlong)param_2 + lVar2 * 0x24 + 0x1c))
      ;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_180063700(param_2);
  return;
}

