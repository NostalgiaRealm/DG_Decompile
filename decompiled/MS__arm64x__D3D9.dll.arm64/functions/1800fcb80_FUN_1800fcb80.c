/*
 * FUN_1800fcb80 at 1800fcb80
 * undefined FUN_1800fcb80(void)
 * Address ranges: 1800fcb80-1800fcddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fcb80(longlong param_1,uint param_2,uint *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar13 = 0;
  lVar14 = *(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0;
  uVar15 = (((ulonglong)(*param_3 & 3 | (param_3[9] | param_3[10] << 8) << 6) & 0x3fffffff) << 2 |
            (ulonglong)(param_3[8] != 0) << 7 | (ulonglong)(param_3[7] != 0) << 6 |
            (ulonglong)(param_3[6] != 0) << 5 | (ulonglong)(param_3[2] != 0) << 4 |
           (ulonglong)param_3[1] & 3) ^ (ulonglong)param_3[5] |
           (ulonglong)(param_3[4] ^ param_3[3]) << 0x20;
  uVar4 = *(uint *)(lVar14 + 0x22b4);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      uVar5 = uVar8 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar5;
      uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x22a8) + uVar13 * 0x40);
      if (uVar12 <= uVar15) {
        if (uVar15 <= uVar12) break;
        uVar9 = uVar5 + 1;
        uVar13 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar8;
      }
      uVar8 = uVar5;
    } while (uVar8 != uVar9);
    if (((uint)uVar13 != uVar4) &&
       (lVar10 = uVar13 * 0x40, *(ulonglong *)(*(longlong *)(lVar14 + 0x22a8) + lVar10) == uVar15))
    goto LAB_1800fcdbc;
  }
  plVar1 = (longlong *)(lVar14 + 0x22a8);
  if (uVar4 == *(uint *)(lVar14 + 0x22b0)) {
    uVar12 = (ulonglong)*(uint *)(lVar14 + 0x22b0) & 0x7fffffff;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12 << 1;
    lVar10 = uVar12 << 7;
    if (SUB168(auVar6 * ZEXT816(0x40),8) != 0) {
      lVar10 = -1;
    }
    lVar10 = thunk_FUN_180102f80(lVar10);
    if (lVar10 != 0) {
      if (*(int *)(lVar14 + 0x22b0) != 0) {
        uVar12 = 0;
        do {
          uVar4 = (int)uVar12 + 1;
          puVar7 = (undefined8 *)(*(longlong *)(lVar14 + 0x22a8) + uVar12 * 0x40);
          puVar2 = (undefined8 *)(lVar10 + uVar12 * 0x40);
          uVar18 = *puVar7;
          uVar17 = puVar7[3];
          uVar16 = puVar7[2];
          puVar2[1] = puVar7[1];
          *puVar2 = uVar18;
          puVar2[3] = uVar17;
          puVar2[2] = uVar16;
          uVar18 = puVar7[4];
          uVar17 = puVar7[7];
          uVar16 = puVar7[6];
          puVar2[5] = puVar7[5];
          puVar2[4] = uVar18;
          puVar2[7] = uVar17;
          puVar2[6] = uVar16;
          uVar12 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar14 + 0x22b0));
      }
      thunk_FUN_180102fc0(*(longlong *)(lVar14 + 0x22a8));
      *(longlong *)(lVar14 + 0x22a8) = lVar10;
      *(int *)(lVar14 + 0x22b0) = *(int *)(lVar14 + 0x22b0) << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)(lVar14 + 0x22b4);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar7 = (undefined8 *)(*plVar1 + uVar12 * 0x40);
    puVar2 = (undefined8 *)(*plVar1 + uVar11 * 0x40);
    uVar18 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar7[1] = puVar2[1];
    *puVar7 = uVar18;
    puVar7[3] = uVar17;
    puVar7[2] = uVar16;
    uVar18 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar7[5] = puVar2[5];
    puVar7[4] = uVar18;
    puVar7[7] = uVar17;
    puVar7[6] = uVar16;
    uVar12 = uVar11;
  }
  lVar10 = uVar13 * 0x40;
  *(ulonglong *)(*plVar1 + lVar10) = uVar15;
  uVar18 = *(undefined8 *)param_3;
  uVar17 = *(undefined8 *)(param_3 + 6);
  uVar16 = *(undefined8 *)(param_3 + 4);
  lVar3 = lVar10 + *plVar1;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 8) = uVar18;
  *(undefined8 *)(lVar3 + 0x20) = uVar17;
  *(undefined8 *)(lVar3 + 0x18) = uVar16;
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_3 + 8);
  *(uint *)(lVar3 + 0x30) = param_3[10];
  puVar7 = (undefined8 *)FUN_180102f80(0x2c);
  if (puVar7 != (undefined8 *)0x0) {
    uVar18 = *(undefined8 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 6);
    uVar16 = *(undefined8 *)(param_3 + 4);
    puVar7[1] = *(undefined8 *)(param_3 + 2);
    *puVar7 = uVar18;
    puVar7[3] = uVar17;
    puVar7[2] = uVar16;
    puVar7[4] = *(undefined8 *)(param_3 + 8);
    *(uint *)(puVar7 + 5) = param_3[10];
  }
  *(undefined8 **)(lVar10 + *plVar1 + 0x38) = puVar7;
  *(int *)(lVar14 + 0x22b4) = *(int *)(lVar14 + 0x22b4) + 1;
LAB_1800fcdbc:
  return *(undefined8 *)(lVar10 + *(longlong *)(lVar14 + 0x22a8) + 0x38);
}

