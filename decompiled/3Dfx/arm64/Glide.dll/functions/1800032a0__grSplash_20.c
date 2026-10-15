/*
 * _grSplash@20 at 1800032a0
 * undefined __cdecl _grSplash@20(void)
 * Address ranges: 1800032a0-1800032d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20(void)

{
  longlong lVar1;
  ulonglong extraout_x11;
  
                    /* 0x32a0  67  _grSplash@20
                       0x32a0  228  grSplash */
  lVar1 = FUN_180017788();
  if ((*(longlong *)(lVar1 + 0x70) != 0) && (*(char *)(lVar1 + 0x99) != '\0')) {
    (**(code **)(lVar1 + 0x90))(extraout_x11 & 0xffffffff);
  }
  return;
}

