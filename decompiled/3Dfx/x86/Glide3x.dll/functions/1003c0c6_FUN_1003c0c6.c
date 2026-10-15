/*
 * FUN_1003c0c6 at 1003c0c6
 * undefined __thiscall FUN_1003c0c6(void * this, int param_1)
 * Address ranges: 1003c0c6-1003c0f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003c0c6(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1003be28(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

