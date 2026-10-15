/*
 * grGlideGetVersion at 100020f0
 * undefined __stdcall grGlideGetVersion(undefined4 * param_1)
 * Address ranges: 100020f0-10002108
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideGetVersion,4
 */

/* __stdcall grGlideGetVersion,4 */

void grGlideGetVersion(undefined4 *param_1)

{
                    /* 0x20f0  44  _grGlideGetVersion@4 */
  *param_1 = 0x30362e32;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

