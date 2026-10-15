/*
 * FUN_18004ceec at 18004ceec
 * undefined __fastcall FUN_18004ceec(longlong param_1, uint param_2, longlong * param_3)
 * Address ranges: 18004ceec-18004cf7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ceec(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)param_2 * 0x18c0 + param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0x710 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0x710 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  lVar1 = 0;
  do {
    if (param_3 == *(longlong **)(lVar2 + 0x790 + lVar1 * 8)) {
      *(undefined8 *)(lVar2 + 0x790 + lVar1 * 8) = 0;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  (**(code **)(*param_3 + 0x10))(param_3);
                    /* WARNING: Could not recover jumptable at 0x00018004cf77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  return;
}

