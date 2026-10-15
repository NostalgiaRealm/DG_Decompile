/*
 * FUN_180054840 at 180054840
 * undefined FUN_180054840(void)
 * Address ranges: 180054840-180055c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054840(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  ulonglong param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  bool bVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined4 uVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar23;
  
  fVar22 = (float)param_5;
  bVar15 = (byte)param_5;
  switch(param_4) {
  case 7:
    uVar18 = (uint)(fVar22 != 0.0);
    *(uint *)(param_2 + 0x734) = uVar18;
    *(uint *)(param_2 + 0x700) = uVar18;
    *(uint *)(param_2 + 0xad0) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    uVar18 = *(uint *)(param_1 + 0x7654) & 2;
    uVar11 = (uint)(uVar18 == 0) | (uint)(fVar22 == 0.0) << 1;
    uVar6 = *(uint *)(param_1 + 0x6e9c);
    *(uint *)(param_1 + 0x6e9c) = uVar11;
    uVar7 = *(uint *)(param_1 + 0xe20);
    *(byte *)(param_1 + 0xf691) = uVar6 != uVar11 | *(byte *)(param_1 + 0xf691);
    uVar18 = (uint)(uVar18 != 0);
    *(uint *)(param_1 + 0xe20) = uVar18;
    *(byte *)(param_1 + 0xf68d) = uVar7 != uVar18 | *(byte *)(param_1 + 0xf68d);
    return;
  case 8:
    uVar23 = 2;
    if (fVar22 != 2.8026e-45) {
      uVar23 = 3;
    }
    *(undefined4 *)(param_2 + 0xd58) = uVar23;
    *(bool *)(param_2 + 0x75b1) = fVar22 == 1.4013e-45;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_2 + 0x75b0) = fVar22 == 1.4013e-45;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xff7fffffffffffff |
         (ulonglong)(fVar22 == 1.4013e-45) << 0x37;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0xe:
    uVar18 = (uint)(fVar22 != 0.0);
    *(uint *)(param_2 + 0x738) = uVar18;
    *(uint *)(param_2 + 0x704) = uVar18;
    *(uint *)(param_2 + 0xad4) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_2 + 0x75ae) = fVar22 != 0.0;
    if (fVar22 == 0.0) {
      *(undefined4 *)(param_2 + 0x68d4) = 0;
      *(undefined1 *)(param_3 + 8) = 1;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
    *(undefined4 *)(param_2 + 0x68d4) = *(undefined4 *)(param_2 + 0x7574);
    *(undefined1 *)(param_3 + 8) = 1;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x13:
    if (0xf < (uint)fVar22) {
      return;
    }
    lVar1 = (param_5 & 0xffffffff) * 4;
    uVar13 = *(undefined4 *)(&DAT_180231170 + (param_5 & 0xffffffff) * 4);
    uVar23 = *(undefined4 *)(&DAT_180231230 + lVar1);
    uVar14 = *(undefined4 *)(&DAT_1802311b0 + lVar1);
    uVar19 = *(undefined4 *)(&DAT_1802311f0 + lVar1);
    *(undefined4 *)(param_2 + 0xbc8) = uVar13;
    *(undefined4 *)(param_2 + 0xb3c) = uVar23;
    *(undefined4 *)(param_2 + 0xbbc) = uVar14;
    *(undefined4 *)(param_2 + 0xb48) = uVar19;
    *(undefined4 *)(param_2 + 0xc3c) = uVar23;
    *(undefined4 *)(param_2 + 0xcbc) = uVar14;
    if (fVar22 == 1.54143e-44) {
      uVar17 = 6;
    }
    else {
      if (fVar22 != 1.82169e-44) goto LAB_180054a10;
      uVar17 = 5;
    }
    *(undefined4 *)(param_2 + 0xc40) = uVar17;
    *(undefined4 *)(param_2 + 0xcc0) = uVar17;
    *(undefined4 *)(param_2 + 0xb4c) = uVar17;
    *(undefined4 *)(param_2 + 0xbcc) = uVar17;
    *(undefined4 *)(param_2 + 0xb40) = uVar17;
    *(undefined4 *)(param_2 + 0xbc0) = uVar17;
LAB_180054a10:
    *(undefined4 *)(param_2 + 0xb5c) = uVar23;
    *(undefined4 *)(param_2 + 0xb68) = uVar19;
    *(undefined4 *)(param_2 + 0xbdc) = uVar14;
    *(undefined4 *)(param_2 + 0xbe8) = uVar13;
    *(undefined4 *)(param_2 + 0xc5c) = uVar23;
    *(undefined4 *)(param_2 + 0xcdc) = uVar14;
    if (fVar22 == 1.82169e-44) {
      uVar17 = *(undefined4 *)(param_2 + 0xb40);
      *(undefined4 *)(param_2 + 0xb60) = uVar17;
      uVar8 = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xb6c) = uVar8;
      uVar9 = *(undefined4 *)(param_2 + 0xc40);
      *(undefined4 *)(param_2 + 0xc60) = uVar9;
      *(undefined4 *)(param_2 + 0xb7c) = uVar23;
      *(undefined4 *)(param_2 + 0xb88) = uVar19;
      *(undefined4 *)(param_2 + 0xbfc) = uVar14;
      *(undefined4 *)(param_2 + 0xc08) = uVar13;
      *(undefined4 *)(param_2 + 0xc7c) = uVar23;
      *(undefined4 *)(param_2 + 0xcfc) = uVar14;
      *(undefined4 *)(param_2 + 0xb80) = uVar17;
      *(undefined4 *)(param_2 + 0xb8c) = uVar8;
      *(undefined4 *)(param_2 + 0xc80) = uVar9;
      *(undefined4 *)(param_2 + 0xb9c) = uVar23;
      *(undefined4 *)(param_2 + 0xba8) = uVar19;
      *(undefined4 *)(param_2 + 0xc1c) = uVar14;
      *(undefined4 *)(param_2 + 0xc28) = uVar13;
      *(undefined4 *)(param_2 + 0xc9c) = uVar23;
      *(undefined4 *)(param_2 + 0xd1c) = uVar14;
      *(undefined4 *)(param_2 + 0xba0) = uVar17;
      *(undefined4 *)(param_2 + 0xbac) = uVar8;
      *(undefined4 *)(param_2 + 0xca0) = uVar9;
    }
    else {
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xb60) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xb6c) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xc60) = *(undefined4 *)(param_2 + 0xc40);
      }
      *(undefined4 *)(param_2 + 0xb7c) = uVar23;
      *(undefined4 *)(param_2 + 0xb88) = uVar19;
      *(undefined4 *)(param_2 + 0xbfc) = uVar14;
      *(undefined4 *)(param_2 + 0xc08) = uVar13;
      *(undefined4 *)(param_2 + 0xc7c) = uVar23;
      *(undefined4 *)(param_2 + 0xcfc) = uVar14;
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xb80) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xb8c) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xc80) = *(undefined4 *)(param_2 + 0xc40);
      }
      *(undefined4 *)(param_2 + 0xb9c) = uVar23;
      *(undefined4 *)(param_2 + 0xba8) = uVar19;
      *(undefined4 *)(param_2 + 0xc1c) = uVar14;
      *(undefined4 *)(param_2 + 0xc28) = uVar13;
      *(undefined4 *)(param_2 + 0xc9c) = uVar23;
      *(undefined4 *)(param_2 + 0xd1c) = uVar14;
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xba0) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xbac) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xca0) = *(undefined4 *)(param_2 + 0xc40);
        *(undefined1 *)(param_3 + 0xc) = 1;
        return;
      }
    }
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x14:
    if ((uint)fVar22 < 0x10) {
      lVar1 = (param_5 & 0xffffffff) * 4;
      uVar23 = *(undefined4 *)(&DAT_180231230 + lVar1);
      uVar14 = *(undefined4 *)(&DAT_1802311b0 + lVar1);
      uVar19 = *(undefined4 *)(&DAT_1802311f0 + lVar1);
      uVar13 = *(undefined4 *)(&DAT_180231170 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0xb40) = uVar23;
      *(undefined4 *)(param_2 + 0xbc0) = uVar14;
      *(undefined4 *)(param_2 + 0xb4c) = uVar19;
      *(undefined4 *)(param_2 + 0xbcc) = uVar13;
      *(undefined4 *)(param_2 + 0xc40) = uVar23;
      *(undefined4 *)(param_2 + 0xcc0) = uVar14;
      *(undefined4 *)(param_2 + 0xbec) = uVar13;
      *(undefined4 *)(param_2 + 0xb60) = uVar23;
      *(undefined4 *)(param_2 + 0xbe0) = uVar14;
      *(undefined4 *)(param_2 + 0xb6c) = uVar19;
      *(undefined4 *)(param_2 + 0xc60) = uVar23;
      *(undefined4 *)(param_2 + 0xce0) = uVar14;
      *(undefined4 *)(param_2 + 0xb80) = uVar23;
      *(undefined4 *)(param_2 + 0xc00) = uVar14;
      *(undefined4 *)(param_2 + 0xb8c) = uVar19;
      *(undefined4 *)(param_2 + 0xc0c) = uVar13;
      *(undefined4 *)(param_2 + 0xc80) = uVar23;
      *(undefined4 *)(param_2 + 0xd00) = uVar14;
      *(undefined4 *)(param_2 + 0xba0) = uVar23;
      *(undefined4 *)(param_2 + 0xc20) = uVar14;
      *(undefined4 *)(param_2 + 0xbac) = uVar19;
      *(undefined4 *)(param_2 + 0xc2c) = uVar13;
      *(undefined4 *)(param_2 + 0xca0) = uVar23;
      *(undefined4 *)(param_2 + 0xd20) = uVar14;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)fVar22 < 4) {
      *(undefined4 *)(param_2 + 0xd5c) =
           *(undefined4 *)(&DAT_180231158 + (param_5 & 0xffffffff) * 4);
      *(undefined1 *)(param_3 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)fVar22 < 9) {
      uVar23 = *(undefined4 *)(&DAT_180231130 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x73c) = uVar23;
      *(undefined4 *)(param_2 + 0x708) = uVar23;
      *(undefined4 *)(param_2 + 0xad8) = uVar23;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x68d0) = (uint)fVar22 & 0xff;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6438) = *(undefined4 *)(param_2 + 0x68d0);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x19:
    *(float *)(param_2 + 0x7574) = fVar22;
    *(ulonglong *)(param_2 + 0xf30) =
         (*(ulonglong *)(param_2 + 0xf30) ^ (ulonglong)((int)fVar22 - 1) << 0x34) &
         0xff8fffffffffffff ^ (ulonglong)((int)fVar22 - 1) << 0x34;
    if (*(char *)(param_2 + 0x75ae) == '\0') {
      fVar22 = 0.0;
    }
    *(float *)(param_2 + 0x68d4) = fVar22;
    *(undefined1 *)(param_3 + 8) = 1;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x1a:
    *(bool *)(param_2 + 0x75bd) = fVar22 != 0.0;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xefffffffffffffff | (ulonglong)(fVar22 == 0.0) << 0x3c;
    if ((fVar22 == 0.0) && (*(char *)(param_2 + 0x75be) != '\0')) {
      iVar21 = 1;
    }
    else {
      iVar21 = 0;
    }
    *(byte *)(param_3 + 0x11) = *(int *)(param_2 + 0x68ec) != iVar21 | *(byte *)(param_3 + 0x11);
    *(int *)(param_2 + 0x68ec) = iVar21;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    bVar16 = fVar22 != 0.0;
    *(uint *)(param_2 + 3000) = (uint)bVar16;
    *(uint *)(param_2 + 0xb38) = (uint)bVar16;
    uVar18 = (uint)bVar16;
    *(uint *)(param_2 + 0xcb8) = uVar18;
    *(uint *)(param_2 + 0xc38) = uVar18;
    *(uint *)(param_2 + 0xcd8) = uVar18;
    *(uint *)(param_2 + 0xc58) = uVar18;
    uVar18 = (uint)bVar16;
    *(uint *)(param_2 + 0xbd8) = uVar18;
    *(uint *)(param_2 + 0xb58) = uVar18;
    *(uint *)(param_2 + 0xcf8) = uVar18;
    *(uint *)(param_2 + 0xc78) = uVar18;
    *(uint *)(param_2 + 0xbf8) = uVar18;
    *(uint *)(param_2 + 0xb78) = uVar18;
    *(uint *)(param_2 + 0xd18) = uVar18;
    *(uint *)(param_2 + 0xc98) = uVar18;
    *(uint *)(param_2 + 0xc18) = (uint)bVar16;
    *(uint *)(param_2 + 0xb98) = (uint)bVar16;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x1c:
    bVar16 = fVar22 == 0.0;
    uVar23 = 0x3f800000;
    if (bVar16) {
      uVar23 = 0;
    }
    *(undefined4 *)(param_2 + 0x68d8) = uVar23;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75bc) = !bVar16;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xfdffffffffffffff | (ulonglong)!bVar16 << 0x39;
    *(undefined1 *)(param_3 + 8) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xfbffffff;
    if (!bVar16) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x4000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x1d:
    *(uint *)(param_2 + 0x68c8) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x644c) = fVar22;
    *(undefined1 *)(param_3 + 0x43) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xffefffff;
    if (fVar22 != 0.0) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x100000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x22:
    *(float *)(param_2 + 0x6930) = (float)((uint)fVar22 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6934) = (float)((uint)fVar22 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6938) = (float)((uint)fVar22 & 0xff) / 255.0;
    *(float *)(param_2 + 0x693c) = (float)((uint)fVar22 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x63b0) = *(undefined4 *)(param_2 + 0x6930);
    *(undefined4 *)(param_2 + 0x63b4) = *(undefined4 *)(param_2 + 0x6934);
    *(undefined4 *)(param_2 + 0x63b8) = *(undefined4 *)(param_2 + 0x6938);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x23:
    *(float *)(param_2 + 0x68f8) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x7588) = fVar22;
    *(ulonglong *)(param_2 + 0xf30) =
         (*(ulonglong *)(param_2 + 0xf30) ^ param_5 << 0x3a) & 0xf3ffffffffffffff ^ param_5 << 0x3a;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(fVar22)) {
      fVar22 = (float)((uint)fVar22 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68dc) = *(float *)(param_2 + 0x68e4) - fVar22;
    *(float *)(param_2 + 0x68e0) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5118) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x25:
    if (1e+37 <= ABS(fVar22)) {
      fVar22 = (float)((uint)fVar22 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68e4) = fVar22;
    *(float *)(param_2 + 0x68dc) = fVar22 - *(float *)(param_2 + 0x68e0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6444) = *(undefined4 *)(param_2 + 0x68e4);
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5114) = *(undefined4 *)(param_2 + 0x68e4);
    *(undefined4 *)(param_2 + 0x5118) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x26:
    *(float *)(param_2 + 0x68e8) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6440) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5110) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0x30:
    *(uint *)(param_2 + 0x68f0) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xefffffff;
    if (fVar22 != 0.0) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x10000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x34:
    *(uint *)(param_2 + 0x70c) = (uint)(fVar22 != 0.0);
    *(uint *)(param_2 + 0xadc) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)fVar22 < 9) {
      uVar23 = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x724) = uVar23;
      *(undefined4 *)(param_2 + 0x714) = uVar23;
      *(undefined4 *)(param_2 + 0xae4) = uVar23;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)fVar22 < 9) {
      uVar23 = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x728) = uVar23;
      *(undefined4 *)(param_2 + 0x718) = uVar23;
      *(undefined4 *)(param_2 + 0xae8) = uVar23;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)fVar22 < 9) {
      uVar23 = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x72c) = uVar23;
      *(undefined4 *)(param_2 + 0x71c) = uVar23;
      *(undefined4 *)(param_2 + 0xaec) = uVar23;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)fVar22 < 9) {
      uVar23 = *(undefined4 *)(&DAT_180231130 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x730) = uVar23;
      *(undefined4 *)(param_2 + 0x720) = uVar23;
      *(undefined4 *)(param_2 + 0xaf0) = uVar23;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(byte *)(param_2 + 0x74f0) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3a:
    *(byte *)(param_2 + 0x710) = bVar15;
    *(byte *)(param_2 + 0xae0) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3b:
    *(byte *)(param_2 + 0x711) = bVar15;
    *(byte *)(param_2 + 0xae1) = bVar15;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3c:
    *(float *)(param_2 + 0x6940) = (float)((uint)fVar22 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6944) = (float)((uint)fVar22 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6948) = (float)((uint)fVar22 & 0xff) / 255.0;
    *(float *)(param_2 + 0x694c) = (float)((uint)fVar22 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6450) = *(undefined4 *)(param_2 + 0x6940);
    *(undefined4 *)(param_2 + 0x6454) = *(undefined4 *)(param_2 + 0x6944);
    *(undefined4 *)(param_2 + 0x6458) = *(undefined4 *)(param_2 + 0x6948);
    *(undefined4 *)(param_2 + 0x645c) = *(undefined4 *)(param_2 + 0x694c);
    *(undefined1 *)(param_3 + 0x43) = 1;
    return;
  case 0x80:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff0 | (uint)fVar22 & 0xf;
    return;
  case 0x81:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xffffff00 |
         *(uint *)(param_2 + 0x75a8) & 0xf | ((uint)fVar22 & 0xf) << 4;
    return;
  case 0x82:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xfffff000 |
         *(uint *)(param_2 + 0x75a8) & 0xff | ((uint)fVar22 & 0xf) << 8;
    return;
  case 0x83:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xffff0000 |
         *(uint *)(param_2 + 0x75a8) & 0xfff | ((uint)fVar22 & 0xf) << 0xc;
    return;
  case 0x84:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xfff00000 |
         *(uint *)(param_2 + 0x75a8) & 0xffff | ((uint)fVar22 & 0xf) << 0x10;
    return;
  case 0x85:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xff000000 |
         *(uint *)(param_2 + 0x75a8) & 0xfffff | ((uint)fVar22 & 0xf) << 0x14;
    return;
  case 0x86:
    *(uint *)(param_2 + 0x75a8) =
         *(uint *)(param_2 + 0x75a8) & 0xf0000000 |
         *(uint *)(param_2 + 0x75a8) & 0xffffff | ((uint)fVar22 & 0xf) << 0x18;
    return;
  case 0x87:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff | (int)fVar22 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_2 + 0x68cc) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8b:
    *(float *)(param_2 + 0x6920) = (float)((uint)fVar22 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6924) = (float)((uint)fVar22 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6928) = (float)((uint)fVar22 & 0xff) / 255.0;
    *(float *)(param_2 + 0x692c) = (float)((uint)fVar22 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8c:
    *(float *)(param_2 + 0x68fc) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x511c) = *(undefined4 *)(param_2 + 0x68fc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xfcffffff;
    *(uint *)(param_2 + 0xf0c) = uVar18;
    if ((uint)fVar22 < 4) {
      *(uint *)(param_2 + 0xf0c) = uVar18 | (int)fVar22 << 0x18;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x75af) = fVar22 != 0.0;
    if (fVar22 == 0.0) {
      *(undefined8 *)(param_2 + 28000) = 0;
      *(undefined8 *)(param_2 + 0x6d68) = 0;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xffffff00;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | 0xff;
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | 0xff;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
    iVar21 = *(int *)(param_2 + 0x7578);
    *(int *)(param_2 + 28000) = iVar21;
    iVar10 = *(int *)(param_2 + 0x757c);
    *(int *)(param_2 + 0x6d64) = iVar10;
    uVar11 = *(uint *)(param_2 + 0x7580);
    *(uint *)(param_2 + 0x6d68) = uVar11;
    iVar12 = *(int *)(param_2 + 0x7584);
    *(int *)(param_2 + 0x6d6c) = iVar12;
    uVar18 = (*(uint *)(param_2 + 0xef4) ^ iVar21 << 4) & 0x30 ^ *(uint *)(param_2 + 0xef4);
    uVar18 = ((uVar18 ^ iVar10 << 6) & 0xc0 ^ uVar18) & 0xfffffffc | uVar11 & 3;
    *(uint *)(param_2 + 0xef4) = (uVar18 ^ iVar12 << 2) & 0xc ^ uVar18;
    uVar18 = 0;
    if (iVar21 != 1) {
      uVar18 = 0x30;
    }
    uVar6 = 0;
    if (iVar10 != 1) {
      uVar6 = 0xc0;
    }
    uVar7 = 0;
    if (uVar11 != 1) {
      uVar7 = 3;
    }
    uVar2 = 0;
    if (iVar12 != 1) {
      uVar2 = 0xc;
    }
    uVar3 = 0;
    if (iVar21 != 2) {
      uVar3 = 0x30;
    }
    uVar4 = 0;
    if (iVar10 != 2) {
      uVar4 = 0xc0;
    }
    uVar5 = 0;
    if (uVar11 != 2) {
      uVar5 = 3;
    }
    uVar11 = 0;
    if (iVar12 != 2) {
      uVar11 = 0xc;
    }
    *(uint *)(param_2 + 0xf04) =
         uVar2 | uVar7 | uVar6 | uVar18 | *(uint *)(param_2 + 0xf04) & 0xffffff00;
    *(uint *)(param_2 + 0xf08) =
         uVar11 | uVar5 | uVar4 | uVar3 | *(uint *)(param_2 + 0xf08) & 0xffffff00;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_2 + 0x68c0) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xdfffffff;
    if (fVar22 != 0.0) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x20000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x8f:
    *(uint *)(param_2 + 0x68c4) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xff7fffff;
    if (fVar22 != 0.0) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x800000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x91:
    *(float *)(param_2 + 0x7578) = fVar22;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 28000) = fVar22;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xffffffc0 |
           *(uint *)(param_2 + 0xef4) & 0xf | ((uint)fVar22 & 3) << 4;
      uVar18 = 0;
      if (fVar22 != 1.4013e-45) {
        uVar18 = 0x30;
      }
      uVar11 = 0;
      if (fVar22 != 2.8026e-45) {
        uVar11 = 0x30;
      }
      *(uint *)(param_2 + 0xf04) = uVar18 | *(uint *)(param_2 + 0xf04) & 0xffffffcf;
      *(uint *)(param_2 + 0xf08) = uVar11 | *(uint *)(param_2 + 0xf08) & 0xffffffcf;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x757c) = fVar22;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d64) = fVar22;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xffffff00 |
           *(uint *)(param_2 + 0xef4) & 0x3f | ((uint)fVar22 & 3) << 6;
      uVar18 = 0;
      if (fVar22 != 1.4013e-45) {
        uVar18 = 0xc0;
      }
      uVar11 = 0;
      if (fVar22 != 2.8026e-45) {
        uVar11 = 0xc0;
      }
      *(uint *)(param_2 + 0xf04) = uVar18 | *(uint *)(param_2 + 0xf04) & 0xffffff3f;
      *(uint *)(param_2 + 0xf08) = uVar11 | *(uint *)(param_2 + 0xf08) & 0xffffff3f;
      return;
    }
    break;
  case 0x93:
    *(float *)(param_2 + 0x7580) = fVar22;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d68) = fVar22;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xfffffffc | (uint)fVar22 & 3;
      uVar18 = 0;
      if (fVar22 != 1.4013e-45) {
        uVar18 = 3;
      }
      uVar11 = 0;
      if (fVar22 != 2.8026e-45) {
        uVar11 = 3;
      }
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xfffffffc | uVar18;
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xfffffffc | uVar11;
      return;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x7584) = fVar22;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d6c) = fVar22;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xfffffff0 |
           *(uint *)(param_2 + 0xef4) & 3 | ((uint)fVar22 & 3) << 2;
      uVar18 = 0;
      if (fVar22 != 1.4013e-45) {
        uVar18 = 0xc;
      }
      uVar11 = 0;
      if (fVar22 != 2.8026e-45) {
        uVar11 = 0xc;
      }
      *(uint *)(param_2 + 0xf04) = uVar18 | *(uint *)(param_2 + 0xf04) & 0xfffffff3;
      *(uint *)(param_2 + 0xf08) = uVar11 | *(uint *)(param_2 + 0xf08) & 0xfffffff3;
      return;
    }
    break;
  case 0x97:
    *(uint *)(param_2 + 0x6e74) = (uint)(fVar22 == 3.57331e-43);
    if (fVar22 == 3.58732e-43) {
      fVar20 = 7.00649e-45;
    }
    else {
      fVar20 = 0.0;
      if ((uint)fVar22 < 4) {
        fVar20 = fVar22;
      }
    }
    *(float *)(param_2 + 0x759c) = fVar20;
    uVar18 = *(uint *)(param_2 + 0xf0c) & 0xffdfffff;
    if (fVar20 == 3.57331e-43) {
      uVar18 = *(uint *)(param_2 + 0xf0c) | 0x200000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar18;
    return;
  case 0x98:
    *(uint *)(param_2 + 0x6dd0) = -(uint)((param_5 & 1) != 0);
    *(uint *)(param_2 + 0x6dd4) = -(uint)((param_5 & 2) != 0);
    *(uint *)(param_2 + 0x6dd8) = -(uint)((param_5 & 4) != 0);
    *(uint *)(param_2 + 0x6ddc) = -(uint)((param_5 & 8) != 0);
    *(uint *)(param_2 + 0x6de0) = -(uint)((param_5 & 0x10) != 0);
    *(uint *)(param_2 + 0x6de4) = -(uint)((param_5 & 0x20) != 0);
    *(uint *)(param_2 + 0x75a0) = (uint)fVar22 & 0x3f;
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
    *(float *)(param_2 + 0x6e80) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if ((*(float *)(param_2 + 0x6e80) != 1.0) &&
       ((*(float *)(param_2 + 0x6e88) != 1.0 || (*(float *)(param_2 + 0x6e84) != 1.0)))) {
LAB_180055630:
      *(undefined1 *)(param_2 + 0x75b7) = 1;
      return;
    }
    goto LAB_18005563c;
  case 0x9b:
    *(float *)(param_2 + 0x6e88) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_180055630;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
    goto LAB_18005563c;
  case 0x9c:
    *(uint *)(param_2 + 0x6e8c) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9d:
    *(uint *)(param_2 + 0x6e90) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75b6) = fVar22 != 0.0;
    return;
  case 0x9e:
    *(float *)(param_2 + 0x6e94) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x9f:
    *(float *)(param_2 + 0x6e98) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa0:
    *(float *)(param_2 + 0x6e9c) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa2:
    *(float *)(param_1 + 0xe58) = fVar22;
    *(undefined1 *)(param_1 + 0xf68c) = 1;
    return;
  case 0xa6:
    *(float *)(param_2 + 0x6e84) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_180055630;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
LAB_18005563c:
    *(undefined1 *)(param_2 + 0x75b7) = 0;
    return;
  case 0xa7:
    *(uint *)(param_2 + 0x6e70) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa8:
    bVar15 = bVar15 & 0xf;
    *(byte *)(param_2 + 0xbd4) = bVar15;
    *(byte *)(param_2 + 0xb54) = bVar15;
    *(byte *)(param_2 + 0xcd4) = bVar15;
    *(byte *)(param_2 + 0xc54) = bVar15;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xaa:
    *(float *)(param_2 + 0x6e78) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xab:
    if (5 < (uint)fVar22) {
      fVar22 = 1.4013e-45;
    }
    uVar23 = (&DAT_180231270)[(int)fVar22 - 1];
    *(undefined4 *)(param_2 + 0xcc4) = uVar23;
    *(undefined4 *)(param_2 + 0xc44) = uVar23;
    *(undefined4 *)(param_2 + 0xbd0) = uVar23;
    *(undefined4 *)(param_2 + 0xb50) = uVar23;
    *(undefined4 *)(param_2 + 0xbc4) = uVar23;
    *(undefined4 *)(param_2 + 0xb44) = uVar23;
    *(undefined4 *)(param_2 + 0xce4) = uVar23;
    *(undefined4 *)(param_2 + 0xc64) = uVar23;
    *(undefined4 *)(param_2 + 0xbf0) = uVar23;
    *(undefined4 *)(param_2 + 0xb70) = uVar23;
    *(undefined4 *)(param_2 + 0xbe4) = uVar23;
    *(undefined4 *)(param_2 + 0xb64) = uVar23;
    *(undefined4 *)(param_2 + 0xd04) = uVar23;
    *(undefined4 *)(param_2 + 0xc84) = uVar23;
    *(undefined4 *)(param_2 + 0xc10) = uVar23;
    *(undefined4 *)(param_2 + 0xb90) = uVar23;
    *(undefined4 *)(param_2 + 0xc04) = uVar23;
    *(undefined4 *)(param_2 + 0xb84) = uVar23;
    *(undefined4 *)(param_2 + 0xd24) = uVar23;
    *(undefined4 *)(param_2 + 0xca4) = uVar23;
    *(undefined4 *)(param_2 + 0xc30) = uVar23;
    *(undefined4 *)(param_2 + 0xbb0) = uVar23;
    *(undefined4 *)(param_2 + 0xc24) = uVar23;
    *(undefined4 *)(param_2 + 0xba4) = uVar23;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xac:
    uVar18 = *(uint *)(param_2 + 0x68bc) & 0xfffffffd;
    if (fVar22 == 4.2039e-45) {
      uVar18 = *(uint *)(param_2 + 0x68bc) | 2;
    }
    *(uint *)(param_2 + 0x68bc) = uVar18;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xad:
    uVar18 = *(uint *)(param_2 + 0x68bc) & 0xfffffffb;
    if (fVar22 == 2.8026e-45) {
      uVar18 = *(uint *)(param_2 + 0x68bc) | 4;
    }
    *(uint *)(param_2 + 0x68bc) = uVar18;
    *(undefined1 *)(param_3 + 0x11) = 1;
    break;
  case 0xae:
    *(uint *)(param_2 + 0xd9c) = (uint)(fVar22 != 0.0);
    *(uint *)(param_2 + 0xd74) = (uint)(fVar22 != 0.0);
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xaf:
    *(float *)(param_2 + 0xd6c) = fVar22;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xb2:
    uVar23 = 0x3f800000;
    *(float *)(param_2 + 0x6eb0) = fVar22;
    if ((fVar22 < 1.0) || (uVar23 = 0x41000000, 8.0 < fVar22)) {
      *(undefined4 *)(param_2 + 0x6eb0) = uVar23;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5190) = *(undefined4 *)(param_2 + 0x6eb0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb3:
    uVar23 = 0x3f800000;
    *(float *)(param_2 + 0x6eb4) = fVar22;
    if ((fVar22 < 1.0) || (uVar23 = 0x41000000, 8.0 < fVar22)) {
      *(undefined4 *)(param_2 + 0x6eb4) = uVar23;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5194) = *(undefined4 *)(param_2 + 0x6eb4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb4:
    *(float *)(param_2 + 0x6ea0) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5180) = *(undefined4 *)(param_2 + 0x6ea0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb5:
    *(float *)(param_2 + 0x6ea4) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5184) = *(undefined4 *)(param_2 + 0x6ea4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb6:
    *(float *)(param_2 + 0x6ea8) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5188) = *(undefined4 *)(param_2 + 0x6ea8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb7:
    *(float *)(param_2 + 0x6eac) = fVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x518c) = *(undefined4 *)(param_2 + 0x6eac);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb8:
    uVar18 = *(uint *)(param_2 + 0x68bc) & 0xfffffffe;
    if (fVar22 != 0.0) {
      uVar18 = *(uint *)(param_2 + 0x68bc) | 1;
    }
    *(uint *)(param_2 + 0x68bc) = uVar18;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xb9:
    *(bool *)(param_2 + 0x75ba) = fVar22 != 0.0;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xba:
    *(undefined4 *)(param_2 + 0xaf4) = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbb:
    *(undefined4 *)(param_2 + 0xaf8) = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbc:
    *(undefined4 *)(param_2 + 0xafc) = *(undefined4 *)(&DAT_180231108 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbd:
    *(undefined4 *)(param_2 + 0xb00) = *(undefined4 *)(&DAT_180231130 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbe:
    bVar15 = bVar15 & 0xf;
    *(byte *)(param_2 + 0xcf4) = bVar15;
    *(byte *)(param_2 + 0xc74) = bVar15;
    *(byte *)(param_2 + 0xbf4) = bVar15;
    *(byte *)(param_2 + 0xb74) = bVar15;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xbf:
    bVar15 = bVar15 & 0xf;
    *(byte *)(param_2 + 0xd14) = bVar15;
    *(byte *)(param_2 + 0xc94) = bVar15;
    *(byte *)(param_2 + 0xc14) = bVar15;
    *(byte *)(param_2 + 0xb94) = bVar15;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc0:
    bVar15 = bVar15 & 0xf;
    *(byte *)(param_2 + 0xd34) = bVar15;
    *(byte *)(param_2 + 0xcb4) = bVar15;
    *(byte *)(param_2 + 0xc34) = bVar15;
    *(byte *)(param_2 + 0xbb4) = bVar15;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc1:
    *(float *)(param_2 + 0xdd0) = (float)((uint)fVar22 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd4) = (float)((uint)fVar22 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd8) = (float)((uint)fVar22 & 0xff) / 255.0;
    *(float *)(param_2 + 0xddc) = (float)((uint)fVar22 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc2:
    *(bool *)(param_2 + 0x75ad) = fVar22 != 0.0;
    *(undefined1 *)(param_3 + 10) = 1;
    return;
  case 0xc3:
    *(float *)(param_2 + 0xde0) = fVar22;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 0xce:
    *(bool *)(param_2 + 0x75b9) = fVar22 != 0.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xcf:
    if (0xf < (uint)fVar22) {
      return;
    }
    uVar23 = *(undefined4 *)(&DAT_180231170 + (param_5 & 0xffffffff) * 4);
    uVar14 = *(undefined4 *)(&DAT_1802311f0 + (param_5 & 0xffffffff) * 4);
    *(undefined4 *)(param_2 + 0xc48) = uVar14;
    *(undefined4 *)(param_2 + 0xcc8) = uVar23;
    if (fVar22 == 1.54143e-44) {
      uVar19 = 6;
    }
    else {
      if (fVar22 != 1.82169e-44) goto LAB_180055950;
      uVar19 = 5;
    }
    *(undefined4 *)(param_2 + 0xccc) = uVar19;
    *(undefined4 *)(param_2 + 0xc4c) = uVar19;
LAB_180055950:
    *(undefined4 *)(param_2 + 0xc68) = uVar14;
    *(undefined4 *)(param_2 + 0xce8) = uVar23;
    if (fVar22 == 1.82169e-44) {
      uVar19 = *(undefined4 *)(param_2 + 0xc4c);
      *(undefined4 *)(param_2 + 0xc6c) = uVar19;
      *(undefined4 *)(param_2 + 0xc88) = uVar14;
      *(undefined4 *)(param_2 + 0xd08) = uVar23;
      *(undefined4 *)(param_2 + 0xc8c) = uVar19;
      *(undefined4 *)(param_2 + 0xca8) = uVar14;
      *(undefined4 *)(param_2 + 0xd28) = uVar23;
      *(undefined4 *)(param_2 + 0xcac) = uVar19;
    }
    else {
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc6c) = *(undefined4 *)(param_2 + 0xc4c);
      }
      *(undefined4 *)(param_2 + 0xc88) = uVar14;
      *(undefined4 *)(param_2 + 0xd08) = uVar23;
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc8c) = *(undefined4 *)(param_2 + 0xc4c);
      }
      *(undefined4 *)(param_2 + 0xca8) = uVar14;
      *(undefined4 *)(param_2 + 0xd28) = uVar23;
      if (fVar22 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xcac) = *(undefined4 *)(param_2 + 0xc4c);
        *(undefined1 *)(param_3 + 0xc) = 1;
        return;
      }
    }
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xd0:
    if ((uint)fVar22 < 0x10) {
      uVar23 = *(undefined4 *)(&DAT_1802311f0 + (param_5 & 0xffffffff) * 4);
      uVar14 = *(undefined4 *)(&DAT_180231170 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0xc4c) = uVar23;
      *(undefined4 *)(param_2 + 0xccc) = uVar14;
      *(undefined4 *)(param_2 + 0xcec) = uVar14;
      *(undefined4 *)(param_2 + 0xc6c) = uVar23;
      *(undefined4 *)(param_2 + 0xc8c) = uVar23;
      *(undefined4 *)(param_2 + 0xd0c) = uVar14;
      *(undefined4 *)(param_2 + 0xcac) = uVar23;
      *(undefined4 *)(param_2 + 0xd2c) = uVar14;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0xd1:
    if (5 < (uint)fVar22) {
      fVar22 = 1.4013e-45;
    }
    uVar23 = (&DAT_180231270)[(int)fVar22 - 1];
    *(undefined4 *)(param_2 + 0xcd0) = uVar23;
    *(undefined4 *)(param_2 + 0xc50) = uVar23;
    *(undefined4 *)(param_2 + 0xc70) = uVar23;
    *(undefined4 *)(param_2 + 0xcf0) = uVar23;
    *(undefined4 *)(param_2 + 0xc90) = uVar23;
    *(undefined4 *)(param_2 + 0xd10) = uVar23;
    *(undefined4 *)(param_2 + 0xcb0) = uVar23;
    *(undefined4 *)(param_2 + 0xd30) = uVar23;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  }
  return;
}

