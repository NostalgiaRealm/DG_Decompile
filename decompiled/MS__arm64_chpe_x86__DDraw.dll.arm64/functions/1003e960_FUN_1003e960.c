/*
 * FUN_1003e960 at 1003e960
 * undefined FUN_1003e960(void)
 * Address ranges: 1003e960-1003ee8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003e960(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int extraout_w11;
  ulonglong extraout_x11;
  int extraout_w12;
  uint extraout_w13;
  int extraout_w15;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  
  piVar1 = (int *)(param_2 + 4);
  iVar12 = *piVar1;
  puVar2 = (uint *)(iVar12 + 4);
  uVar5 = *puVar2;
  uVar6 = *(uint *)(iVar12 + 0x68);
  uVar4 = uVar6 & 0x400008;
  if ((uVar5 & 0x20006) == 0x20000) {
    if ((uVar6 >> 3 & 1) == 0) {
      return 0x88760064;
    }
    if ((*(uint *)(iVar12 + 0x6c) >> 9 & 1) != 0) {
      return 0x88760064;
    }
    iVar11 = 1 << (ulonglong)(*(int *)(iVar12 + 0x18) - 1U & 0x1f);
    *(int *)(iVar12 + 0xc) = iVar11;
    *(int *)(iVar12 + 8) = iVar11;
    *puVar2 = uVar5 | 6;
    uVar5 = uVar6 & 0x2001;
joined_r0x1003eb38:
    if (uVar5 != 0) {
      return 0x88760064;
    }
  }
  else {
    if ((uVar5 & 6) != 6) {
      return 0x80070057;
    }
    uVar8 = *(uint *)(iVar12 + 0x6c);
    if ((uVar8 >> 9 & 1) == 0) {
      uVar8 = *(uint *)(iVar12 + 0xc);
      if (uVar8 == 0) {
        return 0x80070057;
      }
      uVar13 = *(uint *)(iVar12 + 8);
      if ((0x4000 < uVar8 || uVar13 == 0) || 0x4000 < uVar13) {
        return 0x80070057;
      }
      if (uVar4 != 0x400008) {
        if ((uVar6 & 8) != 0) {
          return 0x80070057;
        }
        uVar5 = uVar5 >> 0x11 & 1;
        goto joined_r0x1003eb38;
      }
      if ((uVar5 >> 0x11 & 1) == 0) {
        *puVar2 = uVar5 | 0x20000;
        if (uVar13 <= uVar8) {
          uVar13 = uVar8;
        }
        *(int *)(iVar12 + 0x18) = 0;
        iVar11 = 0;
        do {
          iVar11 = iVar11 + 1;
          uVar13 = uVar13 >> 1;
        } while (uVar13 != 0);
        *(int *)(iVar12 + 0x18) = iVar11;
      }
    }
    else {
      if ((uVar8 & 0xfc00) == 0) {
        return 0x88760064;
      }
      if ((uVar6 >> 3 & 1) == 0) {
        return 0x88760064;
      }
      uVar13 = *(uint *)(iVar12 + 0xc);
      if ((uVar13 != 1) && ((uVar13 - 1 & uVar13) != 0)) {
        return 0x80070057;
      }
      uVar7 = *(uint *)(iVar12 + 8);
      if ((uVar7 != 1) && ((uVar7 - 1 & uVar7) != 0)) {
        return 0x80070057;
      }
      if (0x4000 < uVar13 || 0x4000 < uVar7) {
        return 0x80070057;
      }
      if ((uVar5 >> 0x11 & 1) == 0) {
        *(undefined4 *)(iVar12 + 0x18) = 1;
      }
      *(uint *)(iVar12 + 0x6c) = *(uint *)(param_2 + 0x14) & 0x400 | uVar8 & 0xfffe03ff;
    }
  }
  if ((((*(int *)(param_2 + 0x10) != 0 && uVar4 == 0x400008) && ((*puVar2 >> 0x11 & 1) != 0)) &&
      (*(int *)(iVar12 + 0x18) != 1)) &&
     ((*(int *)(iVar12 + 0x10) != 0 && (*(int *)(param_2 + 0xc) != 0)))) {
    *(int *)(iVar12 + 0x10) = 0;
  }
  uVar8 = *(uint *)(iVar12 + 0x18);
  uVar5 = uVar8;
  if (uVar8 == 0) {
    uVar5 = 1;
  }
  uVar5 = (1 << (ulonglong)(uVar5 - 1 & 0x1f)) - 1;
  if (((*(uint *)(iVar12 + 0xc) & (uVar5 ^ 0xffffffff)) == 0) &&
     ((*(uint *)(iVar12 + 8) & (uVar5 ^ 0xffffffff)) == 0)) {
    return 0x80070057;
  }
  if (0x10 < uVar8) {
    return 0x80070057;
  }
  uVar14 = 0x88760091;
  if ((*puVar2 >> 0xc & 1) == 0) {
    uVar10 = *(undefined4 *)(&DAT_100bbcb4 + *(int *)(param_1 + 0x11c) * 0xa4);
    *puVar2 = *puVar2 | 0x1000;
    uVar10 = FUN_1004cdf8(param_1,uVar10,iVar12);
    *(undefined4 *)(param_2 + 0x1c) = uVar10;
  }
  else if (((uVar6 & 0x2001) == 0) || ((*(uint *)(iVar12 + 0x4c) >> 2 & 1) == 0)) {
    *(undefined4 *)(iVar12 + 0x48) = 0x20;
    auVar15 = FUN_1004cef0(param_1,iVar12);
    piVar3 = (int *)(param_2 + 0x1c);
    *piVar3 = auVar15._0_4_;
    if (auVar15._0_4_ == -1) {
      iVar12 = *piVar1;
      iVar11 = FUN_1004d0c8(auVar15._0_8_,auVar15._8_8_,iVar12);
      if (iVar11 == -1) goto LAB_1003ed70;
      puVar2 = (uint *)(iVar12 + 0x68);
      if (*(int *)(param_2 + 8) == 0) {
        *puVar2 = *puVar2 & 0xcfffbfff | 0x800;
        *(undefined4 *)(param_2 + 0xc) = 0;
      }
      if (*(int *)(param_2 + 0xc) != 0) goto LAB_1003ed70;
      uVar5 = *puVar2;
      *piVar3 = iVar11;
      *puVar2 = uVar5 | 0x800;
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
    if ((*(uint *)(*piVar1 + 0x4c) >> 2 & 1) != 0) {
      uVar14 = 0x80070057;
      iVar12 = FUN_1004c3a8(*piVar1);
      if ((((iVar12 - 1U & extraout_w13) != 0) ||
          (iVar12 = FUN_1004c408(extraout_x11 & 0xffffffff),
          (iVar12 - 1U & *(uint *)(extraout_w11 + 8)) != 0)) ||
         ((uVar4 != 0 &&
          (((uVar4 != 0x400008 || ((*(uint *)(extraout_w11 + 4) >> 0x11 & 1) == 0)) ||
           (extraout_w12 == 0)))))) {
        *piVar3 = -1;
      }
    }
  }
LAB_1003ed70:
  if (*(int *)(param_2 + 0x1c) == -1) {
    return uVar14;
  }
  iVar12 = FUN_1004d460(*(undefined4 *)(param_2 + 4));
  if ((((*(uint *)(extraout_w15 + 0x4c) >> 2 & 1) == 0) ||
      (uVar4 = *(int *)(extraout_w15 + 0x50) + 0xceaba7bc, 0x4000000 < uVar4)) ||
     ((uVar4 & 0xffffff) != 0)) {
    uVar4 = *(uint *)(param_2 + 0x10) & 0xfff7ffff;
    *(uint *)(param_2 + 0x10) = uVar4;
    *(uint *)(extraout_w15 + 4) = *(uint *)(extraout_w15 + 4) & 0xfff7ffff;
    if (uVar4 == 0) {
      return 0;
    }
    if ((uVar4 - 8 & 0xfffff7ff) != 0) {
      return 0x80070057;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      return 0;
    }
    bVar9 = uVar4 == 8;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x10) & 0xfffffff7;
    *(uint *)(param_2 + 0x10) = uVar4;
    *(uint *)(extraout_w15 + 4) = *(uint *)(extraout_w15 + 4) & 0xfffffff7;
    if (uVar4 == 0) {
      return 0;
    }
    if ((uVar4 - 0x80000 & 0xfffff7ff) != 0) {
      return 0x80070057;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      return 0;
    }
    bVar9 = uVar4 == 0x80000;
  }
  if (!bVar9) {
    return 0x80070057;
  }
  if (iVar12 == *(int *)(extraout_w15 + 0x10) || *(int *)(extraout_w15 + 0x10) == 0) {
    return 0;
  }
  return 0x80070057;
}

