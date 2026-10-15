/*
 * FUN_1800eac4c at 1800eac4c
 * undefined1 __fastcall FUN_1800eac4c(longlong * param_1, ulonglong param_2)
 * Address ranges: 1800eac4c-1800eacd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800eac4c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  ulonglong local_res10;
  uint local_18 [4];
  
  local_18[0] = 0;
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  lVar1 = FUN_1800eae18(param_1,&local_res10);
  uVar4 = 1;
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1800eae98(lVar1 + 8,local_18);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(**(longlong **)(*plVar2 + 0x18) + 0x40))();
      uVar4 = 1;
      if (uVar3 < (ulonglong)plVar2[3]) {
        uVar4 = 0;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar4;
}

