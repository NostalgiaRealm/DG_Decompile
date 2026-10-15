/*
 * FUN_1002c703 at 1002c703
 * undefined __stdcall FUN_1002c703(void)
 * Address ranges: 1002c703-1002c71e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c703(void)

{
  DAT_100deaa0 = DAT_100deaa0 + -1;
  LeaveCriticalSection(DAT_100dea98);
  LOCK();
  *(int *)(DAT_100deaa4 + 0x20) = *(int *)(DAT_100deaa4 + 0x20) + -1;
  UNLOCK();
  return;
}

