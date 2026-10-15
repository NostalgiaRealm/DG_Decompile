/*
 * _grChromaRangeExt@12 at 1800028d8
 * undefined __cdecl _grChromaRangeExt@12(uint param_1, uint param_2)
 * Address ranges: 1800028d8-1800029ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grChromaRangeExt_12(uint param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
                    /* 0x28d8  10  _grChromaRangeExt@12
                       0x28d8  110  grChromaRangeExt */
  lVar6 = FUN_180008ce0();
  if (*(char *)(lVar6 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar6 + 0x60));
    bVar2 = FUN_180009768(lVar6);
    if (((bVar2 & 1) != 0) &&
       (uVar3 = FUN_18000a930(lVar6), (&DAT_18006f27b)[(ulonglong)uVar3 * 0x20] != '\0')) {
      plVar7 = *(longlong **)(lVar6 + 0x18);
      uVar4 = FUN_18000d3f8((longlong)plVar7,param_1);
      uVar5 = FUN_18000d3f8((longlong)plVar7,param_2);
      uVar3 = 0xff000000;
      iVar8 = 3;
      do {
        uVar1 = uVar3 & uVar5;
        if (uVar1 < (uVar3 & uVar4)) {
          uVar5 = uVar5 & (uVar3 ^ 0xffffffff) | uVar3 & uVar4;
          uVar4 = uVar4 & (uVar3 ^ 0xffffffff) | uVar1;
        }
        uVar3 = uVar3 >> 8;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if ((uVar4 != *(uint *)((longlong)plVar7 + 0x14a)) ||
         (uVar5 != *(uint *)((longlong)plVar7 + 0x14e))) {
        (**(code **)(*plVar7 + 0x278))(plVar7,uVar4,uVar5);
        *(uint *)(*(longlong *)(lVar6 + 0x18) + 0x14a) = uVar4;
        *(uint *)(*(longlong *)(lVar6 + 0x18) + 0x14e) = uVar5;
      }
    }
    FUN_1800643d0((uint *)(lVar6 + 0x60));
  }
  return;
}

