/*
 * FUN_1003999d at 1003999d
 * undefined __thiscall FUN_1003999d(void * this, int param_1)
 * Address ranges: 1003999d-100399c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003999d(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_100396d3(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

