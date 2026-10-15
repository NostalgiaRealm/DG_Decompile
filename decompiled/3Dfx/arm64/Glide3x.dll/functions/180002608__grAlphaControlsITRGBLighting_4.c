/*
 * _grAlphaControlsITRGBLighting@4 at 180002608
 * undefined __cdecl _grAlphaControlsITRGBLighting@4(int param_1)
 * Address ranges: 180002608-180002673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaControlsITRGBLighting_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2608  4  _grAlphaControlsITRGBLighting@4
                       0x2608  104  grAlphaControlsITRGBLighting */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x116)) {
      (**(code **)(*plVar2 + 0x168))(plVar2,param_1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x116) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

