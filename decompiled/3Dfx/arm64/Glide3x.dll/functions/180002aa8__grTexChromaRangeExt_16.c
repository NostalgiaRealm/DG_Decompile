/*
 * _grTexChromaRangeExt@16 at 180002aa8
 * undefined __cdecl _grTexChromaRangeExt@16(int param_1, uint param_2, uint param_3)
 * Address ranges: 180002aa8-180002be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grTexChromaRangeExt_16(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
                    /* 0x2aa8  71  _grTexChromaRangeExt@16
                       0x2aa8  171  grTexChromaRangeExt */
  lVar7 = FUN_180008ce0();
  if (*(char *)(lVar7 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar7 + 0x60));
    bVar3 = FUN_180009768(lVar7);
    if (((bVar3 & 1) != 0) &&
       (uVar4 = FUN_18000a930(lVar7), (&DAT_18006f27c)[(ulonglong)uVar4 * 0x20] != '\0')) {
      plVar8 = *(longlong **)(lVar7 + 0x18);
      uVar5 = FUN_18000d3f8((longlong)plVar8,param_2);
      uVar6 = FUN_18000d3f8((longlong)plVar8,param_3);
      uVar4 = 0xff000000;
      iVar9 = 3;
      do {
        uVar1 = uVar4 & uVar6;
        if (uVar1 < (uVar4 & uVar5)) {
          uVar6 = uVar6 & (uVar4 ^ 0xffffffff) | uVar4 & uVar5;
          uVar5 = uVar5 & (uVar4 ^ 0xffffffff) | uVar1;
        }
        uVar4 = uVar4 >> 8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      lVar2 = (longlong)param_1 * 0x55;
      if ((uVar5 != *(uint *)((longlong)plVar8 + lVar2 + 0x1be)) ||
         (uVar6 != *(uint *)((longlong)plVar8 + lVar2 + 0x1c2))) {
        (**(code **)(*plVar8 + 0x288))(plVar8,param_1,uVar5,uVar6);
        *(uint *)(lVar2 + *(longlong *)(lVar7 + 0x18) + 0x1be) = uVar5;
        *(uint *)(lVar2 + *(longlong *)(lVar7 + 0x18) + 0x1c2) = uVar6;
      }
    }
    FUN_1800643d0((uint *)(lVar7 + 0x60));
  }
  return;
}

