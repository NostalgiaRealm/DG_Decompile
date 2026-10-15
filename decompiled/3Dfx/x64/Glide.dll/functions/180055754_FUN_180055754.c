/*
 * FUN_180055754 at 180055754
 * undefined __fastcall FUN_180055754(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 180055754-1800557ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055754(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_1800556f4(param_1,param_3);
    }
    FUN_18005f1b0((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

