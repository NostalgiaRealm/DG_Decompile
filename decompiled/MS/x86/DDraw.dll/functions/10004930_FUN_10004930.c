/*
 * FUN_10004930 at 10004930
 * undefined __stdcall FUN_10004930(void)
 * Address ranges: 10004930-10004948
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10004930(void)

{
  if (*(code **)(DAT_1006c204 + 0x50) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10004940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(DAT_1006c204 + 0x50))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10004943. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCursor();
  return;
}

