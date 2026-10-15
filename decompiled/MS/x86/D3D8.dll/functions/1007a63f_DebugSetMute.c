/*
 * DebugSetMute at 1007a63f
 * undefined __stdcall DebugSetMute(void)
 * Address ranges: 1007a63f-1007a65d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DebugSetMute(void)

{
                    /* 0x7a63f  1  DebugSetMute */
  if (DAT_100bee6c == (FARPROC)0x0) {
    DAT_100bee6c = FUN_100797dd("DebugSetMute");
    if (DAT_100bee6c == (FARPROC)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x1007a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100bee6c)();
  return;
}

