/*
 * FUN_1800edd90 at 1800edd90
 * undefined __fastcall FUN_1800edd90(longlong * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 1800edd90-1800edde8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800edd90(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + param_3) {
      FUN_1800edd30(param_1,param_3);
    }
    FUN_1800fbec0((undefined8 *)param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

