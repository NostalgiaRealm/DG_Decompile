/*
 * FUN_1800441c0 at 1800441c0
 * undefined __cdecl FUN_1800441c0(longlong param_1, LPVOID param_2)
 * Address ranges: 1800441c0-18004426f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800441c0(longlong param_1,LPVOID param_2)

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
      FUN_180049988(lVar3,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180044db8(*(longlong *)(param_1 + 0x18),(uint *)((longlong)param_2 + lVar2 * 0x24 + 0x1c))
      ;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_18005fbc8(param_2);
  return;
}

