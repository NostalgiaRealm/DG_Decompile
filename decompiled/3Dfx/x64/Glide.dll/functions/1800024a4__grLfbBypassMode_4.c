/*
 * _grLfbBypassMode@4 at 1800024a4
 * undefined __fastcall _grLfbBypassMode@4(int param_1)
 * Address ranges: 1800024a4-1800024c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbBypassMode_4(int param_1)

{
                    /* 0x24a4  53  _grLfbBypassMode@4
                       0x24a4  214  grLfbBypassMode */
  if (DAT_18006c8a0 != (param_1 != 1)) {
    DAT_18006c8a0 = (uint)(param_1 != 1);
    FUN_180005c48();
  }
  return;
}

