/*
 * FUN_1800eab50 at 1800eab50
 * char __fastcall FUN_1800eab50(longlong * param_1, ulonglong param_2, uint param_3)
 * Address ranges: 1800eab50-1800eaba5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800eab50(longlong *param_1,ulonglong param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong local_res10 [3];
  
  cVar1 = '\x01';
  local_res10[0] = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar3 = param_1;
  lVar2 = FUN_1800eae18(param_1,local_res10);
  if (lVar2 != 0) {
    cVar1 = FUN_1800e9df8((longlong)plVar3,lVar2,param_3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar1;
}

