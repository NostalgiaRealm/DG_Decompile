/*
 * _grDepthBiasLevel@4 at 180002cd8
 * undefined __cdecl _grDepthBiasLevel@4(short param_1)
 * Address ranges: 180002cd8-180002d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthBiasLevel_4(short param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x2cd8  27  _grDepthBiasLevel@4
                       0x2cd8  188  grDepthBiasLevel */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_180061700((uint *)(lVar2 + 0x60));
    plVar3 = *(longlong **)(lVar2 + 0x18);
    iVar1 = (int)param_1;
    if (iVar1 != *(int *)((longlong)plVar3 + 0x133)) {
      (**(code **)(*plVar3 + 0x110))(plVar3,iVar1);
      *(int *)(*(longlong *)(lVar2 + 0x18) + 0x133) = iVar1;
    }
    FUN_1800616f0((uint *)(lVar2 + 0x60));
  }
  return;
}

