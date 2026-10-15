/*
 * grLfbOrigin at 10001f16
 * undefined __stdcall grLfbOrigin(int param_1)
 * Address ranges: 10001f16-10001f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbOrigin,4
 */

/* __stdcall grLfbOrigin,4 */

void grLfbOrigin(int param_1)

{
                    /* 0x1f16  57  _grLfbOrigin@4 */
  if (DAT_1005976c != param_1) {
    DAT_1005976c = param_1;
    FUN_10004276();
  }
  return;
}

