/*
 * guDrawTriangleWithClip at 100024c3
 * undefined __stdcall guDrawTriangleWithClip(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100024c3-100024f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guDrawTriangleWithClip,12
 */

/* __stdcall guDrawTriangleWithClip,12 */

void guDrawTriangleWithClip(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x24c3  112  _guDrawTriangleWithClip@12 */
  puVar2 = FUN_10012ab2();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    (**(code **)(**(int **)(puVar2 + 0xc) + 0x104))(param_1,param_2,param_3,1);
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

