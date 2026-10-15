/*
 * _grCoordinateSpace@4 at 180003ca0
 * undefined __cdecl _grCoordinateSpace@4(int param_1)
 * Address ranges: 180003ca0-180003cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCoordinateSpace_4(int param_1)

{
  longlong lVar1;
  
                    /* 0x3ca0  18  _grCoordinateSpace@4
                       0x3ca0  118  grCoordinateSpace */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x250))(*(longlong **)(lVar1 + 0x18),param_1 != 0);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

