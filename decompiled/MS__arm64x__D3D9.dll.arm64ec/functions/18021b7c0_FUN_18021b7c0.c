/*
 * FUN_18021b7c0 at 18021b7c0
 * undefined FUN_18021b7c0(void)
 * Address ranges: 18021b7c0-18021ba63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18021b7c0(longlong param_1,uint param_2,int *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar12 = 0;
  lVar13 = *(longlong *)(param_1 + 8) + (ulonglong)param_2 * 0x1ac0;
  uVar3 = *(uint *)(lVar13 + 0x226c);
  uVar14 = (ulonglong)
           (param_3[1] & 1U | (param_3[2] & 0xfU | (uint)*(ushort *)(param_3 + 4) << 5) << 1) << 1 |
           ((ulonglong)(param_3[0xb] & 0xfU | (param_3[10] & 0xfU | (param_3[10] & 0xfU) << 4) << 4)
            << 4 | ((ulonglong)
                    (param_3[7] & 0xfU | (param_3[6] & 0xfU | (param_3[6] & 0xfU) << 4) << 4) << 4 |
                   (ulonglong)(uint)param_3[8] & 0xf) << 0x10 | (ulonglong)(uint)param_3[0xc] & 0xf)
           << 0x20 | (ulonglong)(param_3[3] != 0) << 6 | (ulonglong)(*param_3 != 0);
  if (uVar3 != 0) {
    uVar8 = 0;
    uVar7 = uVar3;
    do {
      uVar4 = uVar7 + uVar8 >> 1;
      uVar12 = (ulonglong)uVar4;
      uVar11 = *(ulonglong *)(*(longlong *)(lVar13 + 0x2260) + uVar12 * 0x48);
      if (uVar11 <= uVar14) {
        if (uVar14 <= uVar11) break;
        uVar8 = uVar4 + 1;
        uVar12 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (((uint)uVar12 != uVar3) &&
       (*(ulonglong *)(*(longlong *)(lVar13 + 0x2260) + uVar12 * 0x48) == uVar14))
    goto LAB_18021ba40;
  }
  plVar1 = (longlong *)(lVar13 + 0x2260);
  if (uVar3 == *(uint *)(lVar13 + 0x2268)) {
    uVar11 = CONCAT44(0,*(uint *)(lVar13 + 0x2268) << 1);
    lVar9 = uVar11 * 0x48;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar11;
    if (SUB168(auVar5 * ZEXT816(0x48),8) != 0) {
      lVar9 = -1;
    }
    lVar9 = FUN_1802229a8(lVar9);
    if (lVar9 != 0) {
      if (*(int *)(lVar13 + 0x2268) != 0) {
        uVar11 = 0;
        do {
          uVar3 = (int)uVar11 + 1;
          puVar6 = (undefined8 *)(*(longlong *)(lVar13 + 0x2260) + uVar11 * 0x48);
          puVar2 = (undefined8 *)(lVar9 + uVar11 * 0x48);
          uVar15 = *puVar6;
          uVar17 = puVar6[3];
          uVar16 = puVar6[2];
          puVar2[1] = puVar6[1];
          *puVar2 = uVar15;
          puVar2[3] = uVar17;
          puVar2[2] = uVar16;
          uVar15 = puVar6[4];
          uVar17 = puVar6[7];
          uVar16 = puVar6[6];
          puVar2[5] = puVar6[5];
          puVar2[4] = uVar15;
          puVar2[7] = uVar17;
          puVar2[6] = uVar16;
          puVar2[8] = puVar6[8];
          uVar11 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar13 + 0x2268));
      }
      FUN_1802229d8(*(longlong *)(lVar13 + 0x2260));
      *(longlong *)(lVar13 + 0x2260) = lVar9;
      *(int *)(lVar13 + 0x2268) = *(int *)(lVar13 + 0x2268) << 1;
    }
  }
  uVar11 = (ulonglong)*(uint *)(lVar13 + 0x226c);
  while ((uint)uVar12 < (uint)uVar11) {
    uVar10 = (ulonglong)((uint)uVar11 - 1);
    puVar6 = (undefined8 *)(*plVar1 + uVar11 * 0x48);
    puVar2 = (undefined8 *)(*plVar1 + uVar10 * 0x48);
    uVar15 = *puVar2;
    uVar17 = puVar2[3];
    uVar16 = puVar2[2];
    puVar6[1] = puVar2[1];
    *puVar6 = uVar15;
    puVar6[3] = uVar17;
    puVar6[2] = uVar16;
    uVar15 = puVar2[4];
    uVar17 = puVar2[7];
    uVar16 = puVar2[6];
    puVar6[5] = puVar2[5];
    puVar6[4] = uVar15;
    puVar6[7] = uVar17;
    puVar6[6] = uVar16;
    puVar6[8] = puVar2[8];
    uVar11 = uVar10;
  }
  *(ulonglong *)(*plVar1 + uVar12 * 0x48) = uVar14;
  uVar15 = *(undefined8 *)param_3;
  uVar17 = *(undefined8 *)(param_3 + 6);
  uVar16 = *(undefined8 *)(param_3 + 4);
  lVar9 = *plVar1 + uVar12 * 0x48;
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(lVar9 + 8) = uVar15;
  *(undefined8 *)(lVar9 + 0x20) = uVar17;
  *(undefined8 *)(lVar9 + 0x18) = uVar16;
  uVar15 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(lVar9 + 0x28) = uVar15;
  *(int *)(lVar9 + 0x38) = param_3[0xc];
  puVar6 = (undefined8 *)FUN_1802229a8(0x34);
  if (puVar6 != (undefined8 *)0x0) {
    uVar15 = *(undefined8 *)param_3;
    uVar17 = *(undefined8 *)(param_3 + 6);
    uVar16 = *(undefined8 *)(param_3 + 4);
    puVar6[1] = *(undefined8 *)(param_3 + 2);
    *puVar6 = uVar15;
    puVar6[3] = uVar17;
    puVar6[2] = uVar16;
    uVar15 = *(undefined8 *)(param_3 + 8);
    puVar6[5] = *(undefined8 *)(param_3 + 10);
    puVar6[4] = uVar15;
    *(int *)(puVar6 + 6) = param_3[0xc];
  }
  *(undefined8 **)(*plVar1 + uVar12 * 0x48 + 0x40) = puVar6;
  *(int *)(lVar13 + 0x226c) = *(int *)(lVar13 + 0x226c) + 1;
LAB_18021ba40:
  return *(undefined8 *)(uVar12 * 0x48 + *(longlong *)(lVar13 + 0x2260) + 0x40);
}

