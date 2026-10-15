/*
 * _grLfbWriteMode@4 at 1800024e4
 * undefined __fastcall _grLfbWriteMode@4(int param_1)
 * Address ranges: 1800024e4-1800024ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbWriteMode_4(int param_1)

{
                    /* 0x24e4  63  _grLfbWriteMode@4
                       0x24e4  224  grLfbWriteMode */
  if (DAT_18006c8a4 != param_1) {
    DAT_18006c8a4 = param_1;
    FUN_180005c48();
  }
  return;
}

