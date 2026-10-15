/*
 * FUN_100395e1 at 100395e1
 * undefined __thiscall FUN_100395e1(void * this, int param_1)
 * Address ranges: 100395e1-1003960c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100395e1(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_10039343(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

