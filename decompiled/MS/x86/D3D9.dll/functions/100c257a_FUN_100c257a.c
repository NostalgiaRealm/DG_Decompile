/*
 * FUN_100c257a at 100c257a
 * undefined __thiscall FUN_100c257a(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 100c257a-100c25a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c257a(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_100c2397(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

