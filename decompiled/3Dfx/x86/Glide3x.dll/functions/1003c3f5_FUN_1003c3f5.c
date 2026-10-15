/*
 * FUN_1003c3f5 at 1003c3f5
 * char __fastcall FUN_1003c3f5(void * param_1)
 * Address ranges: 1003c3f5-1003c434
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_1003c3f5(void *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar2 = FUN_1003c5eb(param_1,(uint *)&stack0x00000004);
  if (iVar2 != 0) {
    cVar1 = FUN_1003bdc1(iVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return cVar1;
}

