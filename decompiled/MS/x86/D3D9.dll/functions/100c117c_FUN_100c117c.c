/*
 * FUN_100c117c at 100c117c
 * undefined __thiscall FUN_100c117c(void * this, int param_1)
 * Address ranges: 100c117c-100c11a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c117c(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_100c0ee3(this,param_1,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

