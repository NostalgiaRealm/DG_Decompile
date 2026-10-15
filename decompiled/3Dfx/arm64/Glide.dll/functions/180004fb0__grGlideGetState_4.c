/*
 * _grGlideGetState@4 at 180004fb0
 * undefined __cdecl _grGlideGetState@4(undefined8 * param_1)
 * Address ranges: 180004fb0-180005017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGlideGetState_4(undefined8 *param_1)

{
  longlong lVar1;
  
                    /* 0x4fb0  45  _grGlideGetState@4
                       0x4fb0  206  grGlideGetState */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    if (param_1 != (undefined8 *)0x0) {
      thunk_FUN_180001218(param_1,(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0xf0),0x135);
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1c0))
                (*(longlong **)(lVar1 + 0x18),(longlong)param_1 + 0x135);
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

