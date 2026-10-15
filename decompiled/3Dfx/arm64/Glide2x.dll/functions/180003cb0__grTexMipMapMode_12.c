/*
 * _grTexMipMapMode@12 at 180003cb0
 * undefined __cdecl _grTexMipMapMode@12(int param_1, uint param_2, int param_3)
 * Address ranges: 180003cb0-180003d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMipMapMode_12(int param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x3cb0  97  _grTexMipMapMode@12
                       0x3cb0  254  grTexMipMapMode */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800608b0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x41;
      if ((*(byte *)((longlong)plVar3 + lVar1 + 0x171) != param_2) ||
         (*(int *)((longlong)plVar3 + lVar1 + 0x172) != param_3)) {
        (**(code **)(*plVar3 + 0x298))(plVar3,param_1,param_2,param_3);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x171) = (char)param_2;
        *(int *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x172) = param_3;
      }
    }
    FUN_1800608a0((uint *)(lVar2 + 0x60));
  }
  return;
}

