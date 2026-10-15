/*
 * FUN_1009ebb4 at 1009ebb4
 * undefined __thiscall FUN_1009ebb4(void * this, int param_1)
 * Address ranges: 1009ebb4-1009ebdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009ebb4(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1009e91b(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

