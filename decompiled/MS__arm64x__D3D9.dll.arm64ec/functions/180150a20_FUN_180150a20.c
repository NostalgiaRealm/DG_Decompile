/*
 * FUN_180150a20 at 180150a20
 * undefined FUN_180150a20(void)
 * Address ranges: 180150a20-180150bff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180150a20(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  
  uVar11 = *param_2;
  uVar4 = *(uint *)(param_1 + 2);
  uVar10 = 0;
  if (uVar4 != 0) {
    uVar6 = 0;
    uVar3 = uVar4;
    do {
      uVar10 = uVar3 + uVar6 >> 1;
      uVar9 = *(ulonglong *)(param_1[1] + (ulonglong)uVar10 * 0x18);
      uVar1 = uVar10;
      if (uVar9 <= uVar11) {
        if (uVar11 <= uVar9) break;
        uVar6 = uVar10 + 1;
        uVar10 = uVar10 + 1;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
    } while (uVar3 != uVar6);
  }
  if (uVar10 != uVar4) {
    lVar5 = (ulonglong)uVar10 * 0x18;
    if (*(ulonglong *)(param_1[1] + lVar5) == uVar11) {
      *(undefined8 *)(param_1[1] + lVar5 + 0x10) = *param_3;
      goto LAB_180150be4;
    }
  }
  lVar5 = (ulonglong)uVar10 * 0x18;
  uVar6 = *(uint *)((longlong)param_1 + 0x14);
  if (uVar6 == uVar4) {
    uVar4 = 0x10;
    if (uVar6 != 0) {
      uVar4 = uVar6 << 1;
    }
    lVar2 = FUN_1802229a8((ulonglong)uVar4 * 0x18);
    if (lVar2 != 0) {
      uVar9 = 0;
      if ((int)param_1[2] != 0) {
        do {
          puVar8 = (undefined8 *)(lVar2 + uVar9 * 0x18);
          puVar7 = (undefined8 *)(param_1[1] + uVar9 * 0x18);
          uVar6 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar6;
          uVar12 = *puVar7;
          puVar8[1] = puVar7[1];
          *puVar8 = uVar12;
          puVar8[2] = puVar7[2];
        } while (uVar6 < *(uint *)(param_1 + 2));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar2;
      param_1[1] = lVar2;
      *(uint *)((longlong)param_1 + 0x14) = uVar4;
    }
  }
  uVar4 = *(uint *)(param_1 + 2);
  if (*(uint *)((longlong)param_1 + 0x14) != uVar4) {
    if (uVar10 < uVar4) {
      do {
        uVar6 = uVar4 - 1;
        puVar8 = (undefined8 *)(param_1[1] + (ulonglong)uVar4 * 0x18);
        puVar7 = (undefined8 *)(param_1[1] + (ulonglong)uVar6 * 0x18);
        uVar12 = *puVar7;
        puVar8[1] = puVar7[1];
        *puVar8 = uVar12;
        puVar8[2] = puVar7[2];
        uVar4 = uVar6;
      } while (uVar10 < uVar6);
      lVar5 = (ulonglong)uVar10 * 0x18;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    *(ulonglong *)(lVar5 + param_1[1] + 8) = *param_2;
    *(undefined8 *)(lVar5 + param_1[1] + 0x10) = *param_3;
    *(ulonglong *)(param_1[1] + lVar5) = uVar11;
  }
LAB_180150be4:
  return lVar5 + param_1[1] + 8;
}

