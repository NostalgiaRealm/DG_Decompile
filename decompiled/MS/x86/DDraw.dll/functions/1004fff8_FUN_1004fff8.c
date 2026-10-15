/*
 * FUN_1004fff8 at 1004fff8
 * undefined __thiscall FUN_1004fff8(void * this, int param_1)
 * Address ranges: 1004fff8-10050023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004fff8(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1004fd5a(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

