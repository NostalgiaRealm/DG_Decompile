/*
 * _guAADrawTriangleWithClip@12 at 1800033b0
 * undefined __fastcall _guAADrawTriangleWithClip@12(undefined8 param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800033b0-1800033eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guAADrawTriangleWithClip_12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
                    /* 0x33b0  106  _guAADrawTriangleWithClip@12
                       0x33b0  263  guAADrawTriangleWithClip */
  puVar1 = FUN_180015044();
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

