/*
 * FUN_10029aaf at 10029aaf
 * undefined __stdcall FUN_10029aaf(void)
 * Address ranges: 10029aaf-10029afc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029aaf(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  iVar1 = DAT_1006c290 + 1;
  UNLOCK();
  bVar2 = DAT_1006c290 == 0;
  DAT_1006c290 = iVar1;
  if (((bVar2) &&
      (DAT_1006c288 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0),
      DAT_1006c288 != (HANDLE)0x0)) &&
     (DAT_1006c28c = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_10029b84
                                  ,(LPVOID)0x0,0,(LPDWORD)0x0), DAT_1006c28c == (HANDLE)0x0)) {
    CloseHandle(DAT_1006c288);
  }
  return;
}

