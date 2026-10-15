/*
 * FUN_1801667b0 at 1801667b0
 * undefined FUN_1801667b0(void)
 * Address ranges: 1801667b0-1801673a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801667b0(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int *piVar8;
  undefined *puVar9;
  char cVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  int iVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  ulonglong uVar20;
  code *extraout_x11_02;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  char in_stack_00000008;
  uint local_50;
  undefined4 uStack_4c;
  int *apiStack_48 [3];
  
  uVar15 = (ulonglong)param_2;
  uVar24 = *(uint *)(param_1 + 0x6948) &
           ((*(uint *)(&DAT_18022bcf0 + uVar15 * 4) | *(uint *)(&DAT_18022bd00 + uVar15 * 4)) ^
           0xffffffff);
  iVar3 = (int)param_2 >> 3;
  if (param_4 == 0) {
    if (param_5 == 0) {
      lVar1 = param_1 + uVar15 * 4;
      if ((*(int *)(lVar1 + 0x7550) - 5U & 0xff) < 2) {
        *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
      }
      *(undefined4 *)(lVar1 + 0x7550) = 0;
      uVar16 = *(uint *)(param_1 + 0x7590) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x7590) = uVar16;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) &
           (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) & 0xffffffffffff |
           *(ulonglong *)(param_1 + 0xfe0) & 0xdfff000000000000 | (ulonglong)(uVar16 != 0) << 0x3d;
      goto LAB_180167344;
    }
  }
  else if (param_5 == 0) {
    uVar24 = *(uint *)(&DAT_18022bd00 + uVar15 * 4) | uVar24;
    if ((*(int *)(param_4 + 0x44) == 2) || (*(int *)(param_4 + 0x44) == 5)) {
      uVar24 = *(uint *)(&DAT_18022bcf0 + uVar15 * 4) | uVar24;
    }
    lVar1 = param_1 + uVar15 * 8;
    if (*(int *)(lVar1 + 0x734) != param_3) {
      *(int *)(lVar1 + 0x734) = param_3;
      *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    puVar9 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_50 = (*extraout_x11_00)(param_4);
    local_50 = local_50 & 0xff;
    (*(code *)puVar9)(0x180224000);
    cVar10 = (*extraout_x11_01)(param_4);
    uVar16 = *(uint *)(param_4 + 0x44);
    if (uVar16 == 0) {
      uVar16 = (uint)(*(char *)(param_1 + 0xa9) != '\0');
    }
    uVar20 = (ulonglong)(byte)(&DAT_18022bce8)[uVar16];
    if ((*(uint *)(param_4 + 0x40) >> 3 & 1) == 0) {
      uVar18 = 7;
      if (*(int *)(param_4 + 0x2c) != 0x21 || in_stack_00000008 == '\0') {
        uVar18 = (uint)(byte)(&DAT_18022bce8)[uVar16];
      }
      uVar20 = (ulonglong)uVar18;
    }
    else if (uVar16 == 4) {
      local_50 = 1;
      uVar20 = 4;
    }
    else if (uVar16 == 5) {
      local_50 = 1;
      uVar20 = 2;
    }
    lVar1 = param_1 + uVar15 * 4;
    if ((*(int *)(lVar1 + 0x7550) + 0xfbU & 0xff) < 2 != ((int)uVar20 + 0xfbU & 0xff) < 2) {
      *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    *(int *)(lVar1 + 0x7550) = (int)uVar20;
    *(ulonglong *)(param_1 + 0xfe0) =
         ((uVar20 & 7) << ((ulonglong)(param_2 * 3) & 0x3f) |
         *(ulonglong *)(param_1 + 0xfe0) &
         (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU)) & 0xffffffffffff |
         *(ulonglong *)(param_1 + 0xfe0) & 0xffff000000000000;
    if (in_stack_00000008 != '\0') {
      if (param_2 < 4) {
        lVar1 = param_1 + uVar15 * 0x80;
        iVar19 = -1;
        iVar4 = iVar19;
        if (local_50 == 0) {
          iVar4 = 0;
        }
        iVar5 = 0;
        if (local_50 == 0) {
          iVar5 = 0x3f800000;
        }
        if (cVar10 == '\0') {
          iVar19 = 0;
        }
        iVar6 = 0;
        if (cVar10 == '\0') {
          iVar6 = 0x3f800000;
        }
        if ((((iVar4 != *(int *)(lVar1 + 0x7330)) || (iVar19 != *(int *)(lVar1 + 0x7334))) ||
            (iVar5 != *(int *)(lVar1 + 0x7338))) || (bVar17 = 0, iVar6 != *(int *)(lVar1 + 0x733c)))
        {
          bVar17 = 1;
        }
        *(int *)(lVar1 + 0x7330) = iVar4;
        *(int *)(uVar15 * 0x80 + param_1 + 0x7334) = iVar19;
        *(int *)(uVar15 * 0x80 + param_1 + 0x7338) = iVar5;
        *(int *)(uVar15 * 0x80 + param_1 + 0x733c) = iVar6;
        *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | bVar17;
      }
      (*(code *)puVar9)(0x180224000);
      (*extraout_x11_02)(param_4,apiStack_48,&local_50);
      piVar8 = (int *)CONCAT44(uStack_4c,local_50);
      if ((((*apiStack_48[0] == -1) && (apiStack_48[0][1] == -1)) &&
          ((apiStack_48[0][2] == -1 && ((apiStack_48[0][3] == -1 && (*piVar8 == 0)))))) &&
         ((piVar8[1] == 0 && ((piVar8[2] == 0 && (piVar8[3] == 0)))))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      lVar1 = param_1 + uVar15 * 0x20;
      uVar18 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar16 = *(uint *)(param_1 + 0x7590) & (uVar18 ^ 0xffffffff);
      if (bVar7) {
        uVar16 = uVar18 | *(uint *)(param_1 + 0x7590);
      }
      *(uint *)(param_1 + 0x7590) = uVar16;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff | (ulonglong)(uVar16 != 0) << 0x3d;
      uVar20 = (uVar15 + 0x339) * 0x20;
      piVar11 = (int *)(uVar20 + param_1);
      if ((((*apiStack_48[0] == *(int *)(uVar20 + param_1)) && (apiStack_48[0][1] == piVar11[1])) &&
          (apiStack_48[0][2] == piVar11[2])) &&
         (((apiStack_48[0][3] == piVar11[3] && (*piVar8 == *(int *)(lVar1 + 0x6730))) &&
          ((piVar8[1] == *(int *)(lVar1 + 0x6734) &&
           ((piVar8[2] == *(int *)(lVar1 + 0x6738) && (piVar8[3] == *(int *)(lVar1 + 0x673c)))))))))
      {
        bVar17 = 0;
        piVar12 = piVar11 + 1;
        piVar13 = piVar11 + 2;
        piVar14 = piVar11 + 3;
      }
      else {
        piVar12 = (int *)((uVar20 | 4) + param_1);
        piVar13 = (int *)((uVar20 | 8) + param_1);
        piVar14 = (int *)((uVar20 | 0xc) + param_1);
        bVar17 = 1;
      }
      *piVar11 = *apiStack_48[0];
      *piVar12 = apiStack_48[0][1];
      *piVar13 = apiStack_48[0][2];
      *piVar14 = apiStack_48[0][3];
      *(int *)(lVar1 + 0x6730) = *piVar8;
      *(int *)(uVar15 * 0x20 + param_1 + 0x6734) = piVar8[1];
      *(int *)(uVar15 * 0x20 + param_1 + 0x6738) = piVar8[2];
      *(int *)(uVar15 * 0x20 + param_1 + 0x673c) = piVar8[3];
      *(byte *)(param_1 + 0xf6c3) = *(byte *)(param_1 + 0xf6c3) | bVar17;
    }
    if (*(char *)(param_1 + 0xaa) != '\0') {
      if ((((((*(int *)(param_1 + 0x7550) - 5U < 2) || (*(int *)(param_1 + 0x7554) - 5U < 2)) ||
            (*(int *)(param_1 + 0x7558) - 5U < 2)) ||
           ((*(int *)(param_1 + 0x755c) - 5U < 2 || (*(int *)(param_1 + 0x7560) - 5U < 2)))) ||
          ((*(int *)(param_1 + 0x7564) - 5U < 2 ||
           ((*(int *)(param_1 + 0x7568) - 5U < 2 || (*(int *)(param_1 + 0x756c) == 5)))))) ||
         (bVar7 = false, *(int *)(param_1 + 0x756c) == 6)) {
        bVar7 = true;
      }
      uVar16 = *(uint *)(param_1 + 0x6538) & 0xfffeffff;
      if (bVar7) {
        uVar16 = *(uint *)(param_1 + 0x6538) | 0x10000;
      }
      *(uint *)(param_1 + 0x6538) = uVar16;
      uVar16 = *(uint *)(param_1 + 0x655c) & 0xfffeffff;
      if (bVar7) {
        uVar16 = *(uint *)(param_1 + 0x655c) | 0x10000;
      }
      lVar1 = param_1 + uVar15 * 0x40;
      uVar18 = 1 << (ulonglong)(param_2 & 0x1f);
      *(uint *)(param_1 + 0x655c) = uVar16;
      if (*(int *)(lVar1 + 0x655c) == 0) {
        uVar16 = *(uint *)(param_1 + 0x7594) & (uVar18 ^ 0xffffffff);
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x7594) | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar16;
      if (bVar7) {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) | 0x10000;
        uVar21 = *(uint *)(param_1 + 0x659c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) & 0xfffeffff;
        uVar21 = *(uint *)(param_1 + 0x659c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x659c) = uVar21;
      uVar21 = uVar16 & (uVar18 ^ 0xffffffff);
      if (*(int *)(lVar1 + 0x655c) != 0) {
        uVar21 = uVar16 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x65dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x65dc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x65dc) = uVar22;
      iVar4 = *(int *)(lVar1 + 0x655c);
      uVar22 = uVar16 & (uVar18 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar22 = uVar21 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar22;
      if (bVar7) {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) | 0x10000;
        uVar23 = *(uint *)(param_1 + 0x661c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) & 0xfffeffff;
        uVar23 = *(uint *)(param_1 + 0x661c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x661c) = uVar23;
      if (iVar4 != 0) {
        uVar16 = uVar21;
      }
      iVar4 = *(int *)(param_1 + uVar15 * 0x40 + 0x655c);
      uVar21 = uVar16 & (uVar18 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar21 = uVar22 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) | 0x10000;
        uVar23 = *(uint *)(param_1 + 0x665c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) & 0xfffeffff;
        uVar23 = *(uint *)(param_1 + 0x665c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x665c) = uVar23;
      if (iVar4 != 0) {
        uVar16 = uVar22;
      }
      iVar4 = *(int *)(param_1 + uVar15 * 0x40 + 0x655c);
      uVar22 = uVar16 & (uVar18 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar22 = uVar21 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar22;
      if (bVar7) {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) | 0x10000;
        uVar23 = *(uint *)(param_1 + 0x669c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) & 0xfffeffff;
        uVar23 = *(uint *)(param_1 + 0x669c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x669c) = uVar23;
      if (iVar4 != 0) {
        uVar16 = uVar21;
      }
      iVar4 = *(int *)(param_1 + uVar15 * 0x40 + 0x655c);
      uVar21 = uVar16 & (uVar18 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar21 = uVar22 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) | 0x10000;
        uVar23 = *(uint *)(param_1 + 0x66dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) & 0xfffeffff;
        uVar23 = *(uint *)(param_1 + 0x66dc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x66dc) = uVar23;
      if (iVar4 != 0) {
        uVar16 = uVar22;
      }
      iVar4 = *(int *)(param_1 + uVar15 * 0x40 + 0x655c);
      uVar22 = uVar16 & (uVar18 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar22 = uVar21 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar22;
      if (bVar7) {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) | 0x10000;
        uVar23 = *(uint *)(param_1 + 0x671c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) & 0xfffeffff;
        uVar23 = *(uint *)(param_1 + 0x671c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x671c) = uVar23;
      if (iVar4 != 0) {
        uVar16 = uVar21;
      }
      uVar16 = uVar16 & (uVar18 ^ 0xffffffff);
      if (*(int *)(param_1 + uVar15 * 0x40 + 0x655c) != 0) {
        uVar16 = uVar22 | uVar18;
      }
      *(uint *)(param_1 + 0x7594) = uVar16;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) & 0xbfffffffffffffff | (ulonglong)(uVar16 != 0) << 0x3e;
    }
    if ((param_2 < 8) && (*(int *)(param_1 + uVar15 * 4 + 0x7550) - 5U < 2)) {
      lVar1 = param_1 + uVar15 * 0x40;
      *(float *)(lVar1 + 0x6550) = 1.0 / (float)*(uint *)(param_4 + 0x24);
      *(float *)(lVar1 + 0x6554) = 1.0 / (float)*(uint *)(param_4 + 0x28);
      *(undefined4 *)(lVar1 + 0x6558) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
    goto LAB_180167344;
  }
  lVar1 = param_1 + uVar15 * 8;
  if (*(int *)(lVar1 + 0x734) != param_3) {
    *(int *)(lVar1 + 0x734) = param_3;
    *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
         *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  lVar1 = param_1 + uVar15 * 4;
  if ((*(int *)(lVar1 + 0x7550) - 5U & 0xff) < 2) {
    *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
         *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  *(undefined4 *)(lVar1 + 0x7550) = 3;
  *(ulonglong *)(param_1 + 0xfe0) =
       (*(ulonglong *)(param_1 + 0xfe0) &
        (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) |
       3L << ((ulonglong)(param_2 * 3) & 0x3f)) & 0xffffffffffff |
       *(ulonglong *)(param_1 + 0xfe0) & 0xffff000000000000;
  if (in_stack_00000008 != '\0') {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_5,&local_50,apiStack_48);
    piVar8 = (int *)CONCAT44(uStack_4c,local_50);
    if ((((((*piVar8 == -1) && (piVar8[1] == -1)) && (piVar8[2] == -1)) &&
         ((piVar8[3] == -1 && (*apiStack_48[0] == 0)))) && (apiStack_48[0][1] == 0)) &&
       ((apiStack_48[0][2] == 0 && (apiStack_48[0][3] == 0)))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    lVar1 = param_1 + uVar15 * 0x20;
    uVar18 = 1 << (ulonglong)(param_2 & 0x1f);
    uVar16 = *(uint *)(param_1 + 0x7590) & (uVar18 ^ 0xffffffff);
    if (bVar7) {
      uVar16 = uVar18 | *(uint *)(param_1 + 0x7590);
    }
    *(uint *)(param_1 + 0x7590) = uVar16;
    *(ulonglong *)(param_1 + 0xfe0) =
         *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff | (ulonglong)(uVar16 != 0) << 0x3d;
    uVar15 = (uVar15 + 0x339) * 0x20;
    lVar2 = uVar15 + param_1;
    if ((((*piVar8 == *(int *)(uVar15 + param_1)) && (piVar8[1] == *(int *)(lVar2 + 4))) &&
        (piVar8[2] == *(int *)(lVar2 + 8))) &&
       (((piVar8[3] == *(int *)(lVar2 + 0xc) && (*apiStack_48[0] == *(int *)(lVar1 + 0x6730))) &&
        ((apiStack_48[0][1] == *(int *)(lVar1 + 0x6734) &&
         ((apiStack_48[0][2] == *(int *)(lVar1 + 0x6738) &&
          (apiStack_48[0][3] == *(int *)(lVar1 + 0x673c))))))))) {
      bVar17 = 0;
      piVar11 = (int *)(lVar2 + 4);
      piVar12 = (int *)(lVar2 + 8);
      piVar13 = (int *)(lVar2 + 0xc);
    }
    else {
      piVar11 = (int *)((uVar15 | 4) + param_1);
      piVar12 = (int *)((uVar15 | 8) + param_1);
      piVar13 = (int *)((uVar15 | 0xc) + param_1);
      bVar17 = 1;
    }
    *(int *)(param_1 + uVar15) = *piVar8;
    *piVar11 = piVar8[1];
    *piVar12 = piVar8[2];
    *piVar13 = piVar8[3];
    *(int *)(lVar1 + 0x6730) = *apiStack_48[0];
    *(int *)(lVar1 + 0x6734) = apiStack_48[0][1];
    *(int *)(lVar1 + 0x6738) = apiStack_48[0][2];
    *(int *)(lVar1 + 0x673c) = apiStack_48[0][3];
    *(byte *)(param_1 + 0xf6c3) = *(byte *)(param_1 + 0xf6c3) | bVar17;
  }
LAB_180167344:
  *(undefined2 *)(param_1 + 0xf688) = 0x101;
  *(byte *)(param_1 + 0xf680 + (longlong)iVar3) =
       *(byte *)(param_1 + 0xf680 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  if (uVar24 != *(uint *)(param_1 + 0x6948)) {
    *(uint *)(param_1 + 0x6948) = uVar24;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

