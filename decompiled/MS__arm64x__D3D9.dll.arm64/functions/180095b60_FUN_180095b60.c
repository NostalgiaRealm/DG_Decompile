/*
 * FUN_180095b60 at 180095b60
 * undefined FUN_180095b60(void)
 * Address ranges: 180095b60-180095b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180095b60(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((int)param_1[7] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180095b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1,0,0);
    return;
  }
  return;
}

