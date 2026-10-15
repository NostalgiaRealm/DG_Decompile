/*
 * _grColorMask@8 at 180002a58
 * undefined __cdecl _grColorMask@8(int param_1, int param_2)
 * Address ranges: 180002a58-180002af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grColorMask_8(int param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x2a58  23  _grColorMask@8
                       0x2a58  180  grColorMask */
  lVar1 = FUN_180016878();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if ((param_1 != *(int *)((longlong)plVar2 + 299)) ||
       (param_2 != *(int *)((longlong)plVar2 + 0x12f))) {
      (**(code **)(*plVar2 + 0x180))(plVar2,param_1 != 0,param_2 != 0);
      *(int *)(*(longlong *)(lVar1 + 0x18) + 299) = param_1;
      *(int *)(*(longlong *)(lVar1 + 0x18) + 0x12f) = param_2;
    }
    FUN_1800608a0((uint *)(lVar1 + 0x60));
  }
  return;
}

