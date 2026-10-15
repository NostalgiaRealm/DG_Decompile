/*
 * FUN_180222500 at 180222500
 * undefined FUN_180222500(void)
 * Address ranges: 180222500-180222553
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180222500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180229168;
  if ((param_1[1] != 0) && (*(char *)(param_1 + 2) != '\0')) {
    thunk_FUN_180223824();
  }
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x18);
  }
  return param_1;
}

