/*
 * _guDrawPolygonVertexListWithClip@8 at 180005ac8
 * undefined __cdecl _guDrawPolygonVertexListWithClip@8(int param_1, undefined8 param_2)
 * Address ranges: 180005ac8-180005b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _guDrawPolygonVertexListWithClip_8(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x5ac8  109  _guDrawPolygonVertexListWithClip@8
                       0x5ac8  266  guDrawPolygonVertexListWithClip */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (2 < param_1) {
      iVar1 = 0x400;
      if (param_1 < 0x401) {
        iVar1 = param_1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x218))
                (*(longlong **)(lVar2 + 0x18),iVar1,param_2,1);
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

