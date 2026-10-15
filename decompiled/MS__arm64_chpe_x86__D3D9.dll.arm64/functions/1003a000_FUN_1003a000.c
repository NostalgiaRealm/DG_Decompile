/*
 * FUN_1003a000 at 1003a000
 * undefined FUN_1003a000(void)
 * Address ranges: 1003a000-1003a033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003a000(void)

{
  if (*(int *)(DAT_10170ad0 + 0x330) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1003a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_1016c240)(*(int *)(DAT_10170ad0 + 0x330),0x408,0,0);
    return;
  }
  return;
}

