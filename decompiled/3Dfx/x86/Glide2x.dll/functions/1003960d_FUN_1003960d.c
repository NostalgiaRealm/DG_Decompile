/*
 * FUN_1003960d at 1003960d
 * undefined __thiscall FUN_1003960d(void * this, int param_1)
 * Address ranges: 1003960d-10039638
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003960d(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_10039343(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

