/*
 * _grDepthBiasLevel@4 at 180002ce0
 * undefined __cdecl _grDepthBiasLevel@4(short param_1)
 * Address ranges: 180002ce0-180002d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBiasLevel_4(short param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x2ce0  27  _grDepthBiasLevel@4
                       0x2ce0  184  grDepthBiasLevel */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    plVar3 = *(longlong **)(lVar2 + 0x18);
    iVar1 = (int)param_1;
    if (iVar1 != *(int *)((longlong)plVar3 + 0x133)) {
      (**(code **)(*plVar3 + 0x110))(plVar3,iVar1);
      *(int *)(*(longlong *)(lVar2 + 0x18) + 0x133) = iVar1;
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

