/*
 * FUN_140014930 at 140014930
 * undefined8 * __cdecl FUN_140014930(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 140014930-140014933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140014930(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_140028ff0;
  FUN_140014980((ulonglong)param_1);
  thunk_FUN_140024830((LPVOID)param_1[99]);
  if ((param_2 & 1) != 0) {
    FUN_140024830(param_1);
  }
  return param_1;
}

