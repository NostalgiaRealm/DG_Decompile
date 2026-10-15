/*
 * FUN_1003c0f2 at 1003c0f2
 * undefined __thiscall FUN_1003c0f2(void * this, int param_1)
 * Address ranges: 1003c0f2-1003c11d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c0f2(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1003be28(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

