/*
 * FUN_1800552ac at 1800552ac
 * undefined __fastcall FUN_1800552ac(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 1800552ac-180055304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800552ac(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_18005524c(param_1,param_3);
    }
    FUN_18005ed10((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

