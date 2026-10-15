/*
 * FUN_180031344 at 180031344
 * undefined __fastcall FUN_180031344(void)
 * Address ranges: 180031344-18003136a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031344(void)

{
  DAT_180111f60 = DAT_180111f60 + -1;
  LeaveCriticalSection(DAT_180111f68);
  LOCK();
  *(int *)(DAT_1801123a8 + 0x30) = *(int *)(DAT_1801123a8 + 0x30) + -1;
  UNLOCK();
  return;
}

