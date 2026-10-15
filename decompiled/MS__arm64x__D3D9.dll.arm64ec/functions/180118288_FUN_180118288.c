/*
 * FUN_180118288 at 180118288
 * undefined FUN_180118288(void)
 * Address ranges: 180118288-1801182d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180118288(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180229df8;
  param_1[9] = &PTR_FUN_180229db0;
  FUN_18012d400();
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x128);
  }
  return param_1;
}

