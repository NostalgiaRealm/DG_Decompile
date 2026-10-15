/*
 * _grTexCombine@28 at 180004198
 * undefined __cdecl _grTexCombine@28(int param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 180004198-18000430b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexCombine_28(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                     int param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
                    /* 0x4198  73  _grTexCombine@28
                       0x4198  173  grTexCombine */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    if (param_1 < *(int *)(*(longlong *)(lVar2 + 0x30) + 0x833)) {
      plVar3 = *(longlong **)(lVar2 + 0x18);
      lVar1 = (longlong)param_1 * 0x55;
      if ((((param_2 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a3)) ||
           (param_3 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a4))) ||
          (param_4 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a5))) ||
         (((param_5 != *(byte *)((longlong)plVar3 + lVar1 + 0x1a6) ||
           (param_6 != *(int *)((longlong)plVar3 + lVar1 + 0x1a7))) ||
          (param_7 != *(int *)((longlong)plVar3 + lVar1 + 0x1ab))))) {
        (**(code **)(*plVar3 + 0x2c8))
                  (plVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a3) = (char)param_2;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a4) = (char)param_3;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a5) = (char)param_4;
        *(char *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a6) = (char)param_5;
        *(int *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1a7) = param_6;
        *(int *)(lVar1 + *(longlong *)(lVar2 + 0x18) + 0x1ab) = param_7;
      }
      FUN_18000a6b8(lVar2);
      *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 0x2a4) = 0;
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

