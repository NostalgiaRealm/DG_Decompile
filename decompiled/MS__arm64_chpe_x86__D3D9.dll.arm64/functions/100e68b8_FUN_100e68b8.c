/*
 * FUN_100e68b8 at 100e68b8
 * undefined FUN_100e68b8(void)
 * Address ranges: 100e68b8-100e6ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e68b8(undefined4 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  uint *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  int *piVar21;
  uint uVar22;
  code *extraout_w11;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  
  if (((*(uint *)(param_1[4] + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar12 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    puVar18 = param_1;
  }
  else {
    bVar12 = true;
    puVar18 = (undefined4 *)(*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (puVar18 == (undefined4 *)0x0) {
      puVar18 = (undefined4 *)FUN_100071d0(0);
    }
  }
  iVar8 = param_1[4];
  puVar1 = (uint *)(iVar8 + 0x676c);
  uVar9 = *puVar1;
  if (uVar9 == 0) goto LAB_100e6e7c;
  uVar19 = 0;
  uVar20 = uVar9;
  do {
    uVar22 = uVar20 + uVar19 >> 1;
    uVar23 = *(ulonglong *)(*(int *)(iVar8 + 0x6768) + uVar22 * 0x238);
    uVar13 = uVar22;
    if (uVar23 <= (ulonglong)(longlong)(int)param_1) {
      if ((ulonglong)(longlong)(int)param_1 <= uVar23) break;
      uVar19 = uVar22 + 1;
      uVar22 = uVar19;
      uVar13 = uVar20;
    }
    uVar20 = uVar13;
  } while (uVar20 != uVar19);
  if (((uVar22 == uVar9) ||
      (plVar10 = (longlong *)(*(int *)(iVar8 + 0x6768) + uVar22 * 0x238),
      *plVar10 != (longlong)(int)param_1)) || (plVar2 = plVar10 + 2, plVar2 == (longlong *)0x0))
  goto LAB_100e6e7c;
  puVar3 = (uint *)(iVar8 + 0x6758);
  uVar9 = *puVar3;
  puVar4 = (ulonglong *)(plVar10 + 0x46);
  if (uVar9 == 0) {
LAB_100e6a70:
    piVar14 = (int *)FUN_101321c0(0xc);
    puVar18 = (undefined4 *)0x0;
    if (piVar14 == (int *)0x0) goto LAB_100e6da8;
    piVar14[0] = 0;
    piVar14[1] = 0;
    piVar14[2] = 0;
    uVar9 = *puVar3;
    uVar23 = *puVar4;
    uVar19 = 0;
    if (uVar9 != 0) {
      uVar20 = 0;
      uVar22 = uVar9;
      do {
        uVar19 = uVar22 + uVar20 >> 1;
        uVar24 = *(ulonglong *)(*(int *)(iVar8 + 0x6754) + uVar19 * 0x18);
        uVar13 = uVar19;
        if (uVar24 <= uVar23) {
          if (uVar23 <= uVar24) break;
          uVar20 = uVar19 + 1;
          uVar19 = uVar20;
          uVar13 = uVar22;
        }
        uVar22 = uVar13;
      } while (uVar22 != uVar20);
      if ((uVar19 != uVar9) &&
         (puVar6 = (ulonglong *)(*(int *)(iVar8 + 0x6754) + uVar19 * 0x18), *puVar6 == uVar23)) {
        *(int **)(puVar6 + 2) = piVar14;
        goto LAB_100e6c88;
      }
    }
    puVar5 = (uint *)(iVar8 + 0x675c);
    uVar20 = *puVar5;
    if (uVar20 == uVar9) {
      uVar9 = 0x10;
      if (uVar20 != 0) {
        uVar9 = uVar20 << 1;
      }
      iVar15 = FUN_101322b0(uVar9 * 0x18);
      if (iVar15 != 0) {
        uVar20 = 0;
        if (*puVar3 != 0) {
          do {
            uVar22 = uVar20 + 1;
            puVar7 = (undefined8 *)(*(int *)(iVar8 + 0x6754) + uVar20 * 0x18);
            puVar16 = (undefined8 *)(iVar15 + uVar20 * 0x18);
            uVar25 = *puVar7;
            puVar16[1] = puVar7[1];
            *puVar16 = uVar25;
            puVar16[2] = puVar7[2];
            uVar20 = uVar22;
          } while (uVar22 < *(uint *)(iVar8 + 0x6758));
        }
        FUN_101322d0(*(undefined4 *)(iVar8 + 0x6750));
        *(int *)(iVar8 + 0x6754) = iVar15;
        *(int *)(iVar8 + 0x6750) = iVar15;
        *puVar5 = uVar9;
      }
    }
    piVar21 = (int *)(iVar8 + 0x6754);
    uVar9 = *puVar3;
    if (*puVar5 != uVar9) {
      for (; uVar19 < uVar9; uVar9 = uVar9 - 1) {
        puVar7 = (undefined8 *)(*piVar21 + uVar9 * 0x18);
        puVar7[1] = puVar7[-2];
        *puVar7 = puVar7[-3];
        puVar7[2] = puVar7[-1];
      }
      *puVar3 = *puVar3 + 1;
      *(ulonglong *)(*piVar21 + uVar19 * 0x18 + 8) = *puVar4;
      *(int **)(*piVar21 + uVar19 * 0x18 + 0x10) = piVar14;
      *(ulonglong *)(*piVar21 + uVar19 * 0x18) = uVar23;
    }
LAB_100e6c88:
    puVar3 = (uint *)(piVar14 + 2);
    puVar5 = (uint *)(piVar14 + 1);
    uVar9 = *puVar3;
    if (*puVar5 == uVar9) {
      uVar19 = uVar9 << 1;
      if (uVar9 == 0) {
        uVar19 = 0x10;
      }
      uVar17 = (undefined4)((ulonglong)uVar19 * 0x228);
      if ((ulonglong)uVar19 * 0x228 >> 0x20 != 0) {
        uVar17 = 0xffffffff;
      }
      puVar16 = (undefined8 *)FUN_101322b0(uVar17);
      uVar9 = uVar19;
      puVar7 = puVar16;
      if (puVar16 != (undefined8 *)0x0) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 1) = 0;
          puVar7[0x43] = 0;
          puVar7[0x44] = 0;
          puVar7 = puVar7 + 0x45;
        }
        FUN_101325a0(puVar16,*piVar14,*puVar3 * 0x228);
        FUN_101322d0(*piVar14);
        *piVar14 = (int)puVar16;
        *puVar3 = uVar19;
        goto LAB_100e6d44;
      }
      bVar11 = true;
    }
    else {
LAB_100e6d44:
      FUN_101325a0(*piVar14 + *puVar5 * 0x228,plVar2,0x228);
      bVar11 = false;
      *puVar5 = *puVar5 + 1;
    }
    uVar17 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    puVar18 = (undefined4 *)(*extraout_w11)(uVar17,0);
    if (bVar11) goto LAB_100e6da8;
  }
  else {
    uVar23 = *puVar4;
    uVar19 = 0;
    uVar20 = uVar9;
    do {
      uVar22 = uVar20 + uVar19 >> 1;
      uVar24 = *(ulonglong *)(*(int *)(iVar8 + 0x6754) + uVar22 * 0x18);
      uVar13 = uVar22;
      if (uVar24 <= uVar23) {
        if (uVar23 <= uVar24) break;
        uVar19 = uVar22 + 1;
        uVar22 = uVar19;
        uVar13 = uVar20;
      }
      uVar20 = uVar13;
    } while (uVar20 != uVar19);
    if (((uVar22 == uVar9) ||
        (puVar6 = (ulonglong *)(*(int *)(iVar8 + 0x6754) + uVar22 * 0x18), *puVar6 != uVar23)) ||
       (puVar6 = puVar6 + 2, puVar6 == (ulonglong *)0x0)) goto LAB_100e6a70;
    piVar14 = *(int **)puVar6;
    if (piVar14 != (int *)0x0) goto LAB_100e6c88;
LAB_100e6da8:
    FUN_100e56d8(puVar18,plVar2);
  }
  uVar9 = *puVar1;
  if (uVar9 != 0) {
    iVar15 = (int)*plVar2;
    uVar19 = 0;
    uVar20 = uVar9;
    do {
      uVar22 = uVar20 + uVar19 >> 1;
      uVar23 = *(ulonglong *)(*(int *)(iVar8 + 0x6768) + uVar22 * 0x238);
      uVar13 = uVar22;
      if (uVar23 <= (ulonglong)(longlong)iVar15) {
        if ((ulonglong)(longlong)iVar15 <= uVar23) break;
        uVar19 = uVar22 + 1;
        uVar22 = uVar19;
        uVar13 = uVar20;
      }
      uVar20 = uVar13;
    } while (uVar20 != uVar19);
    if ((uVar22 != uVar9) &&
       (*(longlong *)(*(int *)(iVar8 + 0x6768) + uVar22 * 0x238) == (longlong)iVar15)) {
      uVar22 = uVar22 + 1;
      if (uVar22 < uVar9) {
        do {
          iVar15 = *(int *)(iVar8 + 0x6768) + uVar22 * 0x238;
          FUN_101325a0(iVar15 + -0x238,iVar15,0x238);
          uVar22 = uVar22 + 1;
        } while (uVar22 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
LAB_100e6e7c:
  FUN_101322d0(param_1[7]);
  *(undefined8 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_1015fb48;
  FUN_10132260(param_1,0x20);
  if (bVar12) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

