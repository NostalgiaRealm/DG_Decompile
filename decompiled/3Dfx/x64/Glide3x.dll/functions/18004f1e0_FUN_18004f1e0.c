/*
 * FUN_18004f1e0 at 18004f1e0
 * undefined __fastcall FUN_18004f1e0(longlong param_1, ulonglong param_2, longlong * param_3)
 * Address ranges: 18004f1e0-18004f246
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f1e0(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar2 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0xa70 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0xa70 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00018004f240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

