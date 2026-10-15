/*
 * FUN_10001cb0 at 10001cb0
 * undefined FUN_10001cb0(void)
 * Address ranges: 10001cb0-10001ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001cb0(void)

{
  if (*(int *)(DAT_100be0c0 + 0x330) != 0) {
                    /* WARNING: Could not recover jumptable at 0x10001cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100ba278)(*(int *)(DAT_100be0c0 + 0x330),0x408,0,0);
    return;
  }
  return;
}

