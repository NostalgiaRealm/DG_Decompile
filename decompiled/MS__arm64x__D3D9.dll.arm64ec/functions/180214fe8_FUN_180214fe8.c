/*
 * FUN_180214fe8 at 180214fe8
 * undefined FUN_180214fe8(void)
 * Address ranges: 180214fe8-18021503b;180215048-180215057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180214fe8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  if ((char)param_1[3] != '\0') {
    if ((ulonglong)param_1[2] < (ulonglong)((param_1[1] - *param_1) + param_3)) {
      FUN_180214f80(param_1,param_3);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(param_1[1],param_2,param_3);
  }
  return;
}

