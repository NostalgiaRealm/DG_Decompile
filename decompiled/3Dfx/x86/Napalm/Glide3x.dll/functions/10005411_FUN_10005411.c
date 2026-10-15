/*
 * FUN_10005411 at 10005411
 * undefined * __stdcall FUN_10005411(void)
 * Address ranges: 10005411-1000542c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_10005411(void)

{
  if ((DAT_1005fb5c & 1) == 0) {
    DAT_1005fb5c = DAT_1005fb5c | 1;
    FUN_1000542d();
  }
  return &DAT_1005fb60;
}

