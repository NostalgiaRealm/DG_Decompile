/*
 * FUN_18005a5c8 at 18005a5c8
 * undefined __cdecl FUN_18005a5c8(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 18005a5c8-18005a637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a5c8(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_18005a560(param_1,param_3);
    }
    thunk_FUN_1800010d8((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

