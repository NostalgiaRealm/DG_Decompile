/*
 * FUN_180057a34 at 180057a34
 * undefined __fastcall FUN_180057a34(longlong param_1, ulonglong * param_2)
 * Address ranges: 180057a34-180057ad6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057a34(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar10;
  
  uVar9 = *(uint *)(param_1 + 0x10);
  if (uVar9 != 0) {
    uVar3 = *param_2;
    uVar12 = 0;
    do {
      uVar8 = uVar9 + uVar12 >> 1;
      uVar10 = (ulonglong)uVar8;
      uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 8) + uVar10 * 0x38);
      if (uVar4 <= uVar3) {
        if (uVar3 <= uVar4) break;
        uVar12 = uVar8 + 1;
        uVar10 = (ulonglong)uVar12;
        uVar8 = uVar9;
      }
      uVar9 = uVar8;
    } while (uVar9 != uVar12);
    uVar9 = (uint)uVar10;
    if ((uVar9 != *(uint *)(param_1 + 0x10)) &&
       (*(ulonglong *)(uVar10 * 0x38 + *(longlong *)(param_1 + 8)) == uVar3)) {
      while (uVar12 = uVar9 + 1, uVar12 < *(uint *)(param_1 + 0x10)) {
        lVar5 = *(longlong *)(param_1 + 8);
        lVar11 = (ulonglong)uVar9 * 0x38;
        lVar7 = (ulonglong)uVar12 * 0x38;
        uVar6 = ((undefined8 *)(lVar7 + lVar5))[1];
        *(undefined8 *)(lVar11 + lVar5) = *(undefined8 *)(lVar7 + lVar5);
        ((undefined8 *)(lVar11 + lVar5))[1] = uVar6;
        puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar5);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar5);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar5);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar11 + 0x30 + lVar5) = *(undefined8 *)(lVar7 + 0x30 + lVar5);
        uVar9 = uVar12;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}

