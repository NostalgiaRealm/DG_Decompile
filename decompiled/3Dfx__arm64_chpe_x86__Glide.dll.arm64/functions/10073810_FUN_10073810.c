/*
 * FUN_10073810 at 10073810
 * undefined FUN_10073810(void)
 * Address ranges: 10073810-10073d7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10073810(int param_1,int param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  
  iVar16 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
  piVar3 = (int *)(iVar16 + 0x1cd0);
  uVar5 = 0x10000;
  if (*param_3 == 0) {
    uVar5 = 0;
  }
  uVar20 = 0x20000;
  if (param_3[1] == 0) {
    uVar20 = 0;
  }
  uVar6 = 0x200;
  if (param_3[0x21] == 0) {
    uVar6 = 0;
  }
  uVar7 = 0x80;
  if (param_3[0x17] == 0) {
    uVar7 = 0;
  }
  uVar8 = 0x20;
  if (param_3[0xd] == 0) {
    uVar8 = 0;
  }
  uVar9 = 8;
  if (param_3[3] == 0) {
    uVar9 = 0;
  }
  uVar10 = 0x40;
  if (param_3[0x16] == 0) {
    uVar10 = 0;
  }
  uVar11 = 4;
  if (param_3[2] == 0) {
    uVar11 = 0;
  }
  uVar12 = 0x100;
  if (param_3[0x20] == 0) {
    uVar12 = 0;
  }
  puVar1 = (uint *)(iVar16 + 0x1cd8);
  uVar21 = 0;
  uVar13 = 0x10;
  if (param_3[0xc] == 0) {
    uVar13 = 0;
  }
  uVar5 = ((ulonglong)
           (param_3[0x19] & 0x1fU |
           (param_3[0x1a] & 7U |
           (param_3[0x1b] & 0x1fU | (param_3[0x1c] & 0x1fU | (param_3[0x1d] & 7U) << 5) << 5) << 3)
           << 5) << 5 |
           ((ulonglong)(uint)param_3[0x22] & 0x1f |
           ((ulonglong)(uint)param_3[0x23] & 0x1f |
           ((ulonglong)(uint)param_3[0x24] & 7 |
           ((ulonglong)(uint)param_3[0x25] & 0x1f |
           ((ulonglong)(uint)param_3[0x26] & 0x1f | ((ulonglong)(uint)param_3[0x27] & 7) << 5) << 5)
           << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[0x18] & 0x1f) +
          ((ulonglong)
           (param_3[5] & 0x1fU |
           (param_3[6] & 7U |
           (param_3[7] & 0x1fU | (param_3[8] & 0x1fU | (param_3[9] & 7U) << 5) << 5) << 3) << 5) <<
           5 | ((ulonglong)(uint)param_3[0xe] & 0x1f |
               ((ulonglong)(uint)param_3[0xf] & 0x1f |
               ((ulonglong)(uint)param_3[0x10] & 7 |
               ((ulonglong)(uint)param_3[0x11] & 0x1f |
               ((ulonglong)(uint)param_3[0x12] & 0x1f | ((ulonglong)(uint)param_3[0x13] & 7) << 5)
               << 5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[4] & 0x1f) +
          (uVar6 | ((ulonglong)(uint)param_3[10] & 0xf |
                   ((ulonglong)(uint)param_3[0x14] & 0xf |
                   ((ulonglong)(uint)param_3[0x1e] & 0xf |
                   ((ulonglong)(uint)param_3[0x28] & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0xb) & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0x15) & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0x1f) & 0xf |
                   ((ulonglong)*(byte *)(param_3 + 0x29) & 0xf | uVar5 | uVar20) << 4) << 4) << 4)
                   << 0xc) << 4) << 4) << 4) << 10 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
           uVar12 | uVar13);
  uVar23 = *puVar1;
  if (uVar23 != 0) {
    uVar18 = 0;
    uVar17 = uVar23;
    do {
      uVar21 = uVar17 + uVar18 >> 1;
      uVar20 = *(ulonglong *)(*piVar3 + uVar21 * 0x158);
      uVar14 = uVar21;
      if (uVar20 <= uVar5) {
        if (uVar5 <= uVar20) break;
        uVar18 = uVar21 + 1;
        uVar21 = uVar18;
        uVar14 = uVar17;
      }
      uVar17 = uVar14;
    } while (uVar17 != uVar18);
    if (uVar21 != uVar23) {
      iVar22 = uVar21 * 0x158;
      puVar4 = (ulonglong *)(*piVar3 + iVar22);
      if (*puVar4 == uVar5) {
        if ((((*param_3 != (int)puVar4[1]) || (param_3[1] != *(int *)((int)puVar4 + 0xc))) ||
            (iVar15 = FUN_1007abb0(param_3 + 2,puVar4 + 2,0x28), iVar15 != 0)) ||
           (((iVar15 = FUN_1007abb0(param_3 + 0xc,puVar4 + 7,0x28), iVar15 != 0 ||
             (iVar15 = FUN_1007abb0(param_3 + 0x16,puVar4 + 0xc,0x28), iVar15 != 0)) ||
            (iVar15 = FUN_1007abb0(param_3 + 0x20,puVar4 + 0x11,0x28), iVar15 != 0)))) {
          uVar20 = puVar4[0x2a];
          FUN_10057cd0(*(undefined4 *)(iVar16 + 0x1cdc),(int)uVar20);
          FUN_1007a470((int)uVar20,0x148);
          *(ulonglong *)(*piVar3 + iVar22) = uVar5;
          FUN_1007ac00(*piVar3 + iVar22 + 8,param_3,0x148);
          iVar16 = FUN_1007a3d0(0x148);
          if (iVar16 != 0) {
            FUN_1007ac00(iVar16,param_3,0x148);
          }
          *(int *)(*piVar3 + iVar22 + 0x150) = iVar16;
        }
        goto LAB_10073d4c;
      }
    }
  }
  puVar2 = (uint *)(iVar16 + 0x1cd4);
  if (uVar23 == *puVar2) {
    uVar20 = (ulonglong)(*puVar2 << 1) * 0x158;
    uVar19 = (undefined4)uVar20;
    if (uVar20 >> 0x20 != 0) {
      uVar19 = 0xffffffff;
    }
    iVar16 = FUN_1007a4c0(uVar19);
    if (iVar16 != 0) {
      if (*puVar2 != 0) {
        uVar23 = 0;
        do {
          FUN_1007ac00(iVar16 + uVar23 * 0x158,*piVar3 + uVar23 * 0x158,0x158);
          uVar23 = uVar23 + 1;
        } while (uVar23 < *puVar2);
      }
      FUN_1007a4e0(*piVar3);
      *piVar3 = iVar16;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar23 = *puVar1; uVar21 < uVar23; uVar23 = uVar23 - 1) {
    iVar16 = *piVar3 + uVar23 * 0x158;
    FUN_1007ac00(iVar16,iVar16 + -0x158,0x158);
  }
  iVar22 = uVar21 * 0x158;
  *(ulonglong *)(*piVar3 + iVar22) = uVar5;
  FUN_1007ac00(*piVar3 + iVar22 + 8,param_3,0x148);
  iVar16 = FUN_1007a3d0(0x148);
  if (iVar16 != 0) {
    FUN_1007ac00(iVar16,param_3,0x148);
  }
  *(int *)(*piVar3 + iVar22 + 0x150) = iVar16;
  *puVar1 = *puVar1 + 1;
LAB_10073d4c:
  return *(undefined4 *)(*piVar3 + iVar22 + 0x150);
}

