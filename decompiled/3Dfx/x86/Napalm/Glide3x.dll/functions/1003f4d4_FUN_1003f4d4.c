/*
 * FUN_1003f4d4 at 1003f4d4
 * undefined __thiscall FUN_1003f4d4(void * this, int param_1)
 * Address ranges: 1003f4d4-1003f4ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f4d4(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1003f236(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

