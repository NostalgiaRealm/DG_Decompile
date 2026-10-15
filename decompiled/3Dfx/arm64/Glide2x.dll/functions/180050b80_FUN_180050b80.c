/*
 * FUN_180050b80 at 180050b80
 * undefined8 __cdecl FUN_180050b80(undefined8 param_1, ulonglong param_2)
 * Address ranges: 180050b80-180050b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180050b80(undefined8 *param_1,ulonglong param_2)

{
  FUN_180050b18(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

