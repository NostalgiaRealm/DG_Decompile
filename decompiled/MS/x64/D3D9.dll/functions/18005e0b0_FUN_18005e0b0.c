/*
 * FUN_18005e0b0 at 18005e0b0
 * undefined __fastcall FUN_18005e0b0(longlong param_1, uint param_2, int param_3, longlong * param_4, longlong * param_5)
 * Address ranges: 18005e0b0-18005ea36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005e0b0(longlong param_1,uint param_2,int param_3,longlong *param_4,longlong *param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  ulonglong uVar20;
  int *local_res8;
  int *local_res20;
  char in_stack_00000050;
  
  uVar20 = (ulonglong)param_2;
  uVar15 = (ulonglong)param_2;
  uVar12 = ~(*(uint *)(&DAT_1801023e0 + uVar20 * 4) | *(uint *)(&DAT_1801023f0 + uVar20 * 4)) &
           *(uint *)(param_1 + 0x6948);
  bVar18 = (byte)param_2;
  if (param_4 == (longlong *)0x0) {
    if (param_5 == (longlong *)0x0) {
      if ((byte)(*(char *)(param_1 + 0x7550 + uVar20 * 4) - 5U) < 2) {
        pbVar2 = (byte *)(param_1 + 0xf684 + ((longlong)(int)param_2 >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
      }
      *(undefined4 *)(param_1 + 0x7550 + uVar20 * 4) = 0;
      uVar15 = ~(7L << (bVar18 * '\x03' & 0x3f)) & *(ulonglong *)(param_1 + 0xfe0);
      *(uint *)(param_1 + 0x7590) = *(uint *)(param_1 + 0x7590) & ~(1 << (bVar18 & 0x1f));
      *(ulonglong *)(param_1 + 0xfe0) =
           ((uVar15 ^ *(ulonglong *)(param_1 + 0xfe0)) & 0xffff000000000000 ^ uVar15) &
           0xdfffffffffffffff | -(ulonglong)(*(int *)(param_1 + 0x7590) != 0) & 0x2000000000000000;
      goto LAB_18005e9f6;
    }
  }
  else if (param_5 == (longlong *)0x0) {
    uVar12 = uVar12 | *(uint *)(&DAT_1801023f0 + uVar20 * 4);
    if ((*(int *)((longlong)param_4 + 0x44) == 2) || (*(int *)((longlong)param_4 + 0x44) == 5)) {
      uVar12 = uVar12 | *(uint *)(&DAT_1801023e0 + uVar20 * 4);
    }
    if (*(int *)(param_1 + 0x734 + uVar20 * 8) != param_3) {
      *(int *)(param_1 + 0x734 + uVar20 * 8) = param_3;
      pbVar2 = (byte *)(param_1 + 0xf684 + ((longlong)(int)param_2 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
    }
    cVar4 = (**(code **)(*param_4 + 0x78))(param_4);
    cVar5 = (**(code **)(*param_4 + 0x80))(param_4);
    uVar11 = (ulonglong)*(uint *)((longlong)param_4 + 0x44);
    bVar19 = 0;
    if (*(uint *)((longlong)param_4 + 0x44) == 0) {
      uVar11 = (ulonglong)(*(char *)(param_1 + 0xa9) != '\0');
    }
    bVar1 = (&DAT_1801023d8)[uVar11];
    uVar13 = (uint)bVar1;
    if ((*(byte *)(param_4 + 8) & 8) == 0) {
      if ((*(int *)((longlong)param_4 + 0x2c) == 0x21) &&
         (uVar13 = (uint)bVar1, in_stack_00000050 != '\0')) {
        uVar13 = 7;
      }
    }
    else if ((int)uVar11 == 4) {
      cVar4 = '\x01';
      uVar13 = 4;
    }
    else {
      uVar13 = (uint)bVar1;
      if ((int)uVar11 == 5) {
        uVar13 = 2;
        cVar4 = '\x01';
      }
    }
    if ((byte)(*(char *)(param_1 + 0x7550 + uVar20 * 4) - 5U) < 2 != (byte)((char)uVar13 - 5U) < 2)
    {
      pbVar2 = (byte *)(param_1 + 0xf684 + ((longlong)(int)param_2 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
    }
    *(uint *)(param_1 + 0x7550 + uVar20 * 4) = uVar13;
    uVar11 = (ulonglong)(uVar13 & 7) << (bVar18 * '\x03' & 0x3f) |
             ~(7L << (bVar18 * '\x03' & 0x3f)) & *(ulonglong *)(param_1 + 0xfe0);
    *(ulonglong *)(param_1 + 0xfe0) =
         (*(ulonglong *)(param_1 + 0xfe0) ^ uVar11) & 0xffff000000000000 ^ uVar11;
    if (in_stack_00000050 != '\0') {
      if (param_2 < 4) {
        lVar8 = uVar15 * 0x80;
        iVar9 = 0x3f800000;
        if (cVar4 != '\0') {
          iVar9 = 0;
        }
        iVar6 = 0x3f800000;
        if (cVar5 != '\0') {
          iVar6 = 0;
        }
        if ((((-(uint)(cVar4 != '\0') != *(int *)(lVar8 + 0x7330 + param_1)) ||
             (-(uint)(cVar5 != '\0') != *(int *)(lVar8 + 0x7334 + param_1))) ||
            (iVar9 != *(int *)(lVar8 + 0x7338 + param_1))) ||
           (iVar6 != *(int *)(lVar8 + 0x733c + param_1))) {
          bVar19 = 1;
        }
        *(uint *)(lVar8 + 0x7330 + param_1) = -(uint)(cVar4 != '\0');
        *(uint *)(lVar8 + 0x7334 + param_1) = -(uint)(cVar5 != '\0');
        *(int *)(lVar8 + 0x7338 + param_1) = iVar9;
        *(int *)(param_1 + 0x733c + lVar8) = iVar6;
        *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | bVar19;
      }
      (**(code **)(*param_4 + 0x90))(param_4,&local_res20,&local_res8);
      if (((((*local_res20 == -1) && (local_res20[1] == -1)) &&
           ((local_res20[2] == -1 && ((local_res20[3] == -1 && (*local_res8 == 0)))))) &&
          (local_res8[1] == 0)) && ((local_res8[2] == 0 && (local_res8[3] == 0)))) {
        uVar13 = ~(1 << (bVar18 & 0x1f)) & *(uint *)(param_1 + 0x7590);
      }
      else {
        uVar13 = 1 << (bVar18 & 0x1f) | *(uint *)(param_1 + 0x7590);
      }
      *(uint *)(param_1 + 0x7590) = uVar13;
      *(ulonglong *)(param_1 + 0xfe0) = *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff;
      bVar19 = *(byte *)(param_1 + 0xf6c3);
      *(ulonglong *)(param_1 + 0xfe0) =
           *(ulonglong *)(param_1 + 0xfe0) | -(ulonglong)(uVar13 != 0) & 0x2000000000000000;
      uVar7 = FUN_18005af80(uVar20,(int *)(param_1 + 0x6720 + uVar15 * 0x20),
                            (int *)(param_1 + 0x6730 + uVar15 * 0x20),local_res20,local_res8);
      *(byte *)(param_1 + 0xf6c3) = (byte)uVar7 | bVar19;
    }
    if (*(char *)(param_1 + 0xaa) != '\0') {
      if (((((*(int *)(param_1 + 0x7550) == 5 || *(int *)(param_1 + 0x7550) == 6) ||
            (*(int *)(param_1 + 0x7554) == 5 || *(int *)(param_1 + 0x7554) == 6)) ||
           (*(int *)(param_1 + 0x7558) == 5 || *(int *)(param_1 + 0x7558) == 6)) ||
          (((*(int *)(param_1 + 0x755c) == 5 || *(int *)(param_1 + 0x755c) == 6 ||
            (*(int *)(param_1 + 0x7560) == 5 || *(int *)(param_1 + 0x7560) == 6)) ||
           ((*(int *)(param_1 + 0x7564) == 5 || *(int *)(param_1 + 0x7564) == 6 ||
            ((*(int *)(param_1 + 0x7568) == 5 || *(int *)(param_1 + 0x7568) == 6 ||
             (*(int *)(param_1 + 0x756c) == 5)))))))) ||
         (bVar3 = false, *(int *)(param_1 + 0x756c) == 6)) {
        bVar3 = true;
      }
      uVar13 = *(uint *)(param_1 + 0x6538) | 0x10000;
      if (!bVar3) {
        uVar13 = *(uint *)(param_1 + 0x6538) & 0xfffeffff;
      }
      *(uint *)(param_1 + 0x6538) = uVar13;
      uVar13 = *(uint *)(param_1 + 0x655c) | 0x10000;
      if (!bVar3) {
        uVar13 = *(uint *)(param_1 + 0x655c) & 0xfffeffff;
      }
      uVar14 = 1 << (bVar18 & 0x1f);
      *(uint *)(param_1 + 0x655c) = uVar13;
      lVar8 = uVar15 * 0x40;
      if (*(int *)(lVar8 + 0x655c + param_1) == 0) {
        uVar13 = ~uVar14 & *(uint *)(param_1 + 0x7594);
      }
      else {
        uVar13 = uVar14 | *(uint *)(param_1 + 0x7594);
      }
      *(uint *)(param_1 + 0x7594) = uVar13;
      uVar16 = ~uVar14;
      if (bVar3) {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) | 0x10000;
        *(uint *)(param_1 + 0x659c) = *(uint *)(param_1 + 0x659c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6578) = *(uint *)(param_1 + 0x6578) & 0xfffeffff;
        *(uint *)(param_1 + 0x659c) = *(uint *)(param_1 + 0x659c) & 0xfffeffff;
      }
      uVar10 = uVar14 | uVar13;
      if (*(int *)(lVar8 + 0x655c + param_1) == 0) {
        uVar10 = uVar16 & uVar13;
      }
      *(uint *)(param_1 + 0x7594) = uVar10;
      if (bVar3) {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) | 0x10000;
        *(uint *)(param_1 + 0x65dc) = *(uint *)(param_1 + 0x65dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65b8) = *(uint *)(param_1 + 0x65b8) & 0xfffeffff;
        *(uint *)(param_1 + 0x65dc) = *(uint *)(param_1 + 0x65dc) & 0xfffeffff;
      }
      iVar9 = *(int *)(lVar8 + 0x655c + param_1);
      uVar17 = uVar14 | uVar10;
      if (iVar9 == 0) {
        uVar17 = uVar16 & uVar13;
      }
      *(uint *)(param_1 + 0x7594) = uVar17;
      if (bVar3) {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) | 0x10000;
        *(uint *)(param_1 + 0x661c) = *(uint *)(param_1 + 0x661c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x65f8) = *(uint *)(param_1 + 0x65f8) & 0xfffeffff;
        *(uint *)(param_1 + 0x661c) = *(uint *)(param_1 + 0x661c) & 0xfffeffff;
      }
      if (iVar9 == 0) {
        uVar10 = uVar13;
      }
      iVar9 = *(int *)(uVar15 * 0x40 + 0x655c + param_1);
      uVar13 = uVar14 | uVar17;
      if (iVar9 == 0) {
        uVar13 = uVar16 & uVar10;
      }
      *(uint *)(param_1 + 0x7594) = uVar13;
      if (bVar3) {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) | 0x10000;
        *(uint *)(param_1 + 0x665c) = *(uint *)(param_1 + 0x665c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6638) = *(uint *)(param_1 + 0x6638) & 0xfffeffff;
        *(uint *)(param_1 + 0x665c) = *(uint *)(param_1 + 0x665c) & 0xfffeffff;
      }
      if (iVar9 == 0) {
        uVar17 = uVar10;
      }
      iVar9 = *(int *)(uVar15 * 0x40 + 0x655c + param_1);
      uVar10 = uVar14 | uVar13;
      if (iVar9 == 0) {
        uVar10 = uVar16 & uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar10;
      if (bVar3) {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) | 0x10000;
        *(uint *)(param_1 + 0x669c) = *(uint *)(param_1 + 0x669c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) & 0xfffeffff;
        *(uint *)(param_1 + 0x669c) = *(uint *)(param_1 + 0x669c) & 0xfffeffff;
      }
      if (iVar9 == 0) {
        uVar13 = uVar17;
      }
      iVar9 = *(int *)(uVar15 * 0x40 + 0x655c + param_1);
      uVar17 = uVar14 | uVar10;
      if (iVar9 == 0) {
        uVar17 = uVar16 & uVar13;
      }
      *(uint *)(param_1 + 0x7594) = uVar17;
      if (bVar3) {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) | 0x10000;
        *(uint *)(param_1 + 0x66dc) = *(uint *)(param_1 + 0x66dc) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66b8) = *(uint *)(param_1 + 0x66b8) & 0xfffeffff;
        *(uint *)(param_1 + 0x66dc) = *(uint *)(param_1 + 0x66dc) & 0xfffeffff;
      }
      if (iVar9 == 0) {
        uVar10 = uVar13;
      }
      iVar9 = *(int *)(uVar15 * 0x40 + 0x655c + param_1);
      uVar13 = uVar14 | uVar17;
      if (iVar9 == 0) {
        uVar13 = uVar16 & uVar10;
      }
      *(uint *)(param_1 + 0x7594) = uVar13;
      if (bVar3) {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) | 0x10000;
        *(uint *)(param_1 + 0x671c) = *(uint *)(param_1 + 0x671c) | 0x10000;
      }
      else {
        *(uint *)(param_1 + 0x66f8) = *(uint *)(param_1 + 0x66f8) & 0xfffeffff;
        *(uint *)(param_1 + 0x671c) = *(uint *)(param_1 + 0x671c) & 0xfffeffff;
      }
      if (iVar9 == 0) {
        uVar17 = uVar10;
      }
      uVar13 = uVar14 | uVar13;
      if (*(int *)(uVar15 * 0x40 + 0x655c + param_1) == 0) {
        uVar13 = uVar16 & uVar17;
      }
      *(uint *)(param_1 + 0x7594) = uVar13;
      *(ulonglong *)(param_1 + 0xfe0) =
           -(ulonglong)(uVar13 != 0) & 0x4000000000000000 |
           *(ulonglong *)(param_1 + 0xfe0) & 0xbfffffffffffffff;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
    if ((param_2 < 8) &&
       ((iVar9 = *(int *)(param_1 + 0x7550 + uVar20 * 4), iVar9 == 5 || (iVar9 == 6)))) {
      lVar8 = uVar15 * 0x40;
      *(float *)(lVar8 + 0x6550 + param_1) = 1.0 / (float)*(uint *)((longlong)param_4 + 0x24);
      uVar13 = *(uint *)(param_4 + 5);
      *(undefined4 *)(lVar8 + 0x6558 + param_1) = 0x3f800000;
      *(float *)(lVar8 + 0x6554 + param_1) = 1.0 / (float)uVar13;
      *(undefined1 *)(param_1 + 0xf6c3) = 1;
    }
    goto LAB_18005e9f6;
  }
  if (*(int *)(param_1 + 0x734 + uVar20 * 8) != param_3) {
    *(int *)(param_1 + 0x734 + uVar20 * 8) = param_3;
    pbVar2 = (byte *)(param_1 + 0xf684 + ((longlong)(int)param_2 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
  }
  if ((byte)(*(char *)(param_1 + 0x7550 + uVar20 * 4) - 5U) < 2) {
    pbVar2 = (byte *)(param_1 + 0xf684 + ((longlong)(int)param_2 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
  }
  *(undefined4 *)(param_1 + 0x7550 + uVar20 * 4) = 3;
  uVar15 = ~(7L << (bVar18 * '\x03' & 0x3f)) & *(ulonglong *)(param_1 + 0xfe0) |
           3L << (bVar18 * '\x03' & 0x3f);
  *(ulonglong *)(param_1 + 0xfe0) =
       (*(ulonglong *)(param_1 + 0xfe0) ^ uVar15) & 0xffff000000000000 ^ uVar15;
  if (in_stack_00000050 != '\0') {
    (**(code **)(*param_5 + 0x10))(param_5,&local_res20,&local_res8);
    if ((((*local_res20 == -1) && (local_res20[1] == -1)) && (local_res20[2] == -1)) &&
       (((local_res20[3] == -1 && (*local_res8 == 0)) &&
        ((local_res8[1] == 0 && ((local_res8[2] == 0 && (local_res8[3] == 0)))))))) {
      uVar13 = ~(1 << (bVar18 & 0x1f)) & *(uint *)(param_1 + 0x7590);
    }
    else {
      uVar13 = 1 << (bVar18 & 0x1f) | *(uint *)(param_1 + 0x7590);
    }
    *(uint *)(param_1 + 0x7590) = uVar13;
    bVar18 = *(byte *)(param_1 + 0xf6c3);
    uVar15 = *(ulonglong *)(param_1 + 0xfe0) & 0xdfffffffffffffff |
             -(ulonglong)(uVar13 != 0) & 0x2000000000000000;
    *(ulonglong *)(param_1 + 0xfe0) = uVar15;
    uVar7 = FUN_18005af80(uVar15,(int *)(param_1 + 0x6720 + uVar20 * 0x20),
                          (int *)(param_1 + 0x6730 + uVar20 * 0x20),local_res20,local_res8);
    *(byte *)(param_1 + 0xf6c3) = (byte)uVar7 | bVar18;
  }
LAB_18005e9f6:
  *(undefined2 *)(param_1 + 0xf688) = 0x101;
  pbVar2 = (byte *)(param_1 + 0xf680 + ((longlong)(int)param_2 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (param_2 & 7);
  if (uVar12 != *(uint *)(param_1 + 0x6948)) {
    *(uint *)(param_1 + 0x6948) = uVar12;
    *(undefined1 *)(param_1 + 0xf691) = 1;
  }
  return;
}

