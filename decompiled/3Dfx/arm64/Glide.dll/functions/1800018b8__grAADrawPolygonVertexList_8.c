/*
 * _grAADrawPolygonVertexList@8 at 1800018b8
 * undefined __cdecl _grAADrawPolygonVertexList@8(int param_1, undefined8 param_2)
 * Address ranges: 1800018b8-180001927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawPolygonVertexList_8(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x18b8  8  _grAADrawPolygonVertexList@8
                       0x18b8  169  grAADrawPolygonVertexList */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    if (2 < param_1) {
      iVar1 = 0x400;
      if (param_1 < 0x401) {
        iVar1 = param_1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x248))
                (*(longlong **)(lVar2 + 0x18),iVar1,param_2);
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

