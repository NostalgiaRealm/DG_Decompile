/*
 * FUN_180045c88 at 180045c88
 * char __fastcall FUN_180045c88(longlong * param_1, ulonglong param_2)
 * Address ranges: 180045c88-180045ce8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180045c88(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong local_res10;
  
  cVar1 = '\x01';
  local_res10 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar3 = param_1;
  lVar2 = FUN_180045da8(param_1,&local_res10);
  if (lVar2 != 0) {
    cVar1 = FUN_1800452c0((longlong)plVar3,lVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return cVar1;
}

