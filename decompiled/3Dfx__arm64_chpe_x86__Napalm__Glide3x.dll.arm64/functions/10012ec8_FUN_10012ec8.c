/*
 * FUN_10012ec8 at 10012ec8
 * undefined FUN_10012ec8(void)
 * Address ranges: 10012ec8-100131bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10012ec8(int *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = *puVar1;
  uVar15 = 0;
  uVar16 = 0x80;
  if (param_2[8] == 0) {
    uVar16 = 0;
  }
  uVar14 = 0x40;
  if (param_2[7] == 0) {
    uVar14 = 0;
  }
  uVar5 = 0x20;
  if (param_2[6] == 0) {
    uVar5 = 0;
  }
  uVar6 = 0x10;
  if (param_2[2] == 0) {
    uVar6 = 0;
  }
  uVar16 = (((ulonglong)(*param_2 & 3 | (param_2[9] | param_2[10] << 8) << 6) & 0x3fffffff) << 2 |
            uVar16 | uVar14 | uVar5 | uVar6 | (ulonglong)param_2[1] & 3) ^ (ulonglong)param_2[5] |
           (ulonglong)(param_2[4] ^ param_2[3]) << 0x20;
  if (uVar11 != 0) {
    uVar12 = 0;
    uVar10 = uVar11;
    do {
      uVar15 = uVar10 + uVar12 >> 1;
      uVar14 = *(ulonglong *)(*param_1 + uVar15 * 0x38);
      uVar7 = uVar15;
      if (uVar14 <= uVar16) {
        if (uVar16 <= uVar14) break;
        uVar12 = uVar15 + 1;
        uVar15 = uVar12;
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar10 != uVar12);
    if ((uVar15 != uVar11) && (iVar8 = uVar15 * 0x38, *(ulonglong *)(iVar8 + *param_1) == uVar16))
    goto LAB_10013194;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar11 == *puVar2) {
    uVar14 = (ulonglong)(*puVar2 << 1) * 0x38;
    uVar13 = (undefined4)uVar14;
    if (uVar14 >> 0x20 != 0) {
      uVar13 = 0xffffffff;
    }
    iVar8 = FUN_10083400(uVar13);
    if (iVar8 != 0) {
      uVar11 = 0;
      if (*puVar2 != 0) {
        do {
          uVar12 = uVar11 + 1;
          puVar9 = (undefined8 *)(*param_1 + uVar11 * 0x38);
          puVar3 = (undefined8 *)(iVar8 + uVar11 * 0x38);
          uVar19 = *puVar9;
          uVar18 = puVar9[3];
          uVar17 = puVar9[2];
          puVar3[1] = puVar9[1];
          *puVar3 = uVar19;
          puVar3[3] = uVar18;
          puVar3[2] = uVar17;
          uVar17 = puVar9[4];
          puVar3[5] = puVar9[5];
          puVar3[4] = uVar17;
          puVar3[6] = puVar9[6];
          uVar11 = uVar12;
        } while (uVar12 < *puVar2);
      }
      FUN_10083420(*param_1);
      *param_1 = iVar8;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar11 = *puVar1; uVar15 < uVar11; uVar11 = uVar11 - 1) {
    puVar9 = (undefined8 *)(*param_1 + uVar11 * 0x38);
    puVar9[1] = puVar9[-6];
    *puVar9 = puVar9[-7];
    puVar9[3] = puVar9[-4];
    puVar9[2] = puVar9[-5];
    puVar9[5] = puVar9[-2];
    puVar9[4] = puVar9[-3];
    puVar9[6] = puVar9[-1];
  }
  iVar8 = uVar15 * 0x38;
  *(ulonglong *)(iVar8 + *param_1) = uVar16;
  uVar19 = *(undefined8 *)param_2;
  uVar18 = *(undefined8 *)(param_2 + 6);
  uVar17 = *(undefined8 *)(param_2 + 4);
  iVar4 = iVar8 + *param_1;
  *(undefined8 *)(iVar4 + 0x10) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(iVar4 + 8) = uVar19;
  *(undefined8 *)(iVar4 + 0x20) = uVar18;
  *(undefined8 *)(iVar4 + 0x18) = uVar17;
  *(undefined8 *)(iVar4 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(uint *)(iVar4 + 0x30) = param_2[10];
  puVar9 = (undefined8 *)FUN_10083310(0x2c);
  if (puVar9 != (undefined8 *)0x0) {
    uVar19 = *(undefined8 *)param_2;
    uVar18 = *(undefined8 *)(param_2 + 6);
    uVar17 = *(undefined8 *)(param_2 + 4);
    puVar9[1] = *(undefined8 *)(param_2 + 2);
    *puVar9 = uVar19;
    puVar9[3] = uVar18;
    puVar9[2] = uVar17;
    puVar9[4] = *(undefined8 *)(param_2 + 8);
    *(uint *)(puVar9 + 5) = param_2[10];
  }
  *(undefined8 **)(iVar8 + *param_1 + 0x34) = puVar9;
  *puVar1 = *puVar1 + 1;
LAB_10013194:
  return *(undefined4 *)(*param_1 + iVar8 + 0x34);
}

