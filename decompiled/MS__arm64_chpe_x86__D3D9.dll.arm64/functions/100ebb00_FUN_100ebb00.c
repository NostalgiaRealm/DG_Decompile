/*
 * FUN_100ebb00 at 100ebb00
 * undefined FUN_100ebb00(void)
 * Address ranges: 100ebb00-100ec103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ebb00(undefined4 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  uint *puVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined4 uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  
  if (((*(uint *)(param_1[4] + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar11 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    puVar13 = param_1;
  }
  else {
    bVar11 = true;
    puVar13 = (undefined4 *)(*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (puVar13 == (undefined4 *)0x0) {
      puVar13 = (undefined4 *)FUN_100071d0(0);
    }
  }
  iVar9 = param_1[4];
  puVar1 = (uint *)(iVar9 + 0x6734);
  uVar10 = *puVar1;
  if (uVar10 == 0) goto LAB_100ec0a0;
  uVar17 = 0;
  uVar18 = uVar10;
  do {
    uVar21 = uVar18 + uVar17 >> 1;
    uVar22 = *(ulonglong *)(*(int *)(iVar9 + 0x6730) + uVar21 * 0x880);
    uVar12 = uVar21;
    if (uVar22 <= (ulonglong)(longlong)(int)param_1) {
      if ((ulonglong)(longlong)(int)param_1 <= uVar22) break;
      uVar17 = uVar21 + 1;
      uVar21 = uVar17;
      uVar12 = uVar18;
    }
    uVar18 = uVar12;
  } while (uVar18 != uVar17);
  if (((uVar21 == uVar10) ||
      (plVar6 = (longlong *)(*(int *)(iVar9 + 0x6730) + uVar21 * 0x880),
      *plVar6 != (longlong)(int)param_1)) || (plVar2 = plVar6 + 2, plVar2 == (longlong *)0x0))
  goto LAB_100ec0a0;
  puVar3 = (uint *)(iVar9 + 0x6720);
  uVar10 = *puVar3;
  puVar4 = (ulonglong *)(plVar6 + 0x10f);
  if (uVar10 == 0) {
LAB_100ebcb8:
    piVar14 = (int *)FUN_101321c0(0xc);
    puVar13 = (undefined4 *)0x0;
    if (piVar14 == (int *)0x0) goto LAB_100ebfcc;
    piVar14[0] = 0;
    piVar14[1] = 0;
    piVar14[2] = 0;
    uVar10 = *puVar3;
    uVar22 = *puVar4;
    uVar17 = 0;
    if (uVar10 != 0) {
      uVar18 = 0;
      uVar21 = uVar10;
      do {
        uVar17 = uVar21 + uVar18 >> 1;
        uVar23 = *(ulonglong *)(*(int *)(iVar9 + 0x671c) + uVar17 * 0x18);
        uVar12 = uVar17;
        if (uVar23 <= uVar22) {
          if (uVar22 <= uVar23) break;
          uVar18 = uVar17 + 1;
          uVar17 = uVar18;
          uVar12 = uVar21;
        }
        uVar21 = uVar12;
      } while (uVar21 != uVar18);
      if ((uVar17 != uVar10) &&
         (puVar7 = (ulonglong *)(*(int *)(iVar9 + 0x671c) + uVar17 * 0x18), *puVar7 == uVar22)) {
        *(int **)(puVar7 + 2) = piVar14;
        goto LAB_100ebed0;
      }
    }
    puVar5 = (uint *)(iVar9 + 0x6724);
    uVar18 = *puVar5;
    if (uVar18 == uVar10) {
      uVar10 = 0x10;
      if (uVar18 != 0) {
        uVar10 = uVar18 << 1;
      }
      iVar15 = FUN_101322b0(uVar10 * 0x18);
      if (iVar15 != 0) {
        uVar18 = 0;
        if (*puVar3 != 0) {
          do {
            uVar21 = uVar18 + 1;
            puVar8 = (undefined8 *)(*(int *)(iVar9 + 0x671c) + uVar18 * 0x18);
            puVar16 = (undefined8 *)(iVar15 + uVar18 * 0x18);
            uVar24 = *puVar8;
            puVar16[1] = puVar8[1];
            *puVar16 = uVar24;
            puVar16[2] = puVar8[2];
            uVar18 = uVar21;
          } while (uVar21 < *(uint *)(iVar9 + 0x6720));
        }
        FUN_101322d0(*(undefined4 *)(iVar9 + 0x6718));
        *(int *)(iVar9 + 0x671c) = iVar15;
        *(int *)(iVar9 + 0x6718) = iVar15;
        *puVar5 = uVar10;
      }
    }
    piVar19 = (int *)(iVar9 + 0x671c);
    uVar10 = *puVar3;
    if (*puVar5 != uVar10) {
      for (; uVar17 < uVar10; uVar10 = uVar10 - 1) {
        puVar8 = (undefined8 *)(*piVar19 + uVar10 * 0x18);
        puVar8[1] = puVar8[-2];
        *puVar8 = puVar8[-3];
        puVar8[2] = puVar8[-1];
      }
      *puVar3 = *puVar3 + 1;
      *(ulonglong *)(*piVar19 + uVar17 * 0x18 + 8) = *puVar4;
      *(int **)(*piVar19 + uVar17 * 0x18 + 0x10) = piVar14;
      *(ulonglong *)(*piVar19 + uVar17 * 0x18) = uVar22;
    }
LAB_100ebed0:
    puVar3 = (uint *)(piVar14 + 2);
    puVar5 = (uint *)(piVar14 + 1);
    uVar10 = *puVar3;
    if (*puVar5 == uVar10) {
      uVar17 = uVar10 << 1;
      if (uVar10 == 0) {
        uVar17 = 0x10;
      }
      uVar20 = (undefined4)((ulonglong)uVar17 * 0x870);
      if ((ulonglong)uVar17 * 0x870 >> 0x20 != 0) {
        uVar20 = 0xffffffff;
      }
      puVar16 = (undefined8 *)FUN_101322b0(uVar20);
      puVar13 = (undefined4 *)0x0;
      uVar10 = uVar17;
      puVar8 = puVar16;
      if (puVar16 == (undefined8 *)0x0) goto LAB_100ebfcc;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar8 = 0;
        *(undefined4 *)(puVar8 + 1) = 0;
        puVar8[0x10b] = 0;
        puVar8[0x10c] = 0;
        puVar8[0x10d] = 0;
        *(undefined2 *)((int)puVar8 + 0xc) = 0xffff;
        puVar8 = puVar8 + 0x10e;
      }
      FUN_101325a0(puVar16,*piVar14,*puVar3 * 0x870);
      FUN_101322d0(*piVar14);
      *piVar14 = (int)puVar16;
      *puVar3 = uVar17;
    }
    FUN_101325a0(*piVar14 + *puVar5 * 0x870,plVar2,0x870);
    *puVar5 = *puVar5 + 1;
  }
  else {
    uVar22 = *puVar4;
    uVar17 = 0;
    uVar18 = uVar10;
    do {
      uVar21 = uVar18 + uVar17 >> 1;
      uVar23 = *(ulonglong *)(*(int *)(iVar9 + 0x671c) + uVar21 * 0x18);
      uVar12 = uVar21;
      if (uVar23 <= uVar22) {
        if (uVar22 <= uVar23) break;
        uVar17 = uVar21 + 1;
        uVar21 = uVar17;
        uVar12 = uVar18;
      }
      uVar18 = uVar12;
    } while (uVar18 != uVar17);
    if (((uVar21 == uVar10) ||
        (puVar7 = (ulonglong *)(*(int *)(iVar9 + 0x671c) + uVar21 * 0x18), *puVar7 != uVar22)) ||
       (puVar7 = puVar7 + 2, puVar7 == (ulonglong *)0x0)) goto LAB_100ebcb8;
    piVar14 = *(int **)puVar7;
    if (piVar14 != (int *)0x0) goto LAB_100ebed0;
LAB_100ebfcc:
    FUN_100e55a8(puVar13,plVar2);
  }
  uVar10 = *puVar1;
  if (uVar10 != 0) {
    iVar15 = (int)*plVar2;
    uVar17 = 0;
    uVar18 = uVar10;
    do {
      uVar21 = uVar18 + uVar17 >> 1;
      uVar22 = *(ulonglong *)(*(int *)(iVar9 + 0x6730) + uVar21 * 0x880);
      uVar12 = uVar21;
      if (uVar22 <= (ulonglong)(longlong)iVar15) {
        if ((ulonglong)(longlong)iVar15 <= uVar22) break;
        uVar17 = uVar21 + 1;
        uVar21 = uVar17;
        uVar12 = uVar18;
      }
      uVar18 = uVar12;
    } while (uVar18 != uVar17);
    if ((uVar21 != uVar10) &&
       (*(longlong *)(*(int *)(iVar9 + 0x6730) + uVar21 * 0x880) == (longlong)iVar15)) {
      uVar21 = uVar21 + 1;
      if (uVar21 < uVar10) {
        do {
          iVar15 = *(int *)(iVar9 + 0x6730) + uVar21 * 0x880;
          FUN_101325a0(iVar15 + -0x880,iVar15,0x880);
          uVar21 = uVar21 + 1;
        } while (uVar21 < *puVar1);
      }
      *puVar1 = *puVar1 - 1;
    }
  }
LAB_100ec0a0:
  *(undefined8 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_1015fd7c;
  FUN_10132260(param_1,0x1c);
  if (bVar11) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return;
}

