/*
 * FUN_180053ad8 at 180053ad8
 * undefined __fastcall FUN_180053ad8(longlong param_1, longlong * param_2)
 * Address ranges: 180053ad8-180053b32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053ad8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  if (param_2 == *(longlong **)(lVar2 + 0x708 + lVar1)) {
    *(undefined8 *)(lVar2 + 0x708 + lVar1) = 0;
  }
  (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000180053b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x620));
  return;
}

