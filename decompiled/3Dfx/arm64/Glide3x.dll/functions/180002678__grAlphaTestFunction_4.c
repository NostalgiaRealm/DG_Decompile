/*
 * _grAlphaTestFunction@4 at 180002678
 * undefined __cdecl _grAlphaTestFunction@4(uint param_1)
 * Address ranges: 180002678-1800026e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaTestFunction_4(uint param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2678  5  _grAlphaTestFunction@4
                       0x2678  105  grAlphaTestFunction */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (7 < (int)param_1) {
      param_1 = 7;
    }
    if (param_1 != *(byte *)((longlong)plVar2 + 0x114)) {
      (**(code **)(*plVar2 + 0x158))(plVar2,param_1);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0x114) = (char)param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

