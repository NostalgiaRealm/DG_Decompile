/*
 * FUN_18004cb4c at 18004cb4c
 * undefined __fastcall FUN_18004cb4c(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 18004cb4c-18004cbd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cb4c(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar2 = (ulonglong)param_2 * 0x18c0 + param_1;
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0x870 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0x870 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x40);
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0x810 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0x810 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0xc);
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00018004cbcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

