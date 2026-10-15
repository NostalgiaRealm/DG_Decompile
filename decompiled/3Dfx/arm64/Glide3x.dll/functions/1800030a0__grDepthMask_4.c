/*
 * _grDepthMask@4 at 1800030a0
 * undefined __cdecl _grDepthMask@4(int param_1)
 * Address ranges: 1800030a0-18000310f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthMask_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x30a0  23  _grDepthMask@4
                       0x30a0  123  grDepthMask */
  lVar1 = FUN_180008ce0();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x139)) {
      (**(code **)(*plVar2 + 0x148))(plVar2,param_1 != 0);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x139) = param_1;
    }
    FUN_1800643d0((uint *)(lVar1 + 0x60));
  }
  return;
}

