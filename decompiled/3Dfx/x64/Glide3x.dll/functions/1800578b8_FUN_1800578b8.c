/*
 * FUN_1800578b8 at 1800578b8
 * undefined __fastcall FUN_1800578b8(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 1800578b8-180057910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800578b8(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_180057858(param_1,param_3);
    }
    FUN_180061330((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

