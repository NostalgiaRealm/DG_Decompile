/*
 * FUN_10012d33 at 10012d33
 * undefined __stdcall FUN_10012d33(void)
 * Address ranges: 10012d33-10012d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012d33(void)

{
  LOCK();
  DAT_100deaa4[1].DebugInfo =
       (PRTL_CRITICAL_SECTION_DEBUG)((int)&DAT_100deaa4[1].DebugInfo[-1].SpareWORD + 1);
  UNLOCK();
  LeaveCriticalSection(DAT_100deaa4);
  LOCK();
  DAT_100deaa4[1].RecursionCount = DAT_100deaa4[1].RecursionCount + -1;
  UNLOCK();
  return;
}

