/*
 * FUN_18002f81c at 18002f81c
 * undefined __fastcall FUN_18002f81c(void)
 * Address ranges: 18002f81c-18002f853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f81c(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = DAT_180111f30 + -1;
  UNLOCK();
  bVar2 = DAT_180111f30 == 1;
  DAT_180111f30 = iVar1;
  if ((bVar2) && (DAT_180111f28 != (PVOID)0x0)) {
    RemoveVectoredExceptionHandler(DAT_180111f28);
    RemoveVectoredContinueHandler(DAT_180111f40);
  }
  return;
}

