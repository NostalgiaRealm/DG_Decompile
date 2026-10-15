/*
 * _grDrawPlanarPolygon@12 at 180001610
 * undefined __cdecl _grDrawPlanarPolygon@12(int param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180001610-180001687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDrawPlanarPolygon_12(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x1610  34  _grDrawPlanarPolygon@12
                       0x1610  37  _grDrawPolygon@12
                       0x1610  191  grDrawPlanarPolygon
                       0x1610  194  grDrawPolygon */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (2 < param_1) {
      iVar1 = 0x400;
      if (param_1 < 0x401) {
        iVar1 = param_1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x210))
                (*(longlong **)(lVar2 + 0x18),iVar1,param_2,param_3);
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

