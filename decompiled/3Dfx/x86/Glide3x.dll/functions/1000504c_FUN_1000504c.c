/*
 * FUN_1000504c at 1000504c
 * undefined * __stdcall FUN_1000504c(void)
 * Address ranges: 1000504c-10005067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * FUN_1000504c(void)

{
  if ((DAT_1005b97c & 1) == 0) {
    DAT_1005b97c = DAT_1005b97c | 1;
    FUN_10005068();
  }
  return &DAT_1005b980;
}

