/*
 * _grSplash@20 at 180003538
 * undefined __cdecl _grSplash@20(void)
 * Address ranges: 180003538-18000356f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSplash_20(void)

{
  longlong lVar1;
  ulonglong extraout_x11;
  
                    /* 0x3538  64  _grSplash@20
                       0x3538  164  grSplash */
  lVar1 = FUN_180008ce0();
  if ((*(longlong *)(lVar1 + 0x70) != 0) && (*(char *)(lVar1 + 0x99) != '\0')) {
    (**(code **)(lVar1 + 0x90))(extraout_x11 & 0xffffffff);
  }
  return;
}

