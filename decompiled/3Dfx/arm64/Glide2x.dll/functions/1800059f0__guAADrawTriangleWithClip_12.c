/*
 * _guAADrawTriangleWithClip@12 at 1800059f0
 * undefined __cdecl _guAADrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800059f0-180005a57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAADrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
                    /* 0x59f0  106  _guAADrawTriangleWithClip@12
                       0x59f0  263  guAADrawTriangleWithClip */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x238))
              (*(longlong **)(lVar1 + 0x18),param_1,param_2,param_3);
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

