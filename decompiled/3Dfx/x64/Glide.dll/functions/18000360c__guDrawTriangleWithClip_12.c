/*
 * _guDrawTriangleWithClip@12 at 18000360c
 * undefined __fastcall _guDrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 18000360c-18000364c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
                    /* 0x360c  114  _guDrawTriangleWithClip@12
                       0x360c  275  guDrawTriangleWithClip */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x208))
              (*(longlong **)(puVar1 + 0x18),param_1,param_2,param_3,1);
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

