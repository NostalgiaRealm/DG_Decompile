/*
 * grLfbBypassMode at 10001ef4
 * undefined __stdcall grLfbBypassMode(int param_1)
 * Address ranges: 10001ef4-10001f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbBypassMode,4
 */

/* __stdcall grLfbBypassMode,4 */

void grLfbBypassMode(int param_1)

{
                    /* 0x1ef4  51  _grLfbBypassMode@4 */
  if (DAT_10059764 != (param_1 != 1)) {
    DAT_10059764 = (uint)(param_1 != 1);
    FUN_10004276();
  }
  return;
}

