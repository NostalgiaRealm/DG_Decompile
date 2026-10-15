/*
 * FUN_180157c58 at 180157c58
 * undefined FUN_180157c58(void)
 * Address ranges: 180157c58-180157cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180157c58(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  uVar5 = *(uint *)(param_1 + 2);
  uVar6 = *(uint *)(lVar3 + 0xf784);
  uVar7 = (ulonglong)uVar6;
  while (uVar9 = uVar7, uVar6 != 0) {
    uVar6 = (int)uVar9 - 1;
    uVar7 = (ulonglong)uVar6;
    if ((*(ulonglong *)(*(longlong *)(lVar3 + 0xf778) + uVar7 * 0x20) & 0x7fffffff) ==
        ((ulonglong)uVar5 & 0x7fffffff)) {
      while( true ) {
        uVar8 = (uint)uVar9;
        if (*(uint *)(lVar3 + 0xf784) <= uVar8) break;
        puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0xf778) + (ulonglong)(uVar8 - 1) * 0x20);
        puVar2 = (undefined8 *)(*(longlong *)(lVar3 + 0xf778) + uVar9 * 0x20);
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = *puVar2;
        uVar12 = puVar2[3];
        uVar11 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar10;
        puVar1[3] = uVar12;
        puVar1[2] = uVar11;
      }
      *(uint *)(lVar3 + 0xf784) = *(uint *)(lVar3 + 0xf784) - 1;
    }
  }
  FUN_1802229d8(lVar4,0x254);
  return;
}

