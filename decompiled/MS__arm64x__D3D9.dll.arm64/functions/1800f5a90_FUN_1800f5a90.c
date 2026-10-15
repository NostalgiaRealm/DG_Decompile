/*
 * FUN_1800f5a90 at 1800f5a90
 * undefined FUN_1800f5a90(void)
 * Address ranges: 1800f5a90-1800f5aff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f5a90(longlong *param_1,undefined8 param_2,longlong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (ulonglong)((param_1[1] - *param_1) + param_3)) {
      FUN_1800f5a28(param_1,param_3);
    }
    thunk_FUN_180001218(param_1[1],param_2,param_3);
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

