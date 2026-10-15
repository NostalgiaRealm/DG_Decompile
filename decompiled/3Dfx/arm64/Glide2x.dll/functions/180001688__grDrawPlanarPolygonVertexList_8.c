/*
 * _grDrawPlanarPolygonVertexList@8 at 180001688
 * undefined __cdecl _grDrawPlanarPolygonVertexList@8(int param_1, undefined8 param_2)
 * Address ranges: 180001688-1800016fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPlanarPolygonVertexList_8(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x1688  35  _grDrawPlanarPolygonVertexList@8
                       0x1688  38  _grDrawPolygonVertexList@8
                       0x1688  192  grDrawPlanarPolygonVertexList
                       0x1688  195  grDrawPolygonVertexList */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (2 < param_1) {
      iVar1 = 0x400;
      if (param_1 < 0x401) {
        iVar1 = param_1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x218))
                (*(longlong **)(lVar2 + 0x18),iVar1,param_2,0);
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

