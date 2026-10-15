/*
 * FUN_14000f2c0 at 14000f2c0
 * undefined __cdecl FUN_14000f2c0(undefined8 * param_1)
 * Address ranges: 14000f2c0-14000f2f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000f2c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_140028808;
  if (((HANDLE)param_1[1] != (HANDLE)0x0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014000f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    CloseHandle((HANDLE)param_1[1]);
    return;
  }
  return;
}

