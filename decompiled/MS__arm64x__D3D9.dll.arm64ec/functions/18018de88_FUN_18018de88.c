/*
 * FUN_18018de88 at 18018de88
 * undefined FUN_18018de88(void)
 * Address ranges: 18018de88-18018e307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18018de88(uint param_1,ulonglong param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  
  FUN_18018de28(param_3);
  *param_3 = param_1;
  param_3[1] = 4;
  if ((param_1 & 0x2001) != 0) {
    return 0;
  }
  if (0x800 < (param_1 & 0xf00)) {
    return 0;
  }
  uVar9 = param_1 & 0x400e;
  if ((uVar9 == 2) || (((param_2 & 1) != 0 && (uVar9 - 6 < 9)))) {
    *(undefined1 *)(param_3 + 6) = 2;
    param_3[5] = 0xc0300;
    uVar13 = 1;
    if ((param_1 & 0x10) != 0) {
      uVar13 = 2;
    }
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
    param_3[1] = uVar13;
    if (uVar9 == 6) {
      iVar4 = 1;
      uVar5 = 1;
      uVar6 = 4;
      pbVar10 = &DAT_18022c660;
      bVar11 = 4;
    }
    else if (uVar9 == 8) {
      iVar4 = 2;
      uVar5 = 2;
      uVar6 = 8;
      pbVar10 = &DAT_18022c664;
      bVar11 = 5;
    }
    else if (uVar9 == 10) {
      iVar4 = 3;
      uVar5 = 3;
      uVar6 = 0xc;
      pbVar10 = &DAT_18022c668;
      bVar11 = 6;
    }
    else if (uVar9 == 0xc) {
      iVar4 = 4;
      uVar5 = 4;
      uVar6 = 0x10;
      pbVar10 = &DAT_18022c66c;
      bVar11 = 7;
    }
    else {
      bVar11 = 3;
      if (uVar9 != 0xe) goto LAB_18018dfa8;
      iVar4 = 5;
      uVar5 = 5;
      uVar6 = 0x14;
      pbVar10 = &DAT_18022c670;
      bVar11 = 8;
    }
    bVar3 = *pbVar10;
    *(undefined1 *)(param_3 + 7) = 0;
    uVar13 = 1;
    *(undefined1 *)((longlong)param_3 + 0x1d) = uVar5;
    *(undefined1 *)((longlong)param_3 + 0x1e) = uVar6;
    *(undefined1 *)((longlong)param_3 + 0x1f) = 3;
    *(byte *)(param_3 + 8) = bVar3;
    *(undefined *)((longlong)param_3 + 0x22) = (&DAT_18022c640)[bVar3];
    uVar9 = 2;
    *(undefined1 *)((longlong)param_3 + 0x215) = 1;
  }
  else {
    if (uVar9 == 4) {
      if ((param_1 >> 4 & 1) != 0) {
        return 0;
      }
      param_3[1] = 0;
    }
    else {
      if (uVar9 != 0x4002) {
        return 0;
      }
      param_3[1] = 3;
    }
    *(undefined1 *)(param_3 + 6) = 3;
    param_3[5] = 0x100400;
    bVar11 = 4;
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
LAB_18018dfa8:
    uVar9 = 1;
    iVar4 = 0;
    uVar13 = 0;
  }
  if ((param_1 >> 0xc & 1) != 0) {
    if (iVar4 == 0) {
      iVar14 = 0;
      goto LAB_18018e0c4;
    }
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((longlong)param_3 + 0x1d) + -1;
    *(char *)((longlong)param_3 + 0x1d) = cVar1;
    uVar8 = uVar9;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
      uVar8 = uVar13;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(byte *)((longlong)param_3 + 0x27) = bVar11 - 1;
    uVar9 = uVar8 + 1;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    *(undefined1 *)(param_3 + 10) = 5;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 2;
    *(undefined1 *)((longlong)param_3 + (ulonglong)(byte)uVar8 + 0x214) = 2;
  }
  iVar14 = 1;
LAB_18018e0c4:
  if ((param_1 & 0x9000) == 0x9000) {
    iVar14 = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    if (iVar4 == 0) {
      return 0;
    }
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((longlong)param_3 + 0x1d) + -1;
    *(char *)((longlong)param_3 + 0x1d) = cVar1;
    if (cVar1 == '\0') {
      uVar9 = uVar9 + 0xff;
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(byte *)((longlong)param_3 + 0x27) = bVar11 - 1;
    bVar3 = (byte)uVar9;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    uVar9 = uVar9 + 1 & 0xff;
    *(undefined1 *)(param_3 + 10) = 4;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 0;
    *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 2;
  }
  if (iVar14 != 0) {
    uVar13 = param_1 >> 8 & 0xf;
    if ((param_1 >> 4 & 1) != 0) {
      *(undefined1 *)(param_3 + 0xc) = 2;
      *(undefined2 *)(param_3 + 0xb) = 0x300;
      bVar3 = (byte)uVar9;
      *(byte *)((longlong)param_3 + 0x2f) = bVar11;
      *(undefined1 *)((longlong)param_3 + 0x2e) = 0xc;
      uVar9 = uVar9 + 1 & 0xff;
      *(undefined1 *)((longlong)param_3 + 0x32) = 0;
      bVar11 = bVar11 + 3;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 3;
    }
    if ((param_1 >> 5 & 1) != 0) {
      bVar3 = (byte)uVar9;
      *(byte *)((longlong)param_3 + 0x37) = bVar11;
      uVar9 = uVar9 + 1 & 0xff;
      *(undefined2 *)(param_3 + 0xd) = 0x100;
      bVar11 = bVar11 + 1;
      *(undefined1 *)((longlong)param_3 + 0x36) = 4;
      *(undefined1 *)(param_3 + 0xe) = 0;
      *(undefined1 *)((longlong)param_3 + 0x3a) = 1;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 4;
    }
    if ((param_1 >> 6 & 1) != 0) {
      bVar3 = (byte)uVar9;
      *(byte *)((longlong)param_3 + 0x3f) = bVar11;
      uVar9 = uVar9 + 1 & 0xff;
      *(undefined2 *)(param_3 + 0xf) = 0x400;
      bVar11 = bVar11 + 1;
      *(undefined1 *)((longlong)param_3 + 0x3e) = 4;
      *(undefined1 *)(param_3 + 0x10) = 4;
      *(undefined1 *)((longlong)param_3 + 0x42) = 0;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 5;
    }
    if ((param_1 >> 7 & 1) != 0) {
      bVar3 = (byte)uVar9;
      *(byte *)((longlong)param_3 + 0x47) = bVar11;
      *(undefined2 *)(param_3 + 0x11) = 0x400;
      uVar9 = uVar9 + 1 & 0xff;
      *(undefined1 *)((longlong)param_3 + 0x46) = 4;
      bVar11 = bVar11 + 1;
      *(undefined1 *)(param_3 + 0x12) = 4;
      *(undefined1 *)((longlong)param_3 + 0x4a) = 0;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 6;
    }
    uVar8 = 0;
    if (uVar13 != 0) {
      do {
        bVar3 = (&DAT_18022c654)[(ulonglong)(param_1 >> ((ulonglong)(uVar8 * 2 + 0x10) & 0x3f)) & 3]
        ;
        uVar2 = uVar8 + 7;
        uVar8 = uVar8 + 1;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x17) = bVar11;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x15) = bVar3;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x16) = bVar3 << 2;
        *(undefined1 *)(param_3 + (ulonglong)uVar2 * 2 + 5) = 0;
        bVar11 = bVar3 + bVar11;
        bVar3 = (&DAT_18022c65c)[(ulonglong)bVar3 * 4];
        *(byte *)(param_3 + (ulonglong)uVar2 * 2 + 6) = bVar3;
        *(undefined *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x1a) = (&DAT_18022c640)[bVar3];
        *(char *)((longlong)param_3 + (ulonglong)uVar9 + 0x214) = (char)uVar2;
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar8 < uVar13);
    }
    param_3[4] = 1;
    param_3[2] = uVar9;
    param_3[3] = (uint)bVar11 << 2;
    uVar12 = 0;
    if (uVar9 != 0) {
      do {
        bVar11 = *(byte *)((longlong)param_3 + uVar12 + 0x214);
        uVar7 = (ulonglong)bVar11;
        if ((char)param_3[uVar7 * 2 + 5] != -1) {
          if (bVar11 < 0x11) {
            uVar5 = (&DAT_18022c628)[uVar7];
          }
          else {
            uVar5 = 0xff;
          }
          *(undefined1 *)((longlong)param_3 + uVar7 * 8 + 0x19) = uVar5;
        }
        uVar13 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar13;
      } while (uVar13 < param_3[2]);
    }
    if (0x10 < uVar9) {
      param_3[1] = 4;
      return 0;
    }
    return iVar14;
  }
  return 0;
}

