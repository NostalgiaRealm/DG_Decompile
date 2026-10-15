/*
 * FUN_180048750 at 180048750
 * undefined FUN_180048750(void)
 * Address ranges: 180048750-1800487d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048750(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uVar5 = *(uint *)(param_1 + 2);
  uVar6 = *(uint *)(lVar3 + 0xf784);
  uVar9 = (ulonglong)uVar6;
  while (uVar8 = uVar9, uVar6 != 0) {
    uVar6 = (int)uVar8 - 1;
    uVar9 = (ulonglong)uVar6;
    if ((*(ulonglong *)(*(longlong *)(lVar3 + 0xf778) + uVar9 * 0x20) & 0x7fffffff) ==
        ((ulonglong)uVar5 & 0x7fffffff)) {
      while( true ) {
        uVar7 = (uint)uVar8;
        if (*(uint *)(lVar3 + 0xf784) <= uVar7) break;
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0xf778) + (ulonglong)(uVar7 - 1) * 0x20);
        puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0xf778) + uVar8 * 0x20);
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar12 = *puVar2;
        uVar11 = puVar2[3];
        uVar10 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar12;
        puVar1[3] = uVar11;
        puVar1[2] = uVar10;
      }
      *(uint *)(lVar3 + 0xf784) = *(uint *)(lVar3 + 0xf784) - 1;
    }
  }
  FUN_180102fc0(lVar4,0x254);
  return;
}

