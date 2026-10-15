/*
 * FUN_10050024 at 10050024
 * undefined __thiscall FUN_10050024(void * this, int param_1)
 * Address ranges: 10050024-1005004f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10050024(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1004fd5a(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

