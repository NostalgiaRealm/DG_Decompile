/*
 * FUN_1004bbc0 at 1004bbc0
 * undefined FUN_1004bbc0(void)
 * Address ranges: 1004bbc0-1004bbfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004bbc0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1009f144;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x1004bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_100a800c)(param_1[1]);
    return;
  }
  return;
}

