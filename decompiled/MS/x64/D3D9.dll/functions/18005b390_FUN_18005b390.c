/*
 * FUN_18005b390 at 18005b390
 * undefined __fastcall FUN_18005b390(longlong param_1, longlong param_2, longlong param_3, undefined4 param_4, float param_5)
 * Address ranges: 18005b390-18005cd12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005b390(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  
  switch(param_4) {
  case 7:
    uVar14 = (uint)(param_5 != 0.0);
    *(uint *)(param_2 + 0x734) = uVar14;
    *(uint *)(param_2 + 0x700) = uVar14;
    *(uint *)(param_2 + 0xad0) = uVar14;
    *(undefined1 *)(param_3 + 0xb) = 1;
    uVar14 = 2;
    if (param_5 != 0.0) {
      uVar14 = 0;
    }
    uVar14 = (*(uint *)(param_1 + 0x7654) >> 1 & 1) == 0 | uVar14;
    uVar11 = *(uint *)(param_1 + 0x6e9c);
    *(uint *)(param_1 + 0x6e9c) = uVar14;
    *(byte *)(param_1 + 0xf691) = *(byte *)(param_1 + 0xf691) | uVar11 != uVar14;
    uVar14 = *(uint *)(param_1 + 0xe20);
    uVar11 = (uint)((*(uint *)(param_1 + 0x7654) >> 1 & 1) != 0);
    *(uint *)(param_1 + 0xe20) = uVar11;
    *(byte *)(param_1 + 0xf68d) = *(byte *)(param_1 + 0xf68d) | uVar14 != uVar11;
    break;
  case 8:
    *(uint *)(param_2 + 0xd58) = (param_5 != 2.8026e-45) + 2;
    *(bool *)(param_2 + 0x75b1) = param_5 == 1.4013e-45;
    *(undefined1 *)(param_3 + 0xd) = 1;
    break;
  case 9:
    uVar12 = 0;
    *(bool *)(param_2 + 0x75b0) = param_5 == 1.4013e-45;
    *(ulonglong *)(param_2 + 0xf30) = *(ulonglong *)(param_2 + 0xf30) & 0xff7fffffffffffff;
    if (param_5 == 1.4013e-45) {
      uVar12 = 0x80000000000000;
    }
    *(ulonglong *)(param_2 + 0xf30) = *(ulonglong *)(param_2 + 0xf30) | uVar12;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x88:
  case 0x8a:
  case 0x90:
  case 0x95:
  case 0x96:
  case 0x99:
  case 0xa1:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa9:
  case 0xb0:
  case 0xb1:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
    break;
  case 0xe:
    uVar14 = (uint)(param_5 != 0.0);
    *(uint *)(param_2 + 0x738) = uVar14;
    *(uint *)(param_2 + 0x704) = uVar14;
    *(uint *)(param_2 + 0xad4) = uVar14;
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xf:
    *(bool *)(param_2 + 0x75ae) = param_5 != 0.0;
    if (param_5 == 0.0) {
      *(undefined4 *)(param_2 + 0x68d4) = 0;
      *(undefined1 *)(param_3 + 8) = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x68d4) = *(undefined4 *)(param_2 + 0x7574);
      *(undefined1 *)(param_3 + 8) = 1;
    }
    goto LAB_18005ccef;
  case 0x13:
    uVar12 = (ulonglong)(uint)param_5;
    if ((uint)param_5 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_1800fe7c0 + uVar12 * 4);
      uVar8 = *(undefined4 *)(&DAT_1800fe740 + uVar12 * 4);
      uVar7 = *(undefined4 *)(&DAT_1800fe780 + uVar12 * 4);
      uVar4 = *(undefined4 *)(&DAT_1800fe700 + uVar12 * 4);
      *(undefined4 *)(param_2 + 0xbc8) = uVar4;
      *(undefined4 *)(param_2 + 0xb3c) = uVar22;
      *(undefined4 *)(param_2 + 0xbbc) = uVar8;
      *(undefined4 *)(param_2 + 0xb48) = uVar7;
      *(undefined4 *)(param_2 + 0xc3c) = uVar22;
      *(undefined4 *)(param_2 + 0xcbc) = uVar8;
      if (param_5 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xbc0) = 6;
        *(undefined4 *)(param_2 + 0xb40) = 6;
        *(undefined4 *)(param_2 + 0xbcc) = 6;
        *(undefined4 *)(param_2 + 0xb4c) = 6;
        *(undefined4 *)(param_2 + 0xcc0) = 6;
        *(undefined4 *)(param_2 + 0xc40) = 6;
      }
      else if (param_5 == 1.82169e-44) {
        *(undefined4 *)(param_2 + 0xbc0) = 5;
        *(undefined4 *)(param_2 + 0xb40) = 5;
        *(undefined4 *)(param_2 + 0xbcc) = 5;
        *(undefined4 *)(param_2 + 0xb4c) = 5;
        *(undefined4 *)(param_2 + 0xcc0) = 5;
        *(undefined4 *)(param_2 + 0xc40) = 5;
      }
      *(undefined4 *)(param_2 + 0xb5c) = uVar22;
      *(undefined4 *)(param_2 + 0xb68) = uVar7;
      *(undefined4 *)(param_2 + 0xbdc) = uVar8;
      *(undefined4 *)(param_2 + 0xbe8) = uVar4;
      *(undefined4 *)(param_2 + 0xc5c) = uVar22;
      *(undefined4 *)(param_2 + 0xcdc) = uVar8;
      if (param_5 == 1.82169e-44) {
        uVar1 = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xb60) = uVar1;
        uVar2 = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xb6c) = uVar2;
        uVar3 = *(undefined4 *)(param_2 + 0xc40);
        *(undefined4 *)(param_2 + 0xc60) = uVar3;
        *(undefined4 *)(param_2 + 0xb7c) = uVar22;
        *(undefined4 *)(param_2 + 0xb88) = uVar7;
        *(undefined4 *)(param_2 + 0xbfc) = uVar8;
        *(undefined4 *)(param_2 + 0xc08) = uVar4;
        *(undefined4 *)(param_2 + 0xc7c) = uVar22;
        *(undefined4 *)(param_2 + 0xcfc) = uVar8;
        *(undefined4 *)(param_2 + 0xb80) = uVar1;
        *(undefined4 *)(param_2 + 0xb8c) = uVar2;
        *(undefined4 *)(param_2 + 0xc80) = uVar3;
        *(undefined4 *)(param_2 + 0xb9c) = uVar22;
        *(undefined4 *)(param_2 + 0xba8) = uVar7;
        *(undefined4 *)(param_2 + 0xc1c) = uVar8;
        *(undefined4 *)(param_2 + 0xc28) = uVar4;
        *(undefined4 *)(param_2 + 0xc9c) = uVar22;
        *(undefined4 *)(param_2 + 0xd1c) = uVar8;
        *(undefined4 *)(param_2 + 0xba0) = uVar1;
        *(undefined4 *)(param_2 + 0xbac) = uVar2;
        *(undefined4 *)(param_2 + 0xca0) = uVar3;
        *(undefined1 *)(param_3 + 0xc) = 1;
      }
      else {
        bVar21 = param_5 != 1.54143e-44;
        if (!bVar21) {
          *(undefined4 *)(param_2 + 0xb60) = *(undefined4 *)(param_2 + 0xb40);
          *(undefined4 *)(param_2 + 0xb6c) = *(undefined4 *)(param_2 + 0xb4c);
          *(undefined4 *)(param_2 + 0xc60) = *(undefined4 *)(param_2 + 0xc40);
        }
        *(undefined4 *)(param_2 + 0xb7c) = uVar22;
        *(undefined4 *)(param_2 + 0xb88) = uVar7;
        *(undefined4 *)(param_2 + 0xbfc) = uVar8;
        *(undefined4 *)(param_2 + 0xc08) = uVar4;
        *(undefined4 *)(param_2 + 0xc7c) = uVar22;
        *(undefined4 *)(param_2 + 0xcfc) = uVar8;
        if (!bVar21) {
          *(undefined4 *)(param_2 + 0xb80) = *(undefined4 *)(param_2 + 0xb40);
          *(undefined4 *)(param_2 + 0xb8c) = *(undefined4 *)(param_2 + 0xb4c);
          *(undefined4 *)(param_2 + 0xc80) = *(undefined4 *)(param_2 + 0xc40);
        }
        *(undefined4 *)(param_2 + 0xb9c) = uVar22;
        *(undefined4 *)(param_2 + 0xba8) = uVar7;
        *(undefined4 *)(param_2 + 0xc1c) = uVar8;
        *(undefined4 *)(param_2 + 0xc28) = uVar4;
        *(undefined4 *)(param_2 + 0xc9c) = uVar22;
        *(undefined4 *)(param_2 + 0xd1c) = uVar8;
        if (bVar21) goto LAB_18005c9b3;
        *(undefined4 *)(param_2 + 0xba0) = *(undefined4 *)(param_2 + 0xb40);
        *(undefined4 *)(param_2 + 0xbac) = *(undefined4 *)(param_2 + 0xb4c);
        *(undefined4 *)(param_2 + 0xca0) = *(undefined4 *)(param_2 + 0xc40);
        *(undefined1 *)(param_3 + 0xc) = 1;
      }
    }
    break;
  case 0x14:
    uVar12 = (ulonglong)(uint)param_5;
    if ((uint)param_5 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_1800fe7c0 + uVar12 * 4);
      uVar8 = *(undefined4 *)(&DAT_1800fe740 + uVar12 * 4);
      uVar7 = *(undefined4 *)(&DAT_1800fe700 + uVar12 * 4);
      *(undefined4 *)(param_2 + 0xb40) = uVar22;
      *(undefined4 *)(param_2 + 0xbc0) = uVar8;
      uVar4 = *(undefined4 *)(&DAT_1800fe780 + uVar12 * 4);
      *(undefined4 *)(param_2 + 0xb4c) = uVar4;
      *(undefined4 *)(param_2 + 0xbcc) = uVar7;
      *(undefined4 *)(param_2 + 0xc40) = uVar22;
      *(undefined4 *)(param_2 + 0xcc0) = uVar8;
      *(undefined4 *)(param_2 + 0xb60) = uVar22;
      *(undefined4 *)(param_2 + 0xbe0) = uVar8;
      *(undefined4 *)(param_2 + 0xb6c) = uVar4;
      *(undefined4 *)(param_2 + 0xbec) = uVar7;
      *(undefined4 *)(param_2 + 0xc60) = uVar22;
      *(undefined4 *)(param_2 + 0xce0) = uVar8;
      *(undefined4 *)(param_2 + 0xb80) = uVar22;
      *(undefined4 *)(param_2 + 0xc00) = uVar8;
      *(undefined4 *)(param_2 + 0xb8c) = uVar4;
      *(undefined4 *)(param_2 + 0xc0c) = uVar7;
      *(undefined4 *)(param_2 + 0xc80) = uVar22;
      *(undefined4 *)(param_2 + 0xd00) = uVar8;
      *(undefined4 *)(param_2 + 0xba0) = uVar22;
      *(undefined4 *)(param_2 + 0xc20) = uVar8;
      *(undefined4 *)(param_2 + 0xbac) = uVar4;
      *(undefined4 *)(param_2 + 0xc2c) = uVar7;
      *(undefined4 *)(param_2 + 0xca0) = uVar22;
      *(undefined4 *)(param_2 + 0xd20) = uVar8;
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
    break;
  case 0x16:
    if ((uint)param_5 < 4) {
      *(undefined4 *)(param_2 + 0xd5c) =
           *(undefined4 *)(&DAT_1800fe6e8 + (ulonglong)(uint)param_5 * 4);
      *(undefined1 *)(param_3 + 0xd) = 1;
    }
    break;
  case 0x17:
    if ((uint)param_5 < 9) {
      uVar22 = *(undefined4 *)(&DAT_1800fe6c0 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0x73c) = uVar22;
      *(undefined4 *)(param_2 + 0x708) = uVar22;
      *(undefined4 *)(param_2 + 0xad8) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    break;
  case 0x18:
    *(uint *)(param_2 + 0x68d0) = (uint)param_5 & 0xff;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6438) = *(undefined4 *)(param_2 + 0x68d0);
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0x19:
    *(float *)(param_2 + 0x7574) = param_5;
    uVar12 = (ulonglong)((int)param_5 - 1) << 0x34;
    *(ulonglong *)(param_2 + 0xf30) =
         (uVar12 ^ *(ulonglong *)(param_2 + 0xf30)) & 0xff8fffffffffffff ^ uVar12;
    fVar15 = 0.0;
    if (*(char *)(param_2 + 0x75ae) != '\0') {
      fVar15 = param_5;
    }
    *(float *)(param_2 + 0x68d4) = fVar15;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x1a:
    uVar12 = 0;
    iVar16 = 0;
    *(bool *)(param_2 + 0x75bd) = param_5 != 0.0;
    *(ulonglong *)(param_2 + 0xf30) = *(ulonglong *)(param_2 + 0xf30) & 0xefffffffffffffff;
    if (param_5 == 0.0) {
      uVar12 = 0x1000000000000000;
    }
    *(ulonglong *)(param_2 + 0xf30) = *(ulonglong *)(param_2 + 0xf30) | uVar12;
    if ((param_5 == 0.0) && (*(char *)(param_2 + 0x75be) != '\0')) {
      iVar16 = 1;
    }
    *(byte *)(param_3 + 0x11) = *(byte *)(param_3 + 0x11) | *(int *)(param_2 + 0x68ec) != iVar16;
    *(int *)(param_2 + 0x68ec) = iVar16;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x1b:
    uVar14 = (uint)(param_5 != 0.0);
    *(uint *)(param_2 + 3000) = uVar14;
    *(uint *)(param_2 + 0xb38) = uVar14;
    *(uint *)(param_2 + 0xcb8) = uVar14;
    *(uint *)(param_2 + 0xc38) = uVar14;
    *(uint *)(param_2 + 0xcd8) = uVar14;
    *(uint *)(param_2 + 0xc58) = uVar14;
    *(uint *)(param_2 + 0xbd8) = uVar14;
    *(uint *)(param_2 + 0xb58) = uVar14;
    *(uint *)(param_2 + 0xcf8) = uVar14;
    *(uint *)(param_2 + 0xc78) = uVar14;
    *(uint *)(param_2 + 0xbf8) = uVar14;
    *(uint *)(param_2 + 0xb78) = uVar14;
    *(uint *)(param_2 + 0xd18) = uVar14;
    *(uint *)(param_2 + 0xc98) = uVar14;
    *(uint *)(param_2 + 0xc18) = uVar14;
    *(uint *)(param_2 + 0xb98) = uVar14;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0x1c:
    if (param_5 == 0.0) {
      uVar22 = 0;
    }
    else {
      uVar22 = 0x3f800000;
    }
    *(undefined4 *)(param_2 + 0x68d8) = uVar22;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75bc) = param_5 != 0.0;
    *(ulonglong *)(param_2 + 0xf30) = *(ulonglong *)(param_2 + 0xf30) & 0xfdffffffffffffff;
    *(ulonglong *)(param_2 + 0xf30) =
         *(ulonglong *)(param_2 + 0xf30) | -(ulonglong)(param_5 != 0.0) & 0x200000000000000;
    *(undefined1 *)(param_3 + 8) = 1;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xfbffffff;
    if (param_5 != 0.0) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x4000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x1d:
    *(uint *)(param_2 + 0x68c8) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x644c) = param_5;
    *(undefined1 *)(param_3 + 0x43) = 1;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xffefffff;
    if (param_5 != 0.0) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x100000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x22:
    *(float *)(param_2 + 0x6930) = (float)((uint)param_5 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6934) = (float)((uint)param_5 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6938) = (float)((uint)param_5 & 0xff) / 255.0;
    *(float *)(param_2 + 0x693c) = (float)((uint)param_5 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x63b0) = *(undefined4 *)(param_2 + 0x6930);
    *(undefined4 *)(param_2 + 0x63b4) = *(undefined4 *)(param_2 + 0x6934);
    *(undefined4 *)(param_2 + 0x63b8) = *(undefined4 *)(param_2 + 0x6938);
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0x23:
    *(float *)(param_2 + 0x68f8) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(float *)(param_2 + 0x7588) = param_5;
    *(ulonglong *)(param_2 + 0xf30) =
         ((ulonglong)(uint)param_5 << 0x3a ^ *(ulonglong *)(param_2 + 0xf30)) & 0xf3ffffffffffffff ^
         (ulonglong)(uint)param_5 << 0x3a;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x24:
    if (1e+37 <= ABS(param_5)) {
      param_5 = (float)((uint)param_5 & 0xfcf0bdc2 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68e0) = param_5;
    *(float *)(param_2 + 0x68dc) = *(float *)(param_2 + 0x68e4) - param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    goto LAB_18005bcaf;
  case 0x25:
    if (1e+37 <= ABS(param_5)) {
      param_5 = (float)((uint)param_5 & 0xfcf0bdc2 | 0x7cf0bdc2);
    }
    *(float *)(param_2 + 0x68e4) = param_5;
    *(float *)(param_2 + 0x68dc) = param_5 - *(float *)(param_2 + 0x68e0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6444) = *(undefined4 *)(param_2 + 0x68e4);
    *(undefined4 *)(param_2 + 0x6448) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5114) = *(undefined4 *)(param_2 + 0x68e4);
LAB_18005bcaf:
    *(undefined4 *)(param_2 + 0x5118) = *(undefined4 *)(param_2 + 0x68dc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0x26:
    *(float *)(param_2 + 0x68e8) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6440) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined4 *)(param_2 + 0x5110) = *(undefined4 *)(param_2 + 0x68e8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0x30:
    *(uint *)(param_2 + 0x68f0) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xefffffff;
    if (param_5 != 0.0) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x10000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x34:
    *(uint *)(param_2 + 0x70c) = (uint)(param_5 != 0.0);
    *(uint *)(param_2 + 0xadc) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0x35:
    if ((uint)param_5 < 9) {
      uVar22 = *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0x724) = uVar22;
      *(undefined4 *)(param_2 + 0x714) = uVar22;
      *(undefined4 *)(param_2 + 0xae4) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    break;
  case 0x36:
    if ((uint)param_5 < 9) {
      uVar22 = *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0x728) = uVar22;
      *(undefined4 *)(param_2 + 0x718) = uVar22;
      *(undefined4 *)(param_2 + 0xae8) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    break;
  case 0x37:
    if ((uint)param_5 < 9) {
      uVar22 = *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0x72c) = uVar22;
      *(undefined4 *)(param_2 + 0x71c) = uVar22;
      *(undefined4 *)(param_2 + 0xaec) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    break;
  case 0x38:
    if ((uint)param_5 < 9) {
      uVar22 = *(undefined4 *)(&DAT_1800fe6c0 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0x730) = uVar22;
      *(undefined4 *)(param_2 + 0x720) = uVar22;
      *(undefined4 *)(param_2 + 0xaf0) = uVar22;
      *(undefined1 *)(param_3 + 0xb) = 1;
    }
    break;
  case 0x39:
    *(byte *)(param_2 + 0x74f0) = param_5._0_1_;
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0x3a:
    *(byte *)(param_2 + 0x710) = param_5._0_1_;
    *(byte *)(param_2 + 0xae0) = param_5._0_1_;
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0x3b:
    *(byte *)(param_2 + 0x711) = param_5._0_1_;
    *(byte *)(param_2 + 0xae1) = param_5._0_1_;
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0x3c:
    *(float *)(param_2 + 0x6940) = (float)((uint)param_5 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6944) = (float)((uint)param_5 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6948) = (float)((uint)param_5 & 0xff) / 255.0;
    *(float *)(param_2 + 0x694c) = (float)((uint)param_5 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6450) = *(undefined4 *)(param_2 + 0x6940);
    *(undefined4 *)(param_2 + 0x6454) = *(undefined4 *)(param_2 + 0x6944);
    *(undefined4 *)(param_2 + 0x6458) = *(undefined4 *)(param_2 + 0x6948);
    *(undefined4 *)(param_2 + 0x645c) = *(undefined4 *)(param_2 + 0x694c);
    *(undefined1 *)(param_3 + 0x43) = 1;
    break;
  case 0x80:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff0;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | (uint)param_5 & 0xf;
    break;
  case 0x81:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xffffff0f;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 4;
    break;
  case 0x82:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffff0ff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 8;
    break;
  case 0x83:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xffff0fff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 0xc;
    break;
  case 0x84:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfff0ffff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 0x10;
    break;
  case 0x85:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xff0fffff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 0x14;
    break;
  case 0x86:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xf0ffffff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | ((uint)param_5 & 0xf) << 0x18;
    break;
  case 0x87:
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) & 0xfffffff;
    *(uint *)(param_2 + 0x75a8) = *(uint *)(param_2 + 0x75a8) | (int)param_5 << 0x1c;
    break;
  case 0x89:
    *(uint *)(param_2 + 0x68cc) = (uint)(param_5 != 0.0);
    goto LAB_18005ccef;
  case 0x8b:
    *(float *)(param_2 + 0x6920) = (float)((uint)param_5 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6924) = (float)((uint)param_5 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0x6928) = (float)((uint)param_5 & 0xff) / 255.0;
    *(float *)(param_2 + 0x692c) = (float)((uint)param_5 >> 0x18) / 255.0;
    goto LAB_18005ccef;
  case 0x8c:
    *(float *)(param_2 + 0x68fc) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x511c) = *(undefined4 *)(param_2 + 0x68fc);
    *(undefined1 *)(param_3 + 0x34) = 1;
    *(uint *)(param_2 + 0xf0c) = *(uint *)(param_2 + 0xf0c) & 0xfcffffff;
    if ((uint)param_5 < 4) {
      *(uint *)(param_2 + 0xf0c) = *(uint *)(param_2 + 0xf0c) | (int)param_5 << 0x18;
    }
    break;
  case 0x8d:
    *(bool *)(param_2 + 0x75af) = param_5 != 0.0;
    if (param_5 == 0.0) {
      *(undefined8 *)(param_2 + 28000) = 0;
      *(undefined8 *)(param_2 + 0x6d68) = 0;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xffffff00;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | 0xff;
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | 0xff;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    else {
      iVar16 = *(int *)(param_2 + 0x7578);
      *(int *)(param_2 + 28000) = iVar16;
      iVar5 = *(int *)(param_2 + 0x757c);
      uVar18 = 0xc;
      *(int *)(param_2 + 0x6d64) = iVar5;
      uVar14 = *(uint *)(param_2 + 0x7580);
      *(uint *)(param_2 + 0x6d68) = uVar14;
      iVar6 = *(int *)(param_2 + 0x7584);
      *(int *)(param_2 + 0x6d6c) = iVar6;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xffffffcf;
      uVar11 = (iVar16 << 4 ^ *(uint *)(param_2 + 0xef4)) & 0x30 ^ *(uint *)(param_2 + 0xef4);
      uVar11 = (iVar5 << 6 ^ uVar11) & 0xc0 ^ uVar11;
      uVar11 = (uVar14 ^ uVar11) & 3 ^ uVar11;
      uVar19 = 0x30;
      *(uint *)(param_2 + 0xef4) = (iVar6 * 4 ^ uVar11) & 0xc ^ uVar11;
      uVar20 = 3;
      uVar11 = 3;
      uVar17 = 0xc;
      if (iVar6 == 1) {
        uVar17 = 0;
      }
      if (uVar14 == 1) {
        uVar11 = 0;
      }
      uVar9 = 0xc0;
      if (iVar5 == 1) {
        uVar9 = 0;
      }
      uVar13 = 0x30;
      if (iVar16 == 1) {
        uVar13 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xffffffcf;
      *(uint *)(param_2 + 0xf04) =
           uVar13 | *(uint *)(param_2 + 0xf04) & 0xffffff30 | uVar9 | uVar11 | uVar17;
      if (iVar6 == 2) {
        uVar18 = 0;
      }
      if (uVar14 == 2) {
        uVar20 = 0;
      }
      uVar14 = 0xc0;
      if (iVar5 == 2) {
        uVar14 = 0;
      }
      if (iVar16 == 2) {
        uVar19 = 0;
      }
      *(uint *)(param_2 + 0xf08) =
           uVar19 | *(uint *)(param_2 + 0xf08) & 0xffffff30 | uVar14 | uVar20 | uVar18;
      *(undefined1 *)(param_3 + 0x11) = 1;
    }
    break;
  case 0x8e:
    *(uint *)(param_2 + 0x68c0) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xdfffffff;
    if (param_5 != 0.0) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x20000000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x8f:
    *(uint *)(param_2 + 0x68c4) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xff7fffff;
    if (param_5 != 0.0) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x800000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x91:
    *(float *)(param_2 + 0x7578) = param_5;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 28000) = param_5;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xffffffcf;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xffffffcf;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) | ((uint)param_5 & 3) << 4;
      uVar11 = 0x30;
      uVar14 = 0x30;
      if (param_5 == 1.4013e-45) {
        uVar14 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xffffffcf;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | uVar14;
      if (param_5 == 2.8026e-45) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | uVar11;
    }
    break;
  case 0x92:
    *(float *)(param_2 + 0x757c) = param_5;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d64) = param_5;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xffffff3f;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xffffff3f;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) | ((uint)param_5 & 3) << 6;
      uVar11 = 0xc0;
      uVar14 = 0xc0;
      if (param_5 == 1.4013e-45) {
        uVar14 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xffffff3f;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | uVar14;
      if (param_5 == 2.8026e-45) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | uVar11;
    }
    break;
  case 0x93:
    *(float *)(param_2 + 0x7580) = param_5;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d68) = param_5;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xfffffffc;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xfffffffc;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) | (uint)param_5 & 3;
      uVar11 = 3;
      uVar14 = 3;
      if (param_5 == 1.4013e-45) {
        uVar14 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xfffffffc;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | uVar14;
      if (param_5 == 2.8026e-45) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | uVar11;
    }
    break;
  case 0x94:
    *(float *)(param_2 + 0x7584) = param_5;
    if (*(char *)(param_2 + 0x75af) != '\0') {
      *(float *)(param_2 + 0x6d6c) = param_5;
      *(undefined1 *)(param_3 + 0x11) = 1;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) & 0xfffffff3;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) & 0xfffffff3;
      *(uint *)(param_2 + 0xef4) = *(uint *)(param_2 + 0xef4) | ((uint)param_5 & 3) << 2;
      uVar11 = 0xc;
      uVar14 = 0xc;
      if (param_5 == 1.4013e-45) {
        uVar14 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) & 0xfffffff3;
      *(uint *)(param_2 + 0xf04) = *(uint *)(param_2 + 0xf04) | uVar14;
      if (param_5 == 2.8026e-45) {
        uVar11 = 0;
      }
      *(uint *)(param_2 + 0xf08) = *(uint *)(param_2 + 0xf08) | uVar11;
    }
    break;
  case 0x97:
    *(uint *)(param_2 + 0x6e74) = (uint)(param_5 == 3.57331e-43);
    if (param_5 == 3.58732e-43) {
      param_5 = 7.00649e-45;
    }
    else if (3 < (uint)param_5) {
      param_5 = 0.0;
    }
    *(float *)(param_2 + 0x759c) = param_5;
    uVar14 = *(uint *)(param_2 + 0xf0c) & 0xffdfffff;
    if (param_5 == 3.57331e-43) {
      uVar14 = *(uint *)(param_2 + 0xf0c) | 0x200000;
    }
    *(uint *)(param_2 + 0xf0c) = uVar14;
    break;
  case 0x98:
    *(uint *)(param_2 + 0x6dd0) = -(uint)(((uint)param_5 & 1) != 0);
    *(uint *)(param_2 + 0x6dd4) = -(uint)(((uint)param_5 & 2) != 0);
    *(uint *)(param_2 + 0x6dd8) = -(uint)(((uint)param_5 & 4) != 0);
    *(uint *)(param_2 + 0x6ddc) = -(uint)(((uint)param_5 & 8) != 0);
    *(uint *)(param_2 + 0x6de0) = -(uint)(((uint)param_5 & 0x10) != 0);
    *(uint *)(param_2 + 0x6de4) = -(uint)(((uint)param_5 & 0x20) != 0);
    *(uint *)(param_2 + 0x75a0) = (uint)param_5 & 0x3f;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x6420) = *(undefined4 *)(param_2 + 0x6dd0);
    *(undefined4 *)(param_2 + 0x6424) = *(undefined4 *)(param_2 + 0x6dd4);
    *(undefined4 *)(param_2 + 0x6428) = *(undefined4 *)(param_2 + 0x6dd8);
    *(undefined4 *)(param_2 + 0x642c) = *(undefined4 *)(param_2 + 0x6ddc);
    *(undefined4 *)(param_2 + 0x6430) = *(undefined4 *)(param_2 + 0x6de0);
    *(undefined4 *)(param_2 + 0x6434) = *(undefined4 *)(param_2 + 0x6de4);
    *(undefined1 *)(param_3 + 0x43) = 1;
    *(undefined1 *)(param_3 + 8) = 1;
    break;
  case 0x9a:
    *(float *)(param_2 + 0x6e80) = param_5;
    goto LAB_18005c65f;
  case 0x9b:
    *(float *)(param_2 + 0x6e88) = param_5;
    goto LAB_18005c65f;
  case 0x9c:
    *(uint *)(param_2 + 0x6e8c) = (uint)(param_5 != 0.0);
    goto LAB_18005ccef;
  case 0x9d:
    *(uint *)(param_2 + 0x6e90) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(bool *)(param_2 + 0x75b6) = param_5 != 0.0;
    break;
  case 0x9e:
    *(float *)(param_2 + 0x6e94) = param_5;
    goto LAB_18005ccef;
  case 0x9f:
    *(float *)(param_2 + 0x6e98) = param_5;
    goto LAB_18005ccef;
  case 0xa0:
    *(float *)(param_2 + 0x6e9c) = param_5;
    goto LAB_18005ccef;
  case 0xa2:
    *(float *)(param_1 + 0xe58) = param_5;
    *(undefined1 *)(param_1 + 0xf68c) = 1;
    break;
  case 0xa6:
    *(float *)(param_2 + 0x6e84) = param_5;
LAB_18005c65f:
    *(undefined1 *)(param_3 + 0x11) = 1;
    if ((*(float *)(param_2 + 0x6e80) == 1.0) ||
       ((*(float *)(param_2 + 0x6e88) == 1.0 && (*(float *)(param_2 + 0x6e84) == 1.0)))) {
      *(undefined1 *)(param_2 + 0x75b7) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x75b7) = 1;
    }
    break;
  case 0xa7:
    *(uint *)(param_2 + 0x6e70) = (uint)(param_5 != 0.0);
    goto LAB_18005ccef;
  case 0xa8:
    bVar10 = param_5._0_1_ & 0xf;
    *(byte *)(param_2 + 0xbd4) = bVar10;
    *(byte *)(param_2 + 0xb54) = bVar10;
    *(byte *)(param_2 + 0xcd4) = bVar10;
    *(byte *)(param_2 + 0xc54) = bVar10;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xaa:
    *(float *)(param_2 + 0x6e78) = param_5;
    goto LAB_18005ccef;
  case 0xab:
    if (5 < (uint)param_5) {
      param_5 = 1.4013e-45;
    }
    uVar22 = (&DAT_1800fe800)[(int)param_5 - 1];
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
    break;
  case 0xac:
    uVar11 = *(uint *)(param_2 + 0x68bc) & 0xfffffffd;
    uVar14 = *(uint *)(param_2 + 0x68bc) | 2;
    bVar21 = param_5 == 4.2039e-45;
    goto LAB_18005cce6;
  case 0xad:
    uVar11 = *(uint *)(param_2 + 0x68bc) & 0xfffffffb;
    uVar14 = *(uint *)(param_2 + 0x68bc) | 4;
    bVar21 = param_5 == 2.8026e-45;
LAB_18005cce6:
    if (!bVar21) {
      uVar14 = uVar11;
    }
LAB_18005cce9:
    *(uint *)(param_2 + 0x68bc) = uVar14;
LAB_18005ccef:
    *(undefined1 *)(param_3 + 0x11) = 1;
    break;
  case 0xae:
    *(uint *)(param_2 + 0xd9c) = (uint)(param_5 != 0.0);
    *(uint *)(param_2 + 0xd74) = (uint)(param_5 != 0.0);
    *(undefined1 *)(param_3 + 0xd) = 1;
    break;
  case 0xaf:
    *(float *)(param_2 + 0xd6c) = param_5;
    *(undefined1 *)(param_3 + 0xd) = 1;
    break;
  case 0xb2:
    *(float *)(param_2 + 0x6eb0) = param_5;
    if (1.0 <= param_5) {
      if (8.0 < param_5) {
        *(undefined4 *)(param_2 + 0x6eb0) = 0x41000000;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x6eb0) = 0x3f800000;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5190) = *(undefined4 *)(param_2 + 0x6eb0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb3:
    *(float *)(param_2 + 0x6eb4) = param_5;
    if (1.0 <= param_5) {
      if (8.0 < param_5) {
        *(undefined4 *)(param_2 + 0x6eb4) = 0x41000000;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x6eb4) = 0x3f800000;
    }
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5194) = *(undefined4 *)(param_2 + 0x6eb4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb4:
    *(float *)(param_2 + 0x6ea0) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5180) = *(undefined4 *)(param_2 + 0x6ea0);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb5:
    *(float *)(param_2 + 0x6ea4) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5184) = *(undefined4 *)(param_2 + 0x6ea4);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb6:
    *(float *)(param_2 + 0x6ea8) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x5188) = *(undefined4 *)(param_2 + 0x6ea8);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb7:
    *(float *)(param_2 + 0x6eac) = param_5;
    *(undefined1 *)(param_3 + 0x11) = 1;
    *(undefined4 *)(param_2 + 0x518c) = *(undefined4 *)(param_2 + 0x6eac);
    *(undefined1 *)(param_3 + 0x34) = 1;
    break;
  case 0xb8:
    uVar14 = *(uint *)(param_2 + 0x68bc) | 1;
    if (param_5 == 0.0) {
      uVar14 = *(uint *)(param_2 + 0x68bc) & 0xfffffffe;
    }
    goto LAB_18005cce9;
  case 0xb9:
    *(bool *)(param_2 + 0x75ba) = param_5 != 0.0;
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xba:
    *(undefined4 *)(param_2 + 0xaf4) =
         *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xbb:
    *(undefined4 *)(param_2 + 0xaf8) =
         *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xbc:
    *(undefined4 *)(param_2 + 0xafc) =
         *(undefined4 *)(&DAT_1800fe698 + (ulonglong)(uint)param_5 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xbd:
    *(undefined4 *)(param_2 + 0xb00) =
         *(undefined4 *)(&DAT_1800fe6c0 + (ulonglong)(uint)param_5 * 4);
    *(undefined1 *)(param_3 + 0xb) = 1;
    break;
  case 0xbe:
    bVar10 = param_5._0_1_ & 0xf;
    *(byte *)(param_2 + 0xcf4) = bVar10;
    *(byte *)(param_2 + 0xc74) = bVar10;
    *(byte *)(param_2 + 0xbf4) = bVar10;
    *(byte *)(param_2 + 0xb74) = bVar10;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xbf:
    bVar10 = param_5._0_1_ & 0xf;
    *(byte *)(param_2 + 0xd14) = bVar10;
    *(byte *)(param_2 + 0xc94) = bVar10;
    *(byte *)(param_2 + 0xc14) = bVar10;
    *(byte *)(param_2 + 0xb94) = bVar10;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xc0:
    bVar10 = param_5._0_1_ & 0xf;
    *(byte *)(param_2 + 0xd34) = bVar10;
    *(byte *)(param_2 + 0xcb4) = bVar10;
    *(byte *)(param_2 + 0xc34) = bVar10;
    *(byte *)(param_2 + 0xbb4) = bVar10;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xc1:
    *(float *)(param_2 + 0xdd0) = (float)((uint)param_5 >> 0x10 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd4) = (float)((uint)param_5 >> 8 & 0xff) / 255.0;
    *(float *)(param_2 + 0xdd8) = (float)((uint)param_5 & 0xff) / 255.0;
    *(float *)(param_2 + 0xddc) = (float)((uint)param_5 >> 0x18) / 255.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xc2:
    *(bool *)(param_2 + 0x75ad) = param_5 != 0.0;
    *(undefined1 *)(param_3 + 10) = 1;
    break;
  case 0xc3:
    *(float *)(param_2 + 0xde0) = param_5;
    *(undefined1 *)(param_3 + 0xd) = 1;
    break;
  case 0xce:
    *(bool *)(param_2 + 0x75b9) = param_5 != 0.0;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  case 0xcf:
    if ((uint)param_5 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_1800fe780 + (ulonglong)(uint)param_5 * 4);
      uVar8 = *(undefined4 *)(&DAT_1800fe700 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0xc48) = uVar22;
      *(undefined4 *)(param_2 + 0xcc8) = uVar8;
      if (param_5 == 1.54143e-44) {
        *(undefined4 *)(param_2 + 0xccc) = 6;
        *(undefined4 *)(param_2 + 0xc4c) = 6;
      }
      else if (param_5 == 1.82169e-44) {
        *(undefined4 *)(param_2 + 0xccc) = 5;
        *(undefined4 *)(param_2 + 0xc4c) = 5;
      }
      *(undefined4 *)(param_2 + 0xc68) = uVar22;
      *(undefined4 *)(param_2 + 0xce8) = uVar8;
      if (param_5 == 1.82169e-44) {
        uVar7 = *(undefined4 *)(param_2 + 0xc4c);
        *(undefined4 *)(param_2 + 0xc6c) = uVar7;
        *(undefined4 *)(param_2 + 0xc88) = uVar22;
        *(undefined4 *)(param_2 + 0xd08) = uVar8;
        *(undefined4 *)(param_2 + 0xc8c) = uVar7;
        *(undefined4 *)(param_2 + 0xca8) = uVar22;
        *(undefined4 *)(param_2 + 0xd28) = uVar8;
        *(undefined4 *)(param_2 + 0xcac) = uVar7;
      }
      else {
        bVar21 = param_5 == 1.54143e-44;
        if (bVar21) {
          *(undefined4 *)(param_2 + 0xc6c) = *(undefined4 *)(param_2 + 0xc4c);
        }
        *(undefined4 *)(param_2 + 0xc88) = uVar22;
        *(undefined4 *)(param_2 + 0xd08) = uVar8;
        if (bVar21) {
          *(undefined4 *)(param_2 + 0xc8c) = *(undefined4 *)(param_2 + 0xc4c);
        }
        *(undefined4 *)(param_2 + 0xca8) = uVar22;
        *(undefined4 *)(param_2 + 0xd28) = uVar8;
        if (bVar21) {
          *(undefined4 *)(param_2 + 0xcac) = *(undefined4 *)(param_2 + 0xc4c);
          *(undefined1 *)(param_3 + 0xc) = 1;
          break;
        }
      }
LAB_18005c9b3:
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
    break;
  case 0xd0:
    if ((uint)param_5 < 0x10) {
      uVar22 = *(undefined4 *)(&DAT_1800fe780 + (ulonglong)(uint)param_5 * 4);
      uVar8 = *(undefined4 *)(&DAT_1800fe700 + (ulonglong)(uint)param_5 * 4);
      *(undefined4 *)(param_2 + 0xc4c) = uVar22;
      *(undefined4 *)(param_2 + 0xccc) = uVar8;
      *(undefined4 *)(param_2 + 0xc6c) = uVar22;
      *(undefined4 *)(param_2 + 0xcec) = uVar8;
      *(undefined4 *)(param_2 + 0xc8c) = uVar22;
      *(undefined4 *)(param_2 + 0xd0c) = uVar8;
      *(undefined4 *)(param_2 + 0xcac) = uVar22;
      *(undefined4 *)(param_2 + 0xd2c) = uVar8;
      *(undefined1 *)(param_3 + 0xc) = 1;
    }
    break;
  case 0xd1:
    if (5 < (uint)param_5) {
      param_5 = 1.4013e-45;
    }
    uVar22 = (&DAT_1800fe800)[(int)param_5 - 1];
    *(undefined4 *)(param_2 + 0xcd0) = uVar22;
    *(undefined4 *)(param_2 + 0xc50) = uVar22;
    *(undefined4 *)(param_2 + 0xc70) = uVar22;
    *(undefined4 *)(param_2 + 0xcf0) = uVar22;
    *(undefined4 *)(param_2 + 0xc90) = uVar22;
    *(undefined4 *)(param_2 + 0xd10) = uVar22;
    *(undefined4 *)(param_2 + 0xcb0) = uVar22;
    *(undefined4 *)(param_2 + 0xd30) = uVar22;
    *(undefined1 *)(param_3 + 0xc) = 1;
    break;
  default:
    goto switchD_18005b3e7_default;
  }
switchD_18005b3e7_default:
  return;
}

