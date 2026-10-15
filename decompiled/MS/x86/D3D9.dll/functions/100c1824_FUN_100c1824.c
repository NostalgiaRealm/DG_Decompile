/*
 * FUN_100c1824 at 100c1824
 * char __fastcall FUN_100c1824(int param_1)
 * Address ranges: 100c1824-100c1861
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_100c1824(int param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  piVar2 = (int *)FUN_100c19ce((void *)(param_1 + 0xc),(uint *)&stack0x00000004);
  if (piVar2 != (int *)0x0) {
    cVar1 = FUN_100c0dac(piVar2,'\x01');
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return cVar1;
}

