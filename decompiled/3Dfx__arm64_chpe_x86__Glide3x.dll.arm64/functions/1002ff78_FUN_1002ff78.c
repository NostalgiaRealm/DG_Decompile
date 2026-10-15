/*
 * FUN_1002ff78 at 1002ff78
 * undefined FUN_1002ff78(void)
 * Address ranges: 1002ff78-100301b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1002ff78(int *param_1,uint *param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  puVar2 = (uint *)(param_1 + 2);
  uVar10 = *puVar2;
  uVar14 = 0;
  uVar1 = ((ulonglong)param_2[6] |
          (ulonglong)param_2[5] + (ulonglong)param_2[7] + (ulonglong)param_2[3] +
          (ulonglong)param_2[1] << 0x20) + (ulonglong)param_2[4] + (ulonglong)param_2[2] +
          (ulonglong)*param_2;
  if (uVar10 != 0) {
    uVar11 = 0;
    uVar9 = uVar10;
    do {
      uVar14 = uVar9 + uVar11 >> 1;
      uVar13 = *(ulonglong *)(*param_1 + uVar14 * 0x30);
      uVar7 = uVar14;
      if (uVar13 <= uVar1) {
        if (uVar1 <= uVar13) break;
        uVar11 = uVar14 + 1;
        uVar14 = uVar11;
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar11);
    if ((uVar14 != uVar10) && (iVar8 = uVar14 * 0x30, *(ulonglong *)(iVar8 + *param_1) == uVar1))
    goto LAB_10030188;
  }
  puVar3 = (uint *)(param_1 + 1);
  if (uVar10 == *puVar3) {
    uVar13 = (ulonglong)(*puVar3 << 1) * 0x30;
    uVar12 = (undefined4)uVar13;
    if (uVar13 >> 0x20 != 0) {
      uVar12 = 0xffffffff;
    }
    iVar8 = FUN_1007dd60(uVar12);
    if (iVar8 != 0) {
      uVar10 = 0;
      if (*puVar3 != 0) {
        do {
          uVar11 = uVar10 + 1;
          puVar4 = (undefined8 *)(*param_1 + uVar10 * 0x30);
          puVar5 = (undefined8 *)(iVar8 + uVar10 * 0x30);
          uVar17 = *puVar4;
          uVar16 = puVar4[3];
          uVar15 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar17;
          puVar5[3] = uVar16;
          puVar5[2] = uVar15;
          uVar15 = puVar4[4];
          puVar5[5] = puVar4[5];
          puVar5[4] = uVar15;
          uVar10 = uVar11;
        } while (uVar11 < *puVar3);
      }
      FUN_1007dd80(*param_1);
      *param_1 = iVar8;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar10 = *puVar2; uVar14 < uVar10; uVar10 = uVar10 - 1) {
    puVar4 = (undefined8 *)(*param_1 + uVar10 * 0x30);
    puVar4[1] = puVar4[-5];
    *puVar4 = puVar4[-6];
    puVar4[3] = puVar4[-3];
    puVar4[2] = puVar4[-4];
    puVar4[5] = puVar4[-1];
    puVar4[4] = puVar4[-2];
  }
  uVar18 = *(undefined8 *)(param_2 + 2);
  uVar17 = *(undefined8 *)param_2;
  uVar16 = *(undefined8 *)(param_2 + 6);
  uVar15 = *(undefined8 *)(param_2 + 4);
  iVar8 = uVar14 * 0x30;
  *(ulonglong *)(iVar8 + *param_1) = uVar1;
  iVar6 = iVar8 + *param_1;
  *(undefined8 *)(iVar6 + 0x10) = uVar18;
  *(undefined8 *)(iVar6 + 8) = uVar17;
  *(undefined8 *)(iVar6 + 0x20) = uVar16;
  *(undefined8 *)(iVar6 + 0x18) = uVar15;
  iVar6 = *(int *)param_1[3];
  *(int *)param_1[3] = iVar6 + 1;
  *(int *)(iVar8 + *param_1 + 0x28) = iVar6;
  *puVar2 = *puVar2 + 1;
LAB_10030188:
  return *(undefined4 *)(*param_1 + iVar8 + 0x28);
}

