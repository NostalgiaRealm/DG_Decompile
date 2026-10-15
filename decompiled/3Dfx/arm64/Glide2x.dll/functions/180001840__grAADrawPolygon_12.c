/*
 * _grAADrawPolygon@12 at 180001840
 * undefined __cdecl _grAADrawPolygon@12(int param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 180001840-1800018b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAADrawPolygon_12(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x1840  7  _grAADrawPolygon@12
                       0x1840  164  grAADrawPolygon */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (2 < param_1) {
      iVar1 = 0x400;
      if (param_1 < 0x401) {
        iVar1 = param_1;
      }
      (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x240))
                (*(longlong **)(lVar2 + 0x18),iVar1,param_2,param_3);
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

