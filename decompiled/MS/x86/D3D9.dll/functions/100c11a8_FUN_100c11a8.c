/*
 * FUN_100c11a8 at 100c11a8
 * undefined __thiscall FUN_100c11a8(void * this, int param_1)
 * Address ranges: 100c11a8-100c11d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c11a8(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_100c0ee3(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

