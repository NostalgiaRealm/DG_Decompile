/*
 * FUN_180045010 at 180045010
 * undefined __cdecl FUN_180045010(longlong param_1, LPVOID param_2)
 * Address ranges: 180045010-1800450bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045010(longlong param_1,LPVOID param_2)

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
      FUN_18004a7d8(lVar3,uVar1,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
      FUN_180045c08(*(longlong *)(param_1 + 0x18),(uint *)((longlong)param_2 + lVar2 * 0x24 + 0x1c))
      ;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  FUN_180060a18(param_2);
  return;
}

