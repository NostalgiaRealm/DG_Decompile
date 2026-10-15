/*
 * FUN_180060820 at 180060820
 * undefined __fastcall FUN_180060820(undefined8 * param_1)
 * Address ranges: 180060820-180060843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1800624b8;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00018006083c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

