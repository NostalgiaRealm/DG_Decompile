/*
 * FUN_180043890 at 180043890
 * undefined8 * __cdecl FUN_180043890(undefined8 * param_1, ulonglong param_2)
 * Address ranges: 180043890-180043893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180043890(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180064d30;
  FUN_180043340((longlong)param_1);
  FUN_180057ae8(param_1);
  if ((param_2 & 1) != 0) {
    FUN_18005fbc8(param_1);
  }
  return param_1;
}

