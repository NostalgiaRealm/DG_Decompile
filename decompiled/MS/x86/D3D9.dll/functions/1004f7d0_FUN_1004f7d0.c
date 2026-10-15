/*
 * FUN_1004f7d0 at 1004f7d0
 * undefined __thiscall FUN_1004f7d0(void * this, undefined4 * param_1, int param_2, undefined4 * param_3, float param_4)
 * Address ranges: 1004f7d0-100515ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1004f7d0(void *this,undefined4 *param_1,int param_2,undefined4 *param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined4 uVar20;
  
  puVar5 = param_1;
  switch(param_3) {
  case (undefined4 *)0x7:
    uVar16 = (uint)(param_4 != 0.0);
    param_1[0x1cd] = uVar16;
    param_1[0x1c0] = uVar16;
    param_1[0x2b4] = uVar16;
    *(undefined1 *)(param_2 + 0xb) = 1;
    uVar15 = *(uint *)((int)this + 0x7634) >> 1;
    uVar16 = 2;
    if (param_4 != 0.0) {
      uVar16 = 0;
    }
    uVar16 = ~uVar15 & 1 | uVar16;
    uVar18 = *(uint *)((int)this + 0x6e7c);
    *(uint *)((int)this + 0x6e7c) = uVar16;
    *(byte *)((int)this + 0xf671) = *(byte *)((int)this + 0xf671) | uVar18 != uVar16;
    uVar15 = ~uVar15 & 1 ^ 1;
    uVar16 = *(uint *)((int)this + 0xe00);
    *(uint *)((int)this + 0xe00) = uVar15;
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | uVar16 != uVar15;
    return;
  case (undefined4 *)0x8:
    param_1[0x356] = (param_4 != 2.8026e-45) + 2;
    *(bool *)((int)param_1 + 0x75b1) = param_4 == 1.4013e-45;
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case (undefined4 *)0x9:
    *(bool *)(param_1 + 0x1d6c) = param_4 == 1.4013e-45;
    param_1[0x3cc] = param_1[0x3cc];
    param_1[0x3cd] = (uint)(param_4 == 1.4013e-45) << 0x17 | param_1[0x3cd] & 0xff7fffff;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case (undefined4 *)0xa:
  case (undefined4 *)0xb:
  case (undefined4 *)0xc:
  case (undefined4 *)0xd:
  case (undefined4 *)0x10:
  case (undefined4 *)0x11:
  case (undefined4 *)0x12:
  case (undefined4 *)0x15:
  case (undefined4 *)0x1e:
  case (undefined4 *)0x1f:
  case (undefined4 *)0x20:
  case (undefined4 *)0x21:
  case (undefined4 *)0x27:
  case (undefined4 *)0x28:
  case (undefined4 *)0x29:
  case (undefined4 *)0x2a:
  case (undefined4 *)0x2b:
  case (undefined4 *)0x2c:
  case (undefined4 *)0x2d:
  case (undefined4 *)0x2e:
  case (undefined4 *)0x2f:
  case (undefined4 *)0x31:
  case (undefined4 *)0x32:
  case (undefined4 *)0x33:
  case (undefined4 *)0x3d:
  case (undefined4 *)0x3e:
  case (undefined4 *)0x3f:
  case (undefined4 *)0x40:
  case (undefined4 *)0x41:
  case (undefined4 *)0x42:
  case (undefined4 *)0x43:
  case (undefined4 *)0x44:
  case (undefined4 *)0x45:
  case (undefined4 *)0x46:
  case (undefined4 *)0x47:
  case (undefined4 *)0x48:
  case (undefined4 *)0x49:
  case (undefined4 *)0x4a:
  case (undefined4 *)0x4b:
  case (undefined4 *)0x4c:
  case (undefined4 *)0x4d:
  case (undefined4 *)0x4e:
  case (undefined4 *)0x4f:
  case (undefined4 *)0x50:
  case (undefined4 *)0x51:
  case (undefined4 *)0x52:
  case (undefined4 *)0x53:
  case (undefined4 *)0x54:
  case (undefined4 *)0x55:
  case (undefined4 *)0x56:
  case (undefined4 *)0x57:
  case (undefined4 *)0x58:
  case (undefined4 *)0x59:
  case (undefined4 *)0x5a:
  case (undefined4 *)0x5b:
  case (undefined4 *)0x5c:
  case (undefined4 *)0x5d:
  case (undefined4 *)0x5e:
  case (undefined4 *)0x5f:
  case (undefined4 *)0x60:
  case (undefined4 *)0x61:
  case (undefined4 *)0x62:
  case (undefined4 *)0x63:
  case (undefined4 *)0x64:
  case (undefined4 *)0x65:
  case (undefined4 *)0x66:
  case (undefined4 *)0x67:
  case (undefined4 *)0x68:
  case (undefined4 *)0x69:
  case (undefined4 *)0x6a:
  case (undefined4 *)0x6b:
  case (undefined4 *)0x6c:
  case (undefined4 *)0x6d:
  case (undefined4 *)0x6e:
  case (undefined4 *)0x6f:
  case (undefined4 *)0x70:
  case (undefined4 *)0x71:
  case (undefined4 *)0x72:
  case (undefined4 *)0x73:
  case (undefined4 *)0x74:
  case (undefined4 *)0x75:
  case (undefined4 *)0x76:
  case (undefined4 *)0x77:
  case (undefined4 *)0x78:
  case (undefined4 *)0x79:
  case (undefined4 *)0x7a:
  case (undefined4 *)0x7b:
  case (undefined4 *)0x7c:
  case (undefined4 *)0x7d:
  case (undefined4 *)0x7e:
  case (undefined4 *)0x7f:
  case (undefined4 *)0x88:
  case (undefined4 *)0x8a:
  case (undefined4 *)0x90:
  case (undefined4 *)0x95:
  case (undefined4 *)0x96:
  case (undefined4 *)0x99:
  case (undefined4 *)0xa1:
  case (undefined4 *)0xa3:
  case (undefined4 *)0xa4:
  case (undefined4 *)0xa5:
  case (undefined4 *)0xa9:
  case (undefined4 *)0xb0:
  case (undefined4 *)0xb1:
  case (undefined4 *)0xc4:
  case (undefined4 *)0xc5:
  case (undefined4 *)0xc6:
  case (undefined4 *)0xc7:
  case (undefined4 *)0xc8:
  case (undefined4 *)0xc9:
  case (undefined4 *)0xca:
  case (undefined4 *)0xcb:
  case (undefined4 *)0xcc:
  case (undefined4 *)0xcd:
    break;
  case (undefined4 *)0xe:
    uVar16 = (uint)(param_4 != 0.0);
    param_1[0x1ce] = uVar16;
    param_1[0x1c1] = uVar16;
    param_1[0x2b5] = uVar16;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xf:
    *(bool *)((int)param_1 + 0x75ae) = param_4 != 0.0;
    if (param_4 == 0.0) {
      param_1[0x1a35] = 0;
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined1 *)(param_2 + 0x11) = 1;
      return;
    }
    param_1[0x1a35] = param_1[0x1d5d];
    *(undefined1 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x13:
    if ((uint)param_4 < 0x10) {
      uVar20 = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      uVar14 = *(undefined4 *)(&DAT_100d2430 + (int)param_4 * 4);
      uVar2 = *(undefined4 *)(&DAT_100d23b0 + (int)param_4 * 4);
      param_1[0x2d2] = uVar20;
      uVar3 = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      param_1[0x2f2] = uVar3;
      puVar1 = param_1 + 0x2d0;
      param_1[0x2cf] = uVar14;
      param_1[0x2ef] = uVar2;
      param_1[0x30f] = uVar14;
      param_1[0x32f] = uVar2;
      if (param_4 == 1.54143e-44) {
        param_1[0x2f0] = 6;
        *puVar1 = 6;
        param_1[0x2f3] = 6;
        param_1[0x2d3] = 6;
        param_1[0x330] = 6;
        param_1[0x310] = 6;
      }
      else if (param_4 == 1.82169e-44) {
        *puVar1 = 5;
        param_1[0x2f0] = 5;
        param_1[0x2f3] = 5;
        param_1[0x2d3] = 5;
        param_1[0x330] = 5;
        param_1[0x310] = 5;
        param_1[0x2da] = uVar20;
        param_1[0x2f7] = uVar2;
        param_1[0x2fa] = uVar3;
        param_1[0x337] = uVar2;
        param_1[0x2d7] = uVar14;
        param_1[0x317] = uVar14;
        param_1[0x2d8] = 5;
        param_1[0x2db] = 5;
        param_1[0x318] = 5;
        param_1[0x2e2] = uVar20;
        param_1[0x2ff] = uVar2;
        param_1[0x302] = uVar3;
        param_1[0x33f] = uVar2;
        param_1[0x2df] = uVar14;
        param_1[799] = uVar14;
        param_1[0x2e0] = 5;
        param_1[0x2e3] = 5;
        param_1[800] = 5;
        param_1[0x2ea] = uVar20;
        param_1[0x307] = uVar2;
        param_1[0x347] = uVar2;
        param_1[0x30a] = uVar3;
        param_1[0x2e7] = uVar14;
        param_1[0x327] = uVar14;
        param_1[0x2e8] = 5;
        param_1[0x2eb] = 5;
        param_1[0x328] = 5;
        *(undefined1 *)(param_2 + 0xc) = 1;
        return;
      }
      param_3 = param_1 + 0x310;
      param_1 = param_1 + 0x2d3;
      puVar5[0x2da] = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      puVar5[0x2fa] = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      puVar5[0x2d7] = uVar14;
      puVar5[0x2f7] = uVar2;
      puVar5[0x317] = uVar14;
      puVar5[0x337] = uVar2;
      if (param_4 == 1.54143e-44) {
        puVar5[0x2d8] = *puVar1;
        puVar5[0x2db] = *param_1;
        puVar5[0x318] = *param_3;
      }
      puVar5[0x2e2] = uVar20;
      puVar5[0x302] = uVar3;
      puVar5[0x2df] = uVar14;
      puVar5[0x2ff] = uVar2;
      puVar5[799] = uVar14;
      puVar5[0x33f] = uVar2;
      if (param_4 == 1.54143e-44) {
        puVar5[0x2e0] = *puVar1;
        puVar5[0x2e3] = *param_1;
        puVar5[800] = *param_3;
      }
      puVar5[0x2ea] = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      uVar20 = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      puVar5[0x2e7] = uVar14;
      puVar5[0x307] = uVar2;
      puVar5[0x30a] = uVar20;
      puVar5[0x327] = uVar14;
      puVar5[0x347] = uVar2;
      if (param_4 == 1.54143e-44) {
        puVar5[0x2e8] = *puVar1;
        puVar5[0x2eb] = *param_1;
        puVar5[0x328] = *param_3;
        *(undefined1 *)(param_2 + 0xc) = 1;
        return;
      }
LAB_10051180:
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    break;
  case (undefined4 *)0x14:
    if ((uint)param_4 < 0x10) {
      uVar20 = *(undefined4 *)(&DAT_100d2430 + (int)param_4 * 4);
      uVar14 = *(undefined4 *)(&DAT_100d23b0 + (int)param_4 * 4);
      uVar2 = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      uVar3 = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      param_1[0x2d0] = uVar20;
      param_1[0x2f3] = uVar3;
      param_1[0x310] = uVar20;
      param_1[0x2f0] = uVar14;
      param_1[0x2d3] = uVar2;
      param_1[0x330] = uVar14;
      param_1[0x2fb] = uVar3;
      param_1[0x303] = uVar3;
      param_1[0x30b] = uVar3;
      param_1[0x2d8] = uVar20;
      param_1[0x318] = uVar20;
      param_1[0x2e0] = uVar20;
      param_1[800] = uVar20;
      param_1[0x2e8] = uVar20;
      param_1[0x328] = uVar20;
      param_1[0x2f8] = uVar14;
      param_1[0x2db] = uVar2;
      param_1[0x338] = uVar14;
      param_1[0x300] = uVar14;
      param_1[0x2e3] = uVar2;
      param_1[0x340] = uVar14;
      param_1[0x308] = uVar14;
      param_1[0x2eb] = uVar2;
      param_1[0x348] = uVar14;
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    break;
  case (undefined4 *)0x16:
    if ((uint)param_4 < 4) {
      param_1[0x357] = *(undefined4 *)(&DAT_100d2360 + (int)param_4 * 4);
      *(undefined1 *)(param_2 + 0xd) = 1;
      return;
    }
    break;
  case (undefined4 *)0x17:
    if ((uint)param_4 < 9) {
      uVar20 = *(undefined4 *)(&DAT_100d233c + (int)param_4 * 4);
      param_1[0x1cf] = uVar20;
      param_1[0x1c2] = uVar20;
      param_1[0x2b6] = uVar20;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case (undefined4 *)0x18:
    param_1[0x1a34] = (uint)param_4 & 0xff;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x190e] = param_1[0x1a34];
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case (undefined4 *)0x19:
    param_1[0x3cc] = param_1[0x3cc];
    param_1[0x1d5d] = param_4;
    param_1[0x3cd] = ((int)param_4 - 1U & 7) << 0x14 | param_1[0x3cd] & 0xff8fffff;
    fVar7 = 0.0;
    if (*(char *)((int)param_1 + 0x75ae) != '\0') {
      fVar7 = param_4;
    }
    param_1[0x1a35] = fVar7;
    *(undefined1 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x1a:
    *(bool *)((int)param_1 + 0x75bd) = param_4 != 0.0;
    param_1[0x3cc] = param_1[0x3cc];
    param_1[0x3cd] = (uint)(param_4 == 0.0) << 0x1c | param_1[0x3cd] & 0xefffffff;
    if ((param_4 == 0.0) && (*(char *)((int)param_1 + 0x75be) != '\0')) {
      iVar17 = 1;
    }
    else {
      iVar17 = 0;
    }
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | param_1[0x1a3b] != iVar17;
    param_1[0x1a3b] = iVar17;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case (undefined4 *)0x1b:
    uVar16 = (uint)(param_4 != 0.0);
    param_1[0x2ee] = uVar16;
    param_1[0x2ce] = uVar16;
    param_1[0x32e] = uVar16;
    param_1[0x30e] = uVar16;
    param_1[0x336] = uVar16;
    param_1[0x316] = uVar16;
    param_1[0x2f6] = uVar16;
    param_1[0x2d6] = uVar16;
    param_1[0x33e] = uVar16;
    param_1[0x31e] = uVar16;
    param_1[0x2fe] = uVar16;
    param_1[0x2de] = uVar16;
    param_1[0x346] = uVar16;
    param_1[0x326] = uVar16;
    param_1[0x306] = uVar16;
    param_1[0x2e6] = uVar16;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0x1c:
    if (param_4 == 0.0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0x3f800000;
    }
    param_1[0x1a36] = uVar20;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(bool *)(param_1 + 0x1d6f) = param_4 != 0.0;
    param_1[0x3cc] = param_1[0x3cc];
    param_1[0x3cd] = (uint)(param_4 != 0.0) << 0x19 | param_1[0x3cd] & 0xfdffffff;
    *(undefined1 *)(param_2 + 8) = 1;
    if (param_4 == 0.0) {
      param_1[0x3c3] = param_1[0x3c3] & 0xfbffffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x4000000;
    return;
  case (undefined4 *)0x1d:
    param_1[0x1a32] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1913] = param_4;
    *(undefined1 *)(param_2 + 0x43) = 1;
    if (param_4 == 0.0) {
      param_1[0x3c3] = param_1[0x3c3] & 0xffefffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x100000;
    return;
  case (undefined4 *)0x22:
    param_1[0x1a4c] = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_1[0x1a4d] = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    param_1[0x1a4e] = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    param_1[0x1a4f] = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x18ec] = param_1[0x1a4c];
    param_1[0x18ed] = param_1[0x1a4d];
    param_1[0x18ee] = param_1[0x1a4e];
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case (undefined4 *)0x23:
    param_1[0x1a3e] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1d62] = param_4;
    param_1[0x3cc] = param_1[0x3cc];
    param_1[0x3cd] = param_1[0x3cd] & 0xf3ffffff | ((uint)param_4 & 3) << 0x1a;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case (undefined4 *)0x24:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    param_1[0x1a38] = param_4;
    param_1[0x1a37] = (float)param_1[0x1a39] - param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1912] = param_1[0x1a37];
    *(undefined1 *)(param_2 + 0x43) = 1;
    goto LAB_100501fb;
  case (undefined4 *)0x25:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    param_1[0x1a39] = param_4;
    param_1[0x1a37] = param_4 - (float)param_1[0x1a38];
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1911] = param_1[0x1a39];
    param_1[0x1912] = param_1[0x1a37];
    *(undefined1 *)(param_2 + 0x43) = 1;
    param_1[0x1445] = param_1[0x1a39];
LAB_100501fb:
    param_1[0x1446] = param_1[0x1a37];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0x26:
    param_1[0x1a3a] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1910] = param_1[0x1a3a];
    *(undefined1 *)(param_2 + 0x43) = 1;
    param_1[0x1444] = param_1[0x1a3a];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0x30:
    param_1[0x1a3c] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    if (param_4 == 0.0) {
      param_1[0x3c3] = param_1[0x3c3] & 0xefffffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x10000000;
    return;
  case (undefined4 *)0x34:
    param_1[0x1c3] = (uint)(param_4 != 0.0);
    param_1[0x2b7] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0x35:
    if ((uint)param_4 < 9) {
      uVar20 = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
      param_1[0x1c9] = uVar20;
      param_1[0x1c5] = uVar20;
      param_1[0x2b9] = uVar20;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case (undefined4 *)0x36:
    if ((uint)param_4 < 9) {
      uVar20 = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
      param_1[0x1ca] = uVar20;
      param_1[0x1c6] = uVar20;
      param_1[0x2ba] = uVar20;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case (undefined4 *)0x37:
    if ((uint)param_4 < 9) {
      uVar20 = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
      param_1[0x1cb] = uVar20;
      param_1[0x1c7] = uVar20;
      param_1[699] = uVar20;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case (undefined4 *)0x38:
    if ((uint)param_4 < 9) {
      uVar20 = *(undefined4 *)(&DAT_100d233c + (int)param_4 * 4);
      param_1[0x1cc] = uVar20;
      param_1[0x1c8] = uVar20;
      param_1[700] = uVar20;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case (undefined4 *)0x39:
    *(byte *)(param_1 + 0x1d3c) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0x3a:
    *(byte *)(param_1 + 0x1c4) = param_4._0_1_;
    *(byte *)(param_1 + 0x2b8) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0x3b:
    *(byte *)((int)param_1 + 0x711) = param_4._0_1_;
    *(byte *)((int)param_1 + 0xae1) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0x3c:
    param_1[0x1a50] = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_1[0x1a51] = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    param_1[0x1a52] = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    param_1[0x1a53] = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1914] = param_1[0x1a50];
    param_1[0x1915] = param_1[0x1a51];
    param_1[0x1916] = param_1[0x1a52];
    param_1[0x1917] = param_1[0x1a53];
    *(undefined1 *)(param_2 + 0x43) = 1;
    return;
  case (undefined4 *)0x80:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xfffffff0 | (uint)param_4 & 0xf;
    return;
  case (undefined4 *)0x81:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xffffff0f | ((uint)param_4 & 0xf) << 4;
    return;
  case (undefined4 *)0x82:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xfffff0ff | ((uint)param_4 & 0xf) << 8;
    return;
  case (undefined4 *)0x83:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xffff0fff | ((uint)param_4 & 0xf) << 0xc;
    return;
  case (undefined4 *)0x84:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xfff0ffff | ((uint)param_4 & 0xf) << 0x10;
    return;
  case (undefined4 *)0x85:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xff0fffff | ((uint)param_4 & 0xf) << 0x14;
    return;
  case (undefined4 *)0x86:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xf0ffffff | ((uint)param_4 & 0xf) << 0x18;
    return;
  case (undefined4 *)0x87:
    param_1[0x1d6a] = param_1[0x1d6a] & 0xfffffff | (int)param_4 << 0x1c;
    return;
  case (undefined4 *)0x89:
    param_1[0x1a33] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x8b:
    param_1[0x1a48] = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_1[0x1a49] = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    param_1[0x1a4a] = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    param_1[0x1a4b] = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x8c:
    param_1[0x1a3f] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1447] = param_1[0x1a3f];
    *(undefined1 *)(param_2 + 0x34) = 1;
    uVar16 = param_1[0x3c3];
    param_1[0x3c3] = uVar16 & 0xfcffffff;
    if ((uint)param_4 < 4) {
      param_1[0x3c3] = (int)param_4 << 0x18 | uVar16 & 0xfcffffff;
      return;
    }
    break;
  case (undefined4 *)0x8d:
    *(bool *)((int)param_1 + 0x75af) = param_4 != 0.0;
    if (param_4 == 0.0) {
      param_1[7000] = 0;
      param_1[0x1b59] = 0;
      param_1[0x1b5a] = 0;
      param_1[0x1b5b] = 0;
      uVar16 = param_1[0x3c1];
      uVar15 = param_1[0x3c2];
      uVar18 = param_1[0x3bd];
      param_1[0x3c1] = uVar16 | 0xf3;
      param_1[0x3c2] = uVar15 | 0xf3;
      uVar16 = uVar16 | 0xff;
      param_1[0x3bd] = uVar18 & 0xffffff0c;
      uVar15 = uVar15 | 0xff;
      uVar18 = uVar18 & 0xffffff00;
    }
    else {
      iVar17 = param_1[0x1d5e];
      param_1[7000] = iVar17;
      param_1[0x1b59] = param_1[0x1d5f];
      param_1[0x1b5a] = param_1[0x1d60];
      param_1[0x1b5b] = param_1[0x1d61];
      uVar16 = param_1[0x3c1];
      uVar18 = (iVar17 << 4 ^ param_1[0x3bd]) & 0x30U ^ param_1[0x3bd];
      param_1[0x3bd] = uVar18;
      uVar8 = -(uint)(iVar17 != 1) & 0x30;
      uVar9 = 0x30;
      param_1[0x3c1] = uVar16 & 0xffffffcf | uVar8;
      uVar4 = param_1[0x3c2];
      if (iVar17 == 2) {
        uVar9 = 0;
      }
      param_1[0x3c2] = uVar4 & 0xffffffcf | uVar9;
      iVar17 = param_1[0x1d5f];
      uVar18 = (iVar17 << 6 ^ uVar18) & 0xc0 ^ uVar18;
      param_1[0x3bd] = uVar18;
      uVar10 = -(uint)(iVar17 != 1) & 0xc0;
      param_1[0x3c1] = uVar16 & 0xffffff0f | uVar8 | uVar10;
      uVar11 = 0xc0;
      if (iVar17 == 2) {
        uVar11 = 0;
      }
      param_1[0x3c2] = uVar4 & 0xffffff0f | uVar9 | uVar11;
      uVar15 = param_1[0x1d60];
      uVar18 = (uVar18 ^ uVar15) & 3 ^ uVar18;
      param_1[0x3bd] = uVar18;
      uVar12 = -(uint)(uVar15 != 1) & 3;
      param_1[0x3c1] = uVar16 & 0xffffff0c | uVar8 | uVar10 | uVar12;
      uVar13 = 3;
      if (uVar15 == 2) {
        uVar13 = 0;
      }
      param_1[0x3c2] = uVar4 & 0xffffff0c | uVar9 | uVar11 | uVar13;
      iVar17 = param_1[0x1d61];
      uVar15 = 0xc;
      if (iVar17 == 2) {
        uVar15 = 0;
      }
      uVar15 = uVar15 | uVar4 & 0xffffff00 | uVar9 | uVar11 | uVar13;
      uVar16 = -(uint)(iVar17 != 1) & 0xc | uVar16 & 0xffffff00 | uVar8 | uVar10 | uVar12;
      uVar18 = (iVar17 << 2 ^ uVar18) & 0xc ^ uVar18;
    }
    param_1[0x3bd] = uVar18;
    param_1[0x3c1] = uVar16;
    param_1[0x3c2] = uVar15;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x8e:
    param_1[0x1a30] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    if (param_4 == 0.0) {
      param_1[0x3c3] = param_1[0x3c3] & 0xdfffffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x20000000;
    return;
  case (undefined4 *)0x8f:
    param_1[0x1a31] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    if (param_4 == 0.0) {
      param_1[0x3c3] = param_1[0x3c3] & 0xff7fffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x800000;
    return;
  case (undefined4 *)0x91:
    param_1[0x1d5e] = param_4;
    if (*(char *)((int)param_1 + 0x75af) != '\0') {
      param_1[7000] = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      param_1[0x3bd] = param_1[0x3bd] & 0xffffffcf | ((uint)param_4 & 3) << 4;
      uVar16 = 0x30;
      param_1[0x3c1] = param_1[0x3c1] & 0xffffffcf | -(uint)(param_4 != 1.4013e-45) & 0x30;
      uVar15 = param_1[0x3c2] & 0xffffffcf;
LAB_10050bba:
      if (param_4 == 2.8026e-45) {
        uVar16 = 0;
      }
      param_1[0x3c2] = uVar15 | uVar16;
      return;
    }
    break;
  case (undefined4 *)0x92:
    param_1[0x1d5f] = param_4;
    if (*(char *)((int)param_1 + 0x75af) != '\0') {
      param_1[0x1b59] = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      param_1[0x3bd] = param_1[0x3bd] & 0xffffff3f | ((uint)param_4 & 3) << 6;
      uVar16 = 0xc0;
      param_1[0x3c1] = param_1[0x3c1] & 0xffffff3f | -(uint)(param_4 != 1.4013e-45) & 0xc0;
      uVar15 = param_1[0x3c2] & 0xffffff3f;
      goto LAB_10050bba;
    }
    break;
  case (undefined4 *)0x93:
    param_1[0x1d60] = param_4;
    if (*(char *)((int)param_1 + 0x75af) != '\0') {
      param_1[0x1b5a] = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      param_1[0x3bd] = param_1[0x3bd] & 0xfffffffc | (uint)param_4 & 3;
      uVar16 = 3;
      param_1[0x3c1] = param_1[0x3c1] & 0xfffffffc | -(uint)(param_4 != 1.4013e-45) & 3;
      uVar15 = param_1[0x3c2] & 0xfffffffc;
      goto LAB_10050bba;
    }
    break;
  case (undefined4 *)0x94:
    param_1[0x1d61] = param_4;
    if (*(char *)((int)param_1 + 0x75af) != '\0') {
      param_1[0x1b5b] = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      param_1[0x3bd] = param_1[0x3bd] & 0xfffffff3 | ((uint)param_4 & 3) << 2;
      uVar16 = 0xc;
      param_1[0x3c1] = param_1[0x3c1] & 0xfffffff3 | -(uint)(param_4 != 1.4013e-45) & 0xc;
      uVar15 = param_1[0x3c2] & 0xfffffff3;
      goto LAB_10050bba;
    }
    break;
  case (undefined4 *)0x97:
    param_1[0x1b9d] = (uint)(param_4 == 3.57331e-43);
    if (param_4 == 3.58732e-43) {
      param_4 = 7.00649e-45;
    }
    else if (3 < (uint)param_4) {
      param_4 = 0.0;
    }
    param_1[0x1d67] = param_4;
    if (param_4 != 3.57331e-43) {
      param_1[0x3c3] = param_1[0x3c3] & 0xffdfffff;
      return;
    }
    param_1[0x3c3] = param_1[0x3c3] | 0x200000;
    return;
  case (undefined4 *)0x98:
    param_1[0x1b74] = -(uint)(((uint)param_4 & 1) != 0);
    param_1[0x1b75] = -(uint)(((uint)param_4 & 2) != 0);
    param_1[0x1b76] = -(uint)(((uint)param_4 & 4) != 0);
    param_1[0x1b77] = -(uint)(((uint)param_4 & 8) != 0);
    param_1[0x1b78] = -(uint)(((uint)param_4 & 0x10) != 0);
    param_1[0x1b79] = -(uint)(((uint)param_4 & 0x20) != 0);
    param_1[0x1d68] = (uint)param_4 & 0x3f;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1908] = param_1[0x1b74];
    param_1[0x1909] = param_1[0x1b75];
    param_1[0x190a] = param_1[0x1b76];
    param_1[0x190b] = param_1[0x1b77];
    param_1[0x190c] = param_1[0x1b78];
    param_1[0x190d] = param_1[0x1b79];
    *(undefined1 *)(param_2 + 0x43) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case (undefined4 *)0x9a:
    param_1[0x1ba0] = param_4;
    goto LAB_10050e0a;
  case (undefined4 *)0x9b:
    param_1[0x1ba2] = param_4;
    goto LAB_10050e0a;
  case (undefined4 *)0x9c:
    param_1[0x1ba3] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x9d:
    param_1[0x1ba4] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(bool *)((int)param_1 + 0x75b6) = param_4 != 0.0;
    return;
  case (undefined4 *)0x9e:
    param_1[0x1ba5] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0x9f:
    param_1[0x1ba6] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0xa0:
    param_1[0x1ba7] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0xa2:
    *(float *)((int)this + 0xe38) = param_4;
    *(undefined1 *)((int)this + 0xf66c) = 1;
    return;
  case (undefined4 *)0xa6:
    param_1[0x1ba1] = param_4;
LAB_10050e0a:
    *(undefined1 *)(param_2 + 0x11) = 1;
    if (((float)param_1[0x1ba0] != 1.0) &&
       (((float)param_1[0x1ba2] != 1.0 || ((float)param_1[0x1ba1] != 1.0)))) {
      *(undefined1 *)((int)param_1 + 0x75b7) = 1;
      return;
    }
    *(undefined1 *)((int)param_1 + 0x75b7) = 0;
    return;
  case (undefined4 *)0xa7:
    param_1[0x1b9c] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0xa8:
    bVar6 = param_4._0_1_ & 0xf;
    *(byte *)(param_1 + 0x2f5) = bVar6;
    *(byte *)(param_1 + 0x2d5) = bVar6;
    *(byte *)(param_1 + 0x335) = bVar6;
    *(byte *)(param_1 + 0x315) = bVar6;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xaa:
    param_1[0x1b9e] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case (undefined4 *)0xab:
    if (5 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    uVar20 = *(undefined4 *)(&DAT_100d246c + (int)param_4 * 4);
    param_1[0x331] = uVar20;
    param_1[0x311] = uVar20;
    param_1[0x2f4] = uVar20;
    param_1[0x2d4] = uVar20;
    param_1[0x2f1] = uVar20;
    param_1[0x2d1] = uVar20;
    param_1[0x339] = uVar20;
    param_1[0x319] = uVar20;
    param_1[0x2fc] = uVar20;
    param_1[0x2dc] = uVar20;
    param_1[0x2f9] = uVar20;
    param_1[0x2d9] = uVar20;
    param_1[0x341] = uVar20;
    param_1[0x321] = uVar20;
    param_1[0x304] = uVar20;
    param_1[0x2e4] = uVar20;
    param_1[0x301] = uVar20;
    param_1[0x2e1] = uVar20;
    param_1[0x349] = uVar20;
    param_1[0x329] = uVar20;
    param_1[0x30c] = uVar20;
    param_1[0x2ec] = uVar20;
    param_1[0x309] = uVar20;
    param_1[0x2e9] = uVar20;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xac:
    uVar16 = param_1[0x1a2f] | 2;
    uVar15 = param_1[0x1a2f] & 0xfffffffd;
    bVar19 = param_4 == 4.2039e-45;
    goto LAB_100515b7;
  case (undefined4 *)0xad:
    uVar16 = param_1[0x1a2f] | 4;
    uVar15 = param_1[0x1a2f] & 0xfffffffb;
    bVar19 = param_4 == 2.8026e-45;
LAB_100515b7:
    if (!bVar19) {
      uVar16 = uVar15;
    }
LAB_100515ba:
    param_1[0x1a2f] = uVar16;
    *(undefined1 *)(param_2 + 0x11) = 1;
    break;
  case (undefined4 *)0xae:
    param_1[0x367] = (uint)(param_4 != 0.0);
    param_1[0x35d] = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case (undefined4 *)0xaf:
    param_1[0x35b] = param_4;
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case (undefined4 *)0xb2:
    param_1[0x1bac] = param_4;
    if (1.0 <= param_4) {
      if (8.0 < param_4) {
        param_1[0x1bac] = 0x41000000;
      }
    }
    else {
      param_1[0x1bac] = 0x3f800000;
    }
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1464] = param_1[0x1bac];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb3:
    param_1[0x1bad] = param_4;
    if (1.0 <= param_4) {
      if (8.0 < param_4) {
        param_1[0x1bad] = 0x41000000;
      }
    }
    else {
      param_1[0x1bad] = 0x3f800000;
    }
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1465] = param_1[0x1bad];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb4:
    param_1[0x1ba8] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1460] = param_1[0x1ba8];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb5:
    param_1[0x1ba9] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1461] = param_1[0x1ba9];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb6:
    param_1[0x1baa] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1462] = param_1[0x1baa];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb7:
    param_1[0x1bab] = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    param_1[0x1463] = param_1[0x1bab];
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case (undefined4 *)0xb8:
    uVar16 = param_1[0x1a2f] | 1;
    if (param_4 == 0.0) {
      uVar16 = param_1[0x1a2f] & 0xfffffffe;
    }
    goto LAB_100515ba;
  case (undefined4 *)0xb9:
    *(bool *)((int)param_1 + 0x75ba) = param_4 != 0.0;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xba:
    param_1[0x2bd] = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xbb:
    param_1[0x2be] = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xbc:
    param_1[0x2bf] = *(undefined4 *)(&DAT_100d2318 + (int)param_4 * 4);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xbd:
    param_1[0x2c0] = *(undefined4 *)(&DAT_100d233c + (int)param_4 * 4);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case (undefined4 *)0xbe:
    bVar6 = param_4._0_1_ & 0xf;
    *(byte *)(param_1 + 0x33d) = bVar6;
    *(byte *)(param_1 + 0x31d) = bVar6;
    *(byte *)(param_1 + 0x2fd) = bVar6;
    *(byte *)(param_1 + 0x2dd) = bVar6;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xbf:
    bVar6 = param_4._0_1_ & 0xf;
    *(byte *)(param_1 + 0x345) = bVar6;
    *(byte *)(param_1 + 0x325) = bVar6;
    *(byte *)(param_1 + 0x305) = bVar6;
    *(byte *)(param_1 + 0x2e5) = bVar6;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xc0:
    bVar6 = param_4._0_1_ & 0xf;
    *(byte *)(param_1 + 0x34d) = bVar6;
    *(byte *)(param_1 + 0x32d) = bVar6;
    *(byte *)(param_1 + 0x30d) = bVar6;
    *(byte *)(param_1 + 0x2ed) = bVar6;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xc1:
    param_1[0x374] = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    param_1[0x375] = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    param_1[0x376] = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    param_1[0x377] = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xc2:
    *(bool *)((int)param_1 + 0x75ad) = param_4 != 0.0;
    *(undefined1 *)(param_2 + 10) = 1;
    return;
  case (undefined4 *)0xc3:
    param_1[0x378] = param_4;
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case (undefined4 *)0xce:
    *(bool *)((int)param_1 + 0x75b9) = param_4 != 0.0;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case (undefined4 *)0xcf:
    if ((uint)param_4 < 0x10) {
      uVar20 = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      uVar14 = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      param_1[0x312] = uVar20;
      param_1[0x332] = uVar14;
      if (param_4 == 1.54143e-44) {
        param_1[0x333] = 6;
        param_1[0x313] = 6;
      }
      else if (param_4 == 1.82169e-44) {
        param_1[0x333] = 5;
        param_1[0x313] = 5;
        param_1[0x31a] = uVar20;
        param_1[0x33a] = uVar14;
        param_1[0x31b] = 5;
        param_1[0x322] = uVar20;
        param_1[0x342] = uVar14;
        param_1[0x323] = 5;
        param_1[0x34a] = uVar14;
        param_1[0x32a] = uVar20;
        param_1[0x32b] = 5;
        *(undefined1 *)(param_2 + 0xc) = 1;
        return;
      }
      param_1[0x31a] = uVar20;
      param_1[0x33a] = uVar14;
      bVar19 = param_4 == 1.54143e-44;
      if (bVar19) {
        param_1[0x31b] = param_1[0x313];
        uVar14 = 2;
      }
      param_1[0x322] = uVar20;
      param_1[0x342] = uVar14;
      if (bVar19) {
        param_1[0x323] = param_1[0x313];
        uVar14 = 2;
      }
      param_1[0x32a] = uVar20;
      param_1[0x34a] = uVar14;
      if (bVar19) {
        param_1[0x32b] = param_1[0x313];
      }
      goto LAB_10051180;
    }
    break;
  case (undefined4 *)0xd0:
    if ((uint)param_4 < 0x10) {
      uVar20 = *(undefined4 *)(&DAT_100d23f0 + (int)param_4 * 4);
      uVar14 = *(undefined4 *)(&DAT_100d2370 + (int)param_4 * 4);
      param_1[0x313] = uVar20;
      param_1[0x333] = uVar14;
      param_1[0x33b] = uVar14;
      param_1[0x343] = uVar14;
      param_1[0x34b] = uVar14;
      param_1[0x31b] = uVar20;
      param_1[0x323] = uVar20;
      param_1[0x32b] = uVar20;
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    break;
  case (undefined4 *)0xd1:
    if (5 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    uVar20 = *(undefined4 *)(&DAT_100d246c + (int)param_4 * 4);
    param_1[0x334] = uVar20;
    param_1[0x314] = uVar20;
    param_1[0x31c] = uVar20;
    param_1[0x33c] = uVar20;
    param_1[0x324] = uVar20;
    param_1[0x344] = uVar20;
    param_1[0x32c] = uVar20;
    param_1[0x34c] = uVar20;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  default:
    goto switchD_1004f7f2_default;
  }
switchD_1004f7f2_default:
  return;
}

