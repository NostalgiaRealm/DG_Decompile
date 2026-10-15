/*
 * _grTexMipMapMode@12 at 180004d38
 * undefined __cdecl _grTexMipMapMode@12(int param_1, uint param_2, int param_3)
 * Address ranges: 180004d38-180004dfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexMipMapMode_12(int param_1,uint param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x4d38  84  _grTexMipMapMode@12
                       0x4d38  184  grTexMipMapMode */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x55;
      if ((*(byte *)((longlong)plVar3 + lVar1 + 0x1af) != param_2) ||
         (*(int *)((longlong)plVar3 + lVar1 + 0x1b0) != param_3)) {
        (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1,param_2,param_3);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1af) = (char)param_2;
        *(int *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1b0) = param_3;
      }
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

