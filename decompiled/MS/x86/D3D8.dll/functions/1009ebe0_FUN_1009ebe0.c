/*
 * FUN_1009ebe0 at 1009ebe0
 * undefined __thiscall FUN_1009ebe0(void * this, int param_1)
 * Address ranges: 1009ebe0-1009ec0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1009ebe0(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1009e91b(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

