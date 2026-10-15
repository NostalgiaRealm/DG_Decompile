/*
 * FUN_140015af0 at 140015af0
 * undefined8 * __cdecl FUN_140015af0(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140015af0-140015af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140015af0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1400292c0;
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

