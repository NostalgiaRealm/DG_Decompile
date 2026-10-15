/*
 * _guDrawTriangleWithClip@12 at 180005a58
 * undefined __cdecl _guDrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180005a58-180005ac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
                    /* 0x5a58  110  _guDrawTriangleWithClip@12
                       0x5a58  267  guDrawTriangleWithClip */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x208))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3,1);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

