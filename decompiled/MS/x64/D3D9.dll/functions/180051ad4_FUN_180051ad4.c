/*
 * FUN_180051ad4 at 180051ad4
 * undefined __fastcall FUN_180051ad4(longlong * param_1)
 * Address ranges: 180051ad4-180051b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051ad4(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar5 = *param_1;
  uVar4 = *(uint *)(param_1 + 2);
  pvVar6 = (LPVOID)param_1[1];
  uVar1 = *(uint *)(lVar5 + 0xf784);
  while (uVar10 = uVar1, uVar10 != 0) {
    uVar1 = uVar10 - 1;
    if ((*(uint *)((ulonglong)uVar1 * 0x20 + *(longlong *)(lVar5 + 0xf778)) & 0x7fffffff) ==
        (uVar4 & 0x7fffffff)) {
      for (; uVar10 < *(uint *)(lVar5 + 0xf784); uVar10 = uVar10 + 1) {
        lVar7 = *(longlong *)(lVar5 + 0xf778);
        lVar9 = (ulonglong)(uVar10 - 1) * 0x20;
        puVar2 = (undefined8 *)(lVar7 + (ulonglong)uVar10 * 0x20);
        uVar8 = puVar2[1];
        puVar3 = (undefined8 *)(lVar7 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar2 = (undefined8 *)(lVar7 + 0x10 + (ulonglong)uVar10 * 0x20);
        uVar8 = puVar2[1];
        puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar9);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
      }
      *(uint *)(lVar5 + 0xf784) = *(uint *)(lVar5 + 0xf784) - 1;
    }
  }
  FUN_1800fbcf0(pvVar6);
  return;
}

