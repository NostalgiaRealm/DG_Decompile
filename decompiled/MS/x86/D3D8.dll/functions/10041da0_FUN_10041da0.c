/*
 * FUN_10041da0 at 10041da0
 * undefined __thiscall FUN_10041da0(void * this, int param_1, int param_2, undefined4 param_3, float param_4)
 * Address ranges: 10041da0-100431f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10041da0(void *this,int param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  
  switch(param_3) {
  case 7:
    *(uint *)(param_1 + 0x3b4) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x380) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xb) = 1;
    uVar10 = *(uint *)((int)this + 0x5948) >> 1;
    uVar13 = 2;
    if (param_4 != 0.0) {
      uVar13 = 0;
    }
    uVar13 = ~uVar10 & 1 | uVar13;
    uVar15 = *(uint *)((int)this + 0x520c);
    *(uint *)((int)this + 0x520c) = uVar13;
    *(byte *)((int)this + 0xd981) = *(byte *)((int)this + 0xd981) | uVar15 != uVar13;
    uVar10 = ~uVar10 & 1 ^ 1;
    uVar13 = *(uint *)((int)this + 0x524);
    *(uint *)((int)this + 0x524) = uVar10;
    *(byte *)((int)this + 0xd97d) = *(byte *)((int)this + 0xd97d) | uVar13 != uVar10;
    return;
  case 8:
    *(uint *)(param_1 + 0x47c) = (param_4 != 2.8026e-45) + 2;
    *(bool *)(param_1 + 0x58c4) = param_4 == 1.4013e-45;
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_1 + 0x58c3) = param_4 == 1.4013e-45;
    *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_1 + 0x614);
    *(uint *)(param_1 + 0x610) =
         (uint)(param_4 == 1.4013e-45) << 0x1e | *(uint *)(param_1 + 0x610) & 0xbfffffff;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
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
    break;
  case 0xe:
    *(uint *)(param_1 + 0x3b8) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 900) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_1 + 0x58c1) = param_4 != 0.0;
    if (param_4 == 0.0) {
      *(undefined4 *)(param_1 + 0x4c64) = 0;
      *(undefined1 *)(param_2 + 8) = 1;
      *(undefined1 *)(param_2 + 0x11) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x4c64) = *(undefined4 *)(param_1 + 0x5884);
    *(undefined1 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x13:
    if ((uint)param_4 < 0xe) {
      *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(&DAT_100b02e8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(&DAT_100b0268 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(&DAT_100b02a8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x44c) = *(undefined4 *)(&DAT_100b0228 + (int)param_4 * 4);
      if (param_4 != 1.54143e-44) {
        if (param_4 == 1.82169e-44) {
          *(undefined4 *)(param_1 + 0x444) = 5;
          *(undefined4 *)(param_1 + 0x424) = 5;
          *(undefined4 *)(param_1 + 0x450) = 5;
          *(undefined4 *)(param_1 + 0x430) = 5;
        }
        *(undefined1 *)(param_2 + 0xc) = 1;
        return;
      }
      *(undefined4 *)(param_1 + 0x444) = 6;
      *(undefined4 *)(param_1 + 0x424) = 6;
      *(undefined4 *)(param_1 + 0x450) = 6;
      *(undefined4 *)(param_1 + 0x430) = 6;
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    break;
  case 0x14:
    if ((uint)param_4 < 0xe) {
      *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(&DAT_100b02e8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(&DAT_100b0268 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(&DAT_100b02a8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(&DAT_100b0228 + (int)param_4 * 4);
      *(undefined1 *)(param_2 + 0xc) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)param_4 < 4) {
      *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(&DAT_100b0218 + (int)param_4 * 4);
      *(undefined1 *)(param_2 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)param_4 < 9) {
      iVar14 = *(int *)(&DAT_100b01f4 + (int)param_4 * 4);
      iVar12 = *(int *)(param_1 + 0x589c);
      *(int *)(param_1 + 0x3bc) = iVar14;
      *(int *)(param_1 + 0x388) = iVar14;
      if (iVar12 != 0) {
        iVar14 = *(int *)(&DAT_100b2450 + iVar14 * 4);
        iVar11 = ((uint)(iVar12 * 5) >> 1) * iVar14;
        *(int *)(param_1 + 0x488) = iVar11;
        *(int *)(param_1 + 0x4b0) = iVar11;
        *(float *)(param_1 + 0x490) =
             (float)iVar14 * (float)((double)iVar12 + (double)(&DAT_100b5ce0)[-(iVar12 >> 0x1f)]) *
             0.5;
        *(undefined1 *)(param_2 + 0xd) = 1;
      }
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_1 + 0x4c60) = (uint)param_4 & 0xff;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4858) = *(undefined4 *)(param_1 + 0x4c60);
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0x19:
    *(float *)(param_1 + 0x5884) = param_4;
    *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_1 + 0x614);
    *(uint *)(param_1 + 0x610) =
         ((int)param_4 - 1U & 7) << 0x1b | *(uint *)(param_1 + 0x610) & 0xc7ffffff;
    fVar3 = 0.0;
    if (*(char *)(param_1 + 0x58c1) != '\0') {
      fVar3 = param_4;
    }
    *(float *)(param_1 + 0x4c64) = fVar3;
    *(undefined1 *)(param_2 + 8) = 1;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x1a:
    *(bool *)(param_1 + 0x58d0) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_1 + 0x610);
    *(uint *)(param_1 + 0x614) =
         (uint)(param_4 == 0.0) << 3 | *(uint *)(param_1 + 0x614) & 0xfffffff7;
    if ((param_4 == 0.0) && (*(char *)(param_1 + 0x58d1) != '\0')) {
      iVar14 = 1;
    }
    else {
      iVar14 = 0;
    }
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(int *)(param_1 + 0x4c7c) != iVar14;
    *(int *)(param_1 + 0x4c7c) = iVar14;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x1b:
    *(uint *)(param_1 + 0x43c) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x41c) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case 0x1c:
    if (param_4 == 0.0) {
      uVar17 = 0;
    }
    else {
      uVar17 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x4c68) = uVar17;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(bool *)(param_1 + 0x58cf) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_1 + 0x610);
    *(uint *)(param_1 + 0x614) = (uint)(param_4 != 0.0) | *(uint *)(param_1 + 0x614) & 0xfffffffe;
    *(undefined1 *)(param_2 + 8) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xfbffffff;
    if (param_4 != 0.0) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x4000000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x1d:
    *(uint *)(param_1 + 0x4c58) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(float *)(param_1 + 0x486c) = param_4;
    *(undefined1 *)(param_2 + 0x38) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xffefffff;
    if (param_4 != 0.0) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x100000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x22:
    *(float *)(param_1 + 0x4cc0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cc4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cc8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4ccc) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x47d0) = *(undefined4 *)(param_1 + 0x4cc0);
    *(undefined4 *)(param_1 + 0x47d4) = *(undefined4 *)(param_1 + 0x4cc4);
    *(undefined4 *)(param_1 + 0x47d8) = *(undefined4 *)(param_1 + 0x4cc8);
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0x23:
    *(float *)(param_1 + 0x4c88) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    uVar13 = *(uint *)(param_1 + 0x614);
    uVar17 = *(undefined4 *)(param_1 + 0x610);
    *(float *)(&DAT_00005898 + param_1) = param_4;
    *(undefined4 *)(param_1 + 0x610) = uVar17;
    *(uint *)(param_1 + 0x614) = uVar13 & 0xfffffff9 | ((uint)param_4 & 3) * 2;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_1 + 0x4c70) = param_4;
    *(float *)(param_1 + 0x4c6c) = *(float *)(param_1 + 0x4c74) - param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4868) = *(undefined4 *)(param_1 + 0x4c6c);
    *(undefined1 *)(param_2 + 0x38) = 1;
    goto LAB_100424cb;
  case 0x25:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_1 + 0x4c74) = param_4;
    *(float *)(param_1 + 0x4c6c) = param_4 - *(float *)(param_1 + 0x4c70);
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4864) = *(undefined4 *)(param_1 + 0x4c74);
    *(undefined4 *)(param_1 + 0x4868) = *(undefined4 *)(param_1 + 0x4c6c);
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x46b4) = *(undefined4 *)(param_1 + 0x4c74);
LAB_100424cb:
    *(undefined4 *)(param_1 + 0x46b8) = *(undefined4 *)(param_1 + 0x4c6c);
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case 0x26:
    *(float *)(param_1 + 0x4c78) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4860) = *(undefined4 *)(param_1 + 0x4c78);
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x46b0) = *(undefined4 *)(param_1 + 0x4c78);
    *(undefined1 *)(param_2 + 0x34) = 1;
    return;
  case 0x2f:
    if (0x10 < (uint)param_4) {
      param_4 = 2.24208e-44;
    }
    *(float *)(param_1 + 0x589c) = param_4;
    iVar14 = *(int *)(&DAT_100b2450 + *(int *)(param_1 + 0x388) * 4);
    iVar12 = ((uint)((int)param_4 * 5) >> 1) * iVar14;
    *(int *)(param_1 + 0x488) = iVar12;
    *(int *)(param_1 + 0x4b0) = iVar12;
    *(float *)(param_1 + 0x490) =
         (float)iVar14 *
         (float)((double)(int)param_4 + (double)(&DAT_100b5ce0)[-((int)param_4 >> 0x1f)]) * 0.5;
    *(undefined1 *)(param_2 + 0xd) = 1;
    return;
  case 0x30:
    *(uint *)(param_1 + 0x4c80) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xefffffff;
    if (param_4 != 0.0) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x10000000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x34:
    *(uint *)(param_1 + 0x38c) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)param_4 < 9) {
      uVar17 = *(undefined4 *)(&DAT_100b01d0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x3a4) = uVar17;
      *(undefined4 *)(param_1 + 0x394) = uVar17;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)param_4 < 9) {
      uVar17 = *(undefined4 *)(&DAT_100b01d0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x3a8) = uVar17;
      *(undefined4 *)(param_1 + 0x398) = uVar17;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)param_4 < 9) {
      uVar17 = *(undefined4 *)(&DAT_100b01d0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x3ac) = uVar17;
      *(undefined4 *)(param_1 + 0x39c) = uVar17;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)param_4 < 9) {
      uVar17 = *(undefined4 *)(&DAT_100b01f4 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x3b0) = uVar17;
      *(undefined4 *)(param_1 + 0x3a0) = uVar17;
      *(undefined1 *)(param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(byte *)(param_1 + 0x5800) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case 0x3a:
    *(byte *)(param_1 + 0x390) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case 0x3b:
    *(byte *)(param_1 + 0x391) = param_4._0_1_;
    *(undefined1 *)(param_2 + 0xb) = 1;
    return;
  case 0x3c:
    *(float *)(param_1 + 0x4cd0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cd4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cd8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cdc) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4870) = *(undefined4 *)(param_1 + 0x4cd0);
    *(undefined4 *)(param_1 + 0x4874) = *(undefined4 *)(param_1 + 0x4cd4);
    *(undefined4 *)(param_1 + 0x4878) = *(undefined4 *)(param_1 + 0x4cd8);
    *(undefined4 *)(param_1 + 0x487c) = *(undefined4 *)(param_1 + 0x4cdc);
    *(undefined1 *)(param_2 + 0x38) = 1;
    return;
  case 0x80:
    *(uint *)(param_1 + 0x58bc) = *(uint *)(param_1 + 0x58bc) & 0xfffffff0 | (uint)param_4 & 0xf;
    return;
  case 0x81:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xffffff0f | ((uint)param_4 & 0xf) << 4;
    return;
  case 0x82:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xfffff0ff | ((uint)param_4 & 0xf) << 8;
    return;
  case 0x83:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xffff0fff | ((uint)param_4 & 0xf) << 0xc;
    return;
  case 0x84:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xfff0ffff | ((uint)param_4 & 0xf) << 0x10;
    return;
  case 0x85:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xff0fffff | ((uint)param_4 & 0xf) << 0x14;
    return;
  case 0x86:
    *(uint *)(param_1 + 0x58bc) =
         *(uint *)(param_1 + 0x58bc) & 0xf0ffffff | ((uint)param_4 & 0xf) << 0x18;
    return;
  case 0x87:
    *(uint *)(param_1 + 0x58bc) = *(uint *)(param_1 + 0x58bc) & 0xfffffff | (int)param_4 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_1 + 0x4c5c) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x8b:
    *(float *)(param_1 + 0x4cb0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cb4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cb8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x4cbc) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x8c:
    *(float *)(param_1 + 0x4c8c) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x46bc) = *(undefined4 *)(param_1 + 0x4c8c);
    *(undefined1 *)(param_2 + 0x34) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xfcffffff;
    *(uint *)(param_1 + 0x5f0) = uVar13;
    if ((uint)param_4 < 4) {
      *(uint *)(param_1 + 0x5f0) = (int)param_4 << 0x18 | uVar13;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_1 + 0x58c2) = param_4 != 0.0;
    if (param_4 == 0.0) {
      *(undefined4 *)(param_1 + 0x50f0) = 0;
      *(undefined4 *)(param_1 + 0x50f4) = 0;
      *(undefined4 *)(param_1 + 0x50f8) = 0;
      *(undefined4 *)(param_1 + 0x50fc) = 0;
      uVar13 = *(uint *)(param_1 + 0x5e8);
      uVar10 = *(uint *)(param_1 + 0x5ec);
      uVar15 = *(uint *)(param_1 + 0x5d8);
      *(uint *)(param_1 + 0x5e8) = uVar13 | 0xf3;
      *(uint *)(param_1 + 0x5ec) = uVar10 | 0xf3;
      uVar13 = uVar13 | 0xff;
      *(uint *)(param_1 + 0x5d8) = uVar15 & 0xffffff0c;
      uVar10 = uVar10 | 0xff;
      uVar15 = uVar15 & 0xffffff00;
    }
    else {
      iVar14 = *(int *)(param_1 + 0x5888);
      *(undefined4 *)(param_1 + 0x50f4) = *(undefined4 *)(param_1 + 0x588c);
      *(undefined4 *)(param_1 + 0x50f8) = *(undefined4 *)(&DAT_00005890 + param_1);
      *(undefined4 *)(param_1 + 0x50fc) = *(undefined4 *)(param_1 + 0x5894);
      *(int *)(param_1 + 0x50f0) = iVar14;
      uVar13 = *(uint *)(param_1 + 0x5e8);
      uVar15 = (iVar14 << 4 ^ *(uint *)(param_1 + 0x5d8)) & 0x30 ^ *(uint *)(param_1 + 0x5d8);
      *(uint *)(param_1 + 0x5d8) = uVar15;
      uVar4 = -(uint)(iVar14 != 1) & 0x30;
      uVar5 = 0x30;
      *(uint *)(param_1 + 0x5e8) = uVar13 & 0xffffffcf | uVar4;
      uVar2 = *(uint *)(param_1 + 0x5ec);
      if (iVar14 == 2) {
        uVar5 = 0;
      }
      *(uint *)(param_1 + 0x5ec) = uVar2 & 0xffffffcf | uVar5;
      iVar14 = *(int *)(param_1 + 0x588c);
      uVar15 = (iVar14 << 6 ^ uVar15) & 0xc0 ^ uVar15;
      *(uint *)(param_1 + 0x5d8) = uVar15;
      uVar6 = -(uint)(iVar14 != 1) & 0xc0;
      *(uint *)(param_1 + 0x5e8) = uVar13 & 0xffffff0f | uVar4 | uVar6;
      uVar7 = 0xc0;
      if (iVar14 == 2) {
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x5ec) = uVar2 & 0xffffff0f | uVar5 | uVar7;
      uVar10 = *(uint *)(&DAT_00005890 + param_1);
      uVar15 = (uVar15 ^ uVar10) & 3 ^ uVar15;
      *(uint *)(param_1 + 0x5d8) = uVar15;
      uVar8 = -(uint)(uVar10 != 1) & 3;
      *(uint *)(param_1 + 0x5e8) = uVar13 & 0xffffff0c | uVar4 | uVar6 | uVar8;
      uVar9 = 3;
      if (uVar10 == 2) {
        uVar9 = 0;
      }
      *(uint *)(param_1 + 0x5ec) = uVar2 & 0xffffff0c | uVar5 | uVar7 | uVar9;
      iVar14 = *(int *)(param_1 + 0x5894);
      uVar10 = 0xc;
      if (iVar14 == 2) {
        uVar10 = 0;
      }
      uVar10 = uVar10 | uVar2 & 0xffffff00 | uVar5 | uVar7 | uVar9;
      uVar13 = -(uint)(iVar14 != 1) & 0xc | uVar13 & 0xffffff00 | uVar4 | uVar6 | uVar8;
      uVar15 = (iVar14 << 2 ^ uVar15) & 0xc ^ uVar15;
    }
    *(uint *)(param_1 + 0x5d8) = uVar15;
    *(uint *)(param_1 + 0x5e8) = uVar13;
    *(uint *)(param_1 + 0x5ec) = uVar10;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_1 + 0x4c50) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xdfffffff;
    if (param_4 != 0.0) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x20000000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x8f:
    *(uint *)(param_1 + 0x4c54) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xff7fffff;
    if (param_4 != 0.0) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x800000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x91:
    *(float *)(param_1 + 0x5888) = param_4;
    if (*(char *)(param_1 + 0x58c2) != '\0') {
      *(float *)(param_1 + 0x50f0) = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x5d8) =
           *(uint *)(param_1 + 0x5d8) & 0xffffffcf | ((uint)param_4 & 3) << 4;
      uVar13 = 0x30;
      *(uint *)(param_1 + 0x5e8) =
           *(uint *)(param_1 + 0x5e8) & 0xffffffcf | -(uint)(param_4 != 1.4013e-45) & 0x30;
      uVar10 = *(uint *)(param_1 + 0x5ec) & 0xffffffcf;
LAB_10042e85:
      if (param_4 == 2.8026e-45) {
        uVar13 = 0;
      }
      *(uint *)(param_1 + 0x5ec) = uVar10 | uVar13;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_1 + 0x588c) = param_4;
    if (*(char *)(param_1 + 0x58c2) != '\0') {
      *(float *)(param_1 + 0x50f4) = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x5d8) =
           *(uint *)(param_1 + 0x5d8) & 0xffffff3f | ((uint)param_4 & 3) << 6;
      uVar13 = 0xc0;
      *(uint *)(param_1 + 0x5e8) =
           *(uint *)(param_1 + 0x5e8) & 0xffffff3f | -(uint)(param_4 != 1.4013e-45) & 0xc0;
      uVar10 = *(uint *)(param_1 + 0x5ec) & 0xffffff3f;
      goto LAB_10042e85;
    }
    break;
  case 0x93:
    cVar1 = *(char *)(param_1 + 0x58c2);
    *(float *)(&DAT_00005890 + param_1) = param_4;
    if (cVar1 != '\0') {
      *(float *)(param_1 + 0x50f8) = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x5d8) = *(uint *)(param_1 + 0x5d8) & 0xfffffffc | (uint)param_4 & 3;
      uVar13 = 3;
      *(uint *)(param_1 + 0x5e8) =
           *(uint *)(param_1 + 0x5e8) & 0xfffffffc | -(uint)(param_4 != 1.4013e-45) & 3;
      uVar10 = *(uint *)(param_1 + 0x5ec) & 0xfffffffc;
      goto LAB_10042e85;
    }
    break;
  case 0x94:
    *(float *)(param_1 + 0x5894) = param_4;
    if (*(char *)(param_1 + 0x58c2) != '\0') {
      *(float *)(param_1 + 0x50fc) = param_4;
      *(undefined1 *)(param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x5d8) =
           *(uint *)(param_1 + 0x5d8) & 0xfffffff3 | ((uint)param_4 & 3) << 2;
      uVar13 = 0xc;
      *(uint *)(param_1 + 0x5e8) =
           *(uint *)(param_1 + 0x5e8) & 0xfffffff3 | -(uint)(param_4 != 1.4013e-45) & 0xc;
      uVar10 = *(uint *)(param_1 + 0x5ec) & 0xfffffff3;
      goto LAB_10042e85;
    }
    break;
  case 0x97:
    *(uint *)(param_1 + 0x5204) = (uint)(param_4 == 3.57331e-43);
    if (param_4 == 3.58732e-43) {
      param_4 = 7.00649e-45;
    }
    else if (3 < (uint)param_4) {
      param_4 = 0.0;
    }
    *(float *)(param_1 + 0x58b0) = param_4;
    uVar13 = *(uint *)(param_1 + 0x5f0) & 0xffdfffff;
    if (param_4 == 3.57331e-43) {
      uVar13 = *(uint *)(param_1 + 0x5f0) | 0x200000;
    }
    *(uint *)(param_1 + 0x5f0) = uVar13;
    return;
  case 0x98:
    *(uint *)(param_1 + 0x5160) = -(uint)(((uint)param_4 & 1) != 0);
    *(uint *)(param_1 + 0x5164) = -(uint)(((uint)param_4 & 2) != 0);
    *(uint *)(param_1 + 0x5168) = -(uint)(((uint)param_4 & 4) != 0);
    *(uint *)(param_1 + 0x516c) = -(uint)(((uint)param_4 & 8) != 0);
    *(uint *)(param_1 + 0x5170) = -(uint)(((uint)param_4 & 0x10) != 0);
    *(uint *)(param_1 + 0x5174) = -(uint)(((uint)param_4 & 0x20) != 0);
    *(uint *)(param_1 + 0x58b4) = (uint)param_4 & 0x3f;
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4840) = *(undefined4 *)(param_1 + 0x5160);
    *(undefined4 *)(param_1 + 0x4844) = *(undefined4 *)(param_1 + 0x5164);
    *(undefined4 *)(param_1 + 0x4848) = *(undefined4 *)(param_1 + 0x5168);
    *(undefined4 *)(param_1 + 0x484c) = *(undefined4 *)(param_1 + 0x516c);
    *(undefined4 *)(param_1 + 0x4850) = *(undefined4 *)(param_1 + 0x5170);
    *(undefined4 *)(param_1 + 0x4854) = *(undefined4 *)(param_1 + 0x5174);
    *(undefined1 *)(param_2 + 0x38) = 1;
    *(undefined1 *)(param_2 + 8) = 1;
    return;
  case 0x9a:
    *(float *)(param_1 + 0x5210) = param_4;
    goto LAB_100430b9;
  case 0x9b:
    *(float *)(param_1 + 0x5218) = param_4;
    goto LAB_100430b9;
  case 0x9c:
    *(uint *)(param_1 + 0x521c) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x9d:
    *(uint *)(param_1 + 0x5220) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    *(bool *)(param_1 + 0x58c9) = param_4 != 0.0;
    return;
  case 0x9e:
    *(float *)(param_1 + 0x5224) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0x9f:
    *(float *)(param_1 + 0x5228) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0xa0:
    *(float *)(param_1 + 0x522c) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0xa2:
    *(float *)((int)this + 0x55c) = param_4;
    *(undefined1 *)((int)this + 0xd97c) = 1;
    return;
  case 0xa6:
    *(float *)(param_1 + 0x5214) = param_4;
LAB_100430b9:
    *(undefined1 *)(param_2 + 0x11) = 1;
    if ((*(float *)(param_1 + 0x5210) != 1.0) &&
       ((*(float *)(param_1 + 0x5218) != 1.0 || (*(float *)(param_1 + 0x5214) != 1.0)))) {
      *(undefined1 *)(param_1 + 0x58ca) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x58ca) = 0;
    return;
  case 0xa7:
    *(uint *)(param_1 + 0x5200) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0xa8:
    *(byte *)(param_1 + 0x458) = param_4._0_1_ & 0xf;
    *(byte *)(param_1 + 0x438) = param_4._0_1_ & 0xf;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case 0xaa:
    *(float *)(param_1 + 21000) = param_4;
    *(undefined1 *)(param_2 + 0x11) = 1;
    return;
  case 0xab:
    if (5 < (uint)param_4) {
      param_4 = 1.4013e-45;
    }
    uVar17 = *(undefined4 *)(&DAT_100b0324 + (int)param_4 * 4);
    *(undefined4 *)(param_1 + 0x454) = uVar17;
    *(undefined4 *)(param_1 + 0x434) = uVar17;
    *(undefined4 *)(param_1 + 0x448) = uVar17;
    *(undefined4 *)(param_1 + 0x428) = uVar17;
    *(undefined1 *)(param_2 + 0xc) = 1;
    return;
  case 0xac:
    uVar13 = *(uint *)(param_1 + 0x4c4c) | 2;
    uVar10 = *(uint *)(param_1 + 0x4c4c) & 0xfffffffd;
    bVar16 = param_4 == 4.2039e-45;
    goto LAB_100431dd;
  case 0xad:
    uVar13 = *(uint *)(param_1 + 0x4c4c) | 4;
    uVar10 = *(uint *)(param_1 + 0x4c4c) & 0xfffffffb;
    bVar16 = param_4 == 2.8026e-45;
LAB_100431dd:
    if (!bVar16) {
      uVar13 = uVar10;
    }
    *(uint *)(param_1 + 0x4c4c) = uVar13;
    *(undefined1 *)(param_2 + 0x11) = 1;
    break;
  default:
    goto switchD_10041dbf_default;
  }
switchD_10041dbf_default:
  return;
}

