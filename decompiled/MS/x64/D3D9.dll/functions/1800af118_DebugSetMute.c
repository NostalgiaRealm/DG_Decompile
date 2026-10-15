/*
 * DebugSetMute at 1800af118
 * undefined __fastcall DebugSetMute(void)
 * Address ranges: 1800af118-1800af146
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DebugSetMute(void)

{
                    /* 0xaf118  8  DebugSetMute */
  if ((DAT_180117448 == (FARPROC)0x0) &&
     (DAT_180117448 = FUN_1800ad364("DebugSetMute"), DAT_180117448 == (FARPROC)0x0)) {
    return;
  }
  (*DAT_180117448)();
  return;
}

