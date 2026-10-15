/*
 * DebugSetMute at 10091184
 * undefined __stdcall DebugSetMute(void)
 * Address ranges: 10091184-100911a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DebugSetMute(void)

{
                    /* 0x91184  8  DebugSetMute */
  if (DAT_100e3a2c == (FARPROC)0x0) {
    DAT_100e3a2c = FUN_1008fc59("DebugSetMute");
    if (DAT_100e3a2c == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x100911a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e3a2c)();
  return;
}

