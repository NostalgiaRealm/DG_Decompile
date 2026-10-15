/*
 * FUN_180041d70 at 180041d70
 * undefined FUN_180041d70(void)
 * Address ranges: 180041d70-18004204f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180041d70(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = 0;
  uVar7 = *(uint *)((longlong)param_1 + 0xc);
  uVar13 = (((ulonglong)(*param_2 & 3 | (param_2[9] | param_2[10] << 8) << 6) & 0x3fffffff) << 2 |
            (ulonglong)(param_2[8] != 0) << 7 | (ulonglong)(param_2[7] != 0) << 6 |
            (ulonglong)(param_2[6] != 0) << 5 | (ulonglong)(param_2[2] != 0) << 4 |
           (ulonglong)param_2[1] & 3) ^ (ulonglong)param_2[5] |
           (ulonglong)(param_2[4] ^ param_2[3]) << 0x20;
  if (uVar7 != 0) {
    uVar10 = 0;
    uVar5 = uVar7;
    do {
      uVar2 = uVar5 + uVar10 >> 1;
      uVar11 = (ulonglong)uVar2;
      uVar9 = *(ulonglong *)(*param_1 + uVar11 * 0x40);
      if (uVar9 <= uVar13) {
        if (uVar13 <= uVar9) break;
        uVar10 = uVar2 + 1;
        uVar11 = (ulonglong)(uVar2 + 1);
        uVar2 = uVar5;
      }
      uVar5 = uVar2;
    } while (uVar5 != uVar10);
  }
  uVar10 = (uint)uVar11;
  if ((uVar10 == uVar7) || (*(ulonglong *)(*param_1 + uVar11 * 0x40) != uVar13)) {
    if (uVar7 == *(uint *)(param_1 + 1)) {
      uVar9 = (ulonglong)*(uint *)(param_1 + 1) & 0x7fffffff;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar9 << 1;
      lVar8 = uVar9 << 7;
      if (SUB168(auVar3 * ZEXT816(0x40),8) != 0) {
        lVar8 = -1;
      }
      lVar8 = thunk_FUN_180102f80(lVar8);
      if (lVar8 != 0) {
        uVar9 = 0;
        if ((int)param_1[1] != 0) {
          do {
            uVar7 = (int)uVar9 + 1;
            puVar4 = (undefined8 *)(*param_1 + uVar9 * 0x40);
            puVar1 = (undefined8 *)(lVar8 + uVar9 * 0x40);
            uVar16 = *puVar4;
            uVar15 = puVar4[3];
            uVar14 = puVar4[2];
            puVar1[1] = puVar4[1];
            *puVar1 = uVar16;
            puVar1[3] = uVar15;
            puVar1[2] = uVar14;
            uVar16 = puVar4[4];
            uVar15 = puVar4[7];
            uVar14 = puVar4[6];
            puVar1[5] = puVar4[5];
            puVar1[4] = uVar16;
            puVar1[7] = uVar15;
            puVar1[6] = uVar14;
            uVar9 = (ulonglong)uVar7;
          } while (uVar7 < *(uint *)(param_1 + 1));
        }
        thunk_FUN_180102fc0(*param_1);
        *param_1 = lVar8;
        *(int *)(param_1 + 1) = (int)param_1[1] << 1;
      }
    }
    uVar7 = *(uint *)((longlong)param_1 + 0xc);
    uVar9 = (ulonglong)uVar7;
    if (uVar10 < uVar7) {
      if (3 < uVar7 - uVar10) {
        do {
          iVar6 = (int)uVar9;
          puVar4 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 1) * 0x40);
          puVar1 = (undefined8 *)(*param_1 + uVar9 * 0x40);
          uVar16 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          puVar1[1] = puVar4[1];
          *puVar1 = uVar16;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          uVar16 = puVar4[4];
          uVar15 = puVar4[7];
          uVar14 = puVar4[6];
          puVar1[5] = puVar4[5];
          puVar1[4] = uVar16;
          puVar1[7] = uVar15;
          puVar1[6] = uVar14;
          puVar4 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 2) * 0x40);
          puVar1 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 1) * 0x40);
          uVar16 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          uVar9 = (ulonglong)(iVar6 - 4U);
          puVar1[1] = puVar4[1];
          *puVar1 = uVar16;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          uVar16 = puVar4[4];
          uVar15 = puVar4[7];
          uVar14 = puVar4[6];
          puVar1[5] = puVar4[5];
          puVar1[4] = uVar16;
          puVar1[7] = uVar15;
          puVar1[6] = uVar14;
          puVar4 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 3) * 0x40);
          puVar1 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 2) * 0x40);
          uVar16 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          puVar1[1] = puVar4[1];
          *puVar1 = uVar16;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          uVar16 = puVar4[4];
          uVar15 = puVar4[7];
          uVar14 = puVar4[6];
          puVar1[5] = puVar4[5];
          puVar1[4] = uVar16;
          puVar1[7] = uVar15;
          puVar1[6] = uVar14;
          puVar4 = (undefined8 *)(*param_1 + uVar9 * 0x40);
          puVar1 = (undefined8 *)(*param_1 + (ulonglong)(iVar6 - 3) * 0x40);
          uVar16 = *puVar4;
          uVar15 = puVar4[3];
          uVar14 = puVar4[2];
          puVar1[1] = puVar4[1];
          *puVar1 = uVar16;
          puVar1[3] = uVar15;
          puVar1[2] = uVar14;
          uVar16 = puVar4[4];
          uVar15 = puVar4[7];
          uVar14 = puVar4[6];
          puVar1[5] = puVar4[5];
          puVar1[4] = uVar16;
          puVar1[7] = uVar15;
          puVar1[6] = uVar14;
        } while (uVar10 + 3 < iVar6 - 4U);
      }
      uVar7 = (uint)uVar9;
      while (uVar10 < uVar7) {
        uVar7 = (int)uVar9 - 1;
        puVar4 = (undefined8 *)(*param_1 + uVar9 * 0x40);
        puVar1 = (undefined8 *)(*param_1 + (ulonglong)uVar7 * 0x40);
        uVar16 = *puVar1;
        uVar15 = puVar1[3];
        uVar14 = puVar1[2];
        puVar4[1] = puVar1[1];
        *puVar4 = uVar16;
        puVar4[3] = uVar15;
        puVar4[2] = uVar14;
        uVar16 = puVar1[4];
        uVar15 = puVar1[7];
        uVar14 = puVar1[6];
        puVar4[5] = puVar1[5];
        puVar4[4] = uVar16;
        puVar4[7] = uVar15;
        puVar4[6] = uVar14;
        uVar9 = (ulonglong)uVar7;
      }
    }
    lVar12 = uVar11 * 0x40;
    *(ulonglong *)(*param_1 + lVar12) = uVar13;
    uVar16 = *(undefined8 *)param_2;
    uVar15 = *(undefined8 *)(param_2 + 6);
    uVar14 = *(undefined8 *)(param_2 + 4);
    lVar8 = lVar12 + *param_1;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(lVar8 + 8) = uVar16;
    *(undefined8 *)(lVar8 + 0x20) = uVar15;
    *(undefined8 *)(lVar8 + 0x18) = uVar14;
    *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(param_2 + 8);
    *(uint *)(lVar8 + 0x30) = param_2[10];
    puVar4 = (undefined8 *)FUN_180102f80(0x2c);
    if (puVar4 != (undefined8 *)0x0) {
      uVar16 = *(undefined8 *)param_2;
      uVar15 = *(undefined8 *)(param_2 + 6);
      uVar14 = *(undefined8 *)(param_2 + 4);
      puVar4[1] = *(undefined8 *)(param_2 + 2);
      *puVar4 = uVar16;
      puVar4[3] = uVar15;
      puVar4[2] = uVar14;
      puVar4[4] = *(undefined8 *)(param_2 + 8);
      *(uint *)(puVar4 + 5) = param_2[10];
    }
    *(undefined8 **)(lVar12 + *param_1 + 0x38) = puVar4;
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  }
  return *(undefined8 *)(uVar11 * 0x40 + *param_1 + 0x38);
}

