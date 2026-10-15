/*
 * _grDepthMask@4 at 180002dd8
 * undefined __cdecl _grDepthMask@4(int param_1)
 * Address ranges: 180002dd8-180002e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthMask_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2dd8  30  _grDepthMask@4
                       0x2dd8  187  grDepthMask */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x139)) {
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1 != 0);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x139) = param_1;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

