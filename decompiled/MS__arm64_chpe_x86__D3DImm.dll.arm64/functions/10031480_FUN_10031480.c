/*
 * FUN_10031480 at 10031480
 * undefined FUN_10031480(void)
 * Address ranges: 10031480-100314c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10031480(undefined4 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1009c86c;
  FUN_100310c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x80);
  }
  return param_1;
}

