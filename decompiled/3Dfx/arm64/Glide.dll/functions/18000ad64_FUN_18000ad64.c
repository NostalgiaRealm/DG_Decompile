/*
 * FUN_18000ad64 at 18000ad64
 * undefined8 * __cdecl FUN_18000ad64(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 18000ad64-18000ad97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000ad64(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180063cf8;
  if ((param_2 & 1) != 0) {
    FUN_180060a18(param_1);
  }
  return param_1;
}

