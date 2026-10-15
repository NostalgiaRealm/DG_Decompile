/*
 * FUN_180150ee0 at 180150ee0
 * undefined FUN_180150ee0(void)
 * Address ranges: 180150ee0-180151213
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180150ee0(longlong *param_1,int *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar10 = 0;
  uVar4 = *(uint *)((longlong)param_1 + 0xc);
  uVar12 = (ulonglong)
           (param_2[1] & 1U | (param_2[2] & 0xfU | (uint)*(ushort *)(param_2 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_2[0xb] & 0xfU | (param_2[10] & 0xfU | (param_2[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_2[7] & 0xfU | (param_2[6] & 0xfU | (param_2[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_2[8] & 0xf) << 0x10 | (ulonglong)(uint)param_2[0xc] & 0xf)
           << 0x20 | (ulonglong)(param_2[3] != 0) << 6 | (ulonglong)(*param_2 != 0);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar3 = uVar4;
    do {
      uVar1 = uVar3 + uVar9 >> 1;
      uVar10 = (ulonglong)uVar1;
      uVar8 = *(ulonglong *)(*param_1 + uVar10 * 0x48);
      if (uVar8 <= uVar12) {
        if (uVar12 <= uVar8) break;
        uVar9 = uVar1 + 1;
        uVar10 = (ulonglong)(uVar1 + 1);
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
    } while (uVar3 != uVar9);
  }
  uVar9 = (uint)uVar10;
  if ((uVar9 == uVar4) || (*(ulonglong *)(*param_1 + uVar10 * 0x48) != uVar12)) {
    if (uVar4 == *(uint *)(param_1 + 1)) {
      uVar8 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
      lVar5 = uVar8 * 0x48;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar8;
      if (SUB168(auVar2 * ZEXT816(0x48),8) != 0) {
        lVar5 = -1;
      }
      lVar5 = FUN_1802229a8(lVar5);
      if (lVar5 != 0) {
        uVar8 = 0;
        if ((int)param_1[1] != 0) {
          do {
            puVar7 = (undefined8 *)(lVar5 + uVar8 * 0x48);
            puVar6 = (undefined8 *)(*param_1 + uVar8 * 0x48);
            uVar4 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar4;
            uVar13 = *puVar6;
            uVar15 = puVar6[3];
            uVar14 = puVar6[2];
            puVar7[1] = puVar6[1];
            *puVar7 = uVar13;
            puVar7[3] = uVar15;
            puVar7[2] = uVar14;
            uVar13 = puVar6[4];
            uVar15 = puVar6[7];
            uVar14 = puVar6[6];
            puVar7[5] = puVar6[5];
            puVar7[4] = uVar13;
            puVar7[7] = uVar15;
            puVar7[6] = uVar14;
            puVar7[8] = puVar6[8];
          } while (uVar4 < *(uint *)(param_1 + 1));
        }
        FUN_1802229d8(*param_1);
        *param_1 = lVar5;
        *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      }
    }
    uVar4 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar9 < uVar4) {
      if (3 < uVar4 - uVar9) {
        do {
          uVar3 = uVar4 - 2;
          puVar6 = (undefined8 *)(*param_1 + (ulonglong)(uVar4 - 1) * 0x48);
          puVar7 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0x48);
          uVar13 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar7[1] = puVar6[1];
          *puVar7 = uVar13;
          puVar7[3] = uVar15;
          puVar7[2] = uVar14;
          uVar13 = puVar6[4];
          uVar15 = puVar6[7];
          uVar14 = puVar6[6];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar13;
          puVar7[7] = uVar15;
          puVar7[6] = uVar14;
          puVar7[8] = puVar6[8];
          puVar6 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 0x48);
          puVar7 = (undefined8 *)(*param_1 + (ulonglong)(uVar4 - 1) * 0x48);
          uVar1 = uVar4 - 3;
          uVar4 = uVar4 - 4;
          uVar13 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar7[1] = puVar6[1];
          *puVar7 = uVar13;
          puVar7[3] = uVar15;
          puVar7[2] = uVar14;
          uVar13 = puVar6[4];
          uVar15 = puVar6[7];
          uVar14 = puVar6[6];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar13;
          puVar7[7] = uVar15;
          puVar7[6] = uVar14;
          puVar7[8] = puVar6[8];
          puVar6 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 0x48);
          puVar7 = (undefined8 *)(*param_1 + (ulonglong)uVar3 * 0x48);
          uVar13 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar7[1] = puVar6[1];
          *puVar7 = uVar13;
          puVar7[3] = uVar15;
          puVar7[2] = uVar14;
          uVar13 = puVar6[4];
          uVar15 = puVar6[7];
          uVar14 = puVar6[6];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar13;
          puVar7[7] = uVar15;
          puVar7[6] = uVar14;
          puVar7[8] = puVar6[8];
          puVar7 = (undefined8 *)(*param_1 + (ulonglong)uVar1 * 0x48);
          puVar6 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0x48);
          uVar13 = *puVar6;
          uVar15 = puVar6[3];
          uVar14 = puVar6[2];
          puVar7[1] = puVar6[1];
          *puVar7 = uVar13;
          puVar7[3] = uVar15;
          puVar7[2] = uVar14;
          uVar13 = puVar6[4];
          uVar15 = puVar6[7];
          uVar14 = puVar6[6];
          puVar7[5] = puVar6[5];
          puVar7[4] = uVar13;
          puVar7[7] = uVar15;
          puVar7[6] = uVar14;
          puVar7[8] = puVar6[8];
        } while (uVar9 + 3 < uVar4);
      }
      while (uVar9 < uVar4) {
        puVar7 = (undefined8 *)(*param_1 + (ulonglong)uVar4 * 0x48);
        puVar6 = (undefined8 *)(*param_1 + (ulonglong)(uVar4 - 1) * 0x48);
        uVar13 = *puVar6;
        uVar15 = puVar6[3];
        uVar14 = puVar6[2];
        puVar7[1] = puVar6[1];
        *puVar7 = uVar13;
        puVar7[3] = uVar15;
        puVar7[2] = uVar14;
        uVar13 = puVar6[4];
        uVar15 = puVar6[7];
        uVar14 = puVar6[6];
        puVar7[5] = puVar6[5];
        puVar7[4] = uVar13;
        puVar7[7] = uVar15;
        puVar7[6] = uVar14;
        puVar7[8] = puVar6[8];
        uVar4 = uVar4 - 1;
      }
    }
    lVar11 = uVar10 * 0x48;
    *(ulonglong *)(*param_1 + lVar11) = uVar12;
    uVar13 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 6);
    uVar14 = *(undefined8 *)(param_2 + 4);
    lVar5 = lVar11 + *param_1;
    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(lVar5 + 8) = uVar13;
    *(undefined8 *)(lVar5 + 0x20) = uVar15;
    *(undefined8 *)(lVar5 + 0x18) = uVar14;
    uVar13 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(lVar5 + 0x28) = uVar13;
    *(int *)(lVar5 + 0x38) = param_2[0xc];
    puVar6 = (undefined8 *)FUN_1802229a8(0x34);
    if (puVar6 != (undefined8 *)0x0) {
      uVar13 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar14 = *(undefined8 *)(param_2 + 4);
      puVar6[1] = *(undefined8 *)(param_2 + 2);
      *puVar6 = uVar13;
      puVar6[3] = uVar15;
      puVar6[2] = uVar14;
      uVar13 = *(undefined8 *)(param_2 + 8);
      puVar6[5] = *(undefined8 *)(param_2 + 10);
      puVar6[4] = uVar13;
      *(int *)(puVar6 + 6) = param_2[0xc];
    }
    *(undefined8 **)(lVar11 + *param_1 + 0x40) = puVar6;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  }
  return *(undefined8 *)(uVar10 * 0x48 + *param_1 + 0x40);
}

