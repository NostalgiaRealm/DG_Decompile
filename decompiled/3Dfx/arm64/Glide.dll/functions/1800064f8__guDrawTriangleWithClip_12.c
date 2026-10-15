/*
 * _guDrawTriangleWithClip@12 at 1800064f8
 * undefined __cdecl _guDrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800064f8-180006563
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
                    /* 0x64f8  114  _guDrawTriangleWithClip@12
                       0x64f8  275  guDrawTriangleWithClip */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x208))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3,1);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

