/*
 * DebugSetMute at 1800a80e0
 * undefined DebugSetMute(void)
 * Address ranges: 1800a80e0-1800a811b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DebugSetMute(void)

{
  if ((DAT_180258798 == (code *)0x0) &&
     (DAT_180258798 = (code *)FUN_1800a3360(s_DebugSetMute_180235ec8), DAT_180258798 == (code *)0x0)
     ) {
    return;
  }
  (*DAT_180258798)();
  return;
}

