/*
 * _guDrawPolygonVertexListWithClip@8 at 180003650
 * undefined __fastcall _guDrawPolygonVertexListWithClip@8(int param_1)
 * Address ranges: 180003650-180003696
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawPolygonVertexListWithClip_8(int param_1)

{
  undefined *puVar1;
  
                    /* 0x3650  113  _guDrawPolygonVertexListWithClip@8
                       0x3650  274  guDrawPolygonVertexListWithClip */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (2 < param_1) {
      if (0x400 < param_1) {
        param_1 = 0x400;
      }
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x218))(*(longlong **)(puVar1 + 0x18),param_1);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

