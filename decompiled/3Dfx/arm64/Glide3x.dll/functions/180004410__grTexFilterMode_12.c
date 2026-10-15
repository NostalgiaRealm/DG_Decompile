/*
 * _grTexFilterMode@12 at 180004410
 * undefined __cdecl _grTexFilterMode@12(int param_1, uint param_2, uint param_3)
 * Address ranges: 180004410-1800044d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexFilterMode_12(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x4410  80  _grTexFilterMode@12
                       0x4410  180  grTexFilterMode */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x55;
      if ((param_2 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a1)) ||
         (param_3 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a2))) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_1,param_2,param_3);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a1) = (char)param_2;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a2) = (char)param_3;
      }
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

