/*
 * FUN_1800dbb04 at 1800dbb04
 * undefined __fastcall FUN_1800dbb04(longlong param_1, ulonglong param_2, longlong * param_3)
 * Address ranges: 1800dbb04-1800dbb5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dbb04(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 == *(longlong **)(lVar1 + 0xb70 + param_1)) {
    *(undefined8 *)(lVar1 + 0xb70 + param_1) = 0;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001800dbb56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

