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
                       0x14f0  197  grDrawPoint */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x1f8))(*(longlong **)(lVar1 + 0x18),param_1);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

