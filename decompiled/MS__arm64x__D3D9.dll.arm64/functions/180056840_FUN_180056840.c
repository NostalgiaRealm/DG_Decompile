/*
 * FUN_180056840 at 180056840
 * undefined FUN_180056840(void)
 * Address ranges: 180056840-1800573ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056840(longlong param_1,uint param_2,int param_3,longlong *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  char in_stack_00000008;
  int *local_60;
  int *piStack_58;
  
  uVar20 = (ulonglong)param_2;
  uVar23 = *(uint *)(param_1 + 0x6948) &
           ((*(uint *)(&DAT_18022bcf0 + uVar20 * 4) | *(uint *)(&DAT_18022bd00 + uVar20 * 4)) ^
           0xffffffff);
  iVar3 = (int)param_2 >> 3;
  if (param_4 == (longlong *)0x0) {
    if (param_5 == (longlong *)0x0) {
      lVar1 = param_1 + uVar20 * 4;
      if ((*(int *)(lVar1 + 0x7550) - 5U & 0xff) < 2) {
        *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
             *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
      }
      *(undefined4 *)(lVar1 + 0x7550) = 0;
      uVar12 = *(uint *)(param_1 + 0x7590) & (1 << (ulonglong)(param_2 & 0x1f) ^ 0xffffffffU);
      *(uint *)(param_1 + 0x7590) = uVar12;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) &
           (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU) & 0xffffffffffff |
           *(ulonglong *)(param_1 + 0xfe0) & 0xdfff000000000000 | (ulonglong)(uVar12 != 0) << 0x3d;
      goto LAB_18005734c;
    }
  }
  else if (param_5 == (longlong *)0x0) {
    uVar23 = *(uint *)(&DAT_18022bd00 + uVar20 * 4) | uVar23;
    if ((*(int *)((longlong)param_4 + 0x44) == 2) || (*(int *)((longlong)param_4 + 0x44) == 5)) {
      uVar23 = *(uint *)(&DAT_18022bcf0 + uVar20 * 4) | uVar23;
    }
    lVar1 = param_1 + uVar20 * 8;
    if (*(int *)(lVar1 + 0x734) != param_3) {
      *(int *)(lVar1 + 0x734) = param_3;
      *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    cVar8 = (**(code **)(*param_4 + 0x78))(param_4);
    cVar9 = (**(code **)(*param_4 + 0x80))(param_4);
    uVar12 = *(uint *)((longlong)param_4 + 0x44);
    if (uVar12 == 0) {
      uVar12 = (uint)(*(char *)(param_1 + 0xa9) != '\0');
    }
    uVar18 = (ulonglong)(byte)(&DAT_18022bce8)[uVar12];
    if ((*(uint *)(param_4 + 8) >> 3 & 1) == 0) {
      uVar17 = 7;
      if (*(int *)((longlong)param_4 + 0x2c) != 0x21 || in_stack_00000008 == '\0') {
        uVar17 = (uint)(byte)(&DAT_18022bce8)[uVar12];
      }
      uVar18 = (ulonglong)uVar17;
    }
    else if (uVar12 == 4) {
      uVar18 = 4;
      cVar8 = '\x01';
    }
    else if (uVar12 == 5) {
      uVar18 = 2;
      cVar8 = '\x01';
    }
    lVar1 = param_1 + uVar20 * 4;
    if ((*(int *)(lVar1 + 0x7550) + 0xfbU & 0xff) < 2 != ((int)uVar18 + 0xfbU & 0xff) < 2) {
      *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
           *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
    }
    *(int *)(lVar1 + 0x7550) = (int)uVar18;
    *(ulonglong *)(param_1 + 0xfe0) =
         ((uVar18 & 7) << ((ulonglong)(param_2 * 3) & 0x3f) |
         *(ulonglong *)(param_1 + 0xfe0) &
         (7L << ((ulonglong)(param_2 * 3) & 0x3f) ^ 0xffffffffffffffffU)) & 0xffffffffffff |
         *(ulonglong *)(param_1 + 0xfe0) & 0xffff000000000000;
    if (in_stack_00000008 != '\0') {
      if (param_2 < 4) {
        lVar1 = param_1 + uVar20 * 0x80;
        iVar13 = -1;
        iVar4 = iVar13;
        if (cVar8 == '\0') {
          iVar4 = 0;
        }
        iVar5 = 0;
        if (cVar8 == '\0') {
          iVar5 = 0x3f800000;
        }
        if (cVar9 == '\0') {
          iVar13 = 0;
        }
        iVar6 = 0;
        if (cVar9 == '\0') {
          iVar6 = 0x3f800000;
        }
        if ((((iVar4 != *(int *)(lVar1 + 0x7330)) || (iVar13 != *(int *)(lVar1 + 0x7334))) ||
            (iVar5 != *(int *)(lVar1 + 0x7338))) || (bVar16 = 0, iVar6 != *(int *)(lVar1 + 0x733c)))
        {
          bVar16 = 1;
        }
        *(int *)(lVar1 + 0x7330) = iVar4;
        *(int *)(uVar20 * 0x80 + param_1 + 0x7334) = iVar13;
        *(int *)(uVar20 * 0x80 + param_1 + 0x7338) = iVar5;
        *(int *)(uVar20 * 0x80 + param_1 + 0x733c) = iVar6;
        *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | bVar16;
      }
      (**(code **)(*param_4 + 0x90))(param_4,&piStack_58,&local_60);
      if ((((*piStack_58 == -1) && (piStack_58[1] == -1)) &&
          ((piStack_58[2] == -1 && ((piStack_58[3] == -1 && (*local_60 == 0)))))) &&
         ((local_60[1] == 0 && ((local_60[2] == 0 && (local_60[3] == 0)))))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      uVar17 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar12 = *(uint *)(param_1 + 0x7590) & (uVar17 ^ 0xffffffff);
      if (bVar7) {
        uVar12 = uVar17 | *(uint *)(param_1 + 0x7590);
      }
      *(uint *)(param_1 + 0x7590) = uVar12;
      lVar1 = param_1 + uVar20 * 0x20;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff | (ulonglong)(uVar12 != 0) << 0x3d;
      uVar18 = (uVar20 + 0x339) * 0x20;
      piVar10 = (int *)(uVar18 + param_1);
      if ((((*piStack_58 == *(int *)(uVar18 + param_1)) && (piStack_58[1] == piVar10[1])) &&
          (piStack_58[2] == piVar10[2])) &&
         (((piStack_58[3] == piVar10[3] && (*local_60 == *(int *)(lVar1 + 0x6730))) &&
          ((local_60[1] == *(int *)(lVar1 + 0x6734) &&
           ((local_60[2] == *(int *)(lVar1 + 0x6738) && (local_60[3] == *(int *)(lVar1 + 0x673c)))))
          )))) {
        bVar16 = 0;
        piVar11 = piVar10 + 1;
        piVar14 = piVar10 + 2;
        piVar15 = piVar10 + 3;
      }
      else {
        piVar11 = (int *)((uVar18 | 4) + param_1);
        piVar14 = (int *)((uVar18 | 8) + param_1);
        piVar15 = (int *)((uVar18 | 0xc) + param_1);
        bVar16 = 1;
      }
      *piVar10 = *piStack_58;
      *piVar11 = piStack_58[1];
      *piVar14 = piStack_58[2];
      *piVar15 = piStack_58[3];
      *(int *)(lVar1 + 0x6730) = *local_60;
      *(int *)(uVar20 * 0x20 + param_1 + 0x6734) = local_60[1];
      *(int *)(uVar20 * 0x20 + param_1 + 0x6738) = local_60[2];
      *(int *)(uVar20 * 0x20 + param_1 + 0x673c) = local_60[3];
      *(byte *)(param_1 + 0xf6c3) = *(byte *)(param_1 + 0xf6c3) | bVar16;
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
      uVar12 = *(uint *)(param_1 + 0x6538) & 0xfffeffff;
      if (bVar7) {
        uVar12 = *(uint *)(param_1 + 0x6538) | 0x10000;
      }
      *(uint *)(param_1 + 0x6538) = uVar12;
      uVar12 = *(uint *)(param_1 + 0x655c) & 0xfffeffff;
      if (bVar7) {
        uVar12 = *(uint *)(param_1 + 0x655c) | 0x10000;
      }
      lVar1 = param_1 + uVar20 * 0x40;
      uVar17 = 1 << (ulonglong)(param_2 & 0x1f);
      *(uint *)(param_1 + 0x655c) = uVar12;
      if (*(int *)(lVar1 + 0x655c) == 0) {
        uVar12 = *(uint *)(param_1 + 0x7594) & (uVar17 ^ 0xffffffff);
      }
      else {
        uVar12 = *(uint *)(param_1 + 0x7594) | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar12;
      if (bVar7) {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) | 0x10000;
        uVar19 = *(uint *)(param_1 + 0x659c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) & 0xfffeffff;
        uVar19 = *(uint *)(param_1 + 0x659c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x659c) = uVar19;
      uVar19 = uVar12 & (uVar17 ^ 0xffffffff);
      if (*(int *)(lVar1 + 0x655c) != 0) {
        uVar19 = uVar12 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) | 0x10000;
        uVar21 = *(uint *)(param_1 + 0x65dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) & 0xfffeffff;
        uVar21 = *(uint *)(param_1 + 0x65dc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x65dc) = uVar21;
      iVar4 = *(int *)(lVar1 + 0x655c);
      uVar21 = uVar12 & (uVar17 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar21 = uVar19 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x661c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x661c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x661c) = uVar22;
      if (iVar4 != 0) {
        uVar12 = uVar19;
      }
      iVar4 = *(int *)(param_1 + uVar20 * 0x40 + 0x655c);
      uVar19 = uVar12 & (uVar17 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar19 = uVar21 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x665c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x665c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x665c) = uVar22;
      if (iVar4 != 0) {
        uVar12 = uVar21;
      }
      iVar4 = *(int *)(param_1 + uVar20 * 0x40 + 0x655c);
      uVar21 = uVar12 & (uVar17 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar21 = uVar19 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x669c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x669c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x669c) = uVar22;
      if (iVar4 != 0) {
        uVar12 = uVar19;
      }
      iVar4 = *(int *)(param_1 + uVar20 * 0x40 + 0x655c);
      uVar19 = uVar12 & (uVar17 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar19 = uVar21 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar19;
      if (bVar7) {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x66dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x66dc) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x66dc) = uVar22;
      if (iVar4 != 0) {
        uVar12 = uVar21;
      }
      iVar4 = *(int *)(param_1 + uVar20 * 0x40 + 0x655c);
      uVar21 = uVar12 & (uVar17 ^ 0xffffffff);
      if (iVar4 != 0) {
        uVar21 = uVar19 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar21;
      if (bVar7) {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) | 0x10000;
        uVar22 = *(uint *)(param_1 + 0x671c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) & 0xfffeffff;
        uVar22 = *(uint *)(param_1 + 0x671c) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x671c) = uVar22;
      if (iVar4 != 0) {
        uVar12 = uVar19;
      }
      uVar12 = uVar12 & (uVar17 ^ 0xffffffff);
      if (*(int *)(param_1 + uVar20 * 0x40 + 0x655c) != 0) {
        uVar12 = uVar21 | uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar12;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) & 0xbfffffffffffffff | (ulonglong)(uVar12 != 0) << 0x3e;
    }
    if ((param_2 < 8) && (*(int *)(param_1 + uVar20 * 4 + 0x7550) - 5U < 2)) {
      lVar1 = param_1 + uVar20 * 0x40;
      *(float *)(lVar1 + 0x6550) = 1.0 / (float)*(uint *)((longlong)param_4 + 0x24);
      *(float *)(lVar1 + 0x6554) = 1.0 / (float)*(uint *)(param_4 + 5);
      *(undefined4 *)(lVar1 + 0x6558) = 0x3f800000;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
    goto LAB_18005734c;
  }
  lVar1 = param_1 + uVar20 * 8;
  if (*(int *)(lVar1 + 0x734) != param_3) {
    *(int *)(lVar1 + 0x734) = param_3;
    *(byte *)(param_1 + 0xf684 + (longlong)iVar3) =
         *(byte *)(param_1 + 0xf684 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  lVar1 = param_1 + uVar20 * 4;
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
    (**(code **)(*param_5 + 0x10))(param_5,&local_60,&piStack_58);
    if ((((((*local_60 == -1) && (local_60[1] == -1)) && (local_60[2] == -1)) &&
         ((local_60[3] == -1 && (*piStack_58 == 0)))) && (piStack_58[1] == 0)) &&
       ((piStack_58[2] == 0 && (piStack_58[3] == 0)))) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar17 = 1 << (ulonglong)(param_2 & 0x1f);
    lVar1 = param_1 + uVar20 * 0x20;
    uVar12 = *(uint *)(param_1 + 0x7590) & (uVar17 ^ 0xffffffff);
    if (bVar7) {
      uVar12 = uVar17 | *(uint *)(param_1 + 0x7590);
    }
    *(uint *)(param_1 + 0x7590) = uVar12;
    *(ulonglong *)(param_1 + 0xfe0) =
         *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff | (ulonglong)(uVar12 != 0) << 0x3d;
    uVar20 = (uVar20 + 0x339) * 0x20;
    lVar2 = uVar20 + param_1;
    if ((((*local_60 == *(int *)(uVar20 + param_1)) && (local_60[1] == *(int *)(lVar2 + 4))) &&
        (local_60[2] == *(int *)(lVar2 + 8))) &&
       (((local_60[3] == *(int *)(lVar2 + 0xc) && (*piStack_58 == *(int *)(lVar1 + 0x6730))) &&
        ((piStack_58[1] == *(int *)(lVar1 + 0x6734) &&
         ((piStack_58[2] == *(int *)(lVar1 + 0x6738) && (piStack_58[3] == *(int *)(lVar1 + 0x673c)))
         )))))) {
      bVar16 = 0;
      piVar10 = (int *)(lVar2 + 4);
      piVar11 = (int *)(lVar2 + 8);
      piVar14 = (int *)(lVar2 + 0xc);
    }
    else {
      piVar10 = (int *)((uVar20 | 4) + param_1);
      piVar11 = (int *)((uVar20 | 8) + param_1);
      piVar14 = (int *)((uVar20 | 0xc) + param_1);
      bVar16 = 1;
    }
    *(int *)(param_1 + uVar20) = *local_60;
    *piVar10 = local_60[1];
    *piVar11 = local_60[2];
    *piVar14 = local_60[3];
    *(int *)(lVar1 + 0x6730) = *piStack_58;
    *(int *)(lVar1 + 0x6734) = piStack_58[1];
    *(int *)(lVar1 + 0x6738) = piStack_58[2];
    *(int *)(lVar1 + 0x673c) = piStack_58[3];
    *(byte *)(param_1 + 0xf6c3) = *(byte *)(param_1 + 0xf6c3) | bVar16;
  }
LAB_18005734c:
  *(undefined2 *)(param_1 + 0xf688) = 0x101;
  *(byte *)(param_1 + 0xf680 + (longlong)iVar3) =
       *(byte *)(param_1 + 0xf680 + (longlong)iVar3) | (byte)(1 << (ulonglong)(param_2 & 7));
  if (uVar23 != *(uint *)(param_1 + 0x6948)) {
    *(uint *)(param_1 + 0x6948) = uVar23;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

