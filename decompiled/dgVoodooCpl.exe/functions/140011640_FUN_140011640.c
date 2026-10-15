/*
 * FUN_140011640 at 140011640
 * undefined8 * __fastcall FUN_140011640(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140011640-14001166a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140011640(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028cd0;
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}

