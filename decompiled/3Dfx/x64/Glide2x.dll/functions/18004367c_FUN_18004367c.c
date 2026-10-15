/*
 * FUN_18004367c at 18004367c
 * char __fastcall FUN_18004367c(longlong * param_1, ulonglong param_2)
 * Address ranges: 18004367c-1800436dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18004367c(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong local_res10;
  
  cVar1 = '\x01';
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar3 = param_1;
  lVar2 = FUN_18004379c(param_1,&local_res10);
  if (lVar2 != 0) {
    cVar1 = FUN_180042cb4((longlong)plVar3,lVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar1;
}

