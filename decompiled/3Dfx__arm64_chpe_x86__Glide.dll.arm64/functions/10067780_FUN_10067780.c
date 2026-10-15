/*
 * FUN_10067780 at 10067780
 * undefined FUN_10067780(void)
 * Address ranges: 10067780-10067aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067780(ulonglong param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  int extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  iVar7 = (int)param_1 + param_2 * 0x1510;
  piVar1 = (int *)(iVar7 + 0x85c);
  puVar2 = (uint *)(iVar7 + 0x864);
  uVar15 = *puVar2;
  uVar11 = (ulonglong)uVar15;
  if (0xff < uVar15) {
    iVar9 = *piVar1;
    uVar12 = (ulonglong)((iVar9 + uVar15 * 0x38) - 0x30);
    param_1 = FUN_1006e4a8(param_1,uVar12);
    uVar15 = 0;
    uVar14 = uVar11 & 0xffffffff;
    do {
      uVar18 = (uint)uVar14 + uVar15 >> 1;
      uVar17 = *(ulonglong *)(iVar9 + uVar18 * 0x38);
      uVar16 = uVar18;
      if (uVar17 <= param_1) {
        uVar16 = (uint)uVar14;
      }
      uVar14 = (ulonglong)uVar16;
      if (uVar17 <= param_1) {
        if (param_1 <= uVar17) break;
        uVar15 = uVar18 + 1;
        uVar18 = uVar15;
      }
    } while (uVar16 != uVar15);
    if (((uVar18 != (uint)uVar11) &&
        (puVar4 = (ulonglong *)(iVar9 + uVar18 * 0x38), *puVar4 == param_1)) &&
       (param_1 = FUN_1006e3a8(param_1,uVar12 & 0xffffffff,puVar4 + 1), (param_1 & 1) == 0)) {
      param_1 = FUN_1006e568(piVar1,*(undefined4 *)(extraout_w11 + 0x30));
      uVar15 = *puVar2;
      uVar18 = uVar18 + 1;
      if (uVar18 < uVar15) {
        do {
          uVar16 = uVar18 + 1;
          puVar5 = (undefined8 *)(*piVar1 + uVar18 * 0x38);
          puVar5[-6] = puVar5[1];
          puVar5[-7] = *puVar5;
          puVar5[-4] = puVar5[3];
          puVar5[-5] = puVar5[2];
          puVar5[-2] = puVar5[5];
          puVar5[-3] = puVar5[4];
          puVar5[-1] = puVar5[6];
          uVar15 = *puVar2;
          uVar18 = uVar16;
        } while (uVar16 < uVar15);
      }
      *puVar2 = uVar15 - 1;
    }
  }
  uVar11 = FUN_1006e4a8(param_1,param_3);
  uVar15 = *puVar2;
  uVar18 = 0;
  if (uVar15 != 0) {
    uVar16 = 0;
    uVar13 = uVar15;
    do {
      uVar18 = uVar13 + uVar16 >> 1;
      uVar12 = *(ulonglong *)(*piVar1 + uVar18 * 0x38);
      uVar8 = uVar18;
      if (uVar12 <= uVar11) {
        if (uVar11 <= uVar12) break;
        uVar16 = uVar18 + 1;
        uVar18 = uVar16;
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while (uVar13 != uVar16);
    if ((uVar18 != uVar15) && (puVar4 = (ulonglong *)(*piVar1 + uVar18 * 0x38), *puVar4 == uVar11))
    {
      uVar12 = FUN_1006e3a8(uVar11,param_3,puVar4 + 1);
      if ((uVar12 & 1) != 0) {
        FUN_1006e568(piVar1,*(undefined4 *)(extraout_w12 + 0x30));
        FUN_1006eb68(piVar1,uVar18,uVar11,param_3);
      }
      goto LAB_10067a70;
    }
  }
  puVar3 = (uint *)(iVar7 + 0x860);
  if (uVar15 == *puVar3) {
    uVar12 = (ulonglong)(*puVar3 << 1) * 0x38;
    uVar10 = (undefined4)uVar12;
    if (uVar12 >> 0x20 != 0) {
      uVar10 = 0xffffffff;
    }
    iVar9 = FUN_1007a4c0(uVar10);
    if (iVar9 != 0) {
      uVar15 = 0;
      if (*puVar3 != 0) {
        do {
          uVar16 = uVar15 + 1;
          puVar5 = (undefined8 *)(*piVar1 + uVar15 * 0x38);
          puVar6 = (undefined8 *)(iVar9 + uVar15 * 0x38);
          uVar21 = *puVar5;
          uVar20 = puVar5[3];
          uVar19 = puVar5[2];
          puVar6[1] = puVar5[1];
          *puVar6 = uVar21;
          puVar6[3] = uVar20;
          puVar6[2] = uVar19;
          uVar19 = puVar5[4];
          puVar6[5] = puVar5[5];
          puVar6[4] = uVar19;
          puVar6[6] = puVar5[6];
          uVar15 = uVar16;
        } while (uVar16 < *puVar3);
      }
      FUN_1007a4e0(*piVar1);
      *piVar1 = iVar9;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar15 = *puVar2; uVar18 < uVar15; uVar15 = uVar15 - 1) {
    puVar5 = (undefined8 *)(*piVar1 + uVar15 * 0x38);
    puVar5[1] = puVar5[-6];
    *puVar5 = puVar5[-7];
    puVar5[3] = puVar5[-4];
    puVar5[2] = puVar5[-5];
    puVar5[5] = puVar5[-2];
    puVar5[4] = puVar5[-3];
    puVar5[6] = puVar5[-1];
  }
  FUN_1006eb68(piVar1,uVar18,uVar11,param_3);
  *puVar2 = *puVar2 + 1;
LAB_10067a70:
  iVar9 = *(int *)(*piVar1 + uVar18 * 0x38 + 0x30);
  if (iVar9 != *(int *)(iVar7 + 0x550)) {
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar10,iVar9);
    *(int *)(iVar7 + 0x550) = iVar9;
  }
  return;
}

