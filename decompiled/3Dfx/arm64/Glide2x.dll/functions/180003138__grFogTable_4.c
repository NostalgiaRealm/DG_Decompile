/*
 * _grFogTable@4 at 180003138
 * undefined __cdecl _grFogTable@4(undefined8 * param_1)
 * Address ranges: 180003138-18000319b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grFogTable_4(undefined8 *param_1)

{
  longlong lVar1;
  
                    /* 0x3138  43  _grFogTable@4
                       0x3138  200  grFogTable */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1b0))(*(longlong **)(lVar1 + 0x18),param_1);
    thunk_FUN_180001218((undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x22c),param_1,
                        (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x18) + 0xe8));
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

