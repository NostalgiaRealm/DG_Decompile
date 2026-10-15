/*
 * FUN_100e73d0 at 100e73d0
 * undefined FUN_100e73d0(void)
 * Address ranges: 100e73d0-100e7a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100e73d0(int *param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulonglong *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 extraout_x1;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  code *extraout_w11;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined4 local_98;
  uint *local_94;
  uint local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar25 = param_2[1];
  uVar23 = *param_2;
  uStack_68 = param_2[3];
  uVar18 = param_2[2];
  piVar3 = param_1 + 4;
  puVar1 = (uint *)(param_1 + 6);
  uVar12 = *puVar1;
  uStack_70._4_4_ = (int)(uVar18 >> 0x20);
  uVar19 = 0;
  uStack_78._4_4_ = (uint)(uVar25 >> 0x20);
  local_80._4_4_ = (uint)(uVar23 >> 0x20);
  uStack_78._0_4_ = (uint)uVar25;
  uVar20 = ((ulonglong)
            (local_80._4_4_ |
            ((uint)uStack_78 |
            (uStack_78._4_4_ | (uStack_70._4_4_ - 1U | ((int)uStack_68 + -1) * 0x10) << 3) << 3) <<
            3) & 0xffffff) << 8 | uVar23 & 0xffffffff;
  local_80 = uVar23;
  uStack_78 = uVar25;
  uStack_70 = uVar18;
  if (uVar12 == 0) {
LAB_100e74a4:
    puVar2 = (uint *)(param_1 + 5);
    uVar15 = *puVar2;
    if (uVar12 == uVar15) {
      iVar16 = uVar15 << 7;
      if ((uVar15 & 0x7fffffff) >> 0x19 != 0) {
        iVar16 = -1;
      }
      iVar16 = FUN_100fece0(iVar16);
      if (iVar16 != 0) {
        uVar12 = 0;
        if (*puVar2 != 0) {
          do {
            puVar5 = (undefined8 *)(*piVar3 + uVar12 * 0x40);
            puVar6 = (undefined8 *)(iVar16 + uVar12 * 0x40);
            uVar12 = uVar12 + 1;
            uVar24 = *puVar5;
            uVar22 = puVar5[3];
            uVar21 = puVar5[2];
            puVar6[1] = puVar5[1];
            *puVar6 = uVar24;
            puVar6[3] = uVar22;
            puVar6[2] = uVar21;
            uVar24 = puVar5[4];
            uVar22 = puVar5[7];
            uVar21 = puVar5[6];
            puVar6[5] = puVar5[5];
            puVar6[4] = uVar24;
            puVar6[7] = uVar22;
            puVar6[6] = uVar21;
          } while (uVar12 < *puVar2);
        }
        FUN_100fed00(*piVar3);
        *piVar3 = iVar16;
        *puVar2 = *puVar2 << 1;
      }
    }
    for (uVar12 = *puVar1; uVar19 < uVar12; uVar12 = uVar12 - 1) {
      puVar5 = (undefined8 *)(*piVar3 + uVar12 * 0x40);
      puVar5[1] = puVar5[-7];
      *puVar5 = puVar5[-8];
      puVar5[3] = puVar5[-5];
      puVar5[2] = puVar5[-6];
      puVar5[5] = puVar5[-3];
      puVar5[4] = puVar5[-4];
      puVar5[7] = puVar5[-1];
      puVar5[6] = puVar5[-2];
    }
    iVar16 = uVar19 * 0x40;
    *(ulonglong *)(*piVar3 + iVar16) = uVar20;
    uVar23 = *param_2;
    uVar18 = param_2[3];
    uVar20 = param_2[2];
    iVar11 = *piVar3 + iVar16;
    *(ulonglong *)(iVar11 + 0x10) = param_2[1];
    *(ulonglong *)(iVar11 + 8) = uVar23;
    *(ulonglong *)(iVar11 + 0x20) = uVar18;
    *(ulonglong *)(iVar11 + 0x18) = uVar20;
    uVar20 = param_2[4];
    *(ulonglong *)(iVar11 + 0x30) = param_2[5];
    *(ulonglong *)(iVar11 + 0x28) = uVar20;
    *(int *)(iVar11 + 0x38) = (int)param_2[6];
    iVar11 = FUN_100febf0(0x2d0);
    if (iVar11 != 0) {
      FUN_100ff690(iVar11,0,0x2d0);
      uVar12 = 0;
      do {
        uVar19 = uVar12 + 1;
        *(undefined4 *)(iVar11 + 0x1c + uVar12 * 0x24) = 0xffffffff;
        uVar12 = uVar19;
      } while (uVar19 < 0x14);
    }
    *(int *)(iVar16 + *piVar3 + 0x3c) = iVar11;
    *puVar1 = *puVar1 + 1;
  }
  else {
    uVar15 = 0;
    uVar17 = uVar12;
    do {
      uVar19 = uVar17 + uVar15 >> 1;
      uVar18 = *(ulonglong *)(*piVar3 + uVar19 * 0x40);
      uVar14 = uVar19;
      if (uVar18 <= uVar20) {
        if (uVar20 <= uVar18) break;
        uVar15 = uVar19 + 1;
        uVar19 = uVar15;
        uVar14 = uVar17;
      }
      uVar17 = uVar14;
    } while (uVar17 != uVar15);
    if ((uVar19 == uVar12) || (iVar16 = uVar19 * 0x40, *(ulonglong *)(*piVar3 + iVar16) != uVar20))
    goto LAB_100e74a4;
  }
  piVar3 = (int *)(*piVar3 + iVar16 + 0x3c);
  if (piVar3 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar16 = *piVar3;
  uVar19 = 0xffffffff;
  uVar12 = 0;
  do {
    if (*(int *)(iVar16 + 0x1c + uVar12 * 0x24) == -1) {
      if (uVar19 == 0xffffffff) {
        uVar19 = uVar12;
      }
    }
    else {
      piVar3 = (int *)(iVar16 + uVar12 * 0x24);
      if (((((int)param_2[2] == *piVar3) && (*(int *)((int)param_2 + 0x1c) == piVar3[1])) &&
          (*(int *)((int)param_2 + 0x24) == piVar3[3])) && ((int)param_2[6] == piVar3[5])) break;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 0x14);
  if (uVar12 == 0x14) {
    if (uVar19 == 0xffffffff) {
      uVar19 = 0;
      while (*(char *)(iVar16 + 0x20 + uVar19 * 0x24) != '\0') {
        uVar19 = uVar19 + 1;
        if (0x13 < uVar19) {
          return 0xffffffff;
        }
      }
    }
    piVar3 = param_1 + 7;
    piVar7 = (int *)(iVar16 + uVar19 * 0x24);
    *piVar7 = (int)param_2[2];
    puVar1 = (uint *)(piVar7 + 7);
    piVar7[1] = *(int *)((int)param_2 + 0x1c);
    piVar7[2] = (int)param_2[4];
    piVar7[3] = *(int *)((int)param_2 + 0x24);
    piVar7[4] = (int)param_2[5];
    uVar12 = *puVar1;
    piVar7[5] = (int)param_2[6];
    piVar7[6] = *(int *)((int)param_2 + 0x2c);
    if (uVar12 != 0xffffffff) {
      iVar11 = *piVar3;
      iVar16 = iVar11 + 0x1c;
      (*(code *)PTR_FUN_10134070)(iVar16);
      FUN_100df258(iVar11,uVar12,1);
      (*(code *)PTR_FUN_101340bc)(iVar16);
      FUN_100e8d18(param_1,puVar1);
    }
    uVar12 = FUN_100df3e0(*piVar3,1);
    *puVar1 = uVar12;
    if (uVar12 != 0xffffffff) {
      iVar16 = *piVar3;
      iVar11 = *(int *)(iVar16 + 4);
      iVar9 = *(int *)(iVar16 + 8);
      FUN_100dfee0(iVar16,&local_98,uVar12,0);
      uVar13 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(iVar11 + iVar9 * 0x18),extraout_x1,local_98);
      (*extraout_w11)(uVar13,param_2);
      puVar2 = (uint *)(param_1 + 2);
      uVar20 = (ulonglong)*puVar1;
      uVar19 = *puVar2;
      uVar15 = 0;
      if (uVar19 != 0) {
        uVar17 = 0;
        uVar14 = uVar19;
        do {
          uVar15 = uVar14 + uVar17 >> 1;
          uVar18 = *(ulonglong *)(param_1[1] + uVar15 * 0x10);
          uVar10 = uVar15;
          if (uVar18 <= uVar20) {
            if (uVar20 <= uVar18) break;
            uVar17 = uVar15 + 1;
            uVar15 = uVar17;
            uVar10 = uVar14;
          }
          uVar14 = uVar10;
        } while (uVar14 != uVar17);
        if ((uVar15 != uVar19) &&
           (puVar8 = (ulonglong *)(param_1[1] + uVar15 * 0x10), *puVar8 == uVar20)) {
          *(int **)((int)puVar8 + 0xc) = piVar7;
          goto LAB_100e7a10;
        }
      }
      puVar4 = (uint *)(param_1 + 3);
      uVar17 = *puVar4;
      if (uVar17 == uVar19) {
        local_90 = 0x10;
        if (uVar17 != 0) {
          local_90 = uVar17 << 1;
        }
        local_94 = puVar2;
        iVar16 = FUN_100fece0(local_90 << 4);
        if (iVar16 != 0) {
          uVar19 = 0;
          if (*local_94 != 0) {
            do {
              puVar5 = (undefined8 *)(param_1[1] + uVar19 * 0x10);
              puVar6 = (undefined8 *)(iVar16 + uVar19 * 0x10);
              uVar19 = uVar19 + 1;
              uVar21 = *puVar5;
              puVar6[1] = puVar5[1];
              *puVar6 = uVar21;
            } while (uVar19 < (uint)param_1[2]);
          }
          FUN_100fed00(*param_1);
          *param_1 = iVar16;
          param_1[1] = iVar16;
          *puVar4 = local_90;
        }
      }
      param_1 = param_1 + 1;
      uVar19 = *puVar2;
      if (*puVar4 != uVar19) {
        for (; uVar15 < uVar19; uVar19 = uVar19 - 1) {
          puVar5 = (undefined8 *)(*param_1 + uVar19 * 0x10);
          puVar5[1] = puVar5[-1];
          *puVar5 = puVar5[-2];
        }
        *puVar2 = *puVar2 + 1;
        *(uint *)(*param_1 + uVar15 * 0x10 + 8) = *puVar1;
        *(int **)(*param_1 + uVar15 * 0x10 + 0xc) = piVar7;
        *(ulonglong *)(*param_1 + uVar15 * 0x10) = uVar20;
      }
    }
  }
  else {
    piVar7 = (int *)(iVar16 + uVar12 * 0x24);
    uVar12 = piVar7[7];
  }
LAB_100e7a10:
  *(undefined1 *)(piVar7 + 8) = 1;
  return uVar12;
}

