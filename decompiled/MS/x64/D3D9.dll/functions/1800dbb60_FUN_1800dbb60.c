/*
 * FUN_1800dbb60 at 1800dbb60
 * undefined __fastcall FUN_1800dbb60(longlong param_1, ulonglong param_2, longlong * param_3)
 * Address ranges: 1800dbb60-1800dbbb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dbb60(longlong param_1,ulonglong param_2,longlong *param_3)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 == *(longlong **)(lVar1 + 0xba0 + param_1)) {
    *(undefined8 *)(lVar1 + 0xba0 + param_1) = 0;
  }
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x0001800dbbb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

