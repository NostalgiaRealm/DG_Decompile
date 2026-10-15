/*
 * _grAlphaBlendFunction@16 at 1800025d0
 * undefined __cdecl _grAlphaBlendFunction@16(uint param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1800025d0-1800026a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grAlphaBlendFunction_16(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
                    /* 0x25d0  10  _grAlphaBlendFunction@16
                       0x25d0  171  grAlphaBlendFunction */
  lVar1 = FUN_180017788();
  if (*(char *)(lVar1 + 100) != '\0') {
    FUN_180061700((uint *)(lVar1 + 0x60));
    plVar2 = *(longlong **)(lVar1 + 0x18);
    if (0xf < (int)param_1) {
      param_1 = 0;
    }
    if (0xf < (int)param_2) {
      param_2 = 0;
    }
    if ((((param_1 != *(byte *)((longlong)plVar2 + 0xf2)) ||
         (param_2 != *(byte *)((longlong)plVar2 + 0xf3))) ||
        (param_3 != *(byte *)((longlong)plVar2 + 0xf4))) ||
       (param_4 != *(byte *)((longlong)plVar2 + 0xf5))) {
      (**(code **)(*plVar2 + 0x130))(plVar2,param_1,param_2,param_3,param_4);
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0xf2) = (char)param_1;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0xf3) = (char)param_2;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0xf4) = (char)param_3;
      *(char *)(*(longlong *)(lVar1 + 0x18) + 0xf5) = (char)param_4;
    }
    FUN_1800616f0((uint *)(lVar1 + 0x60));
  }
  return;
}

