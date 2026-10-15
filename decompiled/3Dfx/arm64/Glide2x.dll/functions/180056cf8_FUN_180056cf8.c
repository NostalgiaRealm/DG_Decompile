/*
 * FUN_180056cf8 at 180056cf8
 * undefined __cdecl FUN_180056cf8(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 180056cf8-180056d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056cf8(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_180056c90(param_1,param_3);
    }
    thunk_FUN_180001218((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

