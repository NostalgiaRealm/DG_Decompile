/*
 * FUN_1004ca81 at 1004ca81
 * undefined __thiscall FUN_1004ca81(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 1004ca81-1004caa9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004ca81(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_1004c89e(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

