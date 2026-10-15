/*
 * _grDepthRange@8 at 180003cf8
 * undefined __cdecl _grDepthRange@8(undefined4 param_1, undefined4 param_2)
 * Address ranges: 180003cf8-180003d57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthRange_8(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
                    /* 0x3cf8  24  _grDepthRange@8
                       0x3cf8  124  grDepthRange */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 600))(param_1,param_2);
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

