/*
 * FUN_10003225 at 10003225
 * undefined __stdcall FUN_10003225(void)
 * Address ranges: 10003225-10003254
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10003225(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = DAT_1006c200 + -1;
  UNLOCK();
  bVar2 = DAT_1006c200 == 1;
  DAT_1006c200 = iVar1;
  if ((bVar2) && (DAT_1006c208 != (PVOID)0x0)) {
    RemoveVectoredExceptionHandler(DAT_1006c208);
    RemoveVectoredContinueHandler(DAT_1006c20c);
  }
  return;
}

