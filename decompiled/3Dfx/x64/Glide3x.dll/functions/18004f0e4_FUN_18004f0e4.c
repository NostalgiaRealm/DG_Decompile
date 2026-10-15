/*
 * FUN_18004f0e4 at 18004f0e4
 * undefined __fastcall FUN_18004f0e4(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 18004f0e4-18004f154
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f0e4(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x18c0 + param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0xbc0 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0xbc0 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 4);
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00018004f14e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

