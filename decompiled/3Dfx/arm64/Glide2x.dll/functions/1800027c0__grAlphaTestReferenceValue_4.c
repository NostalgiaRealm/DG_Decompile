/*
 * _grAlphaTestReferenceValue@4 at 1800027c0
 * undefined __cdecl _grAlphaTestReferenceValue@4(char param_1)
 * Address ranges: 1800027c0-180002823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestReferenceValue_4(char param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x27c0  14  _grAlphaTestReferenceValue@4
                       0x27c0  171  grAlphaTestReferenceValue */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(char *)((longlong)plVar2 + 0x115)) {
      (**(code **)(*plVar2 + 0x140))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x115) = param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

