/*
 * FUN_100514b8 at 100514b8
 * undefined FUN_100514b8(void)
 * Address ranges: 100514b8-10051833
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100514b8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar1 = (uint *)(param_1 + 2);
  uVar11 = 0;
  uVar7 = *puVar1;
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
  if (uVar7 != 0) {
    uVar8 = 0;
    uVar6 = uVar7;
    do {
      uVar11 = uVar6 + uVar8 >> 1;
      uVar10 = *(ulonglong *)(*param_1 + uVar11 * 0x40);
      uVar4 = uVar11;
      if (uVar10 <= uVar13) {
        if (uVar13 <= uVar10) break;
        uVar8 = uVar11 + 1;
        uVar11 = uVar8;
        uVar4 = uVar6;
      }
      uVar6 = uVar4;
    } while (uVar6 != uVar8);
  }
  if ((uVar11 == uVar7) || (*(ulonglong *)(uVar11 * 0x40 + *param_1) != uVar13)) {
    puVar2 = (uint *)(param_1 + 1);
    uVar8 = *puVar2;
    if (uVar7 == uVar8) {
      iVar9 = uVar8 << 7;
      if ((uVar8 & 0x7fffffff) >> 0x19 != 0) {
        iVar9 = -1;
      }
      iVar9 = FUN_100fece0(iVar9);
      if (iVar9 != 0) {
        uVar7 = 0;
        if (*puVar2 != 0) {
          do {
            puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x40);
            puVar3 = (undefined8 *)(iVar9 + uVar7 * 0x40);
            uVar7 = uVar7 + 1;
            uVar16 = *puVar5;
            uVar15 = puVar5[3];
            uVar14 = puVar5[2];
            puVar3[1] = puVar5[1];
            *puVar3 = uVar16;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            uVar16 = puVar5[4];
            uVar15 = puVar5[7];
            uVar14 = puVar5[6];
            puVar3[5] = puVar5[5];
            puVar3[4] = uVar16;
            puVar3[7] = uVar15;
            puVar3[6] = uVar14;
          } while (uVar7 < *puVar2);
        }
        FUN_100fed00(*param_1);
        *param_1 = iVar9;
        *puVar2 = *puVar2 << 1;
      }
    }
    uVar7 = *puVar1;
    if (uVar11 < uVar7) {
      if (3 < uVar7 - uVar11) {
        do {
          iVar12 = uVar7 - 3;
          puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x40);
          puVar5[1] = puVar5[-7];
          *puVar5 = puVar5[-8];
          puVar5[3] = puVar5[-5];
          puVar5[2] = puVar5[-6];
          puVar5[5] = puVar5[-3];
          puVar5[4] = puVar5[-4];
          puVar5[7] = puVar5[-1];
          puVar5[6] = puVar5[-2];
          puVar5 = (undefined8 *)(*param_1 + (uVar7 - 2) * 0x40);
          iVar9 = *param_1 + uVar7 * 0x40;
          uVar16 = *puVar5;
          uVar15 = puVar5[3];
          uVar14 = puVar5[2];
          *(undefined8 *)(iVar9 + -0x38) = puVar5[1];
          *(undefined8 *)(iVar9 + -0x40) = uVar16;
          *(undefined8 *)(iVar9 + -0x28) = uVar15;
          *(undefined8 *)(iVar9 + -0x30) = uVar14;
          uVar16 = puVar5[4];
          uVar15 = puVar5[7];
          uVar14 = puVar5[6];
          *(undefined8 *)(iVar9 + -0x18) = puVar5[5];
          *(undefined8 *)(iVar9 + -0x20) = uVar16;
          *(undefined8 *)(iVar9 + -8) = uVar15;
          *(undefined8 *)(iVar9 + -0x10) = uVar14;
          puVar5 = (undefined8 *)(*param_1 + iVar12 * 0x40);
          puVar3 = (undefined8 *)(*param_1 + (uVar7 - 2) * 0x40);
          uVar16 = *puVar5;
          uVar15 = puVar5[3];
          uVar14 = puVar5[2];
          puVar3[1] = puVar5[1];
          *puVar3 = uVar16;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          uVar16 = puVar5[4];
          uVar15 = puVar5[7];
          uVar14 = puVar5[6];
          puVar3[5] = puVar5[5];
          puVar3[4] = uVar16;
          puVar3[7] = uVar15;
          puVar3[6] = uVar14;
          iVar9 = uVar7 - 4;
          uVar7 = uVar7 - 4;
          puVar5 = (undefined8 *)(*param_1 + iVar9 * 0x40);
          puVar3 = (undefined8 *)(*param_1 + iVar12 * 0x40);
          uVar16 = *puVar5;
          uVar15 = puVar5[3];
          uVar14 = puVar5[2];
          puVar3[1] = puVar5[1];
          *puVar3 = uVar16;
          puVar3[3] = uVar15;
          puVar3[2] = uVar14;
          uVar16 = puVar5[4];
          uVar15 = puVar5[7];
          uVar14 = puVar5[6];
          puVar3[5] = puVar5[5];
          puVar3[4] = uVar16;
          puVar3[7] = uVar15;
          puVar3[6] = uVar14;
        } while (uVar11 + 3 < uVar7);
      }
      for (; uVar11 < uVar7; uVar7 = uVar7 - 1) {
        puVar5 = (undefined8 *)(*param_1 + uVar7 * 0x40);
        puVar5[1] = puVar5[-7];
        *puVar5 = puVar5[-8];
        puVar5[3] = puVar5[-5];
        puVar5[2] = puVar5[-6];
        puVar5[5] = puVar5[-3];
        puVar5[4] = puVar5[-4];
        puVar5[7] = puVar5[-1];
        puVar5[6] = puVar5[-2];
      }
    }
    iVar12 = uVar11 * 0x40;
    *(ulonglong *)(iVar12 + *param_1) = uVar13;
    uVar16 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 6);
    uVar14 = *(undefined8 *)(param_2 + 4);
    iVar9 = iVar12 + *param_1;
    *(undefined8 *)(iVar9 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(iVar9 + 8) = uVar16;
    *(undefined8 *)(iVar9 + 0x20) = uVar15;
    *(undefined8 *)(iVar9 + 0x18) = uVar14;
    uVar14 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(iVar9 + 0x30) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(iVar9 + 0x28) = uVar14;
    *(int *)(iVar9 + 0x38) = param_2[0xc];
    puVar5 = (undefined8 *)FUN_100febf0(0x34);
    if (puVar5 != (undefined8 *)0x0) {
      uVar16 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar14 = *(undefined8 *)(param_2 + 4);
      puVar5[1] = *(undefined8 *)(param_2 + 2);
      *puVar5 = uVar16;
      puVar5[3] = uVar15;
      puVar5[2] = uVar14;
      uVar14 = *(undefined8 *)(param_2 + 8);
      puVar5[5] = *(undefined8 *)(param_2 + 10);
      puVar5[4] = uVar14;
      *(int *)(puVar5 + 6) = param_2[0xc];
    }
    *(undefined8 **)(iVar12 + *param_1 + 0x3c) = puVar5;
    *puVar1 = *puVar1 + 1;
  }
  return *(undefined4 *)(uVar11 * 0x40 + *param_1 + 0x3c);
}

