/*
 * FUN_10039971 at 10039971
 * undefined __thiscall FUN_10039971(void * this, int param_1)
 * Address ranges: 10039971-1003999c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10039971(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_100396d3(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

