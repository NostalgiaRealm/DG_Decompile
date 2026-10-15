/*
 * FUN_1005050b at 1005050b
 * char __thiscall FUN_1005050b(void * this, undefined4 param_1, uint param_2)
 * Address ranges: 1005050b-1005054b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1005050b(void *this,undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  iVar2 = FUN_100507cd(this,&param_1);
  if (iVar2 != 0) {
    cVar1 = FUN_1004fcf3(iVar2,param_2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return cVar1;
}

