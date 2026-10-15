/*
 * _grChromakeyMode@4 at 180002828
 * undefined __cdecl _grChromakeyMode@4(int param_1)
 * Address ranges: 180002828-180002897
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromakeyMode_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2828  19  _grChromakeyMode@4
                       0x2828  176  grChromakeyMode */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x10e)) {
      (**(code **)(*plVar2 + 0x150))(plVar2,param_1 == 1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x10e) = param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

