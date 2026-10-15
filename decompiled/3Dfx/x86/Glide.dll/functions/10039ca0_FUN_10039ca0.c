/*
 * FUN_10039ca0 at 10039ca0
 * char __fastcall FUN_10039ca0(void * param_1)
 * Address ranges: 10039ca0-10039cdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10039ca0(void *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  iVar2 = FUN_10039e96(param_1,(uint *)&stack0x00000004);
  if (iVar2 != 0) {
    cVar1 = FUN_1003966c(iVar2,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x1c));
  return cVar1;
}

