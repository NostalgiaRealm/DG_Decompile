/*
 * FUN_180001cf0 at 180001cf0
 * undefined FUN_180001cf0(void)
 * Address ranges: 180001cf0-180001d37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180001cf0(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  param_1 = param_1 + param_2 * param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = param_1 - param_2;
    (*param_4)(param_1);
  }
  return;
}

