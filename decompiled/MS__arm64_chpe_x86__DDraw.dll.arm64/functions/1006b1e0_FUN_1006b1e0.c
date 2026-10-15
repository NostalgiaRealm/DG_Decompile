/*
 * FUN_1006b1e0 at 1006b1e0
 * undefined FUN_1006b1e0(void)
 * Address ranges: 1006b1e0-1006b53b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006b1e0(ulonglong param_1,int param_2)

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
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int extraout_w11;
  int extraout_w11_00;
  code *extraout_w11_01;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  iVar7 = (int)param_1 + param_2 * 0x1510;
  piVar1 = (int *)(iVar7 + 0x85c);
  puVar2 = (uint *)(iVar7 + 0x864);
  uVar16 = *puVar2;
  uVar12 = (ulonglong)uVar16;
  if (0xff < uVar16) {
    iVar9 = *piVar1;
    uVar13 = (ulonglong)((iVar9 + uVar16 * 0x38) - 0x30);
    param_1 = FUN_10085258(param_1,uVar13);
    uVar16 = 0;
    uVar15 = uVar12 & 0xffffffff;
    do {
      uVar19 = (uint)uVar15 + uVar16 >> 1;
      uVar18 = *(ulonglong *)(iVar9 + uVar19 * 0x38);
      uVar17 = uVar19;
      if (uVar18 <= param_1) {
        uVar17 = (uint)uVar15;
      }
      uVar15 = (ulonglong)uVar17;
      if (uVar18 <= param_1) {
        if (param_1 <= uVar18) break;
        uVar16 = uVar19 + 1;
        uVar19 = uVar16;
      }
    } while (uVar17 != uVar16);
    if (((uVar19 != (uint)uVar12) &&
        (puVar4 = (ulonglong *)(iVar9 + uVar19 * 0x38), *puVar4 == param_1)) &&
       (param_1 = FUN_10085158(param_1,uVar13 & 0xffffffff,puVar4 + 1), (param_1 & 1) == 0)) {
      param_1 = FUN_10085318(piVar1,*(undefined4 *)(extraout_w11 + 0x30));
      uVar16 = *puVar2;
      uVar19 = uVar19 + 1;
      if (uVar19 < uVar16) {
        do {
          uVar17 = uVar19 + 1;
          puVar5 = (undefined8 *)(*piVar1 + uVar19 * 0x38);
          puVar5[-6] = puVar5[1];
          puVar5[-7] = *puVar5;
          puVar5[-4] = puVar5[3];
          puVar5[-5] = puVar5[2];
          puVar5[-2] = puVar5[5];
          puVar5[-3] = puVar5[4];
          puVar5[-1] = puVar5[6];
          uVar16 = *puVar2;
          uVar19 = uVar17;
        } while (uVar17 < uVar16);
      }
      *puVar2 = uVar16 - 1;
    }
  }
  puVar11 = &DAT_100b5000;
  uVar12 = FUN_10085258(param_1,&DAT_100b5078);
  uVar16 = *puVar2;
  uVar19 = 0;
  if (uVar16 != 0) {
    uVar17 = 0;
    uVar14 = uVar16;
    do {
      uVar19 = uVar14 + uVar17 >> 1;
      uVar13 = *(ulonglong *)(*piVar1 + uVar19 * 0x38);
      uVar8 = uVar19;
      if (uVar13 <= uVar12) {
        if (uVar12 <= uVar13) break;
        uVar17 = uVar19 + 1;
        uVar19 = uVar17;
        uVar8 = uVar14;
      }
      uVar14 = uVar8;
    } while (uVar14 != uVar17);
    if ((uVar19 != uVar16) && (puVar4 = (ulonglong *)(*piVar1 + uVar19 * 0x38), *puVar4 == uVar12))
    {
      uVar13 = FUN_10085158(uVar12,puVar11 + 0x78,puVar4 + 1);
      if ((uVar13 & 1) != 0) {
        FUN_10085318(piVar1,*(undefined4 *)(extraout_w11_00 + 0x30));
        FUN_10085918(piVar1,uVar19,uVar12);
      }
      goto LAB_1006b4c4;
    }
  }
  puVar3 = (uint *)(iVar7 + 0x860);
  if (uVar16 == *puVar3) {
    uVar13 = (ulonglong)(*puVar3 << 1) * 0x38;
    uVar10 = (undefined4)uVar13;
    if (uVar13 >> 0x20 != 0) {
      uVar10 = 0xffffffff;
    }
    iVar9 = FUN_100914b0(uVar10);
    if (iVar9 != 0) {
      uVar16 = 0;
      if (*puVar3 != 0) {
        do {
          uVar17 = uVar16 + 1;
          puVar5 = (undefined8 *)(*piVar1 + uVar16 * 0x38);
          puVar6 = (undefined8 *)(iVar9 + uVar16 * 0x38);
          uVar22 = *puVar5;
          uVar21 = puVar5[3];
          uVar20 = puVar5[2];
          puVar6[1] = puVar5[1];
          *puVar6 = uVar22;
          puVar6[3] = uVar21;
          puVar6[2] = uVar20;
          uVar20 = puVar5[4];
          puVar6[5] = puVar5[5];
          puVar6[4] = uVar20;
          puVar6[6] = puVar5[6];
          uVar16 = uVar17;
        } while (uVar17 < *puVar3);
      }
      FUN_100914d0(*piVar1);
      *piVar1 = iVar9;
      *puVar3 = *puVar3 << 1;
    }
  }
  for (uVar16 = *puVar2; uVar19 < uVar16; uVar16 = uVar16 - 1) {
    puVar5 = (undefined8 *)(*piVar1 + uVar16 * 0x38);
    puVar5[1] = puVar5[-6];
    *puVar5 = puVar5[-7];
    puVar5[3] = puVar5[-4];
    puVar5[2] = puVar5[-5];
    puVar5[5] = puVar5[-2];
    puVar5[4] = puVar5[-3];
    puVar5[6] = puVar5[-1];
  }
  FUN_10085918(piVar1,uVar19,uVar12);
  *puVar2 = *puVar2 + 1;
LAB_1006b4c4:
  iVar9 = *(int *)(*piVar1 + uVar19 * 0x38 + 0x30);
  if (iVar9 != *(int *)(iVar7 + 0x550)) {
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_01)(uVar10,iVar9);
    *(int *)(iVar7 + 0x550) = iVar9;
  }
  return;
}

