/*
 * FUN_10025091 at 10025091
 * undefined __stdcall FUN_10025091(void)
 * Address ranges: 10025091-100250ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025091(void)

{
  DAT_100ba2e0 = DAT_100ba2e0 + -1;
  LeaveCriticalSection(DAT_100ba2d8);
  LOCK();
  *(int *)(DAT_100ba2e4 + 0x20) = *(int *)(DAT_100ba2e4 + 0x20) + -1;
  UNLOCK();
  return;
}

