/*
 * FUN_1002500a at 1002500a
 * undefined __stdcall FUN_1002500a(void)
 * Address ranges: 1002500a-10025022
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002500a(void)

{
  if (*(code **)(DAT_100ba2bc + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1002501a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_100ba2bc + 0x50))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1002501d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCursor();
  return;
}

