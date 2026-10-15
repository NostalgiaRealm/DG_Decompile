/*
 * _grChromaRangeModeExt@4 at 180002840
 * undefined __cdecl _grChromaRangeModeExt@4(int param_1)
 * Address ranges: 180002840-1800028d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeModeExt_4(int param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
                    /* 0x2840  11  _grChromaRangeModeExt@4
                       0x2840  111  grChromaRangeModeExt */
  lVar3 = FUN_180008ce0();
  if (*(char *)(lVar3 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar3 + 0x60));
    bVar1 = FUN_180009768(lVar3);
    if ((((bVar1 & 1) != 0) &&
        (uVar2 = FUN_18000a930(lVar3), (&DAT_18006f27b)[(ulonglong)uVar2 * 0x20] != '\0')) &&
       (plVar4 = *(longlong **)(lVar3 + 0x18), param_1 != *(int *)((longlong)plVar4 + 0x152))) {
      (**(code **)(*plVar4 + 0x270))(plVar4,param_1);
      *(int *)(*(longlong *)(lVar3 + 0x18) + 0x152) = param_1;
    }
    FUN_1800643d0((uint *)(lVar3 + 0x60));
  }
  return;
}

