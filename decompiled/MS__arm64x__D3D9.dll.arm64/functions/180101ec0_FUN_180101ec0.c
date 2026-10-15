/*
 * FUN_180101ec0 at 180101ec0
 * undefined FUN_180101ec0(void)
 * Address ranges: 180101ec0-180101f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180101ec0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_18023c868;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    (*__imp_KERNEL32_dll_CloseHandle)();
  }
  if ((param_2 & 1) != 0) {
    FUN_180102fc0(param_1,0x18);
  }
  return param_1;
}

