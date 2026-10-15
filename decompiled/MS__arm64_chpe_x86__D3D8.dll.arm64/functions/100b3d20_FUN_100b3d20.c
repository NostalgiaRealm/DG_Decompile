/*
 * FUN_100b3d20 at 100b3d20
 * undefined FUN_100b3d20(void)
 * Address ranges: 100b3d20-100b42b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b3d20(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int extraout_w1;
  int extraout_w1_00;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int *piVar24;
  
  uVar19 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
    bVar9 = false;
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
  }
  else {
    bVar9 = true;
    iVar11 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar11 == 0) {
      FUN_10006560(0);
    }
  }
  piVar1 = (int *)(param_1 + 0x18);
  iVar11 = FUN_100bd300(piVar1,param_2);
  if (iVar11 == 0) goto LAB_100b4270;
  if (param_2 == *(int *)(param_1 + 0x60)) {
    *(int *)(param_1 + 0x60) = 0;
  }
  if (*(int *)(iVar11 + 0x974) == 0) {
LAB_100b419c:
    FUN_100bd238(piVar1,iVar11);
  }
  else {
    puVar2 = (uint *)(param_1 + 0x20);
    uVar8 = *puVar2;
    puVar3 = (ulonglong *)(iVar11 + 0x988);
    if (uVar8 == 0) {
LAB_100b3e7c:
      piVar12 = (int *)FUN_100febf0(0xc);
      if (piVar12 == (int *)0x0) goto LAB_100b419c;
      piVar12[0] = 0;
      piVar12[1] = 0;
      piVar12[2] = 0;
      uVar8 = *puVar2;
      uVar17 = 0;
      uVar22 = *puVar3;
      if (uVar8 != 0) {
        uVar18 = 0;
        uVar20 = uVar8;
        do {
          uVar17 = uVar20 + uVar18 >> 1;
          uVar23 = *(ulonglong *)(*(int *)(param_1 + 0x1c) + uVar17 * 0x18);
          uVar21 = uVar17;
          if (uVar23 <= uVar22) {
            if (uVar22 <= uVar23) break;
            uVar18 = uVar17 + 1;
            uVar17 = uVar18;
            uVar21 = uVar20;
          }
          uVar20 = uVar21;
        } while (uVar20 != uVar18);
        if ((uVar17 != uVar8) &&
           (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x1c) + uVar17 * 0x18), *puVar5 == uVar22)) {
          *(int **)(puVar5 + 2) = piVar12;
          goto LAB_100b4090;
        }
      }
      puVar4 = (uint *)(param_1 + 0x24);
      uVar18 = *puVar4;
      if (uVar18 == uVar8) {
        uVar8 = 0x10;
        if (uVar18 != 0) {
          uVar8 = uVar18 << 1;
        }
        iVar13 = FUN_100fece0(uVar8 * 0x18);
        if (iVar13 != 0) {
          if (*puVar2 != 0) {
            uVar18 = 0;
            do {
              uVar20 = uVar18 + 1;
              puVar6 = (undefined8 *)(*(int *)(param_1 + 0x1c) + uVar18 * 0x18);
              puVar7 = (undefined8 *)(iVar13 + uVar18 * 0x18);
              uVar16 = *puVar6;
              puVar7[1] = puVar6[1];
              *puVar7 = uVar16;
              puVar7[2] = puVar6[2];
              uVar18 = uVar20;
            } while (uVar20 < *(uint *)(param_1 + 0x20));
          }
          FUN_100fed00(*piVar1);
          *piVar1 = iVar13;
          *(int *)(param_1 + 0x1c) = iVar13;
          *puVar4 = uVar8;
        }
      }
      piVar24 = (int *)(param_1 + 0x1c);
      uVar8 = *puVar2;
      if (*puVar4 != uVar8) {
        for (; uVar17 < uVar8; uVar8 = uVar8 - 1) {
          puVar6 = (undefined8 *)(*piVar24 + uVar8 * 0x18);
          puVar6[1] = puVar6[-2];
          *puVar6 = puVar6[-3];
          puVar6[2] = puVar6[-1];
        }
        *puVar2 = *puVar2 + 1;
        *(ulonglong *)(*piVar24 + uVar17 * 0x18 + 8) = *puVar3;
        *(int **)(*piVar24 + uVar17 * 0x18 + 0x10) = piVar12;
        *(ulonglong *)(*piVar24 + uVar17 * 0x18) = uVar22;
      }
    }
    else {
      uVar22 = *puVar3;
      uVar17 = 0;
      uVar18 = uVar8;
      do {
        uVar20 = uVar18 + uVar17 >> 1;
        uVar23 = *(ulonglong *)(*(int *)(param_1 + 0x1c) + uVar20 * 0x18);
        uVar21 = uVar20;
        if (uVar23 <= uVar22) {
          if (uVar22 <= uVar23) break;
          uVar17 = uVar20 + 1;
          uVar20 = uVar17;
          uVar21 = uVar18;
        }
        uVar18 = uVar21;
      } while (uVar18 != uVar17);
      if (((uVar20 == uVar8) ||
          (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x1c) + uVar20 * 0x18), *puVar5 != uVar22)) ||
         (puVar5 = puVar5 + 2, puVar5 == (ulonglong *)0x0)) goto LAB_100b3e7c;
      piVar12 = *(int **)puVar5;
      if (piVar12 == (int *)0x0) goto LAB_100b419c;
    }
LAB_100b4090:
    puVar2 = (uint *)(piVar12 + 2);
    puVar4 = (uint *)(piVar12 + 1);
    uVar8 = *puVar2;
    if (*puVar4 == uVar8) {
      uVar17 = uVar8 << 1;
      if (uVar8 == 0) {
        uVar17 = 0x10;
      }
      uVar19 = (undefined4)((ulonglong)uVar17 * 0x990);
      if ((ulonglong)uVar17 * 0x990 >> 0x20 != 0) {
        uVar19 = 0xffffffff;
      }
      puVar14 = (undefined4 *)FUN_100fece0(uVar19);
      if (puVar14 == (undefined4 *)0x0) goto LAB_100b419c;
      uVar22 = (ulonglong)uVar17;
      if (uVar17 != 0) {
        uVar16 = 0xffff;
        puVar15 = puVar14;
        do {
          *puVar15 = 0;
          *(undefined8 *)(puVar15 + 0x59) = 0;
          *(undefined8 *)(puVar15 + 0x25c) = 0;
          *(undefined8 *)(puVar15 + 0x25e) = 0;
          *(undefined8 *)(puVar15 + 0x260) = 0;
          *(undefined8 *)(puVar15 + 0x262) = 0;
          *(short *)(puVar15 + 0x5b) = (short)uVar16;
          uVar22 = (ulonglong)((int)uVar22 - 1);
          FUN_10083260(puVar15 + 1);
          FUN_10083260(extraout_w1 + 0xb4);
          puVar15 = (undefined4 *)(extraout_w1_00 + 0x990);
        } while ((int)uVar22 != 0);
      }
      FUN_100ff660(puVar14,*piVar12,*puVar2 * 0x990);
      FUN_100fed00(*piVar12);
      *piVar12 = (int)puVar14;
      *puVar2 = uVar17;
    }
    FUN_100ff660(*piVar12 + *puVar4 * 0x990,iVar11,0x990);
    *puVar4 = *puVar4 + 1;
    FUN_100bd1a0(piVar1,iVar11);
  }
  puVar2 = (uint *)(param_1 + 0x34);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    uVar18 = *(uint *)(iVar11 + 4);
    uVar17 = 0;
    uVar20 = uVar8;
    do {
      uVar21 = uVar20 + uVar17 >> 1;
      uVar22 = *(ulonglong *)(*(int *)(param_1 + 0x30) + uVar21 * 0x9a0);
      uVar10 = uVar21;
      if (uVar22 <= uVar18) {
        if (uVar18 <= uVar22) break;
        uVar17 = uVar21 + 1;
        uVar21 = uVar17;
        uVar10 = uVar20;
      }
      uVar20 = uVar10;
    } while (uVar20 != uVar17);
    if ((uVar21 != uVar8) &&
       (*(ulonglong *)(*(int *)(param_1 + 0x30) + uVar21 * 0x9a0) == (ulonglong)uVar18)) {
      uVar21 = uVar21 + 1;
      if (uVar21 < uVar8) {
        do {
          iVar11 = *(int *)(param_1 + 0x30) + uVar21 * 0x9a0;
          FUN_100ff660(iVar11 + -0x9a0,iVar11,0x9a0);
          uVar21 = uVar21 + 1;
        } while (uVar21 < *puVar2);
      }
      *puVar2 = *puVar2 - 1;
    }
  }
  uVar19 = 0;
LAB_100b4270:
  if (bVar9) {
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  else {
    *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
  }
  return uVar19;
}

