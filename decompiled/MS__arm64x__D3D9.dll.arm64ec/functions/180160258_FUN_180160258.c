/*
 * FUN_180160258 at 180160258
 * undefined FUN_180160258(void)
 * Address ranges: 180160258-1801602e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180160258(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar3 = uVar5 + uVar6 >> 1;
      lVar2 = *(longlong *)(param_1 + 8) + (ulonglong)(uVar5 + uVar6 >> 1) * 0x40;
      uVar4 = 0;
      do {
        uVar8 = *(ulonglong *)(lVar2 + uVar4 * 8);
        uVar7 = *(ulonglong *)(param_2 + uVar4 * 8);
        if (uVar8 != uVar7) {
          uVar1 = uVar3;
          if (uVar7 < uVar8) goto LAB_1801602dc;
          break;
        }
        uVar1 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar1;
      } while (uVar1 < 7);
      uVar4 = 0;
      while (uVar8 = *(ulonglong *)(lVar2 + uVar4 * 8), uVar7 = *(ulonglong *)(param_2 + uVar4 * 8),
            uVar8 == uVar7) {
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
        if (6 < uVar6) {
          return uVar3;
        }
      }
      if (uVar7 <= uVar8) {
        return uVar3;
      }
      uVar6 = uVar3 + 1;
      uVar3 = uVar3 + 1;
      uVar1 = uVar5;
LAB_1801602dc:
      uVar5 = uVar1;
    } while (uVar5 != uVar6);
  }
  return uVar3;
}

