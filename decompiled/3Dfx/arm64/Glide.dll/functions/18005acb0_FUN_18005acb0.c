/*
 * FUN_18005acb0 at 18005acb0
 * undefined8 __cdecl FUN_18005acb0(longlong param_1, uint param_2, uint * param_3)
 * Address ranges: 18005acb0-18005aeff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005acb0(longlong param_1,uint param_2,uint *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  SIZE_T SVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar14 = 0;
  lVar15 = *(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0;
  uVar16 = (((ulonglong)(*param_3 & 3 | (param_3[9] | param_3[10] << 8) << 6) & 0x3fffffff) << 2 |
            (ulonglong)(param_3[8] != 0) << 7 | (ulonglong)(param_3[7] != 0) << 6 |
            (ulonglong)(param_3[6] != 0) << 5 | (ulonglong)(param_3[2] != 0) << 4 |
           (ulonglong)param_3[1] & 3) ^ (ulonglong)param_3[5] |
           (ulonglong)(param_3[4] ^ param_3[3]) << 0x20;
  uVar4 = *(uint *)(lVar15 + 0x22b4);
  if (uVar4 != 0) {
    uVar10 = 0;
    uVar9 = uVar4;
    do {
      uVar5 = uVar9 + uVar10 >> 1;
      uVar14 = (ulonglong)uVar5;
      uVar13 = *(ulonglong *)(*(longlong *)(lVar15 + 0x22a8) + uVar14 * 0x40);
      if (uVar13 <= uVar16) {
        if (uVar16 <= uVar13) break;
        uVar10 = uVar5 + 1;
        uVar14 = (ulonglong)(uVar5 + 1);
        uVar5 = uVar9;
      }
      uVar9 = uVar5;
    } while (uVar9 != uVar10);
    if (((uint)uVar14 != uVar4) &&
       (lVar7 = uVar14 * 0x40, *(ulonglong *)(*(longlong *)(lVar15 + 0x22a8) + lVar7) == uVar16))
    goto LAB_18005aedc;
  }
  plVar1 = (longlong *)(lVar15 + 0x22a8);
  if (uVar4 == *(uint *)(lVar15 + 0x22b0)) {
    uVar13 = (ulonglong)*(uint *)(lVar15 + 0x22b0) & 0x7fffffff;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar13 << 1;
    SVar11 = uVar13 << 7;
    if (SUB168(auVar6 * ZEXT816(0x40),8) != 0) {
      SVar11 = 0xffffffffffffffff;
    }
    lVar7 = thunk_FUN_1800609d8(SVar11);
    if (lVar7 != 0) {
      if (*(int *)(lVar15 + 0x22b0) != 0) {
        uVar13 = 0;
        do {
          uVar4 = (int)uVar13 + 1;
          puVar8 = (undefined8 *)(*(longlong *)(lVar15 + 0x22a8) + uVar13 * 0x40);
          puVar2 = (undefined8 *)(lVar7 + uVar13 * 0x40);
          uVar19 = *puVar8;
          uVar18 = puVar8[3];
          uVar17 = puVar8[2];
          puVar2[1] = puVar8[1];
          *puVar2 = uVar19;
          puVar2[3] = uVar18;
          puVar2[2] = uVar17;
          uVar19 = puVar8[4];
          uVar18 = puVar8[7];
          uVar17 = puVar8[6];
          puVar2[5] = puVar8[5];
          puVar2[4] = uVar19;
          puVar2[7] = uVar18;
          puVar2[6] = uVar17;
          uVar13 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(lVar15 + 0x22b0));
      }
      thunk_FUN_180060a18(*(LPVOID *)(lVar15 + 0x22a8));
      *(longlong *)(lVar15 + 0x22a8) = lVar7;
      *(int *)(lVar15 + 0x22b0) = *(int *)(lVar15 + 0x22b0) << 1;
    }
  }
  uVar13 = (ulonglong)*(uint *)(lVar15 + 0x22b4);
  while ((uint)uVar14 < (uint)uVar13) {
    uVar12 = (ulonglong)((uint)uVar13 - 1);
    puVar8 = (undefined8 *)(*plVar1 + uVar13 * 0x40);
    puVar2 = (undefined8 *)(*plVar1 + uVar12 * 0x40);
    uVar19 = *puVar2;
    uVar18 = puVar2[3];
    uVar17 = puVar2[2];
    puVar8[1] = puVar2[1];
    *puVar8 = uVar19;
    puVar8[3] = uVar18;
    puVar8[2] = uVar17;
    uVar19 = puVar2[4];
    uVar18 = puVar2[7];
    uVar17 = puVar2[6];
    puVar8[5] = puVar2[5];
    puVar8[4] = uVar19;
    puVar8[7] = uVar18;
    puVar8[6] = uVar17;
    uVar13 = uVar12;
  }
  lVar7 = uVar14 * 0x40;
  *(ulonglong *)(*plVar1 + lVar7) = uVar16;
  uVar19 = *(undefined8 *)param_3;
  uVar18 = *(undefined8 *)(param_3 + 6);
  uVar17 = *(undefined8 *)(param_3 + 4);
  lVar3 = lVar7 + *plVar1;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar3 + 8) = uVar19;
  *(undefined8 *)(lVar3 + 0x20) = uVar18;
  *(undefined8 *)(lVar3 + 0x18) = uVar17;
  *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(param_3 + 8);
  *(uint *)(lVar3 + 0x30) = param_3[10];
  puVar8 = (undefined8 *)FUN_1800609d8(0x2c);
  if (puVar8 != (undefined8 *)0x0) {
    uVar19 = *(undefined8 *)param_3;
    uVar18 = *(undefined8 *)(param_3 + 6);
    uVar17 = *(undefined8 *)(param_3 + 4);
    puVar8[1] = *(undefined8 *)(param_3 + 2);
    *puVar8 = uVar19;
    puVar8[3] = uVar18;
    puVar8[2] = uVar17;
    puVar8[4] = *(undefined8 *)(param_3 + 8);
    *(uint *)(puVar8 + 5) = param_3[10];
  }
  *(undefined8 **)(lVar7 + *plVar1 + 0x38) = puVar8;
  *(int *)(lVar15 + 0x22b4) = *(int *)(lVar15 + 0x22b4) + 1;
LAB_18005aedc:
  return *(undefined8 *)(lVar7 + *(longlong *)(lVar15 + 0x22a8) + 0x38);
}

