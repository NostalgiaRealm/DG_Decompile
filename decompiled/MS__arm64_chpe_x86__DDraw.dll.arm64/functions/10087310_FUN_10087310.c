/*
 * FUN_10087310 at 10087310
 * undefined FUN_10087310(void)
 * Address ranges: 10087310-10087723
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10087310(int param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  
  uVar16 = (ulonglong)param_3;
  iVar6 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
  piVar3 = (int *)(iVar6 + 0x1cf0);
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      uVar15 = uVar10 + 1;
      uVar16 = ((ulonglong)*(uint *)(param_4 + uVar10 * 0x1c) |
               (ulonglong)*(uint *)(param_4 + 4 + uVar10 * 0x1c) +
               (longlong)*(int *)(param_4 + 8 + uVar10 * 0x1c) +
               (longlong)*(int *)(param_4 + 0x14 + uVar10 * 0x1c) << 0x20) +
               (ulonglong)*(uint *)(param_4 + 0x18 + uVar10 * 0x1c) +
               (ulonglong)*(uint *)(param_4 + 0xc + uVar10 * 0x1c) +
               (ulonglong)*(uint *)(param_4 + 0x10 + uVar10 * 0x1c) + uVar16;
      uVar10 = uVar15;
    } while (uVar15 < param_3);
  }
  puVar1 = (uint *)(iVar6 + 0x1cf8);
  uVar10 = *puVar1;
  uVar15 = 0;
  if (uVar10 != 0) {
    uVar12 = 0;
    uVar11 = uVar10;
    do {
      uVar15 = uVar11 + uVar12 >> 1;
      uVar14 = *(ulonglong *)(*piVar3 + uVar15 * 0x18);
      uVar5 = uVar15;
      if (uVar14 <= uVar16) {
        if (uVar16 <= uVar14) break;
        uVar12 = uVar15 + 1;
        uVar15 = uVar12;
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar12);
    if ((uVar15 != uVar10) && (iVar8 = uVar15 * 0x18, *(ulonglong *)(*piVar3 + iVar8) == uVar16))
    goto LAB_10087598;
  }
  puVar2 = (uint *)(iVar6 + 0x1cf4);
  if (uVar10 == *puVar2) {
    uVar14 = (ulonglong)(*puVar2 << 1) * 0x18;
    uVar13 = (undefined4)uVar14;
    if (uVar14 >> 0x20 != 0) {
      uVar13 = 0xffffffff;
    }
    iVar6 = FUN_100914b0(uVar13);
    if (iVar6 != 0) {
      uVar10 = 0;
      if (*puVar2 != 0) {
        do {
          uVar12 = uVar10 + 1;
          puVar7 = (undefined8 *)(*piVar3 + uVar10 * 0x18);
          puVar4 = (undefined8 *)(iVar6 + uVar10 * 0x18);
          uVar17 = *puVar7;
          puVar4[1] = puVar7[1];
          *puVar4 = uVar17;
          puVar4[2] = puVar7[2];
          uVar10 = uVar12;
        } while (uVar12 < *puVar2);
      }
      FUN_100914d0(*piVar3);
      *piVar3 = iVar6;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar10 = *puVar1; uVar15 < uVar10; uVar10 = uVar10 - 1) {
    puVar7 = (undefined8 *)(*piVar3 + uVar10 * 0x18);
    puVar7[1] = puVar7[-2];
    *puVar7 = puVar7[-3];
    puVar7[2] = puVar7[-1];
  }
  iVar8 = uVar15 * 0x18;
  *(ulonglong *)(*piVar3 + iVar8) = uVar16;
  *(ulonglong *)(*piVar3 + iVar8 + 8) = uVar16;
  puVar7 = (undefined8 *)FUN_100913c0(0xc);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
  }
  *(undefined8 **)(*piVar3 + iVar8 + 0x10) = puVar7;
  *puVar1 = *puVar1 + 1;
LAB_10087598:
  piVar3 = *(int **)(*piVar3 + iVar8 + 0x10);
  if (piVar3 != (int *)0x0) {
    puVar1 = (uint *)(piVar3 + 1);
    uVar10 = *puVar1;
    if (uVar10 != 0) {
      iVar6 = *piVar3;
      uVar15 = 0;
      do {
        piVar9 = *(int **)(iVar6 + uVar15 * 4);
        if ((param_3 == piVar9[1]) &&
           (iVar8 = FUN_10091750(*piVar9,param_4,((ulonglong)(param_3 * 7) & 0x3fffffff) << 2),
           iVar8 == 0)) {
          return piVar9;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar10);
    }
    uVar13 = (undefined4)((ulonglong)param_3 * 0x1c);
    if ((ulonglong)param_3 * 0x1c >> 0x20 != 0) {
      uVar13 = 0xffffffff;
    }
    iVar6 = FUN_100914b0(uVar13);
    if (iVar6 != 0) {
      piVar9 = (int *)FUN_100913c0(8);
      if (piVar9 != (int *)0x0) {
        FUN_100917a0(iVar6,param_4,((ulonglong)(param_3 * 7) & 0x3fffffff) << 2);
        *piVar9 = iVar6;
        piVar9[1] = param_3;
        puVar2 = (uint *)(piVar3 + 2);
        uVar10 = *puVar2;
        if (piVar3[1] == uVar10) {
          uVar15 = uVar10 << 1;
          if (uVar10 == 0) {
            uVar15 = 0x10;
          }
          iVar6 = uVar15 * 4;
          if (uVar15 >> 0x1e != 0) {
            iVar6 = -1;
          }
          iVar6 = FUN_100914b0(iVar6);
          if (iVar6 == 0) {
            return piVar9;
          }
          FUN_100917a0(iVar6,*piVar3,((ulonglong)*puVar2 & 0x3fffffff) << 2);
          FUN_100914d0(*piVar3);
          *piVar3 = iVar6;
          *puVar2 = uVar15;
        }
        *(int **)(*piVar3 + piVar3[1] * 4) = piVar9;
        *puVar1 = *puVar1 + 1;
        return piVar9;
      }
      FUN_100914d0(iVar6);
    }
  }
  return (int *)0x0;
}

