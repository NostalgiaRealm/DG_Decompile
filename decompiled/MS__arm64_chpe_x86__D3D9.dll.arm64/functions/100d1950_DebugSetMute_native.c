/*
 * DebugSetMute_native at 100d1950
 * undefined DebugSetMute_native(void)
 * Address ranges: 100d1950-100d19a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DebugSetMute_native(void)

{
  code *extraout_w11;
  
  if ((DAT_10175b3c == 0) &&
     (DAT_10175b3c = FUN_100cfd50(s_DebugSetMute_10162df8), DAT_10175b3c == 0)) {
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)();
  return;
}

