/*
 * _grDepthMask@4 at 180002dd0
 * undefined __cdecl _grDepthMask@4(int param_1)
 * Address ranges: 180002dd0-180002e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grDepthMask_4(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2dd0  30  _grDepthMask@4
                       0x2dd0  191  grDepthMask */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (param_1 != *(int *)((longlong)plVar2 + 0x139)) {
      (**(code **)(*plVar2 + 0x128))(plVar2,param_1 != 0);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x139) = param_1;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

