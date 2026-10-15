/*
 * guAADrawTriangleWithClip at 10002492
 * undefined __stdcall guAADrawTriangleWithClip(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10002492-100024c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guAADrawTriangleWithClip,12
 */

/* __stdcall guAADrawTriangleWithClip,12 */

void guAADrawTriangleWithClip(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x2492  108  _guAADrawTriangleWithClip@12 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x11c))(param_1,param_2,param_3);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

