/*
 * FUN_1003f500 at 1003f500
 * undefined __thiscall FUN_1003f500(void * this, int param_1)
 * Address ranges: 1003f500-1003f52b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f500(void *this,int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1003f236(this,0,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}

