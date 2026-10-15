/*
 * _grGlideGetState@4 at 180004510
 * undefined __cdecl _grGlideGetState@4(undefined8 * param_1)
 * Address ranges: 180004510-180004577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideGetState_4(undefined8 *param_1)

{
  longlong lVar1;
  
                    /* 0x4510  45  _grGlideGetState@4
                       0x4510  202  grGlideGetState */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      thunk_FUN_180001218(param_1,(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0xf0),0x135);
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1c0))
                (*(longlong **)(lVar1 + 0x18),(longlong)param_1 + 0x135);
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

