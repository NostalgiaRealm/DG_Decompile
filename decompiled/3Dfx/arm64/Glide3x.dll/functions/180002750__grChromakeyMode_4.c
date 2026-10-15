/*
 * _grChromakeyMode@4 at 180002750
 * undefined __cdecl _grChromakeyMode@4(int param_1)
 * Address ranges: 180002750-1800027bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromakeyMode_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2750  12  _grChromakeyMode@4
                       0x2750  112  grChromakeyMode */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x10e)) {
      (**(code **)(*plVar2 + 0x170))(plVar2,param_1 == 1);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x10e) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

