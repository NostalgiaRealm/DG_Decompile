/*
 * FUN_10046b90 at 10046b90
 * undefined __thiscall FUN_10046b90(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10046b90-10046bb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046b90(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_100469ad(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

