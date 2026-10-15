/*
 * _grAADrawTriangle@24 at 1800017b0
 * undefined __cdecl _grAADrawTriangle@24(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 1800017b0-18000183f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawTriangle_24
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  
                    /* 0x17b0  9  _grAADrawTriangle@24
                       0x17b0  170  grAADrawTriangle */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x230))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3,param_4,param_5,param_6);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

