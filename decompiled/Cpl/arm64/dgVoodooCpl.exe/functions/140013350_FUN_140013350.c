/*
 * FUN_140013350 at 140013350
 * undefined8 * __cdecl FUN_140013350(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140013350-140013353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028d30;
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

