/*
 * FUN_1000ef6a at 1000ef6a
 * undefined __stdcall FUN_1000ef6a(void)
 * Address ranges: 1000ef6a-1000ef88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000ef6a(void)

{
  LOCK();
  DAT_100ba2e4[1].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((int)&DAT_100ba2e4[1].DebugInfo[-1].SpareWORD + 1);
  UNLOCK();
  LeaveCriticalSection(DAT_100ba2e4);
  LOCK();
  DAT_100ba2e4[1].RecursionCount = DAT_100ba2e4[1].RecursionCount + -1;
  UNLOCK();
  return;
}

