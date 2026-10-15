/*
 * _grDrawPlanarPolygonVertexList@8 at 180001160
 * undefined __fastcall _grDrawPlanarPolygonVertexList@8(int param_1)
 * Address ranges: 180001160-1800011a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPlanarPolygonVertexList_8(int param_1)

{
  undefined *puVar1;
  
                    /* 0x1160  35  _grDrawPlanarPolygonVertexList@8
                       0x1160  38  _grDrawPolygonVertexList@8
                       0x1160  196  grDrawPlanarPolygonVertexList
                       0x1160  199  grDrawPolygonVertexList */
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

