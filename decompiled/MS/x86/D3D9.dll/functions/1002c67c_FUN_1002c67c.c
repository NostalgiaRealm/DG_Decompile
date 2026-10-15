/*
 * FUN_1002c67c at 1002c67c
 * undefined __stdcall FUN_1002c67c(void)
 * Address ranges: 1002c67c-1002c694
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002c67c(void)

{
  if (*(code **)(DAT_100dea7c + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002c68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_100dea7c + 0x50))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1002c68f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCursor();
  return;
}

