/*
 * FUN_180101f20 at 180101f20
 * undefined FUN_180101f20(void)
 * Address ranges: 180101f20-180101f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180101f20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_18023c868;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000180101f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__imp_KERNEL32_dll_CloseHandle)(param_1[1]);
    return;
  }
  return;
}

