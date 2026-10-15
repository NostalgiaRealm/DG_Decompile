/*
 * _grDrawTriangle@12 at 1800015a0
 * undefined __cdecl _grDrawTriangle@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800015a0-18000160b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawTriangle_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
                    /* 0x15a0  39  _grDrawTriangle@12
                       0x15a0  196  grDrawTriangle */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x208))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3,0);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

