/*
 * FUN_100779e0 at 100779e0
 * undefined FUN_100779e0(void)
 * Address ranges: 100779e0-1007805f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100779e0(int param_1,int param_2,ulonglong *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 extraout_x1;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  code *extraout_w11;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  int *piVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined4 local_98;
  uint *local_94;
  uint local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uVar27 = param_3[1];
  uVar25 = *param_3;
  uStack_68 = param_3[3];
  uVar19 = param_3[2];
  uVar20 = 0;
  iVar10 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
  piVar4 = (int *)(iVar10 + 0x1d34);
  uStack_70._4_4_ = (int)(uVar19 >> 0x20);
  piVar22 = (int *)(iVar10 + 0x1d44);
  puVar1 = (uint *)(iVar10 + 0x1d4c);
  uVar13 = *puVar1;
  uStack_78._4_4_ = (uint)(uVar27 >> 0x20);
  local_80._4_4_ = (uint)(uVar25 >> 0x20);
  uStack_78._0_4_ = (uint)uVar27;
  uVar21 = ((ulonglong)
            (local_80._4_4_ |
            ((uint)uStack_78 |
            (uStack_78._4_4_ | (uStack_70._4_4_ - 1U | ((int)uStack_68 + -1) * 0x10) << 3) << 3) <<
            3) & 0xffffff) << 8 | uVar25 & 0xffffffff;
  local_80 = uVar25;
  uStack_78 = uVar27;
  uStack_70 = uVar19;
  if (uVar13 == 0) {
LAB_10077ac8:
    puVar2 = (uint *)(iVar10 + 0x1d48);
    uVar16 = *puVar2;
    if (uVar13 == uVar16) {
      iVar17 = uVar16 << 7;
      if ((uVar16 & 0x7fffffff) >> 0x19 != 0) {
        iVar17 = -1;
      }
      iVar17 = FUN_1007dd60(iVar17);
      if (iVar17 != 0) {
        uVar13 = 0;
        if (*puVar2 != 0) {
          do {
            puVar5 = (undefined8 *)(*piVar22 + uVar13 * 0x40);
            puVar6 = (undefined8 *)(iVar17 + uVar13 * 0x40);
            uVar13 = uVar13 + 1;
            uVar26 = *puVar5;
            uVar24 = puVar5[3];
            uVar23 = puVar5[2];
            puVar6[1] = puVar5[1];
            *puVar6 = uVar26;
            puVar6[3] = uVar24;
            puVar6[2] = uVar23;
            uVar26 = puVar5[4];
            uVar24 = puVar5[7];
            uVar23 = puVar5[6];
            puVar6[5] = puVar5[5];
            puVar6[4] = uVar26;
            puVar6[7] = uVar24;
            puVar6[6] = uVar23;
          } while (uVar13 < *puVar2);
        }
        FUN_1007dd80(*piVar22);
        *piVar22 = iVar17;
        *puVar2 = *puVar2 << 1;
      }
    }
    for (uVar13 = *puVar1; uVar20 < uVar13; uVar13 = uVar13 - 1) {
      puVar5 = (undefined8 *)(*piVar22 + uVar13 * 0x40);
      puVar5[1] = puVar5[-7];
      *puVar5 = puVar5[-8];
      puVar5[3] = puVar5[-5];
      puVar5[2] = puVar5[-6];
      puVar5[5] = puVar5[-3];
      puVar5[4] = puVar5[-4];
      puVar5[7] = puVar5[-1];
      puVar5[6] = puVar5[-2];
    }
    iVar17 = uVar20 * 0x40;
    *(ulonglong *)(*piVar22 + iVar17) = uVar21;
    uVar25 = *param_3;
    uVar19 = param_3[3];
    uVar21 = param_3[2];
    iVar12 = *piVar22 + iVar17;
    *(ulonglong *)(iVar12 + 0x10) = param_3[1];
    *(ulonglong *)(iVar12 + 8) = uVar25;
    *(ulonglong *)(iVar12 + 0x20) = uVar19;
    *(ulonglong *)(iVar12 + 0x18) = uVar21;
    uVar21 = param_3[4];
    *(ulonglong *)(iVar12 + 0x30) = param_3[5];
    *(ulonglong *)(iVar12 + 0x28) = uVar21;
    *(int *)(iVar12 + 0x38) = (int)param_3[6];
    iVar12 = FUN_1007dc70(0x2d0);
    if (iVar12 != 0) {
      FUN_1007e4d0(iVar12,0,0x2d0);
      uVar13 = 0;
      do {
        uVar20 = uVar13 + 1;
        *(undefined4 *)(iVar12 + 0x1c + uVar13 * 0x24) = 0xffffffff;
        uVar13 = uVar20;
      } while (uVar20 < 0x14);
    }
    *(int *)(iVar17 + *piVar22 + 0x3c) = iVar12;
    *puVar1 = *puVar1 + 1;
  }
  else {
    uVar16 = 0;
    uVar18 = uVar13;
    do {
      uVar20 = uVar18 + uVar16 >> 1;
      uVar19 = *(ulonglong *)(*piVar22 + uVar20 * 0x40);
      uVar15 = uVar20;
      if (uVar19 <= uVar21) {
        if (uVar21 <= uVar19) break;
        uVar16 = uVar20 + 1;
        uVar20 = uVar16;
        uVar15 = uVar18;
      }
      uVar18 = uVar15;
    } while (uVar18 != uVar16);
    if ((uVar20 == uVar13) || (iVar17 = uVar20 * 0x40, *(ulonglong *)(*piVar22 + iVar17) != uVar21))
    goto LAB_10077ac8;
  }
  piVar22 = (int *)(iVar17 + *piVar22 + 0x3c);
  if (piVar22 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar17 = *piVar22;
  uVar20 = 0xffffffff;
  uVar13 = 0;
  do {
    if (*(int *)(iVar17 + 0x1c + uVar13 * 0x24) == -1) {
      if (uVar20 == 0xffffffff) {
        uVar20 = uVar13;
      }
    }
    else {
      piVar22 = (int *)(iVar17 + uVar13 * 0x24);
      if (((((int)param_3[2] == *piVar22) && (*(int *)((int)param_3 + 0x1c) == piVar22[1])) &&
          (*(int *)((int)param_3 + 0x24) == piVar22[3])) && ((int)param_3[6] == piVar22[5])) break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x14);
  if (uVar13 == 0x14) {
    if (uVar20 == 0xffffffff) {
      uVar20 = 0;
      while (*(char *)(iVar17 + 0x20 + uVar20 * 0x24) != '\0') {
        uVar20 = uVar20 + 1;
        if (0x13 < uVar20) {
          return 0xffffffff;
        }
      }
    }
    piVar7 = (int *)(iVar17 + uVar20 * 0x24);
    piVar22 = (int *)(iVar10 + 0x1d50);
    *piVar7 = (int)param_3[2];
    puVar1 = (uint *)(piVar7 + 7);
    piVar7[1] = *(int *)((int)param_3 + 0x1c);
    piVar7[2] = (int)param_3[4];
    piVar7[3] = *(int *)((int)param_3 + 0x24);
    piVar7[4] = (int)param_3[5];
    uVar13 = *puVar1;
    piVar7[5] = (int)param_3[6];
    piVar7[6] = *(int *)((int)param_3 + 0x2c);
    if (uVar13 != 0xffffffff) {
      iVar12 = *piVar22;
      iVar17 = iVar12 + 0x1c;
      (*(code *)PTR_FUN_100a003c)(iVar17);
      FUN_10061f28(iVar12,uVar13,1);
      (*(code *)PTR_FUN_100a0090)(iVar17);
      FUN_1005bb28(piVar4,puVar1);
    }
    uVar13 = FUN_100620b0(*piVar22,1);
    *puVar1 = uVar13;
    if (uVar13 != 0xffffffff) {
      iVar17 = *piVar22;
      iVar12 = *(int *)(iVar17 + 4);
      iVar9 = *(int *)(iVar17 + 8);
      FUN_10062b90(iVar17,&local_98,uVar13,0);
      uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(iVar12 + iVar9 * 0x18),extraout_x1,local_98);
      (*extraout_w11)(uVar14,param_3);
      puVar2 = (uint *)(iVar10 + 0x1d3c);
      uVar21 = (ulonglong)*puVar1;
      uVar20 = *puVar2;
      uVar16 = 0;
      if (uVar20 != 0) {
        uVar18 = 0;
        uVar15 = uVar20;
        do {
          uVar16 = uVar15 + uVar18 >> 1;
          uVar19 = *(ulonglong *)(*(int *)(iVar10 + 0x1d38) + uVar16 * 0x10);
          uVar11 = uVar16;
          if (uVar19 <= uVar21) {
            if (uVar21 <= uVar19) break;
            uVar18 = uVar16 + 1;
            uVar16 = uVar18;
            uVar11 = uVar15;
          }
          uVar15 = uVar11;
        } while (uVar15 != uVar18);
        if ((uVar16 != uVar20) &&
           (puVar8 = (ulonglong *)(*(int *)(iVar10 + 0x1d38) + uVar16 * 0x10), *puVar8 == uVar21)) {
          *(int **)((int)puVar8 + 0xc) = piVar7;
          goto LAB_10078038;
        }
      }
      puVar3 = (uint *)(iVar10 + 0x1d40);
      uVar18 = *puVar3;
      if (uVar18 == uVar20) {
        local_90 = 0x10;
        if (uVar18 != 0) {
          local_90 = uVar18 << 1;
        }
        local_94 = puVar2;
        iVar17 = FUN_1007dd60(local_90 << 4);
        if (iVar17 != 0) {
          uVar20 = 0;
          if (*local_94 != 0) {
            do {
              puVar5 = (undefined8 *)(*(int *)(iVar10 + 0x1d38) + uVar20 * 0x10);
              puVar6 = (undefined8 *)(iVar17 + uVar20 * 0x10);
              uVar20 = uVar20 + 1;
              uVar23 = *puVar5;
              puVar6[1] = puVar5[1];
              *puVar6 = uVar23;
            } while (uVar20 < *(uint *)(iVar10 + 0x1d3c));
          }
          FUN_1007dd80(*piVar4);
          *piVar4 = iVar17;
          *(int *)(iVar10 + 0x1d38) = iVar17;
          *puVar3 = local_90;
        }
      }
      piVar22 = (int *)(iVar10 + 0x1d38);
      uVar20 = *puVar2;
      if (*puVar3 != uVar20) {
        for (; uVar16 < uVar20; uVar20 = uVar20 - 1) {
          puVar5 = (undefined8 *)(*piVar22 + uVar20 * 0x10);
          puVar5[1] = puVar5[-1];
          *puVar5 = puVar5[-2];
        }
        *puVar2 = *puVar2 + 1;
        *(uint *)(*piVar22 + uVar16 * 0x10 + 8) = *puVar1;
        *(int **)(*piVar22 + uVar16 * 0x10 + 0xc) = piVar7;
        *(ulonglong *)(*piVar22 + uVar16 * 0x10) = uVar21;
      }
    }
  }
  else {
    piVar7 = (int *)(iVar17 + uVar13 * 0x24);
    uVar13 = piVar7[7];
  }
LAB_10078038:
  *(undefined1 *)(piVar7 + 8) = 1;
  return uVar13;
}

