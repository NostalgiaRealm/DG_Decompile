/*
 * DDInternalUnlock at 10028df1
 * undefined __stdcall DDInternalUnlock(void)
 * Address ranges: 10028df1-10028e16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DDInternalUnlock(void)

{
                    /* 0x28df1  5  DDInternalUnlock */
  if (DAT_10070a04 == (FARPROC)0x0) {
    DAT_10070a04 = FUN_10023885("DDInternalUnlock");
    if (DAT_10070a04 == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x10028e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10070a04)();
  return;
}

