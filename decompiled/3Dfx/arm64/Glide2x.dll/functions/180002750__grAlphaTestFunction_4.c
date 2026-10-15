/*
 * _grAlphaTestFunction@4 at 180002750
 * undefined __cdecl _grAlphaTestFunction@4(uint param_1)
 * Address ranges: 180002750-1800027bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestFunction_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2750  13  _grAlphaTestFunction@4
                       0x2750  170  grAlphaTestFunction */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (7 < (int)param_1) {
      param_1 = 7;
    }
    if (param_1 != *(byte *)((longlong)plVar2 + 0x114)) {
      (**(code **)(*plVar2 + 0x138))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x114) = (char)param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

