/*
 * DDInternalLock at 10028dcb
 * undefined __stdcall DDInternalLock(void)
 * Address ranges: 10028dcb-10028df0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DDInternalLock(void)

{
                    /* 0x28dcb  4  DDInternalLock */
  if (DAT_10070a00 == (FARPROC)0x0) {
    DAT_10070a00 = FUN_10023885("DDInternalLock");
    if (DAT_10070a00 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10070a00)();
  return;
}

