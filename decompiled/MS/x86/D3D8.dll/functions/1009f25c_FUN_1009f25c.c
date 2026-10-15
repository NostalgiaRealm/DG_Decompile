/*
 * FUN_1009f25c at 1009f25c
 * char __fastcall FUN_1009f25c(int param_1)
 * Address ranges: 1009f25c-1009f299
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_1009f25c(int param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = '\x01';
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  piVar2 = (int *)FUN_1009f406((void *)(param_1 + 0xc),(uint *)&stack0x00000004);
  if (piVar2 != (int *)0x0) {
    cVar1 = FUN_1009e7e4(piVar2,'\x01');
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  return cVar1;
}

