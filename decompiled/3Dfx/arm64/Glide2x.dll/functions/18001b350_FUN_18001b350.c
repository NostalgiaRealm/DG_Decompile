/*
 * FUN_18001b350 at 18001b350
 * undefined8 __cdecl FUN_18001b350(longlong * param_1, uint * param_2)
 * Address ranges: 18001b350-18001b587
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18001b350(longlong *param_1,uint *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  SIZE_T SVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar13 = 0;
  uVar14 = (((ulonglong)(*param_2 & 3 | (param_2[9] | param_2[10] << 8) << 6) & 0x3fffffff) << 2 |
            (ulonglong)(param_2[8] != 0) << 7 | (ulonglong)(param_2[7] != 0) << 6 |
            (ulonglong)(param_2[6] != 0) << 5 | (ulonglong)(param_2[2] != 0) << 4 |
           (ulonglong)param_2[1] & 3) ^ (ulonglong)param_2[5] |
           (ulonglong)(param_2[4] ^ param_2[3]) << 0x20;
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar3 != 0) {
    uVar9 = 0;
    uVar8 = uVar3;
    do {
      uVar4 = uVar8 + uVar9 >> 1;
      uVar13 = (ulonglong)uVar4;
      uVar12 = *(ulonglong *)(*param_1 + uVar13 * 0x40);
      if (uVar12 <= uVar14) {
        if (uVar14 <= uVar12) break;
        uVar9 = uVar4 + 1;
        uVar13 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar8 != uVar9);
    if (((uint)uVar13 != uVar3) &&
       (lVar6 = uVar13 * 0x40, *(ulonglong *)(*param_1 + lVar6) == uVar14)) goto LAB_18001b568;
  }
  if (uVar3 == *(uint *)(param_1 + 1)) {
    uVar12 = (ulonglong)*(uint *)(param_1 + 1) & 0x7fffffff;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12 << 1;
    SVar10 = uVar12 << 7;
    if (SUB168(auVar5 * ZEXT816(0x40),8) != 0) {
      SVar10 = 0xffffffffffffffff;
    }
    lVar6 = thunk_FUN_18005fb88(SVar10);
    if (lVar6 != 0) {
      uVar12 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar3 = (int)uVar12 + 1;
          puVar7 = (undefined8 *)(*param_1 + uVar12 * 0x40);
          puVar1 = (undefined8 *)(lVar6 + uVar12 * 0x40);
          uVar17 = *puVar7;
          uVar16 = puVar7[3];
          uVar15 = puVar7[2];
          puVar1[1] = puVar7[1];
          *puVar1 = uVar17;
          puVar1[3] = uVar16;
          puVar1[2] = uVar15;
          uVar17 = puVar7[4];
          uVar16 = puVar7[7];
          uVar15 = puVar7[6];
          puVar1[5] = puVar7[5];
          puVar1[4] = uVar17;
          puVar1[7] = uVar16;
          puVar1[6] = uVar15;
          uVar12 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_18005fbc8((LPVOID)*param_1);
      *param_1 = lVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar13 < (uint)uVar12) {
    uVar11 = (ulonglong)((uint)uVar12 - 1);
    puVar7 = (undefined8 *)(*param_1 + uVar12 * 0x40);
    puVar1 = (undefined8 *)(*param_1 + uVar11 * 0x40);
    uVar17 = *puVar1;
    uVar16 = puVar1[3];
    uVar15 = puVar1[2];
    puVar7[1] = puVar1[1];
    *puVar7 = uVar17;
    puVar7[3] = uVar16;
    puVar7[2] = uVar15;
    uVar17 = puVar1[4];
    uVar16 = puVar1[7];
    uVar15 = puVar1[6];
    puVar7[5] = puVar1[5];
    puVar7[4] = uVar17;
    puVar7[7] = uVar16;
    puVar7[6] = uVar15;
    uVar12 = uVar11;
  }
  lVar6 = uVar13 * 0x40;
  *(ulonglong *)(*param_1 + lVar6) = uVar14;
  uVar17 = *(undefined8 *)param_2;
  uVar16 = *(undefined8 *)(param_2 + 6);
  uVar15 = *(undefined8 *)(param_2 + 4);
  lVar2 = lVar6 + *param_1;
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar2 + 8) = uVar17;
  *(undefined8 *)(lVar2 + 0x20) = uVar16;
  *(undefined8 *)(lVar2 + 0x18) = uVar15;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 8);
  *(uint *)(lVar2 + 0x30) = param_2[10];
  puVar7 = (undefined8 *)FUN_18005fb88(0x2c);
  if (puVar7 != (undefined8 *)0x0) {
    uVar17 = *(undefined8 *)param_2;
    uVar16 = *(undefined8 *)(param_2 + 6);
    uVar15 = *(undefined8 *)(param_2 + 4);
    puVar7[1] = *(undefined8 *)(param_2 + 2);
    *puVar7 = uVar17;
    puVar7[3] = uVar16;
    puVar7[2] = uVar15;
    puVar7[4] = *(undefined8 *)(param_2 + 8);
    *(uint *)(puVar7 + 5) = param_2[10];
  }
  *(undefined8 **)(lVar6 + *param_1 + 0x38) = puVar7;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18001b568:
  return *(undefined8 *)(lVar6 + *param_1 + 0x38);
}

