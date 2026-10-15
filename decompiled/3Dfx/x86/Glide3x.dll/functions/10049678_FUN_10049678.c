/*
 * FUN_10049678 at 10049678
 * undefined __thiscall FUN_10049678(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10049678-100496a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049678(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_10049495(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

