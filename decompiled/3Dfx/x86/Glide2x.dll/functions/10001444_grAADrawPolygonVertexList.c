/*
 * grAADrawPolygonVertexList at 10001444
 * undefined __stdcall grAADrawPolygonVertexList(int param_1, undefined4 param_2)
 * Address ranges: 10001444-10001482
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grAADrawPolygonVertexList,8
 */

/* __stdcall grAADrawPolygonVertexList,8 */

void grAADrawPolygonVertexList(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
                    /* 0x1444  6  _grAADrawPolygonVertexList@8 */
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
      (**(code **)(**(int **)(puVar2 + 0xc) + 0x124))(iVar3,param_2);
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

