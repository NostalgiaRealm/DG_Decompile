/*
 * _grAADrawPoint@4 at 180001700
 * undefined __cdecl _grAADrawPoint@4(undefined8 param_1)
 * Address ranges: 180001700-18000174f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawPoint_4(undefined8 param_1)

{
  longlong lVar1;
  
                    /* 0x1700  6  _grAADrawPoint@4
                       0x1700  167  grAADrawPoint */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x220))(*(longlong **)(lVar1 + 0x18),param_1);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

