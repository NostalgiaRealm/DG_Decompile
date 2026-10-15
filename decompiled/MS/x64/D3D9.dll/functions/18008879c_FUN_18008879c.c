/*
 * FUN_18008879c at 18008879c
 * byte __fastcall FUN_18008879c(uint param_1, char param_2, uint * param_3)
 * Address ranges: 18008879c-180088bd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18008879c(uint param_1,char param_2,uint *param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte *pbVar13;
  char cVar14;
  uint uVar15;
  byte bVar16;
  
  FUN_180088764((undefined1 *)param_3);
  uVar8 = 0;
  *param_3 = param_1;
  param_3[1] = 4;
  if ((param_1 & 0x2001) != 0) {
    return 0;
  }
  if (0x800 < (param_1 & 0xf00)) {
    return 0;
  }
  uVar5 = param_1 & 0x400e;
  uVar15 = 8;
  iVar9 = 0;
  bVar16 = 1;
  if ((uVar5 == 2) || ((param_2 != '\0' && (uVar5 - 6 < 9)))) {
    param_3[5] = 0xc0300;
    *(undefined1 *)(param_3 + 6) = 2;
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
    param_3[1] = ((param_1 & 0x10) != 0) + 1;
    if (uVar5 == 6) {
      uVar4 = 4;
      pbVar13 = &DAT_180102af8;
      uVar15 = 4;
      bVar12 = bVar16;
      iVar9 = 1;
    }
    else if (uVar5 == 8) {
      pbVar13 = &DAT_180102afc;
      uVar4 = 8;
      uVar15 = 5;
      bVar12 = 2;
      iVar9 = 2;
    }
    else if (uVar5 == 10) {
      pbVar13 = &DAT_180102b00;
      uVar4 = 0xc;
      uVar15 = 6;
      bVar12 = 3;
      iVar9 = 3;
    }
    else if (uVar5 == 0xc) {
      pbVar13 = &DAT_180102b04;
      uVar4 = 0x10;
      uVar15 = 7;
      bVar12 = 4;
      iVar9 = 4;
    }
    else {
      if (uVar5 != 0xe) {
        uVar7 = 1;
        uVar15 = 3;
        goto LAB_18008895c;
      }
      uVar4 = 0x14;
      pbVar13 = &DAT_180102b08;
      bVar12 = 5;
      iVar9 = 5;
    }
    *(byte *)((longlong)param_3 + 0x1d) = bVar12;
    bVar12 = *pbVar13;
    uVar7 = 2;
    *(byte *)(param_3 + 8) = bVar12;
    *(undefined1 *)(param_3 + 7) = 0;
    *(undefined1 *)((longlong)param_3 + 0x1e) = uVar4;
    *(undefined *)((longlong)param_3 + 0x22) = (&DAT_180102ae0)[bVar12];
    *(undefined1 *)((longlong)param_3 + 0x1f) = 3;
    *(undefined1 *)((longlong)param_3 + 0x215) = 1;
  }
  else if (uVar5 == 4) {
    if ((param_1 & 0x10) != 0) {
      return 0;
    }
    param_3[1] = 0;
    uVar7 = 1;
    param_3[5] = 0x100400;
    uVar15 = param_1 & 0xe;
    *(undefined1 *)(param_3 + 6) = 3;
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
  }
  else {
    if (uVar5 != 0x4002) {
      return 0;
    }
    param_3[1] = 3;
    uVar15 = 4;
    param_3[5] = 0x100400;
    *(undefined1 *)(param_3 + 6) = 3;
    uVar7 = 1;
    *(undefined1 *)((longlong)param_3 + 0x1a) = 0;
    *(undefined1 *)(param_3 + 0x85) = 0;
  }
LAB_18008895c:
  cVar14 = (char)uVar15;
  bVar12 = bVar16;
  if (((param_1 >> 0xc & 1) != 0) && (bVar12 = 0, iVar9 != 0)) {
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    pcVar1 = (char *)((longlong)param_3 + 0x1d);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      uVar7 = (ulonglong)(byte)((char)uVar7 - 1);
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    *(char *)((longlong)param_3 + 0x27) = cVar14 + -1;
    *(undefined1 *)(param_3 + 10) = 5;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 2;
    *(undefined1 *)(uVar7 + 0x214 + (longlong)param_3) = 2;
    uVar7 = (ulonglong)(byte)((char)uVar7 + 1);
    bVar12 = bVar16;
  }
  uVar11 = uVar8;
  if ((param_1 & 0x9000) != 0x9000) {
    uVar11 = (ulonglong)bVar12;
  }
  bVar16 = (byte)uVar11;
  if ((param_1 >> 0xf & 1) != 0) {
    if (iVar9 == 0) {
      return 0;
    }
    *(char *)((longlong)param_3 + 0x1e) = *(char *)((longlong)param_3 + 0x1e) + -4;
    pcVar1 = (char *)((longlong)param_3 + 0x1d);
    *pcVar1 = *pcVar1 + -1;
    uVar11 = uVar7;
    if (*pcVar1 == '\0') {
      uVar11 = (ulonglong)(byte)((char)uVar7 - 1);
      *(undefined1 *)(param_3 + 7) = 0xff;
      *(undefined1 *)((longlong)param_3 + 0x21) = 0xff;
    }
    *(undefined2 *)(param_3 + 9) = 0x100;
    *(undefined1 *)((longlong)param_3 + 0x26) = 4;
    *(char *)((longlong)param_3 + 0x27) = cVar14 + -1;
    uVar7 = (ulonglong)(byte)((char)uVar11 + 1);
    *(undefined1 *)(param_3 + 10) = 4;
    *(undefined1 *)((longlong)param_3 + 0x2a) = 0;
    *(undefined1 *)(uVar11 + 0x214 + (longlong)param_3) = 2;
  }
  if (bVar16 != 0) {
    uVar5 = param_1 >> 8 & 0xf;
    uVar11 = uVar7;
    if ((param_1 & 0x10) != 0) {
      uVar11 = (ulonglong)(byte)((char)uVar7 + 1);
      *(char *)((longlong)param_3 + 0x2f) = cVar14;
      uVar15 = (uint)(byte)(cVar14 + 3);
      *(undefined2 *)(param_3 + 0xb) = 0x300;
      *(undefined1 *)((longlong)param_3 + 0x2e) = 0xc;
      *(undefined1 *)(param_3 + 0xc) = 2;
      *(undefined1 *)((longlong)param_3 + 0x32) = 0;
      *(undefined1 *)(uVar7 + 0x214 + (longlong)param_3) = 3;
    }
    uVar7 = uVar11;
    if ((param_1 & 0x20) != 0) {
      uVar7 = (ulonglong)(byte)((char)uVar11 + 1);
      *(char *)((longlong)param_3 + 0x37) = (char)uVar15;
      uVar15 = (uint)(byte)((char)uVar15 + 1);
      *(undefined2 *)(param_3 + 0xd) = 0x100;
      *(undefined1 *)((longlong)param_3 + 0x36) = 4;
      *(undefined1 *)(param_3 + 0xe) = 0;
      *(undefined1 *)((longlong)param_3 + 0x3a) = 1;
      *(undefined1 *)(uVar11 + 0x214 + (longlong)param_3) = 4;
    }
    uVar11 = uVar7;
    if ((param_1 & 0x40) != 0) {
      uVar11 = (ulonglong)(byte)((char)uVar7 + 1);
      *(char *)((longlong)param_3 + 0x3f) = (char)uVar15;
      uVar15 = (uint)(byte)((char)uVar15 + 1);
      *(undefined2 *)(param_3 + 0xf) = 0x400;
      *(undefined1 *)((longlong)param_3 + 0x3e) = 4;
      *(undefined1 *)(param_3 + 0x10) = 4;
      *(undefined1 *)((longlong)param_3 + 0x42) = 0;
      *(undefined1 *)(uVar7 + 0x214 + (longlong)param_3) = 5;
    }
    uVar7 = uVar11;
    if ((char)param_1 < '\0') {
      uVar7 = (ulonglong)(byte)((char)uVar11 + 1);
      *(char *)((longlong)param_3 + 0x47) = (char)uVar15;
      uVar15 = (uint)(byte)((char)uVar15 + 1);
      *(undefined2 *)(param_3 + 0x11) = 0x400;
      *(undefined1 *)((longlong)param_3 + 0x46) = 4;
      *(undefined1 *)(param_3 + 0x12) = 4;
      *(undefined1 *)((longlong)param_3 + 0x4a) = 0;
      *(undefined1 *)(uVar11 + 0x214 + (longlong)param_3) = 6;
    }
    uVar3 = (uint)uVar7;
    uVar11 = uVar8;
    if (uVar5 != 0) {
      do {
        bVar12 = (&DAT_180102af4)[param_1 >> ((char)uVar11 * '\x02' + 0x10U & 0x3f) & 3];
        uVar3 = (int)uVar11 + 7;
        uVar6 = (ulonglong)uVar3;
        *(undefined1 *)(param_3 + (ulonglong)uVar3 * 2 + 5) = 0;
        *(byte *)((longlong)param_3 + (ulonglong)uVar3 * 8 + 0x15) = bVar12;
        *(byte *)((longlong)param_3 + uVar6 * 8 + 0x16) = bVar12 << 2;
        bVar2 = (&DAT_180102af4)[(ulonglong)bVar12 * 4];
        *(byte *)(param_3 + uVar6 * 2 + 6) = bVar2;
        *(char *)((longlong)param_3 + uVar6 * 8 + 0x17) = (char)uVar15;
        uVar15 = (uint)(byte)((char)uVar15 + bVar12);
        *(undefined *)((longlong)param_3 + uVar6 * 8 + 0x1a) = (&DAT_180102ae0)[bVar2];
        uVar10 = (int)uVar11 + 1;
        bVar12 = (char)uVar7 + 1;
        uVar3 = (uint)bVar12;
        *(char *)((longlong)param_3 + uVar7 + 0x214) = (char)uVar11 + '\a';
        uVar11 = (ulonglong)uVar10;
        uVar7 = (ulonglong)bVar12;
      } while (uVar10 < uVar5);
    }
    param_3[2] = uVar3;
    param_3[3] = uVar15 << 2;
    param_3[4] = 1;
    if ((byte)uVar3 != 0) {
      do {
        bVar12 = *(byte *)((longlong)param_3 + uVar8 + 0x214);
        uVar7 = (ulonglong)bVar12;
        if ((char)param_3[uVar7 * 2 + 5] != -1) {
          if (bVar12 < 0x11) {
            uVar4 = (&DAT_180102ac8)[uVar7];
          }
          else {
            uVar4 = 0xff;
          }
          *(undefined1 *)((longlong)param_3 + uVar7 * 8 + 0x19) = uVar4;
        }
        uVar5 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar5;
      } while (uVar5 < param_3[2]);
    }
    if (0x10 < (byte)uVar3) {
      param_3[1] = 4;
      bVar16 = 0;
    }
  }
  return bVar16;
}

