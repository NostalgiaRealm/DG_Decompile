/*
 * guDrawTriangleWithClip at 100024fd
 * undefined __stdcall guDrawTriangleWithClip(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 100024fd-1000252f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall guDrawTriangleWithClip,12
 */

/* __stdcall guDrawTriangleWithClip,12 */

void guDrawTriangleWithClip(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined *puVar2;
  
                    /* 0x24fd  108  _guDrawTriangleWithClip@12 */
  puVar2 = FUN_10012760();
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

