/*
 * _grLfbConstantDepth@4 at 180004730
 * undefined __cdecl _grLfbConstantDepth@4(short param_1)
 * Address ranges: 180004730-18000479b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbConstantDepth_4(short param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x4730  55  _grLfbConstantDepth@4
                       0x4730  216  grLfbConstantDepth */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(short *)((longlong)plVar2 + 0x13f)) {
      (**(code **)(*plVar2 + 0xd8))(plVar2,param_1);
      *(short *)(*(longlong *)(lVar1 + 0x18) + 0x13f) = param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

