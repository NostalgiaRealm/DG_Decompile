/*
 * _grLfbConstantDepth@4 at 1800040f8
 * undefined __cdecl _grLfbConstantDepth@4(short param_1)
 * Address ranges: 1800040f8-180004163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4(short param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x40f8  53  _grLfbConstantDepth@4
                       0x40f8  210  grLfbConstantDepth */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(short *)((longlong)plVar2 + 0x13f)) {
      (**(code **)(*plVar2 + 0xd8))(plVar2,param_1);
      *(short *)(*(longlong *)(lVar1 + 0x18) + 0x13f) = param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

