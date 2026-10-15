/*
 * FUN_100a012d at 100a012d
 * undefined __thiscall FUN_100a012d(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 100a012d-100a0155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a012d(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_1009ff4a(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

