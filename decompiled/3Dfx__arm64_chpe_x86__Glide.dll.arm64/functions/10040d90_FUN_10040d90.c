/*
 * FUN_10040d90 at 10040d90
 * undefined FUN_10040d90(void)
 * Address ranges: 10040d90-100415ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040d90(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint *local_a0;
  int local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  piVar6 = (int *)(param_1 + 0x3018);
  uStack_88 = 0x10000000100;
  local_90 = 0x10000000100;
  uVar20 = 0;
  iVar16 = *(int *)(*piVar6 + 0x3188);
  piVar1 = (int *)(iVar16 + 0x360);
  puVar2 = (uint *)(iVar16 + 0x368);
  uVar14 = *puVar2;
  local_9c = param_2;
  local_98 = param_3;
  if (uVar14 == 0) {
LAB_10040e44:
    puVar3 = (uint *)(iVar16 + 0x364);
    uVar15 = *puVar3;
    if (uVar14 == uVar15) {
      iVar16 = uVar15 << 6;
      if ((uVar15 & 0x7fffffff) >> 0x1a != 0) {
        iVar16 = -1;
      }
      iVar16 = FUN_1007a4c0(iVar16);
      if (iVar16 != 0) {
        uVar14 = 0;
        if (*puVar3 != 0) {
          do {
            puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x20);
            puVar8 = (undefined8 *)(iVar16 + uVar14 * 0x20);
            uVar14 = uVar14 + 1;
            uVar23 = *puVar7;
            uVar22 = puVar7[3];
            uVar21 = puVar7[2];
            puVar8[1] = puVar7[1];
            *puVar8 = uVar23;
            puVar8[3] = uVar22;
            puVar8[2] = uVar21;
          } while (uVar14 < *puVar3);
        }
        FUN_1007a4e0(*piVar1);
        *piVar1 = iVar16;
        *puVar3 = *puVar3 << 1;
      }
    }
    for (uVar14 = *puVar2; uVar20 < uVar14; uVar14 = uVar14 - 1) {
      puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x20);
      puVar7[1] = puVar7[-3];
      *puVar7 = puVar7[-4];
      puVar7[3] = puVar7[-1];
      puVar7[2] = puVar7[-2];
    }
    FUN_10041a98(piVar1,uVar20,0x10000000100,&local_90);
    *puVar2 = *puVar2 + 1;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar14;
    do {
      uVar20 = uVar13 + uVar15 >> 1;
      uVar18 = *(ulonglong *)(*piVar1 + uVar20 * 0x20);
      uVar11 = uVar20;
      if (uVar18 < 0x10000000101) {
        if (0x100000000ff < uVar18) break;
        uVar15 = uVar20 + 1;
        uVar20 = uVar15;
        uVar11 = uVar13;
      }
      uVar13 = uVar11;
    } while (uVar13 != uVar15);
    if ((uVar20 == uVar14) || (*(longlong *)(*piVar1 + uVar20 * 0x20) != 0x10000000100))
    goto LAB_10040e44;
  }
  puVar2 = *(uint **)(*piVar1 + uVar20 * 0x20 + 0x18);
  if (puVar2 == (uint *)0x0) {
    return;
  }
  uVar20 = 0;
  iVar16 = *(int *)(*piVar6 + 0x3188);
  piVar1 = (int *)(iVar16 + 0x374);
  puVar3 = (uint *)(iVar16 + 0x37c);
  uVar14 = *puVar3;
  if (uVar14 == 0) {
LAB_10040fb0:
    puVar4 = (uint *)(iVar16 + 0x378);
    uVar15 = *puVar4;
    local_a0 = puVar2;
    if (uVar14 == uVar15) {
      iVar16 = uVar15 << 5;
      if ((uVar15 & 0x7fffffff) >> 0x1b != 0) {
        iVar16 = -1;
      }
      iVar16 = FUN_1007a4c0(iVar16);
      if (iVar16 != 0) {
        uVar14 = 0;
        if (*puVar4 != 0) {
          do {
            puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x10);
            puVar8 = (undefined8 *)(iVar16 + uVar14 * 0x10);
            uVar14 = uVar14 + 1;
            uVar21 = *puVar7;
            puVar8[1] = puVar7[1];
            *puVar8 = uVar21;
          } while (uVar14 < *puVar4);
        }
        FUN_1007a4e0(*piVar1);
        *piVar1 = iVar16;
        *puVar4 = *puVar4 << 1;
      }
    }
    for (uVar14 = *puVar3; uVar20 < uVar14; uVar14 = uVar14 - 1) {
      puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x10);
      puVar7[1] = puVar7[-1];
      *puVar7 = puVar7[-2];
    }
    FUN_100419d0(piVar1,uVar20,puVar2,&local_a0);
    *puVar3 = *puVar3 + 1;
  }
  else {
    uVar15 = 0;
    uVar13 = uVar14;
    do {
      uVar20 = uVar13 + uVar15 >> 1;
      uVar18 = *(ulonglong *)(*piVar1 + uVar20 * 0x10);
      uVar11 = uVar20;
      if (uVar18 <= (ulonglong)(longlong)(int)puVar2) {
        if ((ulonglong)(longlong)(int)puVar2 <= uVar18) break;
        uVar15 = uVar20 + 1;
        uVar20 = uVar15;
        uVar11 = uVar13;
      }
      uVar13 = uVar11;
    } while (uVar13 != uVar15);
    if ((uVar20 == uVar14) || (*(longlong *)(*piVar1 + uVar20 * 0x10) != (longlong)(int)puVar2))
    goto LAB_10040fb0;
  }
  puVar2 = *(uint **)(*piVar1 + uVar20 * 0x10 + 0xc);
  local_a0 = puVar2;
  if (*(uint **)(param_1 + 0x3094) != puVar2) {
    FUN_10067c78(*(undefined4 *)(*piVar6 + 0x3180),*(undefined4 *)(*piVar6 + 0x3184),
                 *(int *)(param_1 + 0xc) + 0x10,1,&local_a0);
    *(uint **)(param_1 + 0x3094) = puVar2;
  }
  iVar16 = *(int *)(param_1 + 8);
  uVar20 = 0;
  uVar14 = 2;
  if (*(int *)(iVar16 + 0x40) != 1) {
    uVar14 = 0;
  }
  local_80 = *(uint *)(&DAT_10096b90 + (uVar14 | *(int *)(iVar16 + 0x3c) == 1) * 4);
  uStack_78 = 3;
  uStack_7c = uStack_78;
  if (*(int *)(iVar16 + 0x34) == 0) {
    uStack_7c = 1;
  }
  local_50 = 0x7f7fffff;
  uStack_74 = 3;
  uStack_70 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  if (*(int *)(iVar16 + 0x38) == 0) {
    uStack_78 = 1;
  }
  uStack_54 = 0;
  local_6c = 1;
  uStack_68 = 8;
  iVar16 = *(int *)(*piVar6 + 0x3188);
  piVar1 = (int *)(iVar16 + 0x388);
  puVar2 = (uint *)(iVar16 + 0x390);
  uVar14 = *puVar2;
  uVar18 = ((ulonglong)(uStack_7c | (uStack_78 | 0x1c18) << 3) << 8 | (ulonglong)local_80) +
           0x3f3ffffe8000000;
  if (uVar14 != 0) {
    uVar15 = 0;
    uVar13 = uVar14;
    do {
      uVar20 = uVar13 + uVar15 >> 1;
      uVar19 = *(ulonglong *)(*piVar1 + uVar20 * 0x40);
      uVar11 = uVar20;
      if (uVar19 <= uVar18) {
        if (uVar18 <= uVar19) break;
        uVar15 = uVar20 + 1;
        uVar20 = uVar15;
        uVar11 = uVar13;
      }
      uVar13 = uVar11;
    } while (uVar13 != uVar15);
    if (uVar20 != uVar14) {
      iVar17 = uVar20 * 0x40;
      puVar9 = (ulonglong *)(*piVar1 + iVar17);
      if (*puVar9 == uVar18) {
        if (((((local_80 != (uint)puVar9[1]) || (uStack_7c != *(uint *)((int)puVar9 + 0xc))) ||
             (uStack_78 != (uint)puVar9[2])) ||
            (((*(int *)((int)puVar9 + 0x14) != 3 || (*(int *)((int)puVar9 + 0x1c) != 1)) ||
             (((int)puVar9[4] != 8 || (((int)puVar9[3] != 0 || (*(int *)((int)puVar9 + 0x24) != 0)))
              ))))) ||
           (((int)puVar9[5] != 0 ||
            ((((*(int *)((int)puVar9 + 0x2c) != 0 || ((int)puVar9[6] != 0)) ||
              ((int)puVar9[7] != 0x7f7fffff)) || (*(int *)((int)puVar9 + 0x34) != 0)))))) {
          FUN_10066d50(*(undefined4 *)(iVar16 + 0x394),*(undefined4 *)(iVar16 + 0x398),
                       *(undefined4 *)((int)puVar9 + 0x3c));
          *(ulonglong *)(*piVar1 + iVar17) = uVar18;
          iVar10 = *piVar1 + iVar17;
          *(ulonglong *)(iVar10 + 0x10) = CONCAT44(uStack_74,uStack_78);
          *(ulonglong *)(iVar10 + 8) = CONCAT44(uStack_7c,local_80);
          *(ulonglong *)(iVar10 + 0x20) = CONCAT44(local_64,uStack_68);
          *(ulonglong *)(iVar10 + 0x18) = CONCAT44(local_6c,uStack_70);
          *(ulonglong *)(iVar10 + 0x30) = CONCAT44(uStack_54,uStack_58);
          *(ulonglong *)(iVar10 + 0x28) = CONCAT44(uStack_5c,uStack_60);
          *(undefined4 *)(iVar10 + 0x38) = local_50;
          uVar12 = FUN_100670e0(*(undefined4 *)(iVar16 + 0x394),*(undefined4 *)(iVar16 + 0x398),
                                &local_80);
          *(undefined4 *)(*piVar1 + iVar17 + 0x3c) = uVar12;
        }
        goto LAB_10041478;
      }
    }
  }
  local_a0 = (uint *)(iVar16 + 0x38c);
  uVar15 = *local_a0;
  if (uVar14 == uVar15) {
    iVar17 = uVar15 << 7;
    if ((uVar15 & 0x7fffffff) >> 0x19 != 0) {
      iVar17 = -1;
    }
    iVar17 = FUN_1007a4c0(iVar17);
    if (iVar17 != 0) {
      uVar14 = 0;
      if (*local_a0 != 0) {
        do {
          puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x40);
          puVar8 = (undefined8 *)(iVar17 + uVar14 * 0x40);
          uVar14 = uVar14 + 1;
          uVar23 = *puVar7;
          uVar22 = puVar7[3];
          uVar21 = puVar7[2];
          puVar8[1] = puVar7[1];
          *puVar8 = uVar23;
          puVar8[3] = uVar22;
          puVar8[2] = uVar21;
          uVar23 = puVar7[4];
          uVar22 = puVar7[7];
          uVar21 = puVar7[6];
          puVar8[5] = puVar7[5];
          puVar8[4] = uVar23;
          puVar8[7] = uVar22;
          puVar8[6] = uVar21;
        } while (uVar14 < *local_a0);
      }
      FUN_1007a4e0(*piVar1);
      *piVar1 = iVar17;
      *local_a0 = *local_a0 << 1;
    }
  }
  for (uVar14 = *puVar2; uVar20 < uVar14; uVar14 = uVar14 - 1) {
    puVar7 = (undefined8 *)(*piVar1 + uVar14 * 0x40);
    puVar7[1] = puVar7[-7];
    *puVar7 = puVar7[-8];
    puVar7[3] = puVar7[-5];
    puVar7[2] = puVar7[-6];
    puVar7[5] = puVar7[-3];
    puVar7[4] = puVar7[-4];
    puVar7[7] = puVar7[-1];
    puVar7[6] = puVar7[-2];
  }
  iVar17 = uVar20 * 0x40;
  *(ulonglong *)(*piVar1 + iVar17) = uVar18;
  iVar10 = *piVar1 + iVar17;
  *(ulonglong *)(iVar10 + 0x10) = CONCAT44(uStack_74,uStack_78);
  *(ulonglong *)(iVar10 + 8) = CONCAT44(uStack_7c,local_80);
  *(ulonglong *)(iVar10 + 0x20) = CONCAT44(local_64,uStack_68);
  *(ulonglong *)(iVar10 + 0x18) = CONCAT44(local_6c,uStack_70);
  *(ulonglong *)(iVar10 + 0x30) = CONCAT44(uStack_54,uStack_58);
  *(ulonglong *)(iVar10 + 0x28) = CONCAT44(uStack_5c,uStack_60);
  *(undefined4 *)(iVar10 + 0x38) = local_50;
  uVar12 = FUN_100670e0(*(undefined4 *)(iVar16 + 0x394),*(undefined4 *)(iVar16 + 0x398),&local_80);
  *(undefined4 *)(*piVar1 + iVar17 + 0x3c) = uVar12;
  *puVar2 = *puVar2 + 1;
LAB_10041478:
  piVar5 = (int *)(param_1 + 0xc);
  puVar2 = *(uint **)(*piVar1 + iVar17 + 0x3c);
  local_a0 = puVar2;
  if (*(uint **)(param_1 + 0x3098) != puVar2) {
    FUN_10067bf0(*(undefined4 *)(*piVar6 + 0x3180),*(undefined4 *)(*piVar6 + 0x3184),*piVar5);
    *(uint **)(param_1 + 0x3098) = puVar2;
  }
  piVar1 = (int *)(param_1 + 0x309c);
  iVar16 = *(int *)(param_1 + local_9c * 4 + 0x3058);
  if (*piVar1 != iVar16) {
    *piVar1 = iVar16;
    FUN_10067c78(*(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3180),
                 *(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3184),*piVar5 + 0x14,1,piVar1);
  }
  piVar1 = (int *)(param_1 + 0x30a0);
  iVar16 = *(int *)(param_1 + local_98 * 4 + 0x3058);
  if (*piVar1 != iVar16) {
    *piVar1 = iVar16;
    FUN_10067c78(*(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3180),
                 *(undefined4 *)(*(int *)(param_1 + 0x3018) + 0x3184),*piVar5 + 0x18,1,piVar1);
  }
  return;
}

