/*
 * FUN_180057b48 at 180057b48
 * undefined __cdecl FUN_180057b48(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 180057b48-180057bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057b48(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_180057ae0(param_1,param_3);
    }
    thunk_FUN_180001218((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

