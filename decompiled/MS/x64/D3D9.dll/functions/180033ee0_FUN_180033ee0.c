/*
 * FUN_180033ee0 at 180033ee0
 * undefined8 * __fastcall FUN_180033ee0(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180033ee0-180033f0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033ee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1801019e0;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

