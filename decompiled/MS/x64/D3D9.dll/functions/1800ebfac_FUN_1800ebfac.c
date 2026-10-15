/*
 * FUN_1800ebfac at 1800ebfac
 * undefined __fastcall FUN_1800ebfac(LPCRITICAL_SECTION param_1, int param_2, int param_3, ulonglong param_4)
 * Address ranges: 1800ebfac-1800ebfe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ebfac(LPCRITICAL_SECTION param_1,int param_2,int param_3,ulonglong param_4)

{
  EnterCriticalSection(param_1);
  FUN_1800ebbf8((longlong)param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001800ebfe1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}

