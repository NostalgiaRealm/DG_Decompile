/*
 * FUN_10030500 at 10030500
 * undefined FUN_10030500(void)
 * Address ranges: 10030500-10030533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030500(void)

{
  if (*(int *)(DAT_1013ceec + 0x330) != 0) {
                    /* WARNING: Could not recover jumptable at 0x1003052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_10134240)(*(int *)(DAT_1013ceec + 0x330),0x408,0,0);
    return;
  }
  return;
}

