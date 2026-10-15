/*
 * _grTexFilterMode@12 at 180003790
 * undefined __cdecl _grTexFilterMode@12(int param_1, uint param_2, uint param_3)
 * Address ranges: 180003790-18000384f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexFilterMode_12(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x3790  93  _grTexFilterMode@12
                       0x3790  250  grTexFilterMode */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x41;
      if ((param_2 != *(byte *)((longlong)plVar3 + lVar1 + 0x163)) ||
         (param_3 != *(byte *)((longlong)plVar3 + lVar1 + 0x164))) {
        (**(code **)(*plVar3 + 0x270))(plVar3,param_1,param_2,param_3);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x163) = (char)param_2;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x164) = (char)param_3;
      }
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

