/*
 * FUN_10075b38 at 10075b38
 * undefined FUN_10075b38(void)
 * Address ranges: 10075b38-1007757b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075b38(int param_1,int param_2,int param_3,undefined4 param_4,ulonglong param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  byte bVar19;
  bool bVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  fVar21 = (float)param_5;
  bVar19 = (byte)param_5;
  switch(param_4) {
  case 7:
    bVar20 = fVar21 != 0.0;
    *(uint *)(param_2 + 0x734) = (uint)bVar20;
    *(uint *)(param_2 + 0x700) = (uint)bVar20;
    *(uint *)(param_2 + 0xad0) = (uint)bVar20;
    *(undefined1 *)(param_3 + 0xb) = 1;
    uVar23 = ~(*(uint *)(param_1 + 0x7634) >> 1) & 1;
    uVar22 = 0;
    if (!bVar20) {
      uVar22 = 2;
    }
    uVar22 = uVar22 | uVar23;
    uVar11 = *(uint *)(param_1 + 0x6e7c);
    *(uint *)(param_1 + 0x6e7c) = uVar22;
    uVar23 = uVar23 ^ 1;
    *(byte *)(param_1 + 0xf671) = uVar11 != uVar22 | *(byte *)(param_1 + 0xf671);
    uVar22 = *(uint *)(param_1 + 0xe00);
    *(uint *)(param_1 + 0xe00) = uVar23;
    *(byte *)(param_1 + 0xf66d) = uVar22 != uVar23 | *(byte *)(param_1 + 0xf66d);
    return;
  case 8:
    uVar28 = 2;
    if (fVar21 != 2.8026e-45) {
      uVar28 = 3;
    }
    *(undefined4 *)(param_2 + 0xd58) = uVar28;
    *(bool *)(param_2 + 0x75b1) = fVar21 == 1.4013e-45;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_2 + 0x75b0) = fVar21 == 1.4013e-45;
    uVar10 = 0x80000000000000;
    if (fVar21 != 1.4013e-45) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0xf30) = uVar10 | *(ulonglong *)(param_2 + 0xf30) & 0xff7fffffffffffff;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0xe:
    uVar23 = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0x738) = uVar23;
    *(uint *)(param_2 + 0x704) = uVar23;
    *(uint *)(param_2 + 0xad4) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_2 + 0x75ae) = fVar21 != 0.0;
    if (fVar21 == 0.0) {
      uVar28 = 0;
    }
    else {
      uVar28 = *(undefined4 *)(param_2 + 0x7574);
    }
    *(undefined4 *)(param_2 + 0x68d4) = uVar28;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x13:
    if (0xf < (uint)fVar21) {
      return;
    }
    uVar28 = *(undefined4 *)(&DAT_10161fa0 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xb3c) = uVar28;
    uVar18 = *(undefined4 *)(&DAT_10161f20 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xbbc) = uVar18;
    uVar27 = *(undefined4 *)(&DAT_10161f60 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xb48) = uVar27;
    uVar14 = *(undefined4 *)(&DAT_10161ee0 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xbc8) = uVar14;
    *(undefined4 *)(param_2 + 0xc3c) = uVar28;
    *(undefined4 *)(param_2 + 0xcbc) = uVar18;
    if (fVar21 == 1.54143e-44) {
      uVar26 = 6;
LAB_10075d58:
      *(undefined4 *)(param_2 + 0xbc0) = uVar26;
      *(undefined4 *)(param_2 + 0xb40) = uVar26;
      *(undefined4 *)(param_2 + 0xbcc) = uVar26;
      *(undefined4 *)(param_2 + 0xb4c) = uVar26;
      *(undefined4 *)(param_2 + 0xcc0) = uVar26;
      *(undefined4 *)(param_2 + 0xc40) = uVar26;
    }
    else if (fVar21 == 1.82169e-44) {
      uVar26 = 5;
      goto LAB_10075d58;
    }
    *(undefined4 *)(param_2 + 0xb5c) = uVar28;
    *(undefined4 *)(param_2 + 0xb68) = uVar27;
    *(undefined4 *)(param_2 + 0xbdc) = uVar18;
    *(undefined4 *)(param_2 + 0xbe8) = uVar14;
    *(undefined4 *)(param_2 + 0xc5c) = uVar28;
    *(undefined4 *)(param_2 + 0xcdc) = uVar18;
    if (fVar21 == 1.82169e-44) {
      uVar26 = *(undefined4 *)(param_2 + 0xb40);
      *(undefined4 *)(param_2 + 0xb60) = uVar26;
      uVar12 = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xb6c) = uVar12;
      uVar13 = *(undefined4 *)(param_2 + 0xc40);
      *(undefined4 *)(param_2 + 0xc60) = uVar13;
      *(undefined4 *)(param_2 + 0xb7c) = uVar28;
      *(undefined4 *)(param_2 + 0xb88) = uVar27;
      *(undefined4 *)(param_2 + 0xbfc) = uVar18;
      *(undefined4 *)(param_2 + 0xc08) = uVar14;
      *(undefined4 *)(param_2 + 0xc7c) = uVar28;
      *(undefined4 *)(param_2 + 0xcfc) = uVar18;
      *(undefined4 *)(param_2 + 0xb80) = uVar26;
      *(undefined4 *)(param_2 + 0xb8c) = uVar12;
      *(undefined4 *)(param_2 + 0xc80) = uVar13;
      *(undefined4 *)(param_2 + 0xb9c) = uVar28;
      *(undefined4 *)(param_2 + 0xba8) = uVar27;
      *(undefined4 *)(param_2 + 0xc1c) = uVar18;
      *(undefined4 *)(param_2 + 0xc28) = uVar14;
      *(undefined4 *)(param_2 + 0xc9c) = uVar28;
      *(undefined4 *)(param_2 + 0xd1c) = uVar18;
      *(undefined4 *)(param_2 + 0xba0) = uVar26;
      *(undefined4 *)(param_2 + 0xbac) = uVar12;
      *(undefined4 *)(param_2 + 0xca0) = uVar13;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    puVar4 = (undefined4 *)(param_2 + 0xb40);
    if (fVar21 == 1.54143e-44) {
      *(undefined4 *)(param_2 + 0xb60) = *puVar4;
      *(undefined4 *)(param_2 + 0xb6c) = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xc60) = *(undefined4 *)(param_2 + 0xc40);
    }
    *(undefined4 *)(param_2 + 0xb7c) = uVar28;
    *(undefined4 *)(param_2 + 0xb88) = uVar27;
    *(undefined4 *)(param_2 + 0xbfc) = uVar18;
    *(undefined4 *)(param_2 + 0xc08) = uVar14;
    *(undefined4 *)(param_2 + 0xc7c) = uVar28;
    *(undefined4 *)(param_2 + 0xcfc) = uVar18;
    if (fVar21 == 1.54143e-44) {
      *(undefined4 *)(param_2 + 0xb80) = *puVar4;
      *(undefined4 *)(param_2 + 0xb8c) = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xc80) = *(undefined4 *)(param_2 + 0xc40);
    }
    *(undefined4 *)(param_2 + 0xb9c) = uVar28;
    *(undefined4 *)(param_2 + 0xba8) = uVar27;
    *(undefined4 *)(param_2 + 0xc1c) = uVar18;
    *(undefined4 *)(param_2 + 0xc28) = uVar14;
    *(undefined4 *)(param_2 + 0xc9c) = uVar28;
    *(undefined4 *)(param_2 + 0xd1c) = uVar18;
    if (fVar21 == 1.54143e-44) {
      *(undefined4 *)(param_2 + 0xba0) = *puVar4;
      *(undefined4 *)(param_2 + 0xbac) = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xca0) = *(undefined4 *)(param_2 + 0xc40);
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
LAB_1007720c:
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x14:
    if ((uint)fVar21 < 0x10) {
      uVar28 = *(undefined4 *)(&DAT_10161fa0 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xb40) = uVar28;
      uVar18 = *(undefined4 *)(&DAT_10161f20 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xbc0) = uVar18;
      uVar27 = *(undefined4 *)(&DAT_10161f60 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xb4c) = uVar27;
      uVar14 = *(undefined4 *)(&DAT_10161ee0 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xbcc) = uVar14;
      *(undefined4 *)(param_2 + 0xc40) = uVar28;
      *(undefined4 *)(param_2 + 0xcc0) = uVar18;
      *(undefined4 *)(param_2 + 0xb60) = uVar28;
      *(undefined4 *)(param_2 + 0xbe0) = uVar18;
      *(undefined4 *)(param_2 + 0xb6c) = uVar27;
      *(undefined4 *)(param_2 + 0xbec) = uVar14;
      *(undefined4 *)(param_2 + 0xc60) = uVar28;
      *(undefined4 *)(param_2 + 0xce0) = uVar18;
      *(undefined4 *)(param_2 + 0xb80) = uVar28;
      *(undefined4 *)(param_2 + 0xc00) = uVar18;
      *(undefined4 *)(param_2 + 0xb8c) = uVar27;
      *(undefined4 *)(param_2 + 0xc0c) = uVar14;
      *(undefined4 *)(param_2 + 0xc80) = uVar28;
      *(undefined4 *)(param_2 + 0xd00) = uVar18;
      *(undefined4 *)(param_2 + 0xba0) = uVar28;
      *(undefined4 *)(param_2 + 0xc20) = uVar18;
      *(undefined4 *)(param_2 + 0xbac) = uVar27;
      *(undefined4 *)(param_2 + 0xc2c) = uVar14;
      *(undefined4 *)(param_2 + 0xca0) = uVar28;
      *(undefined4 *)(param_2 + 0xd20) = uVar18;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)fVar21 < 4) {
      *(undefined4 *)(param_2 + 0xd5c) = *(undefined4 *)(&DAT_10161ed0 + (int)fVar21 * 4);
      *(undefined1 *)(param_3 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)fVar21 < 9) {
      uVar28 = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0x73c) = uVar28;
      *(undefined4 *)(param_2 + 0x708) = uVar28;
      *(undefined4 *)(param_2 + 0xad8) = uVar28;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x68d0) = (uint)fVar21 & 0xff;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6438) = *(undefined4 *)(param_2 + 0x68d0);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x19:
    *(float *)(param_2 + 0x7574) = fVar21;
    *(ulonglong *)(param_2 + 0xf30) =
         (*(ulonglong *)(param_2 + 0xf30) ^ (ulonglong)((int)fVar21 - 1) << 0x34) &
         0xff8fffffffffffff ^ (ulonglong)((int)fVar21 - 1) << 0x34;
    if (*(char *)(param_2 + 0x75ae) == '\0') {
      fVar21 = 0.0;
    }
    *(float *)(param_2 + 0x68d4) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1a:
    *(bool *)(param_2 + 0x75bd) = fVar21 != 0.0;
    uVar10 = 0x1000000000000000;
    if (fVar21 != 0.0) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0xf30) = uVar10 | *(ulonglong *)(param_2 + 0xf30) & 0xefffffffffffffff;
    if ((fVar21 == 0.0) && (*(char *)(param_2 + 0x75be) != '\0')) {
      iVar25 = 1;
    }
    else {
      iVar25 = 0;
    }
    *(byte *)(param_3 + 0x11) = *(int *)(param_2 + 0x68ec) != iVar25 | *(byte *)(param_3 + 0x11);
    *(int *)(param_2 + 0x68ec) = iVar25;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    bVar20 = fVar21 != 0.0;
    *(uint *)(param_2 + 3000) = (uint)bVar20;
    *(uint *)(param_2 + 0xb38) = (uint)bVar20;
    uVar23 = (uint)bVar20;
    *(uint *)(param_2 + 0xcb8) = uVar23;
    *(uint *)(param_2 + 0xc38) = uVar23;
    *(uint *)(param_2 + 0xcd8) = uVar23;
    *(uint *)(param_2 + 0xc58) = uVar23;
    uVar23 = (uint)bVar20;
    *(uint *)(param_2 + 0xbd8) = uVar23;
    *(uint *)(param_2 + 0xb58) = uVar23;
    *(uint *)(param_2 + 0xcf8) = uVar23;
    *(uint *)(param_2 + 0xc78) = uVar23;
    *(uint *)(param_2 + 0xbf8) = uVar23;
    *(uint *)(param_2 + 0xb78) = uVar23;
    *(uint *)(param_2 + 0xd18) = uVar23;
    *(uint *)(param_2 + 0xc98) = uVar23;
    *(uint *)(param_2 + 0xc18) = (uint)bVar20;
    *(uint *)(param_2 + 0xb98) = (uint)bVar20;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x1c:
    bVar20 = fVar21 == 0.0;
    uVar28 = 0x3f800000;
    if (bVar20) {
      uVar28 = 0;
    }
    *(undefined4 *)(param_2 + 0x68d8) = uVar28;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75bc) = !bVar20;
    uVar10 = 0x200000000000000;
    if (bVar20) {
      uVar10 = 0;
    }
    *(ulonglong *)(param_2 + 0xf30) = uVar10 | *(ulonglong *)(param_2 + 0xf30) & 0xfdffffffffffffff;
    *(undefined1 *)(param_3 + 8) = 1;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xfbffffff;
    if (!bVar20) {
      uVar23 = uVar22 | 0x4000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x1d:
    *(uint *)(param_2 + 0x68c8) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x644c) = fVar21;
    *(undefined1 *)(param_3 + 0x43) = 1;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xffefffff;
    if (fVar21 != 0.0) {
      uVar23 = uVar22 | 0x100000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x22:
    *(float *)(param_2 + 0x6930) = (float)((uint)fVar21 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6934) = (float)((uint)fVar21 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6938) = (float)((uint)fVar21 & 0xff) / 255.0;
    *(float *)(param_2 + 0x693c) = (float)((uint)fVar21 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x63b0) = *(undefined4 *)(param_2 + 0x6930);
    *(undefined4 *)(param_2 + 0x63b4) = *(undefined4 *)(param_2 + 0x6934);
    *(undefined4 *)(param_2 + 0x63b8) = *(undefined4 *)(param_2 + 0x6938);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x23:
    *(float *)(param_2 + 0x68f8) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x7588) = fVar21;
    *(ulonglong *)(param_2 + 0xf30) =
         (*(ulonglong *)(param_2 + 0xf30) ^ param_5 << 0x3a) & 0xf3ffffffffffffff ^ param_5 << 0x3a;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(fVar21)) {
      fVar21 = (float)((uint)fVar21 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68dc) = *(float *)(param_2 + 0x68e4) - fVar21;
    *(float *)(param_2 + 0x68e0) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5118) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x25:
    if (1e+37 <= ABS(fVar21)) {
      fVar21 = (float)((uint)fVar21 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68e4) = fVar21;
    *(float *)(param_2 + 0x68dc) = fVar21 - *(float *)(param_2 + 0x68e0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6444) = *(undefined4 *)(param_2 + 0x68e4);
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5114) = *(undefined4 *)(param_2 + 0x68e4);
    *(undefined4 *)(param_2 + 0x5118) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x26:
    *(float *)(param_2 + 0x68e8) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6440) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5110) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x30:
    *(uint *)(param_2 + 0x68f0) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xefffffff;
    if (fVar21 != 0.0) {
      uVar23 = uVar22 | 0x10000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x34:
    *(uint *)(param_2 + 0x70c) = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0xadc) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)fVar21 < 9) {
      uVar28 = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0x724) = uVar28;
      *(undefined4 *)(param_2 + 0x714) = uVar28;
      *(undefined4 *)(param_2 + 0xae4) = uVar28;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)fVar21 < 9) {
      uVar28 = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0x728) = uVar28;
      *(undefined4 *)(param_2 + 0x718) = uVar28;
      *(undefined4 *)(param_2 + 0xae8) = uVar28;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)fVar21 < 9) {
      uVar28 = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0x72c) = uVar28;
      *(undefined4 *)(param_2 + 0x71c) = uVar28;
      *(undefined4 *)(param_2 + 0xaec) = uVar28;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)fVar21 < 9) {
      uVar28 = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0x730) = uVar28;
      *(undefined4 *)(param_2 + 0x720) = uVar28;
      *(undefined4 *)(param_2 + 0xaf0) = uVar28;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(byte *)(param_2 + 0x74f0) = bVar19;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3a:
    *(byte *)(param_2 + 0x710) = bVar19;
    *(byte *)(param_2 + 0xae0) = bVar19;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3b:
    *(byte *)(param_2 + 0x711) = bVar19;
    *(byte *)(param_2 + 0xae1) = bVar19;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3c:
    *(float *)(param_2 + 0x6940) = (float)((uint)fVar21 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6944) = (float)((uint)fVar21 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6948) = (float)((uint)fVar21 & 0xff) / 255.0;
    *(float *)(param_2 + 0x694c) = (float)((uint)fVar21 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6450) = *(undefined4 *)(param_2 + 0x6940);
    *(undefined4 *)(param_2 + 0x6454) = *(undefined4 *)(param_2 + 0x6944);
    *(undefined4 *)(param_2 + 0x6458) = *(undefined4 *)(param_2 + 0x6948);
    *(undefined4 *)(param_2 + 0x645c) = *(undefined4 *)(param_2 + 0x694c);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x80:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff0 | (uint)fVar21 & 0xf;
    return;
  case 0x81:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xffffff00 |
         *(uint *)(param_2 + 0x75a8) & 0xf | ((uint)fVar21 & 0xf) << 4;
    return;
  case 0x82:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xfffff000 |
         *(uint *)(param_2 + 0x75a8) & 0xff | ((uint)fVar21 & 0xf) << 8;
    return;
  case 0x83:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xffff0000 |
         *(uint *)(param_2 + 0x75a8) & 0xfff | ((uint)fVar21 & 0xf) << 0xc;
    return;
  case 0x84:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xfff00000 |
         *(uint *)(param_2 + 0x75a8) & 0xffff | ((uint)fVar21 & 0xf) << 0x10;
    return;
  case 0x85:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xff000000 |
         *(uint *)(param_2 + 0x75a8) & 0xfffff | ((uint)fVar21 & 0xf) << 0x14;
    return;
  case 0x86:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xf0000000 |
         *(uint *)(param_2 + 0x75a8) & 0xffffff | ((uint)fVar21 & 0xf) << 0x18;
    return;
  case 0x87:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff | (int)fVar21 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_2 + 0x68cc) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8b:
    *(float *)(param_2 + 0x6920) = (float)((uint)fVar21 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6924) = (float)((uint)fVar21 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6928) = (float)((uint)fVar21 & 0xff) / 255.0;
    *(float *)(param_2 + 0x692c) = (float)((uint)fVar21 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8c:
    *(float *)(param_2 + 0x68fc) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x511c) = *(undefined4 *)(param_2 + 0x68fc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    puVar1 = (uint *)(param_2 + 0xf0c);
    uVar23 = *puVar1;
    *puVar1 = uVar23 & 0xfcffffff;
    if ((uint)fVar21 < 4) {
      *puVar1 = uVar23 & 0xfcffffff | (int)fVar21 << 0x18;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x75af) = fVar21 != 0.0;
    puVar1 = (uint *)(param_2 + 0xef4);
    puVar2 = (uint *)(param_2 + 0xf04);
    puVar3 = (uint *)(param_2 + 0xf08);
    if (fVar21 == 0.0) {
      *(undefined8 *)(param_2 + 28000) = 0;
      *(undefined8 *)(param_2 + 0x6d68) = 0;
      *puVar1 = *puVar1 & 0xffffff00;
      *puVar2 = *puVar2 | 0xff;
      *puVar3 = *puVar3 | 0xff;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
    iVar25 = *(int *)(param_2 + 0x7578);
    *(int *)(param_2 + 28000) = iVar25;
    iVar15 = *(int *)(param_2 + 0x757c);
    uVar23 = 0;
    if (iVar25 != 2) {
      uVar23 = 0x30;
    }
    *(int *)(param_2 + 0x6d64) = iVar15;
    uVar16 = *(uint *)(param_2 + 0x7580);
    *(uint *)(param_2 + 0x6d68) = uVar16;
    iVar17 = *(int *)(param_2 + 0x7584);
    *(int *)(param_2 + 0x6d6c) = iVar17;
    uVar22 = (*puVar1 ^ iVar25 << 4) & 0x30 ^ *puVar1;
    uVar22 = ((uVar22 ^ iVar15 << 6) & 0xc0 ^ uVar22) & 0xfffffffc | uVar16 & 3;
    uVar11 = 0;
    if (iVar15 != 2) {
      uVar11 = 0xc0;
    }
    uVar5 = 0;
    if (uVar16 != 2) {
      uVar5 = 3;
    }
    uVar6 = 0;
    if (iVar17 != 2) {
      uVar6 = 0xc;
    }
    uVar7 = 0;
    if (iVar25 != 1) {
      uVar7 = 0x30;
    }
    uVar8 = 0;
    if (iVar15 != 1) {
      uVar8 = 0xc0;
    }
    uVar9 = 0;
    if (uVar16 != 1) {
      uVar9 = 3;
    }
    uVar16 = 0;
    if (iVar17 != 1) {
      uVar16 = 0xc;
    }
    *puVar1 = (uVar22 ^ iVar17 << 2) & 0xc ^ uVar22;
    *puVar2 = uVar7 | *puVar2 & 0xffffff00 | uVar8 | uVar9 | uVar16;
    *puVar3 = uVar23 | *puVar3 & 0xffffff00 | uVar11 | uVar5 | uVar6;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_2 + 0x68c0) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xdfffffff;
    if (fVar21 != 0.0) {
      uVar23 = uVar22 | 0x20000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x8f:
    *(uint *)(param_2 + 0x68c4) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xff7fffff;
    if (fVar21 != 0.0) {
      uVar23 = uVar22 | 0x800000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x91:
    *(float *)(param_2 + 0x7578) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 28000) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar23 = *(uint *)(param_2 + 0xef4);
      *(uint *)(param_2 + 0xef4) = uVar23 & 0xffffffc0 | uVar23 & 0xf | ((uint)fVar21 & 3) << 4;
      uVar23 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar23 = 0x30;
      }
      *(uint *)(param_2 + 0xf04) = uVar23 | *(uint *)(param_2 + 0xf04) & 0xffffffcf;
      uVar23 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar23 = 0x30;
      }
      *(uint *)(param_2 + 0xf08) = uVar23 | *(uint *)(param_2 + 0xf08) & 0xffffffcf;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x757c) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d64) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar23 = *(uint *)(param_2 + 0xef4);
      *(uint *)(param_2 + 0xef4) = uVar23 & 0xffffff00 | uVar23 & 0x3f | ((uint)fVar21 & 3) << 6;
      uVar23 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar23 = 0xc0;
      }
      *(uint *)(param_2 + 0xf04) = uVar23 | *(uint *)(param_2 + 0xf04) & 0xffffff3f;
      uVar23 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar23 = 0xc0;
      }
      *(uint *)(param_2 + 0xf08) = uVar23 | *(uint *)(param_2 + 0xf08) & 0xffffff3f;
      return;
    }
    break;
  case 0x93:
    *(float *)(param_2 + 0x7580) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d68) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xfffffffc | (uint)fVar21 & 3;
      uVar23 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar23 = 3;
      }
      *(uint *)(param_2 + 0xf04) = uVar23 | *(uint *)(param_2 + 0xf04) & 0xfffffffc;
      uVar23 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar23 = 3;
      }
      *(uint *)(param_2 + 0xf08) = uVar23 | *(uint *)(param_2 + 0xf08) & 0xfffffffc;
      return;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x7584) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d6c) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      uVar23 = *(uint *)(param_2 + 0xef4);
      *(uint *)(param_2 + 0xef4) = uVar23 & 0xfffffff0 | uVar23 & 3 | ((uint)fVar21 & 3) << 2;
      uVar23 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar23 = 0xc;
      }
      *(uint *)(param_2 + 0xf04) = uVar23 | *(uint *)(param_2 + 0xf04) & 0xfffffff3;
      uVar23 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar23 = 0xc;
      }
      *(uint *)(param_2 + 0xf08) = uVar23 | *(uint *)(param_2 + 0xf08) & 0xfffffff3;
      return;
    }
    break;
  case 0x97:
    *(uint *)(param_2 + 0x6e74) = (uint)(fVar21 == 3.57331e-43);
    if (fVar21 == 3.58732e-43) {
      fVar24 = 7.00649e-45;
    }
    else {
      fVar24 = 0.0;
      if ((uint)fVar21 < 4) {
        fVar24 = fVar21;
      }
    }
    *(float *)(param_2 + 0x759c) = fVar24;
    uVar22 = *(uint *)(param_2 + 0xf0c);
    uVar23 = uVar22 & 0xffdfffff;
    if (fVar24 == 3.57331e-43) {
      uVar23 = uVar22 | 0x200000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar23;
    return;
  case 0x98:
    *(uint *)(param_2 + 0x6dd0) = -(uint)((param_5 & 1) != 0);
    *(uint *)(param_2 + 0x6dd4) = -(uint)((param_5 & 2) != 0);
    *(uint *)(param_2 + 0x6dd8) = -(uint)((param_5 & 4) != 0);
    *(uint *)(param_2 + 0x6ddc) = -(uint)((param_5 & 8) != 0);
    *(uint *)(param_2 + 0x6de0) = -(uint)((param_5 & 0x10) != 0);
    *(uint *)(param_2 + 0x6de4) = -(uint)((param_5 & 0x20) != 0);
    *(uint *)(param_2 + 0x75a0) = (uint)fVar21 & 0x3f;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6420) = *(undefined4 *)(param_2 + 0x6dd0);
    *(undefined4 *)(param_2 + 0x6424) = *(undefined4 *)(param_2 + 0x6dd4);
    *(undefined4 *)(param_2 + 0x6428) = *(undefined4 *)(param_2 + 0x6dd8);
    *(undefined4 *)(param_2 + 0x642c) = *(undefined4 *)(param_2 + 0x6ddc);
    *(undefined4 *)(param_2 + 0x6430) = *(undefined4 *)(param_2 + 0x6de0);
    *(undefined4 *)(param_2 + 0x6434) = *(undefined4 *)(param_2 + 0x6de4);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x9a:
    *(float *)(param_2 + 0x6e80) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if ((*(float *)(param_2 + 0x6e80) != 1.0) &&
       ((*(float *)(param_2 + 0x6e88) != 1.0 || (*(float *)(param_2 + 0x6e84) != 1.0)))) {
LAB_10076d14:
      *(undefined1 *)(param_2 + 0x75b7) = 1;
      return;
    }
    goto LAB_10076d20;
  case 0x9b:
    *(float *)(param_2 + 0x6e88) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_10076d14;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
    goto LAB_10076d20;
  case 0x9c:
    *(uint *)(param_2 + 0x6e8c) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9d:
    *(uint *)(param_2 + 0x6e90) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75b6) = fVar21 != 0.0;
    return;
  case 0x9e:
    *(float *)(param_2 + 0x6e94) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9f:
    *(float *)(param_2 + 0x6e98) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa0:
    *(float *)(param_2 + 0x6e9c) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa2:
    *(float *)(param_1 + 0xe38) = fVar21;
    *(undefined1 *)(param_1 + 0xf66c) = 1;
    return;
  case 0xa6:
    *(float *)(param_2 + 0x6e84) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_10076d14;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
LAB_10076d20:
    *(undefined1 *)(param_2 + 0x75b7) = 0;
    return;
  case 0xa7:
    *(uint *)(param_2 + 0x6e70) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa8:
    bVar19 = bVar19 & 0xf;
    *(byte *)(param_2 + 0xbd4) = bVar19;
    *(byte *)(param_2 + 0xb54) = bVar19;
    *(byte *)(param_2 + 0xcd4) = bVar19;
    *(byte *)(param_2 + 0xc54) = bVar19;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xaa:
    *(float *)(param_2 + 0x6e78) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xab:
    if (5 < (uint)fVar21) {
      fVar21 = 1.4013e-45;
    }
    uVar28 = *(undefined4 *)(&DAT_10161fdc + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xcc4) = uVar28;
    *(undefined4 *)(param_2 + 0xc44) = uVar28;
    *(undefined4 *)(param_2 + 0xbd0) = uVar28;
    *(undefined4 *)(param_2 + 0xb50) = uVar28;
    *(undefined4 *)(param_2 + 0xbc4) = uVar28;
    *(undefined4 *)(param_2 + 0xb44) = uVar28;
    *(undefined4 *)(param_2 + 0xce4) = uVar28;
    *(undefined4 *)(param_2 + 0xc64) = uVar28;
    *(undefined4 *)(param_2 + 0xbf0) = uVar28;
    *(undefined4 *)(param_2 + 0xb70) = uVar28;
    *(undefined4 *)(param_2 + 0xbe4) = uVar28;
    *(undefined4 *)(param_2 + 0xb64) = uVar28;
    *(undefined4 *)(param_2 + 0xd04) = uVar28;
    *(undefined4 *)(param_2 + 0xc84) = uVar28;
    *(undefined4 *)(param_2 + 0xc10) = uVar28;
    *(undefined4 *)(param_2 + 0xb90) = uVar28;
    *(undefined4 *)(param_2 + 0xc04) = uVar28;
    *(undefined4 *)(param_2 + 0xb84) = uVar28;
    *(undefined4 *)(param_2 + 0xd24) = uVar28;
    *(undefined4 *)(param_2 + 0xca4) = uVar28;
    *(undefined4 *)(param_2 + 0xc30) = uVar28;
    *(undefined4 *)(param_2 + 0xbb0) = uVar28;
    *(undefined4 *)(param_2 + 0xc24) = uVar28;
    *(undefined4 *)(param_2 + 0xba4) = uVar28;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xac:
    bVar20 = fVar21 == 4.2039e-45;
    uVar23 = *(uint *)(param_2 + 0x68bc) & 0xfffffffd;
    uVar22 = *(uint *)(param_2 + 0x68bc) | 2;
    goto LAB_10077564;
  case 0xad:
    bVar20 = fVar21 == 2.8026e-45;
    uVar23 = *(uint *)(param_2 + 0x68bc) & 0xfffffffb;
    uVar22 = *(uint *)(param_2 + 0x68bc) | 4;
LAB_10077564:
    if (bVar20) {
      uVar23 = uVar22;
    }
    *(uint *)(param_2 + 0x68bc) = uVar23;
    *(undefined1 *)(param_3 + 0x11) = 1;
    break;
  case 0xae:
    *(uint *)(param_2 + 0xd9c) = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0xd74) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xaf:
    *(float *)(param_2 + 0xd6c) = fVar21;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xb2:
    uVar28 = 0x3f800000;
    *(float *)(param_2 + 0x6eb0) = fVar21;
    if ((fVar21 < 1.0) || (uVar28 = 0x41000000, 8.0 < fVar21)) {
      *(undefined4 *)(param_2 + 0x6eb0) = uVar28;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5190) = *(undefined4 *)(param_2 + 0x6eb0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb3:
    uVar28 = 0x3f800000;
    *(float *)(param_2 + 0x6eb4) = fVar21;
    if ((fVar21 < 1.0) || (uVar28 = 0x41000000, 8.0 < fVar21)) {
      *(undefined4 *)(param_2 + 0x6eb4) = uVar28;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5194) = *(undefined4 *)(param_2 + 0x6eb4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb4:
    *(float *)(param_2 + 0x6ea0) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5180) = *(undefined4 *)(param_2 + 0x6ea0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb5:
    *(float *)(param_2 + 0x6ea4) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5184) = *(undefined4 *)(param_2 + 0x6ea4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb6:
    *(float *)(param_2 + 0x6ea8) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5188) = *(undefined4 *)(param_2 + 0x6ea8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb7:
    *(float *)(param_2 + 0x6eac) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x518c) = *(undefined4 *)(param_2 + 0x6eac);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb8:
    uVar23 = *(uint *)(param_2 + 0x68bc) & 0xfffffffe;
    if (fVar21 != 0.0) {
      uVar23 = *(uint *)(param_2 + 0x68bc) | 1;
    }
    *(uint *)(param_2 + 0x68bc) = uVar23;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xb9:
    *(bool *)(param_2 + 0x75ba) = fVar21 != 0.0;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xba:
    *(undefined4 *)(param_2 + 0xaf4) = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbb:
    *(undefined4 *)(param_2 + 0xaf8) = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbc:
    *(undefined4 *)(param_2 + 0xafc) = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbd:
    *(undefined4 *)(param_2 + 0xb00) = *(undefined4 *)(&DAT_10161ea8 + (int)fVar21 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbe:
    bVar19 = bVar19 & 0xf;
    *(byte *)(param_2 + 0xcf4) = bVar19;
    *(byte *)(param_2 + 0xc74) = bVar19;
    *(byte *)(param_2 + 0xbf4) = bVar19;
    *(byte *)(param_2 + 0xb74) = bVar19;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xbf:
    bVar19 = bVar19 & 0xf;
    *(byte *)(param_2 + 0xd14) = bVar19;
    *(byte *)(param_2 + 0xc94) = bVar19;
    *(byte *)(param_2 + 0xc14) = bVar19;
    *(byte *)(param_2 + 0xb94) = bVar19;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc0:
    bVar19 = bVar19 & 0xf;
    *(byte *)(param_2 + 0xd34) = bVar19;
    *(byte *)(param_2 + 0xcb4) = bVar19;
    *(byte *)(param_2 + 0xc34) = bVar19;
    *(byte *)(param_2 + 0xbb4) = bVar19;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc1:
    *(float *)(param_2 + 0xdd0) = (float)((uint)fVar21 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd4) = (float)((uint)fVar21 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd8) = (float)((uint)fVar21 & 0xff) / 255.0;
    *(float *)(param_2 + 0xddc) = (float)((uint)fVar21 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc2:
    *(bool *)(param_2 + 0x75ad) = fVar21 != 0.0;
    *(undefined1 *)(param_3 + 10) = 1;
    return;
  case 0xc3:
    *(float *)(param_2 + 0xde0) = fVar21;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xce:
    *(bool *)(param_2 + 0x75b9) = fVar21 != 0.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xcf:
    if (0xf < (uint)fVar21) {
      return;
    }
    uVar28 = *(undefined4 *)(&DAT_10161f60 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xc48) = uVar28;
    uVar18 = *(undefined4 *)(&DAT_10161ee0 + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xcc8) = uVar18;
    if (fVar21 == 1.54143e-44) {
      uVar27 = 6;
LAB_10077134:
      *(undefined4 *)(param_2 + 0xccc) = uVar27;
      *(undefined4 *)(param_2 + 0xc4c) = uVar27;
    }
    else if (fVar21 == 1.82169e-44) {
      uVar27 = 5;
      goto LAB_10077134;
    }
    *(undefined4 *)(param_2 + 0xce8) = uVar18;
    puVar4 = (undefined4 *)(param_2 + 0xc4c);
    *(undefined4 *)(param_2 + 0xc68) = uVar28;
    if (fVar21 == 1.82169e-44) {
      uVar27 = *puVar4;
      *(undefined4 *)(param_2 + 0xc6c) = uVar27;
      *(undefined4 *)(param_2 + 0xc88) = uVar28;
      *(undefined4 *)(param_2 + 0xd08) = uVar18;
      *(undefined4 *)(param_2 + 0xc8c) = uVar27;
      *(undefined4 *)(param_2 + 0xca8) = uVar28;
      *(undefined4 *)(param_2 + 0xd28) = uVar18;
      *(undefined4 *)(param_2 + 0xcac) = uVar27;
    }
    else {
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc6c) = *puVar4;
      }
      *(undefined4 *)(param_2 + 0xc88) = uVar28;
      *(undefined4 *)(param_2 + 0xd08) = uVar18;
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc8c) = *puVar4;
      }
      *(undefined4 *)(param_2 + 0xca8) = uVar28;
      *(undefined4 *)(param_2 + 0xd28) = uVar18;
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xcac) = *puVar4;
        *(undefined1 *)(param_3 + 0xc) = 1;
        return;
      }
    }
    goto LAB_1007720c;
  case 0xd0:
    if ((uint)fVar21 < 0x10) {
      uVar28 = *(undefined4 *)(&DAT_10161f60 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xc4c) = uVar28;
      uVar18 = *(undefined4 *)(&DAT_10161ee0 + (int)fVar21 * 4);
      *(undefined4 *)(param_2 + 0xccc) = uVar18;
      *(undefined4 *)(param_2 + 0xc6c) = uVar28;
      *(undefined4 *)(param_2 + 0xcec) = uVar18;
      *(undefined4 *)(param_2 + 0xc8c) = uVar28;
      *(undefined4 *)(param_2 + 0xd0c) = uVar18;
      *(undefined4 *)(param_2 + 0xcac) = uVar28;
      *(undefined4 *)(param_2 + 0xd2c) = uVar18;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0xd1:
    if (5 < (uint)fVar21) {
      fVar21 = 1.4013e-45;
    }
    uVar28 = *(undefined4 *)(&DAT_10161fdc + (int)fVar21 * 4);
    *(undefined4 *)(param_2 + 0xcd0) = uVar28;
    *(undefined4 *)(param_2 + 0xc50) = uVar28;
    *(undefined4 *)(param_2 + 0xc70) = uVar28;
    *(undefined4 *)(param_2 + 0xcf0) = uVar28;
    *(undefined4 *)(param_2 + 0xc90) = uVar28;
    *(undefined4 *)(param_2 + 0xd10) = uVar28;
    *(undefined4 *)(param_2 + 0xcb0) = uVar28;
    *(undefined4 *)(param_2 + 0xd30) = uVar28;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  }
  return;
}

