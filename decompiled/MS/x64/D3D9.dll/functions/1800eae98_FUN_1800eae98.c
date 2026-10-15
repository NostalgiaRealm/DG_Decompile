/*
 * FUN_1800eae98 at 1800eae98
 * longlong __fastcall FUN_1800eae98(longlong param_1, uint * param_2)
 * Address ranges: 1800eae98-1800eaf01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800eae98(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    uVar8 = (ulonglong)*param_2;
    lVar2 = *(longlong *)(param_1 + 8);
    uVar6 = 0;
    uVar7 = uVar1;
    do {
      uVar5 = uVar7 + uVar6 >> 1;
      uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x30);
      uVar4 = uVar5;
      if (uVar3 <= uVar8) {
        if (uVar8 <= uVar3) break;
        uVar6 = uVar5 + 1;
        uVar4 = uVar7;
        uVar5 = uVar6;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar6);
    if (uVar5 != uVar1) {
      if (*(ulonglong *)((ulonglong)uVar5 * 0x30 + lVar2) != uVar8) {
        return 0;
      }
      return lVar2 + 0x10 + (ulonglong)uVar5 * 0x30;
    }
  }
  return 0;
}

