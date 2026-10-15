/*
 * FUN_18003f8fc at 18003f8fc
 * undefined __fastcall FUN_18003f8fc(longlong param_1)
 * Address ranges: 18003f8fc-18003f9a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003f8fc(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    plVar2 = *(longlong **)(param_1 + 0x168 + lVar3 * 8);
    if (plVar2 != (longlong *)0x0) {
      FUN_1800ea1d0(*(longlong **)(*(longlong *)(param_1 + 0x188) + 0x1b500),(ulonglong)plVar2,
                    '\x01');
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *(undefined8 *)(param_1 + 0x168 + lVar3 * 8) = 0;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar1 = *(uint *)(param_1 + 0x180);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
    FUN_1800e149c(lVar3,uVar1,3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
  }
  return;
}

