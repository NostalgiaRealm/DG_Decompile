/*
 * grDrawPlanarPolygonVertexList at 1000132e
 * undefined __stdcall grDrawPlanarPolygonVertexList(int param_1, undefined4 param_2)
 * Address ranges: 1000132e-1000136e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDrawPlanarPolygonVertexList,8
 */

/* __stdcall grDrawPlanarPolygonVertexList,8 */

void grDrawPlanarPolygonVertexList(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x132e  33  _grDrawPlanarPolygonVertexList@8
                       0x132e  36  _grDrawPolygonVertexList@8 */
  puVar2 = FUN_10012760();
  if (puVar2[0x3c] != '\0') {
    piVar1 = (int *)(puVar2 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (2 < param_1) {
      iVar3 = 0x400;
      if (param_1 < 0x401) {
        iVar3 = param_1;
      }
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x10c))(iVar3,param_2,0);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

