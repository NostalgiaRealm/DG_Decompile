/*
 * FUN_1004c656 at 1004c656
 * undefined __fastcall FUN_1004c656(LPCRITICAL_SECTION param_1)
 * Address ranges: 1004c656-1004c6b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c656(LPCRITICAL_SECTION param_1)

{
  undefined4 *puVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  
  EnterCriticalSection(param_1);
  p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  if (param_1[2].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    if (param_1[2].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      puVar1 = (undefined4 *)&DAT_00000008;
      goto LAB_1004c681;
    }
    do {
      puVar1 = (undefined4 *)(param_1[1].SpinCount + 0x10 + (int)p_Var2 * 0x38);
LAB_1004c681:
      FUN_1004c836(puVar1);
      p_Var2 = (PRTL_CRITICAL_SECTION_DEBUG)((int)&p_Var2->Type + 1);
    } while (p_Var2 < param_1[2].DebugInfo);
  }
  thunk_FUN_10055686(param_1[1].LockSemaphore);
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[1].SpinCount = 0;
  param_1[2].LockCount = 0;
  param_1[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  LeaveCriticalSection(param_1);
  DeleteCriticalSection(param_1);
  return;
}

