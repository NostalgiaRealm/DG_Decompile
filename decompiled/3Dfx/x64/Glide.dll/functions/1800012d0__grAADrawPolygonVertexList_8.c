/*
 * _grAADrawPolygonVertexList@8 at 1800012d0
 * undefined __fastcall _grAADrawPolygonVertexList@8(int param_1)
 * Address ranges: 1800012d0-180001313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawPolygonVertexList_8(int param_1)

{
  undefined *puVar1;
  
                    /* 0x12d0  8  _grAADrawPolygonVertexList@8
                       0x12d0  169  grAADrawPolygonVertexList */
  puVar1 = FUN_180015384();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    if (2 < param_1) {
      if (0x400 < param_1) {
        param_1 = 0x400;
      }
      (**(code **)(**(longlong **)(puVar1 + 0x18) + 0x248))(*(longlong **)(puVar1 + 0x18),param_1);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

