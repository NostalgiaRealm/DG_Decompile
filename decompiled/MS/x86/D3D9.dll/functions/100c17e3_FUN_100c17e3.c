/*
 * FUN_100c17e3 at 100c17e3
 * char __thiscall FUN_100c17e3(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 100c17e3-100c1823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_100c17e3(void *this,undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  iVar2 = FUN_100c1ae3(this,&param_1);
  if (iVar2 != 0) {
    cVar1 = FUN_100c0e7c(iVar2,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

