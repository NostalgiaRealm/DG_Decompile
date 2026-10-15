/*
 * _grDrawPoint@4 at 1800014f0
 * undefined __cdecl _grDrawPoint@4(undefined8 param_1)
 * Address ranges: 1800014f0-18000153f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPoint_4(undefined8 param_1)

{
  longlong lVar1;
  
                    /* 0x14f0  36  _grDrawPoint@4
                       0x14f0  193  grDrawPoint */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1f8))(*(longlong **)(lVar1 + 0x18),param_1);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

