/*
 * FUN_10046f20 at 10046f20
 * undefined __thiscall FUN_10046f20(void * this, int param_1, int param_2, uint param_3)
 * Address ranges: 10046f20-10046f48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10046f20(void *this,int param_1,int param_2,uint param_3)

{
  EnterCriticalSection(this);
  FUN_10046d3d(this,param_1,param_2,param_3);
  LeaveCriticalSection(this);
  return;
}

