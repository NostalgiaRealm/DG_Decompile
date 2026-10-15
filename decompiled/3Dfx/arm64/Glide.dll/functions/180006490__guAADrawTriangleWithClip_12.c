/*
 * _guAADrawTriangleWithClip@12 at 180006490
 * undefined __cdecl _guAADrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180006490-1800064f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAADrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
                    /* 0x6490  110  _guAADrawTriangleWithClip@12
                       0x6490  271  guAADrawTriangleWithClip */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x238))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3);
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

