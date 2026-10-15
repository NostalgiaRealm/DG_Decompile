/*
 * FUN_180164780 at 180164780
 * undefined FUN_180164780(void)
 * Address ranges: 180164780-180165bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180164780(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  int iVar20;
  float fVar21;
  undefined4 uVar22;
  
  fVar21 = (float)param_5;
  bVar14 = (byte)param_5;
  switch(param_4) {
  case 7:
    uVar16 = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0x734) = uVar16;
    *(uint *)(param_2 + 0x700) = uVar16;
    *(uint *)(param_2 + 0xad0) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    uVar16 = *(uint *)(param_1 + 0x7654) & 2;
    uVar10 = (uint)(uVar16 == 0) | (uint)(fVar21 == 0.0) << 1;
    uVar5 = *(uint *)(param_1 + 0x6e9c);
    *(uint *)(param_1 + 0x6e9c) = uVar10;
    uVar6 = *(uint *)(param_1 + 0xe20);
    *(byte *)(param_1 + 0xf691) = uVar5 != uVar10 | *(byte *)(param_1 + 0xf691);
    uVar16 = (uint)(uVar16 != 0);
    *(uint *)(param_1 + 0xe20) = uVar16;
    *(byte *)(param_1 + 0xf68d) = uVar6 != uVar16 | *(byte *)(param_1 + 0xf68d);
    return;
  case 8:
    uVar22 = 2;
    if (fVar21 != 2.8026e-45) {
      uVar22 = 3;
    }
    *(undefined4 *)(param_2 + 0xd58) = uVar22;
    *(bool *)(param_2 + 0x75b1) = fVar21 == 1.4013e-45;
    *(undefined1 *)(param_3 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_2 + 0x75b0) = fVar21 == 1.4013e-45;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xff7fffffffffffff |
         (ulonglong)(fVar21 == 1.4013e-45) << 0x37;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0xe:
    uVar16 = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0x738) = uVar16;
    *(uint *)(param_2 + 0x704) = uVar16;
    *(uint *)(param_2 + 0xad4) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_2 + 0x75ae) = fVar21 != 0.0;
    if (fVar21 == 0.0) {
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
    if (0xf < (uint)fVar21) {
      return;
    }
    uVar22 = *(undefined4 *)(&DAT_18022c020 + (param_5 & 0xffffffff) * 4);
    uVar13 = *(undefined4 *)(&DAT_18022bfe0 + (param_5 & 0xffffffff) * 4);
    uVar19 = *(undefined4 *)(&DAT_18022bfa0 + (param_5 & 0xffffffff) * 4);
    *(undefined4 *)(param_2 + 0xb3c) = uVar22;
    uVar12 = *(undefined4 *)(&DAT_18022bf60 + (param_5 & 0xffffffff) * 4);
    *(undefined4 *)(param_2 + 0xb48) = uVar13;
    *(undefined4 *)(param_2 + 0xc3c) = uVar22;
    *(undefined4 *)(param_2 + 0xbbc) = uVar19;
    *(undefined4 *)(param_2 + 0xcbc) = uVar19;
    *(undefined4 *)(param_2 + 0xbc8) = uVar12;
    if (fVar21 == 1.54143e-44) {
      uVar17 = 6;
    }
    else {
      if (fVar21 != 1.82169e-44) goto LAB_180164964;
      uVar17 = 5;
    }
    *(undefined4 *)(param_2 + 0xc40) = uVar17;
    *(undefined4 *)(param_2 + 0xcc0) = uVar17;
    *(undefined4 *)(param_2 + 0xb4c) = uVar17;
    *(undefined4 *)(param_2 + 0xbcc) = uVar17;
    *(undefined4 *)(param_2 + 0xb40) = uVar17;
    *(undefined4 *)(param_2 + 0xbc0) = uVar17;
LAB_180164964:
    *(undefined4 *)(param_2 + 0xb5c) = uVar22;
    *(undefined4 *)(param_2 + 0xb68) = uVar13;
    *(undefined4 *)(param_2 + 0xbdc) = uVar19;
    *(undefined4 *)(param_2 + 0xbe8) = uVar12;
    *(undefined4 *)(param_2 + 0xc5c) = uVar22;
    *(undefined4 *)(param_2 + 0xcdc) = uVar19;
    if (fVar21 == 1.82169e-44) {
      uVar17 = *(undefined4 *)(param_2 + 0xb40);
      *(undefined4 *)(param_2 + 0xb60) = uVar17;
      uVar7 = *(undefined4 *)(param_2 + 0xb4c);
      *(undefined4 *)(param_2 + 0xb6c) = uVar7;
      uVar8 = *(undefined4 *)(param_2 + 0xc40);
      *(undefined4 *)(param_2 + 0xc60) = uVar8;
      *(undefined4 *)(param_2 + 0xb7c) = uVar22;
      *(undefined4 *)(param_2 + 0xb88) = uVar13;
      *(undefined4 *)(param_2 + 0xbfc) = uVar19;
      *(undefined4 *)(param_2 + 0xc08) = uVar12;
      *(undefined4 *)(param_2 + 0xc7c) = uVar22;
      *(undefined4 *)(param_2 + 0xcfc) = uVar19;
      *(undefined4 *)(param_2 + 0xb80) = uVar17;
      *(undefined4 *)(param_2 + 0xb8c) = uVar7;
      *(undefined4 *)(param_2 + 0xc80) = uVar8;
      *(undefined4 *)(param_2 + 0xb9c) = uVar22;
      *(undefined4 *)(param_2 + 0xba8) = uVar13;
      *(undefined4 *)(param_2 + 0xc1c) = uVar19;
      *(undefined4 *)(param_2 + 0xc28) = uVar12;
      *(undefined4 *)(param_2 + 0xc9c) = uVar22;
      *(undefined4 *)(param_2 + 0xd1c) = uVar19;
      *(undefined4 *)(param_2 + 0xba0) = uVar17;
      *(undefined4 *)(param_2 + 0xbac) = uVar7;
      *(undefined4 *)(param_2 + 0xca0) = uVar8;
    }
    else {
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xb60) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xb6c) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xc60) = *(undefined4 *)(param_2 + 0xc40);
      }
      *(undefined4 *)(param_2 + 0xb7c) = uVar22;
      *(undefined4 *)(param_2 + 0xb88) = uVar13;
      *(undefined4 *)(param_2 + 0xbfc) = uVar19;
      *(undefined4 *)(param_2 + 0xc08) = uVar12;
      *(undefined4 *)(param_2 + 0xc7c) = uVar22;
      *(undefined4 *)(param_2 + 0xcfc) = uVar19;
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xb80) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xb8c) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xc80) = *(undefined4 *)(param_2 + 0xc40);
      }
      *(undefined4 *)(param_2 + 0xb9c) = uVar22;
      *(undefined4 *)(param_2 + 0xba8) = uVar13;
      *(undefined4 *)(param_2 + 0xc1c) = uVar19;
      *(undefined4 *)(param_2 + 0xc28) = uVar12;
      *(undefined4 *)(param_2 + 0xc9c) = uVar22;
      *(undefined4 *)(param_2 + 0xd1c) = uVar19;
      if (fVar21 == 1.54143e-44) {
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
    if ((uint)fVar21 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_18022c020 + (param_5 & 0xffffffff) * 4);
      uVar13 = *(undefined4 *)(&DAT_18022bfa0 + (param_5 & 0xffffffff) * 4);
      uVar19 = *(undefined4 *)(&DAT_18022bfe0 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0xb40) = uVar22;
      uVar12 = *(undefined4 *)(&DAT_18022bf60 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0xbc0) = uVar13;
      *(undefined4 *)(param_2 + 0xc40) = uVar22;
      *(undefined4 *)(param_2 + 0xb4c) = uVar19;
      *(undefined4 *)(param_2 + 0xcc0) = uVar13;
      *(undefined4 *)(param_2 + 0xbcc) = uVar12;
      *(undefined4 *)(param_2 + 0xbec) = uVar12;
      *(undefined4 *)(param_2 + 0xb60) = uVar22;
      *(undefined4 *)(param_2 + 0xbe0) = uVar13;
      *(undefined4 *)(param_2 + 0xb6c) = uVar19;
      *(undefined4 *)(param_2 + 0xc60) = uVar22;
      *(undefined4 *)(param_2 + 0xce0) = uVar13;
      *(undefined4 *)(param_2 + 0xb80) = uVar22;
      *(undefined4 *)(param_2 + 0xc00) = uVar13;
      *(undefined4 *)(param_2 + 0xb8c) = uVar19;
      *(undefined4 *)(param_2 + 0xc0c) = uVar12;
      *(undefined4 *)(param_2 + 0xc80) = uVar22;
      *(undefined4 *)(param_2 + 0xd00) = uVar13;
      *(undefined4 *)(param_2 + 0xba0) = uVar22;
      *(undefined4 *)(param_2 + 0xc20) = uVar13;
      *(undefined4 *)(param_2 + 0xbac) = uVar19;
      *(undefined4 *)(param_2 + 0xc2c) = uVar12;
      *(undefined4 *)(param_2 + 0xca0) = uVar22;
      *(undefined4 *)(param_2 + 0xd20) = uVar13;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)fVar21 < 4) {
      *(undefined4 *)(param_2 + 0xd5c) =
           *(undefined4 *)(&DAT_18022bf48 + (param_5 & 0xffffffff) * 4);
      *(undefined1 *)(param_3 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)fVar21 < 9) {
      uVar22 = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x73c) = uVar22;
      *(undefined4 *)(param_2 + 0x708) = uVar22;
      *(undefined4 *)(param_2 + 0xad8) = uVar22;
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
    *(undefined1 *)(param_3 + 8) = 1;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x1a:
    *(bool *)(param_2 + 0x75bd) = fVar21 != 0.0;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xefffffffffffffff | (ulonglong)(fVar21 == 0.0) << 0x3c;
    if ((fVar21 == 0.0) && (*(char *)(param_2 + 0x75be) != '\0')) {
      iVar20 = 1;
    }
    else {
      iVar20 = 0;
    }
    *(byte *)(param_3 + 0x11) = *(int *)(param_2 + 0x68ec) != iVar20 | *(byte *)(param_3 + 0x11);
    *(int *)(param_2 + 0x68ec) = iVar20;
    *(undefined1 *)(param_3 + 8) = 1;
    return;
  case 0x1b:
    bVar15 = fVar21 != 0.0;
    *(uint *)(param_2 + 3000) = (uint)bVar15;
    *(uint *)(param_2 + 0xb38) = (uint)bVar15;
    uVar16 = (uint)bVar15;
    *(uint *)(param_2 + 0xcb8) = uVar16;
    *(uint *)(param_2 + 0xc38) = uVar16;
    *(uint *)(param_2 + 0xcd8) = uVar16;
    *(uint *)(param_2 + 0xc58) = uVar16;
    uVar16 = (uint)bVar15;
    *(uint *)(param_2 + 0xbd8) = uVar16;
    *(uint *)(param_2 + 0xb58) = uVar16;
    *(uint *)(param_2 + 0xcf8) = uVar16;
    *(uint *)(param_2 + 0xc78) = uVar16;
    *(uint *)(param_2 + 0xbf8) = uVar16;
    *(uint *)(param_2 + 0xb78) = uVar16;
    *(uint *)(param_2 + 0xd18) = uVar16;
    *(uint *)(param_2 + 0xc98) = uVar16;
    *(uint *)(param_2 + 0xc18) = (uint)bVar15;
    *(uint *)(param_2 + 0xb98) = (uint)bVar15;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0x1c:
    bVar15 = fVar21 == 0.0;
    uVar22 = 0x3f800000;
    if (bVar15) {
      uVar22 = 0;
    }
    *(undefined4 *)(param_2 + 0x68d8) = uVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75bc) = !bVar15;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) & 0xfdffffffffffffff | (ulonglong)!bVar15 << 0x39;
    *(undefined1 *)(param_3 + 8) = 1;
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xfbffffff;
    if (!bVar15) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x4000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
    return;
  case 0x1d:
    *(uint *)(param_2 + 0x68c8) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x644c) = fVar21;
    *(undefined1 *)(param_3 + 0x43) = 1;
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xffefffff;
    if (fVar21 != 0.0) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x100000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
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
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xefffffff;
    if (fVar21 != 0.0) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x10000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
    return;
  case 0x34:
    *(uint *)(param_2 + 0x70c) = (uint)(fVar21 != 0.0);
    *(uint *)(param_2 + 0xadc) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)fVar21 < 9) {
      uVar22 = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x724) = uVar22;
      *(undefined4 *)(param_2 + 0x714) = uVar22;
      *(undefined4 *)(param_2 + 0xae4) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)fVar21 < 9) {
      uVar22 = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x728) = uVar22;
      *(undefined4 *)(param_2 + 0x718) = uVar22;
      *(undefined4 *)(param_2 + 0xae8) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)fVar21 < 9) {
      uVar22 = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x72c) = uVar22;
      *(undefined4 *)(param_2 + 0x71c) = uVar22;
      *(undefined4 *)(param_2 + 0xaec) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)fVar21 < 9) {
      uVar22 = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0x730) = uVar22;
      *(undefined4 *)(param_2 + 0x720) = uVar22;
      *(undefined4 *)(param_2 + 0xaf0) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(byte *)(param_2 + 0x74f0) = bVar14;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3a:
    *(byte *)(param_2 + 0x710) = bVar14;
    *(byte *)(param_2 + 0xae0) = bVar14;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0x3b:
    *(byte *)(param_2 + 0x711) = bVar14;
    *(byte *)(param_2 + 0xae1) = bVar14;
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
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xfcffffff;
    *(uint *)(param_2 + 0xf0c) = uVar16;
    if ((uint)fVar21 < 4) {
      *(uint *)(param_2 + 0xf0c) = uVar16 | (int)fVar21 << 0x18;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x75af) = fVar21 != 0.0;
    if (fVar21 == 0.0) {
      *(undefined8 *)(param_2 + 28000) = 0;
      *(undefined8 *)(param_2 + 0x6d68) = 0;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xffffff00;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | 0xff;
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | 0xff;
      *(undefined1 *)(param_3 + 0x11) = 1;
      return;
    }
    iVar20 = *(int *)(param_2 + 0x7578);
    *(int *)(param_2 + 28000) = iVar20;
    iVar9 = *(int *)(param_2 + 0x757c);
    *(int *)(param_2 + 0x6d64) = iVar9;
    uVar10 = *(uint *)(param_2 + 0x7580);
    *(uint *)(param_2 + 0x6d68) = uVar10;
    iVar11 = *(int *)(param_2 + 0x7584);
    *(int *)(param_2 + 0x6d6c) = iVar11;
    uVar16 = (*(uint *)(param_2 + 0xef4) ^ iVar20 << 4) & 0x30 ^ *(uint *)(param_2 + 0xef4);
    uVar16 = ((uVar16 ^ iVar9 << 6) & 0xc0 ^ uVar16) & 0xfffffffc | uVar10 & 3;
    *(uint *)(param_2 + 0xef4) = (uVar16 ^ iVar11 << 2) & 0xc ^ uVar16;
    uVar16 = 0;
    if (iVar20 != 1) {
      uVar16 = 0x30;
    }
    uVar5 = 0;
    if (iVar9 != 1) {
      uVar5 = 0xc0;
    }
    uVar6 = 0;
    if (uVar10 != 1) {
      uVar6 = 3;
    }
    uVar1 = 0;
    if (iVar11 != 1) {
      uVar1 = 0xc;
    }
    uVar2 = 0;
    if (iVar20 != 2) {
      uVar2 = 0x30;
    }
    uVar3 = 0;
    if (iVar9 != 2) {
      uVar3 = 0xc0;
    }
    uVar4 = 0;
    if (uVar10 != 2) {
      uVar4 = 3;
    }
    uVar10 = 0;
    if (iVar11 != 2) {
      uVar10 = 0xc;
    }
    *(uint *)(param_2 + 0xf04) =
         uVar1 | uVar6 | uVar5 | uVar16 | *(uint *)(param_2 + 0xf04) & 0xffffff00;
    *(uint *)(param_2 + 0xf08) =
         uVar10 | uVar4 | uVar3 | uVar2 | *(uint *)(param_2 + 0xf08) & 0xffffff00;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_2 + 0x68c0) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xdfffffff;
    if (fVar21 != 0.0) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x20000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
    return;
  case 0x8f:
    *(uint *)(param_2 + 0x68c4) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xff7fffff;
    if (fVar21 != 0.0) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x800000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
    return;
  case 0x91:
    *(float *)(param_2 + 0x7578) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 28000) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xffffffc0 |
           *(uint *)(param_2 + 0xef4) & 0xf | ((uint)fVar21 & 3) << 4;
      uVar16 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar16 = 0x30;
      }
      uVar10 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar10 = 0x30;
      }
      *(uint *)(param_2 + 0xf04) = uVar16 | *(uint *)(param_2 + 0xf04) & 0xffffffcf;
      *(uint *)(param_2 + 0xf08) = uVar10 | *(uint *)(param_2 + 0xf08) & 0xffffffcf;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x757c) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d64) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xffffff00 |
           *(uint *)(param_2 + 0xef4) & 0x3f | ((uint)fVar21 & 3) << 6;
      uVar16 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar16 = 0xc0;
      }
      uVar10 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar10 = 0xc0;
      }
      *(uint *)(param_2 + 0xf04) = uVar16 | *(uint *)(param_2 + 0xf04) & 0xffffff3f;
      *(uint *)(param_2 + 0xf08) = uVar10 | *(uint *)(param_2 + 0xf08) & 0xffffff3f;
      return;
    }
    break;
  case 0x93:
    *(float *)(param_2 + 0x7580) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d68) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xfffffffc | (uint)fVar21 & 3;
      uVar16 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar16 = 3;
      }
      uVar10 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar10 = 3;
      }
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xfffffffc | uVar16;
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xfffffffc | uVar10;
      return;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x7584) = fVar21;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d6c) = fVar21;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) =
           *(uint *)(param_2 + 0xef4) & 0xfffffff0 |
           *(uint *)(param_2 + 0xef4) & 3 | ((uint)fVar21 & 3) << 2;
      uVar16 = 0;
      if (fVar21 != 1.4013e-45) {
        uVar16 = 0xc;
      }
      uVar10 = 0;
      if (fVar21 != 2.8026e-45) {
        uVar10 = 0xc;
      }
      *(uint *)(param_2 + 0xf04) = uVar16 | *(uint *)(param_2 + 0xf04) & 0xfffffff3;
      *(uint *)(param_2 + 0xf08) = uVar10 | *(uint *)(param_2 + 0xf08) & 0xfffffff3;
      return;
    }
    break;
  case 0x97:
    *(uint *)(param_2 + 0x6e74) = (uint)(fVar21 == 3.57331e-43);
    if (fVar21 == 3.58732e-43) {
      fVar18 = 7.00649e-45;
    }
    else {
      fVar18 = 0.0;
      if ((uint)fVar21 < 4) {
        fVar18 = fVar21;
      }
    }
    *(float *)(param_2 + 0x759c) = fVar18;
    uVar16 = *(uint *)(param_2 + 0xf0c) & 0xffdfffff;
    if (fVar18 == 3.57331e-43) {
      uVar16 = *(uint *)(param_2 + 0xf0c) | 0x200000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar16;
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
LAB_18016559c:
      *(undefined1 *)(param_2 + 0x75b7) = 1;
      return;
    }
    goto LAB_1801655a8;
  case 0x9b:
    *(float *)(param_2 + 0x6e88) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_18016559c;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
    goto LAB_1801655a8;
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
    *(float *)(param_1 + 0xe58) = fVar21;
    *(undefined1 *)(param_1 + 0xf68c) = 1;
    return;
  case 0xa6:
    *(float *)(param_2 + 0x6e84) = fVar21;
    *(undefined1 *)(param_3 + 0x11) = 1;
    if (*(float *)(param_2 + 0x6e80) != 1.0) {
      if (*(float *)(param_2 + 0x6e88) != 1.0) goto LAB_18016559c;
      if (*(float *)(param_2 + 0x6e84) != 1.0) {
        *(undefined1 *)(param_2 + 0x75b7) = 1;
        return;
      }
    }
LAB_1801655a8:
    *(undefined1 *)(param_2 + 0x75b7) = 0;
    return;
  case 0xa7:
    *(uint *)(param_2 + 0x6e70) = (uint)(fVar21 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xa8:
    bVar14 = bVar14 & 0xf;
    *(byte *)(param_2 + 0xbd4) = bVar14;
    *(byte *)(param_2 + 0xb54) = bVar14;
    *(byte *)(param_2 + 0xcd4) = bVar14;
    *(byte *)(param_2 + 0xc54) = bVar14;
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
    uVar22 = (&DAT_18022c060)[(int)fVar21 - 1];
    *(undefined4 *)(param_2 + 0xcc4) = uVar22;
    *(undefined4 *)(param_2 + 0xc44) = uVar22;
    *(undefined4 *)(param_2 + 0xbd0) = uVar22;
    *(undefined4 *)(param_2 + 0xb50) = uVar22;
    *(undefined4 *)(param_2 + 0xbc4) = uVar22;
    *(undefined4 *)(param_2 + 0xb44) = uVar22;
    *(undefined4 *)(param_2 + 0xce4) = uVar22;
    *(undefined4 *)(param_2 + 0xc64) = uVar22;
    *(undefined4 *)(param_2 + 0xbf0) = uVar22;
    *(undefined4 *)(param_2 + 0xb70) = uVar22;
    *(undefined4 *)(param_2 + 0xbe4) = uVar22;
    *(undefined4 *)(param_2 + 0xb64) = uVar22;
    *(undefined4 *)(param_2 + 0xd04) = uVar22;
    *(undefined4 *)(param_2 + 0xc84) = uVar22;
    *(undefined4 *)(param_2 + 0xc10) = uVar22;
    *(undefined4 *)(param_2 + 0xb90) = uVar22;
    *(undefined4 *)(param_2 + 0xc04) = uVar22;
    *(undefined4 *)(param_2 + 0xb84) = uVar22;
    *(undefined4 *)(param_2 + 0xd24) = uVar22;
    *(undefined4 *)(param_2 + 0xca4) = uVar22;
    *(undefined4 *)(param_2 + 0xc30) = uVar22;
    *(undefined4 *)(param_2 + 0xbb0) = uVar22;
    *(undefined4 *)(param_2 + 0xc24) = uVar22;
    *(undefined4 *)(param_2 + 0xba4) = uVar22;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xac:
    uVar16 = *(uint *)(param_2 + 0x68bc) & 0xfffffffd;
    if (fVar21 == 4.2039e-45) {
      uVar16 = *(uint *)(param_2 + 0x68bc) | 2;
    }
    *(uint *)(param_2 + 0x68bc) = uVar16;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xad:
    uVar16 = *(uint *)(param_2 + 0x68bc) & 0xfffffffb;
    if (fVar21 == 2.8026e-45) {
      uVar16 = *(uint *)(param_2 + 0x68bc) | 4;
    }
    *(uint *)(param_2 + 0x68bc) = uVar16;
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
    uVar22 = 0x3f800000;
    *(float *)(param_2 + 0x6eb0) = fVar21;
    if ((fVar21 < 1.0) || (uVar22 = 0x41000000, 8.0 < fVar21)) {
      *(undefined4 *)(param_2 + 0x6eb0) = uVar22;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5190) = *(undefined4 *)(param_2 + 0x6eb0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    return;
  case 0xb3:
    uVar22 = 0x3f800000;
    *(float *)(param_2 + 0x6eb4) = fVar21;
    if ((fVar21 < 1.0) || (uVar22 = 0x41000000, 8.0 < fVar21)) {
      *(undefined4 *)(param_2 + 0x6eb4) = uVar22;
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
    uVar16 = *(uint *)(param_2 + 0x68bc) & 0xfffffffe;
    if (fVar21 != 0.0) {
      uVar16 = *(uint *)(param_2 + 0x68bc) | 1;
    }
    *(uint *)(param_2 + 0x68bc) = uVar16;
    *(undefined1 *)(param_3 + 0x11) = 1;
    return;
  case 0xb9:
    *(bool *)(param_2 + 0x75ba) = fVar21 != 0.0;
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xba:
    *(undefined4 *)(param_2 + 0xaf4) = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbb:
    *(undefined4 *)(param_2 + 0xaf8) = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbc:
    *(undefined4 *)(param_2 + 0xafc) = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbd:
    *(undefined4 *)(param_2 + 0xb00) = *(undefined4 *)(&DAT_18022bf20 + (param_5 & 0xffffffff) * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    return;
  case 0xbe:
    bVar14 = bVar14 & 0xf;
    *(byte *)(param_2 + 0xcf4) = bVar14;
    *(byte *)(param_2 + 0xc74) = bVar14;
    *(byte *)(param_2 + 0xbf4) = bVar14;
    *(byte *)(param_2 + 0xb74) = bVar14;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xbf:
    bVar14 = bVar14 & 0xf;
    *(byte *)(param_2 + 0xd14) = bVar14;
    *(byte *)(param_2 + 0xc94) = bVar14;
    *(byte *)(param_2 + 0xc14) = bVar14;
    *(byte *)(param_2 + 0xb94) = bVar14;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xc0:
    bVar14 = bVar14 & 0xf;
    *(byte *)(param_2 + 0xd34) = bVar14;
    *(byte *)(param_2 + 0xcb4) = bVar14;
    *(byte *)(param_2 + 0xc34) = bVar14;
    *(byte *)(param_2 + 0xbb4) = bVar14;
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
    uVar22 = *(undefined4 *)(&DAT_18022bfe0 + (param_5 & 0xffffffff) * 4);
    uVar13 = *(undefined4 *)(&DAT_18022bf60 + (param_5 & 0xffffffff) * 4);
    *(undefined4 *)(param_2 + 0xc48) = uVar22;
    *(undefined4 *)(param_2 + 0xcc8) = uVar13;
    if (fVar21 == 1.54143e-44) {
      uVar19 = 6;
    }
    else {
      if (fVar21 != 1.82169e-44) goto LAB_1801658b8;
      uVar19 = 5;
    }
    *(undefined4 *)(param_2 + 0xccc) = uVar19;
    *(undefined4 *)(param_2 + 0xc4c) = uVar19;
LAB_1801658b8:
    *(undefined4 *)(param_2 + 0xc68) = uVar22;
    *(undefined4 *)(param_2 + 0xce8) = uVar13;
    if (fVar21 == 1.82169e-44) {
      uVar19 = *(undefined4 *)(param_2 + 0xc4c);
      *(undefined4 *)(param_2 + 0xc6c) = uVar19;
      *(undefined4 *)(param_2 + 0xc88) = uVar22;
      *(undefined4 *)(param_2 + 0xd08) = uVar13;
      *(undefined4 *)(param_2 + 0xc8c) = uVar19;
      *(undefined4 *)(param_2 + 0xca8) = uVar22;
      *(undefined4 *)(param_2 + 0xd28) = uVar13;
      *(undefined4 *)(param_2 + 0xcac) = uVar19;
    }
    else {
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc6c) = *(undefined4 *)(param_2 + 0xc4c);
      }
      *(undefined4 *)(param_2 + 0xc88) = uVar22;
      *(undefined4 *)(param_2 + 0xd08) = uVar13;
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xc8c) = *(undefined4 *)(param_2 + 0xc4c);
      }
      *(undefined4 *)(param_2 + 0xca8) = uVar22;
      *(undefined4 *)(param_2 + 0xd28) = uVar13;
      if (fVar21 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xcac) = *(undefined4 *)(param_2 + 0xc4c);
        *(undefined1 *)(param_3 + 0xc) = 1;
        return;
      }
    }
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  case 0xd0:
    if ((uint)fVar21 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_18022bfe0 + (param_5 & 0xffffffff) * 4);
      uVar13 = *(undefined4 *)(&DAT_18022bf60 + (param_5 & 0xffffffff) * 4);
      *(undefined4 *)(param_2 + 0xc4c) = uVar22;
      *(undefined4 *)(param_2 + 0xccc) = uVar13;
      *(undefined4 *)(param_2 + 0xcec) = uVar13;
      *(undefined4 *)(param_2 + 0xc6c) = uVar22;
      *(undefined4 *)(param_2 + 0xc8c) = uVar22;
      *(undefined4 *)(param_2 + 0xd0c) = uVar13;
      *(undefined4 *)(param_2 + 0xcac) = uVar22;
      *(undefined4 *)(param_2 + 0xd2c) = uVar13;
      *(undefined1 *)(param_3 + 0xc) = 1;
      return;
    }
    break;
  case 0xd1:
    if (5 < (uint)fVar21) {
      fVar21 = 1.4013e-45;
    }
    uVar22 = (&DAT_18022c060)[(int)fVar21 - 1];
    *(undefined4 *)(param_2 + 0xcd0) = uVar22;
    *(undefined4 *)(param_2 + 0xc50) = uVar22;
    *(undefined4 *)(param_2 + 0xc70) = uVar22;
    *(undefined4 *)(param_2 + 0xcf0) = uVar22;
    *(undefined4 *)(param_2 + 0xc90) = uVar22;
    *(undefined4 *)(param_2 + 0xd10) = uVar22;
    *(undefined4 *)(param_2 + 0xcb0) = uVar22;
    *(undefined4 *)(param_2 + 0xd30) = uVar22;
    *(undefined1 *)(param_3 + 0xc) = 1;
    return;
  }
  return;
}

