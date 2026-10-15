/*
 * FUN_10029afd at 10029afd
 * undefined __fastcall FUN_10029afd(char param_1)
 * Address ranges: 10029afd-10029b74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10029afd(char param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 != '\0') {
    TerminateThread(DAT_1006c28c,0);
    DeleteTimerQueueTimer((HANDLE)0x0,DAT_1006c284,(HANDLE)0xffffffff);
    return;
  }
  LOCK();
  iVar1 = DAT_1006c290 + -1;
  UNLOCK();
  bVar2 = DAT_1006c290 == 1;
  DAT_1006c290 = iVar1;
  if (bVar2) {
    if (DAT_1006c28c != (HANDLE)0x0) {
      DAT_1006c216 = 1;
      WaitForSingleObject(DAT_1006c28c,0xffffffff);
      CloseHandle(DAT_1006c28c);
    }
    DAT_1006c288 = 0;
    DAT_1006c28c = (HANDLE)0x0;
    DAT_1006c216 = 0;
  }
  return;
}

