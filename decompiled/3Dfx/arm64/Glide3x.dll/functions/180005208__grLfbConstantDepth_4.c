/*
 * _grLfbConstantDepth@4 at 180005208
 * undefined __cdecl _grLfbConstantDepth@4(short param_1)
 * Address ranges: 180005208-180005277
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4(short param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x5208  51  _grLfbConstantDepth@4
                       0x5208  151  grLfbConstantDepth */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(short *)((longlong)plVar2 + 0x13f)) {
      (**(code **)(*plVar2 + 0xf8))(plVar2,param_1);
      *(short *)(*(longlong *)(lVar1 + 0x18) + 0x13f) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

