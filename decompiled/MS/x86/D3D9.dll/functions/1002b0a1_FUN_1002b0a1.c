/*
 * FUN_1002b0a1 at 1002b0a1
 * undefined __stdcall FUN_1002b0a1(void)
 * Address ranges: 1002b0a1-1002b0d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b0a1(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = DAT_100dea78 + -1;
  UNLOCK();
  bVar2 = DAT_100dea78 == 1;
  DAT_100dea78 = iVar1;
  if ((bVar2) && (DAT_100dea80 != (PVOID)0x0)) {
    RemoveVectoredExceptionHandler(DAT_100dea80);
    RemoveVectoredContinueHandler(DAT_100dea84);
  }
  return;
}

