/*
 * _guAADrawTriangleWithClip@12 at 1800035d0
 * undefined __fastcall _guAADrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800035d0-18000360b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAADrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
                    /* 0x35d0  110  _guAADrawTriangleWithClip@12
                       0x35d0  271  guAADrawTriangleWithClip */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x238))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2,param_3);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

