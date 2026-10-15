/*
 * _grFogTable@4 at 180003400
 * undefined __cdecl _grFogTable@4(undefined8 * param_1)
 * Address ranges: 180003400-180003463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogTable_4(undefined8 *param_1)

{
  longlong lVar1;
  
                    /* 0x3400  39  _grFogTable@4
                       0x3400  139  grFogTable */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1d0))(*(longlong **)(lVar1 + 0x18),param_1);
    thunk_FUN_1800010d8((undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x2a8),param_1,
                        (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x18) + 0xe8));
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

