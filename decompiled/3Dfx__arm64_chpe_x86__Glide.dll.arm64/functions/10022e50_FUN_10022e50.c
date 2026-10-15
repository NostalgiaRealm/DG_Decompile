/*
 * FUN_10022e50 at 10022e50
 * undefined FUN_10022e50(void)
 * Address ranges: 10022e50-1002310f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10022e50(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar12 = 0;
  uVar8 = *puVar1;
  uVar13 = 0x40;
  if (param_2[3] == 0) {
    uVar13 = 0;
  }
  uVar13 = (ulonglong)
           (param_2[1] & 1U | (param_2[2] & 0xfU | (uint)*(ushort *)(param_2 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_2[0xb] & 0xfU | (param_2[10] & 0xfU | (param_2[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_2[7] & 0xfU | (param_2[6] & 0xfU | (param_2[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_2[8] & 0xf) << 0x10 | (ulonglong)(uint)param_2[0xc] & 0xf)
           << 0x20 | uVar13 | (ulonglong)(*param_2 != 0);
  if (uVar8 != 0) {
    uVar9 = 0;
    uVar7 = uVar8;
    do {
      uVar12 = uVar7 + uVar9 >> 1;
      uVar11 = *(ulonglong *)(*param_1 + uVar12 * 0x40);
      uVar5 = uVar12;
      if (uVar11 <= uVar13) {
        if (uVar13 <= uVar11) break;
        uVar9 = uVar12 + 1;
        uVar12 = uVar9;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar9);
    if ((uVar12 != uVar8) && (iVar10 = uVar12 * 0x40, *(ulonglong *)(iVar10 + *param_1) == uVar13))
    goto LAB_100230e8;
  }
  puVar2 = (uint *)(param_1 + 1);
  uVar9 = *puVar2;
  if (uVar8 == uVar9) {
    iVar10 = uVar9 << 7;
    if ((uVar9 & 0x7fffffff) >> 0x19 != 0) {
      iVar10 = -1;
    }
    iVar10 = FUN_1007a4c0(iVar10);
    if (iVar10 != 0) {
      uVar8 = 0;
      if (*puVar2 != 0) {
        do {
          puVar6 = (undefined8 *)(*param_1 + uVar8 * 0x40);
          puVar3 = (undefined8 *)(iVar10 + uVar8 * 0x40);
          uVar8 = uVar8 + 1;
          uVar16 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar3[1] = puVar6[1];
          *puVar3 = uVar16;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          uVar16 = puVar6[4];
          uVar15 = puVar6[7];
          uVar14 = puVar6[6];
          puVar3[5] = puVar6[5];
          puVar3[4] = uVar16;
          puVar3[7] = uVar15;
          puVar3[6] = uVar14;
        } while (uVar8 < *puVar2);
      }
      FUN_1007a4e0(*param_1);
      *param_1 = iVar10;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar8 = *puVar1; uVar12 < uVar8; uVar8 = uVar8 - 1) {
    puVar6 = (undefined8 *)(*param_1 + uVar8 * 0x40);
    puVar6[1] = puVar6[-7];
    *puVar6 = puVar6[-8];
    puVar6[3] = puVar6[-5];
    puVar6[2] = puVar6[-6];
    puVar6[5] = puVar6[-3];
    puVar6[4] = puVar6[-4];
    puVar6[7] = puVar6[-1];
    puVar6[6] = puVar6[-2];
  }
  iVar10 = uVar12 * 0x40;
  *(ulonglong *)(iVar10 + *param_1) = uVar13;
  uVar16 = *(undefined8 *)param_2;
  uVar15 = *(undefined8 *)(param_2 + 6);
  uVar14 = *(undefined8 *)(param_2 + 4);
  iVar4 = iVar10 + *param_1;
  *(undefined8 *)(iVar4 + 0x10) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(iVar4 + 8) = uVar16;
  *(undefined8 *)(iVar4 + 0x20) = uVar15;
  *(undefined8 *)(iVar4 + 0x18) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(iVar4 + 0x30) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(iVar4 + 0x28) = uVar14;
  *(int *)(iVar4 + 0x38) = param_2[0xc];
  puVar6 = (undefined8 *)FUN_1007a3d0(0x34);
  if (puVar6 != (undefined8 *)0x0) {
    uVar16 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 6);
    uVar14 = *(undefined8 *)(param_2 + 4);
    puVar6[1] = *(undefined8 *)(param_2 + 2);
    *puVar6 = uVar16;
    puVar6[3] = uVar15;
    puVar6[2] = uVar14;
    uVar14 = *(undefined8 *)(param_2 + 8);
    puVar6[5] = *(undefined8 *)(param_2 + 10);
    puVar6[4] = uVar14;
    *(int *)(puVar6 + 6) = param_2[0xc];
  }
  *(undefined8 **)(iVar10 + *param_1 + 0x3c) = puVar6;
  *puVar1 = *puVar1 + 1;
LAB_100230e8:
  return *(undefined4 *)(*param_1 + iVar10 + 0x3c);
}

