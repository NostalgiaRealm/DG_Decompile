/*
 * FUN_1800a9494 at 1800a9494
 * undefined8 * __fastcall FUN_1800a9494(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 1800a9494-1800a94be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800a9494(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180103c70;
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

