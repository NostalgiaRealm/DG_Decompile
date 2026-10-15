/*
 * FUN_10055e7e at 10055e7e
 * char __fastcall FUN_10055e7e(void * param_1)
 * Address ranges: 10055e7e-10055ebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10055e7e(void *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar2 = FUN_10056041(param_1,(uint *)&stack0x00000004);
  if (iVar2 != 0) {
    cVar1 = FUN_100556fb(iVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return cVar1;
}

