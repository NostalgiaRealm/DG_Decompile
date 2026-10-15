/*
 * FUN_10023a2f at 10023a2f
 * undefined __stdcall FUN_10023a2f(void)
 * Address ranges: 10023a2f-10023a5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023a2f(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = DAT_100ba2b8 + -1;
  UNLOCK();
  bVar2 = DAT_100ba2b8 == 1;
  DAT_100ba2b8 = iVar1;
  if ((bVar2) && (DAT_100ba2c0 != (PVOID)0x0)) {
    RemoveVectoredExceptionHandler(DAT_100ba2c0);
    RemoveVectoredContinueHandler(DAT_100ba2c4);
  }
  return;
}

