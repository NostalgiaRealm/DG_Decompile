/*
 * FUN_180043b24 at 180043b24
 * char __fastcall FUN_180043b24(longlong * param_1, ulonglong param_2)
 * Address ranges: 180043b24-180043b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180043b24(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong local_res10;
  
  cVar1 = '\x01';
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar3 = param_1;
  lVar2 = FUN_180043c44(param_1,&local_res10);
  if (lVar2 != 0) {
    cVar1 = FUN_18004315c((longlong)plVar3,lVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar1;
}

