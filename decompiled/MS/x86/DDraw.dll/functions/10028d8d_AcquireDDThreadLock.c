/*
 * AcquireDDThreadLock at 10028d8d
 * undefined __stdcall AcquireDDThreadLock(void)
 * Address ranges: 10028d8d-10028dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void AcquireDDThreadLock(void)

{
                    /* 0x28d8d  1  AcquireDDThreadLock */
  if (DAT_100709f8 == (FARPROC)0x0) {
    DAT_100709f8 = FUN_10023885("AcquireDDThreadLock");
    if (DAT_100709f8 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028daa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100709f8)();
  return;
}

