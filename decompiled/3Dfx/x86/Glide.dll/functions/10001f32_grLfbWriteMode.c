/*
 * grLfbWriteMode at 10001f32
 * undefined __stdcall grLfbWriteMode(int param_1)
 * Address ranges: 10001f32-10001f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbWriteMode,4
 */

/* __stdcall grLfbWriteMode,4 */

void grLfbWriteMode(int param_1)

{
                    /* 0x1f32  61  _grLfbWriteMode@4 */
  if (DAT_10059768 != param_1) {
    DAT_10059768 = param_1;
    FUN_10004276();
  }
  return;
}

