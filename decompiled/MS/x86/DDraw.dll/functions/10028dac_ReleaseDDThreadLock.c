/*
 * ReleaseDDThreadLock at 10028dac
 * undefined __stdcall ReleaseDDThreadLock(void)
 * Address ranges: 10028dac-10028dca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void ReleaseDDThreadLock(void)

{
                    /* 0x28dac  15  ReleaseDDThreadLock */
  if (DAT_100709fc == (FARPROC)0x0) {
    DAT_100709fc = FUN_10023885("ReleaseDDThreadLock");
    if (DAT_100709fc == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100709fc)();
  return;
}

