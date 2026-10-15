/*
 * FUN_10056974 at 10056974
 * undefined __thiscall FUN_10056974(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10056974-1005699c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10056974(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_10056791(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

