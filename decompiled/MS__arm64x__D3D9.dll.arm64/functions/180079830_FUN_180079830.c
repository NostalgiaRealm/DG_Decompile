/*
 * FUN_180079830 at 180079830
 * undefined FUN_180079830(void)
 * Address ranges: 180079830-180079caf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180079830(uint param_1,ulonglong param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  byte bVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  
  FUN_1800797d0(param_3);
  *param_3 = param_1;
  param_3[1] = 4;
  if ((param_1 & 0x2001) != 0) {
    return 0;
  }
  if (0x800 < (param_1 & 0xf00)) {
    return 0;
  }
  uVar7 = param_1 & 0x400e;
  if ((uVar7 == 2) || (((param_2 & 1) != 0 && (uVar7 - 6 < 9)))) {
    *(undefined1 *)(param_3 + 6) = 2;
    param_3[5] = 0xc0300;
    uVar10 = 1;
    if ((param_1 & 0x10) != 0) {
      uVar10 = 2;
    }
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
    param_3[1] = uVar10;
    if (uVar7 == 6) {
      iVar5 = 1;
      uVar14 = 1;
      uVar12 = 4;
      pbVar8 = &DAT_18022c660;
      bVar11 = 4;
    }
    else if (uVar7 == 8) {
      iVar5 = 2;
      uVar14 = 2;
      uVar12 = 8;
      pbVar8 = &DAT_18022c664;
      bVar11 = 5;
    }
    else if (uVar7 == 10) {
      iVar5 = 3;
      uVar14 = 3;
      uVar12 = 0xc;
      pbVar8 = &DAT_18022c668;
      bVar11 = 6;
    }
    else if (uVar7 == 0xc) {
      iVar5 = 4;
      uVar14 = 4;
      uVar12 = 0x10;
      pbVar8 = &DAT_18022c66c;
      bVar11 = 7;
    }
    else {
      bVar11 = 3;
      if (uVar7 != 0xe) goto LAB_180079950;
      iVar5 = 5;
      uVar14 = 5;
      uVar12 = 0x14;
      pbVar8 = &DAT_18022c670;
      bVar11 = 8;
    }
    bVar3 = *pbVar8;
    *(undefined1 *)(param_3 + 7) = 0;
    uVar10 = 1;
    *(undefined1 *)((longlong)param_3 + 0x1d) = uVar14;
    *(undefined1 *)((longlong)param_3 + 0x1e) = uVar12;
    *(undefined1 *)((longlong)param_3 + 0x1f) = 3;
    *(byte *)(param_3 + 8) = bVar3;
    *(undefined *)((longlong)param_3 + 0x22) = (&DAT_18022c640)[bVar3];
    uVar7 = 2;
    *(undefined1 *)((longlong)param_3 + 0x215) = 1;
  }
  else {
    if (uVar7 == 4) {
      if ((param_1 >> 4 & 1) != 0) {
        return 0;
      }
      param_3[1] = 0;
    }
    else {
      if (uVar7 != 0x4002) {
        return 0;
      }
      param_3[1] = 3;
    }
    *(undefined1 *)(param_3 + 6) = 3;
    param_3[5] = 0x100400;
    bVar11 = 4;
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
LAB_180079950:
    uVar7 = 1;
    iVar5 = 0;
    uVar10 = 0;
  }
  if ((param_1 >> 0xc & 1) != 0) {
    if (iVar5 == 0) {
      iVar4 = 0;
      goto LAB_180079a6c;
    }
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((longlong)param_3 + 0x1d) + -1;
    *(char *)((longlong)param_3 + 0x1d) = cVar1;
    uVar6 = uVar7;
    if (cVar1 == '\0') {
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
      uVar6 = uVar10;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(byte *)((longlong)param_3 + 0x27) = bVar11 - 1;
    uVar7 = uVar6 + 1;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    *(undefined1 *)(param_3 + 10) = 5;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 2;
    *(undefined1 *)((longlong)param_3 + (ulonglong)(byte)uVar6 + 0x214) = 2;
  }
  iVar4 = 1;
LAB_180079a6c:
  if ((param_1 & 0x9000) == 0x9000) {
    iVar4 = 0;
  }
  if ((param_1 >> 0xf & 1) != 0) {
    if (iVar5 == 0) {
      return 0;
    }
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    cVar1 = *(char *)((longlong)param_3 + 0x1d) + -1;
    *(char *)((longlong)param_3 + 0x1d) = cVar1;
    if (cVar1 == '\0') {
      uVar7 = uVar7 + 0xff;
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(byte *)((longlong)param_3 + 0x27) = bVar11 - 1;
    bVar3 = (byte)uVar7;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    uVar7 = uVar7 + 1 & 0xff;
    *(undefined1 *)(param_3 + 10) = 4;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 0;
    *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 2;
  }
  if (iVar4 != 0) {
    uVar10 = param_1 >> 8 & 0xf;
    if ((param_1 >> 4 & 1) != 0) {
      *(byte *)((longlong)param_3 + 0x2f) = bVar11;
      *(undefined2 *)(param_3 + 0xb) = 0x300;
      *(undefined1 *)((longlong)param_3 + 0x2e) = 0xc;
      bVar3 = (byte)uVar7;
      *(undefined1 *)(param_3 + 0xc) = 2;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined1 *)((longlong)param_3 + 0x32) = 0;
      bVar11 = bVar11 + 3;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 3;
    }
    if ((param_1 >> 5 & 1) != 0) {
      *(undefined2 *)(param_3 + 0xd) = 0x100;
      bVar3 = (byte)uVar7;
      *(byte *)((longlong)param_3 + 0x37) = bVar11;
      *(undefined1 *)((longlong)param_3 + 0x36) = 4;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined1 *)(param_3 + 0xe) = 0;
      bVar11 = bVar11 + 1;
      *(undefined1 *)((longlong)param_3 + 0x3a) = 1;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 4;
    }
    if ((param_1 >> 6 & 1) != 0) {
      bVar3 = (byte)uVar7;
      *(byte *)((longlong)param_3 + 0x3f) = bVar11;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined2 *)(param_3 + 0xf) = 0x400;
      bVar11 = bVar11 + 1;
      *(undefined1 *)((longlong)param_3 + 0x3e) = 4;
      *(undefined1 *)(param_3 + 0x10) = 4;
      *(undefined1 *)((longlong)param_3 + 0x42) = 0;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 5;
    }
    if ((param_1 >> 7 & 1) != 0) {
      *(undefined2 *)(param_3 + 0x11) = 0x400;
      bVar3 = (byte)uVar7;
      *(byte *)((longlong)param_3 + 0x47) = bVar11;
      *(undefined1 *)((longlong)param_3 + 0x46) = 4;
      *(undefined1 *)(param_3 + 0x12) = 4;
      uVar7 = uVar7 + 1 & 0xff;
      *(undefined1 *)((longlong)param_3 + 0x4a) = 0;
      bVar11 = bVar11 + 1;
      *(undefined1 *)((longlong)param_3 + (ulonglong)bVar3 + 0x214) = 6;
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        bVar3 = (&DAT_18022c654)[(ulonglong)(param_1 >> ((ulonglong)(uVar6 * 2 + 0x10) & 0x3f)) & 3]
        ;
        uVar2 = uVar6 + 7;
        uVar6 = uVar6 + 1;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x17) = bVar11;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x15) = bVar3;
        *(byte *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x16) = bVar3 << 2;
        *(undefined1 *)(param_3 + (ulonglong)uVar2 * 2 + 5) = 0;
        bVar11 = bVar3 + bVar11;
        bVar3 = (&DAT_18022c65c)[(ulonglong)bVar3 * 4];
        *(byte *)(param_3 + (ulonglong)uVar2 * 2 + 6) = bVar3;
        *(undefined *)((longlong)param_3 + (ulonglong)uVar2 * 8 + 0x1a) = (&DAT_18022c640)[bVar3];
        *(char *)((longlong)param_3 + (ulonglong)uVar7 + 0x214) = (char)uVar2;
        uVar7 = uVar7 + 1 & 0xff;
      } while (uVar6 < uVar10);
    }
    param_3[4] = 1;
    param_3[2] = uVar7;
    param_3[3] = (uint)bVar11 << 2;
    uVar9 = 0;
    if (uVar7 != 0) {
      do {
        bVar11 = *(byte *)((longlong)param_3 + uVar9 + 0x214);
        uVar13 = (ulonglong)bVar11;
        if ((char)param_3[uVar13 * 2 + 5] != -1) {
          if (bVar11 < 0x11) {
            uVar12 = (&DAT_18022c628)[uVar13];
          }
          else {
            uVar12 = 0xff;
          }
          *(undefined1 *)((longlong)param_3 + uVar13 * 8 + 0x19) = uVar12;
        }
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
      } while (uVar10 < param_3[2]);
    }
    if (0x10 < uVar7) {
      param_3[1] = 4;
      return 0;
    }
    return iVar4;
  }
  return 0;
}

