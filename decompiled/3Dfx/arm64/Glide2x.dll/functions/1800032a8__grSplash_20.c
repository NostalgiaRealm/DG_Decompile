/*
 * _grSplash@20 at 1800032a8
 * undefined __cdecl _grSplash@20(void)
 * Address ranges: 1800032a8-1800032df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20(void)

{
  longlong lVar1;
  ulonglong extraout_x11;
  
                    /* 0x32a8  62  _grSplash@20
                       0x32a8  219  grSplash */
  lVar1 = FUN_180016878();
  if ((*(longlong *)(lVar1 + 0x70) != 0) && (*(char *)(lVar1 + 0x99) != '\0')) {
    (**(code **)(lVar1 + 0x90))(extraout_x11 & 0xffffffff);
  }
  return;
}

