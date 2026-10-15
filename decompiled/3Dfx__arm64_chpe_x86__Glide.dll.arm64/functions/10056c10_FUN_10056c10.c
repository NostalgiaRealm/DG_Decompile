/*
 * FUN_10056c10 at 10056c10
 * undefined FUN_10056c10(void)
 * Address ranges: 10056c10-1005700f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10056c10(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
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
  if (param_3 != 0) {
    uVar10 = 0;
    do {
      uVar15 = uVar10 + 1;
      uVar16 = ((ulonglong)*(uint *)(param_2 + uVar10 * 0x1c) |
               (ulonglong)*(uint *)(param_2 + 4 + uVar10 * 0x1c) +
               (longlong)*(int *)(param_2 + 8 + uVar10 * 0x1c) +
               (longlong)*(int *)(param_2 + 0x14 + uVar10 * 0x1c) << 0x20) +
               (ulonglong)*(uint *)(param_2 + 0x18 + uVar10 * 0x1c) +
               (ulonglong)*(uint *)(param_2 + 0xc + uVar10 * 0x1c) +
               (ulonglong)*(uint *)(param_2 + 0x10 + uVar10 * 0x1c) + uVar16;
      uVar10 = uVar15;
    } while (uVar15 < param_3);
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = *puVar1;
  uVar15 = 0;
  if (uVar10 != 0) {
    uVar12 = 0;
    uVar11 = uVar10;
    do {
      uVar15 = uVar11 + uVar12 >> 1;
      uVar14 = *(ulonglong *)(*param_1 + uVar15 * 0x18);
      uVar5 = uVar15;
      if (uVar14 <= uVar16) {
        if (uVar16 <= uVar14) break;
        uVar12 = uVar15 + 1;
        uVar15 = uVar12;
        uVar5 = uVar11;
      }
      uVar11 = uVar5;
    } while (uVar11 != uVar12);
    if ((uVar15 != uVar10) && (iVar6 = uVar15 * 0x18, *(ulonglong *)(iVar6 + *param_1) == uVar16))
    goto LAB_10056e84;
  }
  puVar2 = (uint *)(param_1 + 1);
  if (uVar10 == *puVar2) {
    uVar14 = (ulonglong)(*puVar2 << 1) * 0x18;
    uVar13 = (undefined4)uVar14;
    if (uVar14 >> 0x20 != 0) {
      uVar13 = 0xffffffff;
    }
    iVar6 = FUN_1007a4c0(uVar13);
    if (iVar6 != 0) {
      uVar10 = 0;
      if (*puVar2 != 0) {
        do {
          uVar12 = uVar10 + 1;
          puVar7 = (undefined8 *)(*param_1 + uVar10 * 0x18);
          puVar3 = (undefined8 *)(iVar6 + uVar10 * 0x18);
          uVar17 = *puVar7;
          puVar3[1] = puVar7[1];
          *puVar3 = uVar17;
          puVar3[2] = puVar7[2];
          uVar10 = uVar12;
        } while (uVar12 < *puVar2);
      }
      FUN_1007a4e0(*param_1);
      *param_1 = iVar6;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar10 = *puVar1; uVar15 < uVar10; uVar10 = uVar10 - 1) {
    puVar7 = (undefined8 *)(*param_1 + uVar10 * 0x18);
    puVar7[1] = puVar7[-2];
    *puVar7 = puVar7[-3];
    puVar7[2] = puVar7[-1];
  }
  iVar6 = uVar15 * 0x18;
  *(ulonglong *)(iVar6 + *param_1) = uVar16;
  *(ulonglong *)(iVar6 + *param_1 + 8) = uVar16;
  puVar7 = (undefined8 *)FUN_1007a3d0(0xc);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = 0;
    *(undefined4 *)(puVar7 + 1) = 0;
  }
  *(undefined8 **)(iVar6 + *param_1 + 0x10) = puVar7;
  *puVar1 = *puVar1 + 1;
LAB_10056e84:
  piVar4 = *(int **)(*param_1 + iVar6 + 0x10);
  if (piVar4 != (int *)0x0) {
    puVar1 = (uint *)(piVar4 + 1);
    uVar10 = *puVar1;
    if (uVar10 != 0) {
      iVar6 = *piVar4;
      uVar15 = 0;
      do {
        piVar9 = *(int **)(iVar6 + uVar15 * 4);
        if ((param_3 == piVar9[1]) &&
           (iVar8 = FUN_1007abb0(*piVar9,param_2,((ulonglong)(param_3 * 7) & 0x3fffffff) << 2),
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
    iVar6 = FUN_1007a4c0(uVar13);
    if (iVar6 != 0) {
      piVar9 = (int *)FUN_1007a3d0(8);
      if (piVar9 != (int *)0x0) {
        FUN_1007ac00(iVar6,param_2,((ulonglong)(param_3 * 7) & 0x3fffffff) << 2);
        *piVar9 = iVar6;
        piVar9[1] = param_3;
        puVar2 = (uint *)(piVar4 + 2);
        uVar10 = *puVar2;
        if (piVar4[1] == uVar10) {
          uVar15 = uVar10 << 1;
          if (uVar10 == 0) {
            uVar15 = 0x10;
          }
          iVar6 = uVar15 * 4;
          if (uVar15 >> 0x1e != 0) {
            iVar6 = -1;
          }
          iVar6 = FUN_1007a4c0(iVar6);
          if (iVar6 == 0) {
            return piVar9;
          }
          FUN_1007ac00(iVar6,*piVar4,((ulonglong)*puVar2 & 0x3fffffff) << 2);
          FUN_1007a4e0(*piVar4);
          *piVar4 = iVar6;
          *puVar2 = uVar15;
        }
        *(int **)(*piVar4 + piVar4[1] * 4) = piVar9;
        *puVar1 = *puVar1 + 1;
        return piVar9;
      }
      FUN_1007a4e0(iVar6);
    }
  }
  return (int *)0x0;
}

