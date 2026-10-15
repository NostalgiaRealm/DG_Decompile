/*
 * _grAlphaControlsITRGBLighting@4 at 1800026d8
 * undefined __cdecl _grAlphaControlsITRGBLighting@4(int param_1)
 * Address ranges: 1800026d8-180002743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaControlsITRGBLighting_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x26d8  12  _grAlphaControlsITRGBLighting@4
                       0x26d8  173  grAlphaControlsITRGBLighting */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x116)) {
      (**(code **)(*plVar2 + 0x148))(plVar2,param_1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x116) = param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

