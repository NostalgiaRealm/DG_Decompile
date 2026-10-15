/*
 * FUN_180015904 at 180015904
 * undefined __fastcall FUN_180015904(void)
 * Address ranges: 180015904-18001592f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180015904(void)

{
  LOCK();
  *(int *)&DAT_1801123a8[1].DebugInfo = *(int *)&DAT_1801123a8[1].DebugInfo + -1;
  UNLOCK();
  LeaveCriticalSection(DAT_1801123a8);
  LOCK();
  DAT_1801123a8[1].LockCount = DAT_1801123a8[1].LockCount + -1;
  UNLOCK();
  return;
}

