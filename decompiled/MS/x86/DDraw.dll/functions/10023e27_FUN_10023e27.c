/*
 * FUN_10023e27 at 10023e27
 * undefined __stdcall FUN_10023e27(void)
 * Address ranges: 10023e27-10023e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023e27(void)

{
  if (DAT_1006c280 != 0) {
    DAT_1006c280 = DAT_1006c280 + -1;
  }
  LOCK();
  DAT_1006c254[1].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((int)&DAT_1006c254[1].DebugInfo[-1].SpareWORD + 1);
  UNLOCK();
  LeaveCriticalSection(DAT_1006c254);
  return;
}

