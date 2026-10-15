/*
 * FUN_10029760 at 10029760
 * undefined __thiscall FUN_10029760(void * this, int param_1, uint * param_2, undefined4 param_3, float param_4)
 * Address ranges: 10029760-1002a9aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10029760(void *this,int param_1,uint *param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  
  uVar13 = SUB41(param_4,0);
  switch(param_3) {
  case 4:
    *(uint *)(param_1 + 0xf28) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x400000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xffbfffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 5:
  case 6:
  case 10:
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
  case 0x95:
  case 0x96:
    break;
  case 7:
    *(uint *)(param_1 + 0x214) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x1e0) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    uVar10 = 2;
    uVar12 = *(uint *)((int)this + 0x18f8) >> 1;
    if (param_4 != 0.0) {
      uVar10 = 0;
    }
    uVar10 = ~uVar12 & 1 | uVar10;
    uVar15 = *(uint *)((int)this + 0xf1c);
    *(uint *)((int)this + 0xf1c) = uVar10;
    *(byte *)((int)this + 0x1d41) = *(byte *)((int)this + 0x1d41) | uVar15 != uVar10;
    uVar12 = ~uVar12 & 1 ^ 1;
    uVar10 = *(uint *)((int)this + 0x374);
    *(uint *)((int)this + 0x374) = uVar12;
    *(byte *)((int)this + 0x1d3d) = *(byte *)((int)this + 0x1d3d) | uVar10 != uVar12;
    return;
  case 8:
    *(uint *)(param_1 + 0x2dc) = (param_4 != 2.8026e-45) + 2;
    *(bool *)(param_1 + 0x1884) = param_4 == 1.4013e-45;
    *(undefined1 *)((int)param_2 + 0xd) = 1;
    return;
  case 9:
    *(bool *)(param_1 + 0x1883) = param_4 == 1.4013e-45;
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(uint *)(param_1 + 0x42c) =
         (uint)(param_4 == 1.4013e-45) << 0x16 | *(uint *)(param_1 + 0x42c) & 0xffbfffff;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0xb:
    *(uint *)(param_1 + 0xf2c) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(bool *)(param_1 + 0x189a) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
    *(uint *)(param_1 + 0x428) =
         (uint)(param_4 != 0.0) << 0x18 | *(uint *)(param_1 + 0x428) & 0xfeffffff;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0xe:
    *(uint *)(param_1 + 0x218) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x1e4) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    return;
  case 0xf:
    *(bool *)(param_1 + 0x1881) = param_4 != 0.0;
    if (param_4 == 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x1844);
    }
    *(undefined4 *)(param_1 + 0x954) = uVar3;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0x13:
    if ((uint)param_4 < 0xe) {
      *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(&DAT_1005dbf8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(&DAT_1005db78 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(&DAT_1005dbb8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(&DAT_1005db38 + (int)param_4 * 4);
      if (param_4 != 1.54143e-44) {
        if (param_4 == 1.82169e-44) {
          *(undefined4 *)(param_1 + 0x2a4) = 5;
          *(undefined4 *)(param_1 + 0x284) = 5;
          *(undefined4 *)(param_1 + 0x2b0) = 5;
          *(undefined4 *)(param_1 + 0x290) = 5;
        }
        *(undefined1 *)(param_2 + 3) = 1;
        return;
      }
      *(undefined4 *)(param_1 + 0x2a4) = 6;
      *(undefined4 *)(param_1 + 0x284) = 6;
      *(undefined4 *)(param_1 + 0x2b0) = 6;
      *(undefined4 *)(param_1 + 0x290) = 6;
      *(undefined1 *)(param_2 + 3) = 1;
      return;
    }
    break;
  case 0x14:
    if ((uint)param_4 < 0xe) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(&DAT_1005dbf8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(&DAT_1005db78 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(&DAT_1005dbb8 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(&DAT_1005db38 + (int)param_4 * 4);
      *(undefined1 *)(param_2 + 3) = 1;
      return;
    }
    break;
  case 0x16:
    if ((uint)param_4 < 4) {
      *(undefined4 *)(param_1 + 0x2e0) = *(undefined4 *)(&DAT_1005db28 + (int)param_4 * 4);
      *(undefined1 *)((int)param_2 + 0xd) = 1;
      return;
    }
    break;
  case 0x17:
    if ((uint)param_4 < 9) {
      iVar14 = *(int *)(&DAT_1005db04 + (int)param_4 * 4);
      iVar1 = *(int *)(param_1 + 0x185c);
      *(int *)(param_1 + 0x21c) = iVar14;
      *(int *)(param_1 + 0x1e8) = iVar14;
      if (iVar1 != 0) {
        iVar14 = *(int *)(&DAT_1005edbc + iVar14 * 4);
        *(uint *)(param_1 + 0x2e8) = ((uint)(iVar1 * 5) >> 1) * iVar14;
        *(float *)(param_1 + 0x2f0) =
             (float)iVar14 * (float)((double)iVar1 + (double)(&DAT_100601f0)[-(iVar1 >> 0x1f)]) *
             0.5;
        *(undefined1 *)((int)param_2 + 0xd) = 1;
      }
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x18:
    *(uint *)(param_1 + 0x950) = (uint)param_4 & 0xff;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x950);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x19:
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(float *)(param_1 + 0x1844) = param_4;
    *(uint *)(param_1 + 0x42c) =
         ((int)param_4 - 1U & 7) << 0x13 | *(uint *)(param_1 + 0x42c) & 0xffc7ffff;
    fVar11 = 0.0;
    if (*(char *)(param_1 + 0x1881) != '\0') {
      fVar11 = param_4;
    }
    *(float *)(param_1 + 0x954) = fVar11;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0x1a:
    *(bool *)(param_1 + 0x189d) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(uint *)(param_1 + 0x42c) =
         (uint)(param_4 == 0.0) << 0x1b | *(uint *)(param_1 + 0x42c) & 0xf7ffffff;
    if ((param_4 == 0.0) && (*(char *)(param_1 + 0x189e) != '\0')) {
      iVar14 = 1;
    }
    else {
      iVar14 = 0;
    }
    *(byte *)((int)param_2 + 0x11) =
         *(byte *)((int)param_2 + 0x11) | *(int *)(param_1 + 0x96c) != iVar14;
    *(int *)(param_1 + 0x96c) = iVar14;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0x1b:
    *(uint *)(param_1 + 0x29c) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x27c) = (uint)(param_4 != 0.0);
    *(undefined1 *)(param_2 + 3) = 1;
    return;
  case 0x1c:
    if (param_4 == 0.0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x958) = uVar3;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(bool *)(param_1 + 0x189c) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(uint *)(param_1 + 0x42c) =
         (uint)(param_4 != 0.0) << 0x18 | *(uint *)(param_1 + 0x42c) & 0xfeffffff;
    *(undefined1 *)(param_2 + 2) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x4000000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xfbffffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 0x1d:
    *(uint *)(param_1 + 0x948) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(float *)(param_1 + 0x55c) = param_4;
    *(undefined1 *)(param_2 + 6) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x100000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xffefffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 0x22:
    *(float *)(param_1 + 0x9b0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9b4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9b8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9bc) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x9b0);
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x9b4);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x9b8);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x23:
    *(float *)(param_1 + 0x978) = param_4;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(float *)(param_1 + 0x1858) = param_4;
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(uint *)(param_1 + 0x42c) =
         *(uint *)(param_1 + 0x42c) & 0xf9ffffff | ((uint)param_4 & 3) << 0x19;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0x24:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_1 + 0x960) = param_4;
    *(float *)(param_1 + 0x95c) = *(float *)(param_1 + 0x964) - param_4;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x95c);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x25:
    if (1e+37 <= ABS(param_4)) {
      param_4 = (float)((uint)param_4 & 0x80000000 | 0x7cf0bdc2);
    }
    *(float *)(param_1 + 0x964) = param_4;
    *(float *)(param_1 + 0x95c) = param_4 - *(float *)(param_1 + 0x960);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x964);
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x95c);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x26:
    *(float *)(param_1 + 0x968) = param_4;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x968);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x29:
    *(bool *)(param_1 + 0x1899) = param_4 != 0.0;
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x42c);
    *(uint *)(param_1 + 0x428) =
         (uint)(param_4 != 0.0) << 0x19 | *(uint *)(param_1 + 0x428) & 0xfdffffff;
    *(undefined1 *)((int)param_2 + 9) = 1;
    *param_2 = *param_2 | 1;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined1 *)(param_2 + 2) = 1;
    return;
  case 0x2f:
    if (0x10 < (uint)param_4) {
      param_4 = 2.24208e-44;
    }
    *(float *)(param_1 + 0x185c) = param_4;
    iVar14 = *(int *)(&DAT_1005edbc + *(int *)(param_1 + 0x1e8) * 4);
    *(uint *)(param_1 + 0x2e8) = ((uint)((int)param_4 * 5) >> 1) * iVar14;
    *(float *)(param_1 + 0x2f0) =
         (float)iVar14 *
         (float)((double)(int)param_4 + (double)(&DAT_100601f0)[-((int)param_4 >> 0x1f)]) * 0.5;
    *(undefined1 *)((int)param_2 + 0xd) = 1;
    return;
  case 0x30:
    *(uint *)(param_1 + 0x970) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x10000000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xefffffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 0x34:
    *(uint *)(param_1 + 0x1ec) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    return;
  case 0x35:
    if ((uint)param_4 < 9) {
      uVar3 = *(undefined4 *)(&DAT_1005dae0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x204) = uVar3;
      *(undefined4 *)(param_1 + 500) = uVar3;
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x36:
    if ((uint)param_4 < 9) {
      uVar3 = *(undefined4 *)(&DAT_1005dae0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x208) = uVar3;
      *(undefined4 *)(param_1 + 0x1f8) = uVar3;
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x37:
    if ((uint)param_4 < 9) {
      uVar3 = *(undefined4 *)(&DAT_1005dae0 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x20c) = uVar3;
      *(undefined4 *)(param_1 + 0x1fc) = uVar3;
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x38:
    if ((uint)param_4 < 9) {
      uVar3 = *(undefined4 *)(&DAT_1005db04 + (int)param_4 * 4);
      *(undefined4 *)(param_1 + 0x210) = uVar3;
      *(undefined4 *)(param_1 + 0x200) = uVar3;
      *(undefined1 *)((int)param_2 + 0xb) = 1;
      return;
    }
    break;
  case 0x39:
    *(undefined1 *)(param_1 + 0x17c0) = uVar13;
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    return;
  case 0x3a:
    *(undefined1 *)(param_1 + 0x1f0) = uVar13;
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    return;
  case 0x3b:
    *(undefined1 *)(param_1 + 0x1f1) = uVar13;
    *(undefined1 *)((int)param_2 + 0xb) = 1;
    return;
  case 0x3c:
    *(float *)(param_1 + 0x9c0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9c4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9c8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9cc) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(param_1 + 0x9c0);
    *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_1 + 0x9c4);
    *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x9c8);
    *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x9cc);
    *(undefined1 *)(param_2 + 6) = 1;
    return;
  case 0x80:
    *(uint *)(param_1 + 0x187c) =
         (*(uint *)(param_1 + 0x187c) ^ (uint)param_4) & 0xf ^ *(uint *)(param_1 + 0x187c);
    return;
  case 0x81:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 4 ^ *(uint *)(param_1 + 0x187c)) & 0xf0 ^ *(uint *)(param_1 + 0x187c);
    return;
  case 0x82:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 8 ^ *(uint *)(param_1 + 0x187c)) & 0xf00 ^ *(uint *)(param_1 + 0x187c);
    return;
  case 0x83:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 0xc ^ *(uint *)(param_1 + 0x187c)) & 0xf000 ^ *(uint *)(param_1 + 0x187c);
    return;
  case 0x84:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 0x10 ^ *(uint *)(param_1 + 0x187c)) & 0xf0000 ^
         *(uint *)(param_1 + 0x187c);
    return;
  case 0x85:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 0x14 ^ *(uint *)(param_1 + 0x187c)) & 0xf00000 ^
         *(uint *)(param_1 + 0x187c);
    return;
  case 0x86:
    *(uint *)(param_1 + 0x187c) =
         ((int)param_4 << 0x18 ^ *(uint *)(param_1 + 0x187c)) & 0xf000000 ^
         *(uint *)(param_1 + 0x187c);
    return;
  case 0x87:
    *(uint *)(param_1 + 0x187c) = *(uint *)(param_1 + 0x187c) & 0xfffffff | (int)param_4 << 0x1c;
    return;
  case 0x89:
    *(uint *)(param_1 + 0x94c) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    return;
  case 0x8b:
    *(float *)(param_1 + 0x9a0) = ((float)((uint)param_4 >> 0x10 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9a4) = ((float)((uint)param_4 >> 8 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9a8) = ((float)((uint)param_4 & 0xff) + 0.0) / 255.0;
    *(float *)(param_1 + 0x9ac) = ((float)((uint)param_4 >> 0x18) + 0.0) / 255.0;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    return;
  case 0x8c:
    *(float *)(param_1 + 0x97c) = param_4;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) & 0xfcffffff;
    *(uint *)(param_1 + 0x40c) = uVar10;
    if ((uint)param_4 < 4) {
      *(uint *)(param_1 + 0x40c) = (int)param_4 << 0x18 | uVar10;
      return;
    }
    break;
  case 0x8d:
    *(bool *)(param_1 + 0x1882) = param_4 != 0.0;
    if (param_4 == 0.0) {
      *(undefined4 *)(param_1 + 0xe10) = 0;
      *(undefined4 *)(param_1 + 0xe14) = 0;
      *(undefined4 *)(param_1 + 0xe18) = 0;
      *(undefined4 *)(param_1 + 0xe1c) = 0;
      uVar10 = *(uint *)(param_1 + 0x404);
      uVar12 = *(uint *)(param_1 + 0x408);
      uVar15 = *(uint *)(param_1 + 0x3f4);
      *(uint *)(param_1 + 0x404) = uVar10 | 0xf3;
      *(uint *)(param_1 + 0x408) = uVar12 | 0xf3;
      uVar10 = uVar10 | 0xff;
      *(uint *)(param_1 + 0x3f4) = uVar15 & 0xffffff0c;
      uVar12 = uVar12 | 0xff;
      uVar15 = uVar15 & 0xffffff00;
    }
    else {
      iVar14 = *(int *)(param_1 + 0x1848);
      *(undefined4 *)(param_1 + 0xe14) = *(undefined4 *)(param_1 + 0x184c);
      *(undefined4 *)(param_1 + 0xe18) = *(undefined4 *)(param_1 + 0x1850);
      *(undefined4 *)(param_1 + 0xe1c) = *(undefined4 *)(param_1 + 0x1854);
      *(int *)(param_1 + 0xe10) = iVar14;
      uVar10 = *(uint *)(param_1 + 0x404);
      uVar15 = (iVar14 << 4 ^ *(uint *)(param_1 + 0x3f4)) & 0x30 ^ *(uint *)(param_1 + 0x3f4);
      *(uint *)(param_1 + 0x3f4) = uVar15;
      uVar4 = -(uint)(iVar14 != 1) & 0x30;
      uVar5 = 0x30;
      *(uint *)(param_1 + 0x404) = uVar10 & 0xffffffcf | uVar4;
      uVar2 = *(uint *)(param_1 + 0x408);
      if (iVar14 == 2) {
        uVar5 = 0;
      }
      *(uint *)(param_1 + 0x408) = uVar2 & 0xffffffcf | uVar5;
      iVar14 = *(int *)(param_1 + 0x184c);
      uVar15 = (iVar14 << 6 ^ uVar15) & 0xc0 ^ uVar15;
      *(uint *)(param_1 + 0x3f4) = uVar15;
      uVar6 = -(uint)(iVar14 != 1) & 0xc0;
      *(uint *)(param_1 + 0x404) = uVar10 & 0xffffff0f | uVar4 | uVar6;
      uVar7 = 0xc0;
      if (iVar14 == 2) {
        uVar7 = 0;
      }
      *(uint *)(param_1 + 0x408) = uVar2 & 0xffffff0f | uVar5 | uVar7;
      uVar12 = *(uint *)(param_1 + 0x1850);
      uVar15 = (uVar15 ^ uVar12) & 3 ^ uVar15;
      *(uint *)(param_1 + 0x3f4) = uVar15;
      uVar8 = -(uint)(uVar12 != 1) & 3;
      *(uint *)(param_1 + 0x404) = uVar10 & 0xffffff0c | uVar4 | uVar6 | uVar8;
      uVar9 = 3;
      if (uVar12 == 2) {
        uVar9 = 0;
      }
      *(uint *)(param_1 + 0x408) = uVar2 & 0xffffff0c | uVar5 | uVar7 | uVar9;
      iVar14 = *(int *)(param_1 + 0x1854);
      uVar12 = 0xc;
      if (iVar14 == 2) {
        uVar12 = 0;
      }
      uVar12 = uVar12 | uVar2 & 0xffffff00 | uVar5 | uVar7 | uVar9;
      uVar10 = -(uint)(iVar14 != 1) & 0xc | uVar10 & 0xffffff00 | uVar4 | uVar6 | uVar8;
      uVar15 = (iVar14 << 2 ^ uVar15) & 0xc ^ uVar15;
    }
    *(uint *)(param_1 + 0x3f4) = uVar15;
    *(uint *)(param_1 + 0x404) = uVar10;
    *(uint *)(param_1 + 0x408) = uVar12;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    return;
  case 0x8e:
    *(uint *)(param_1 + 0x940) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x20000000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xdfffffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 0x8f:
    *(uint *)(param_1 + 0x944) = (uint)(param_4 != 0.0);
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    uVar10 = *(uint *)(param_1 + 0x40c) | 0x800000;
    if (param_4 == 0.0) {
      uVar10 = *(uint *)(param_1 + 0x40c) & 0xff7fffff;
    }
    *(uint *)(param_1 + 0x40c) = uVar10;
    return;
  case 0x90:
    *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
    *(uint *)(param_1 + 0xf20) = (uint)(param_4 != 0.0);
    *(uint *)(param_1 + 0x42c) =
         (uint)(param_4 != 0.0) << 0x10 | *(uint *)(param_1 + 0x42c) & 0xfffeffff;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    return;
  case 0x91:
    *(float *)(param_1 + 0x1848) = param_4;
    if (*(char *)(param_1 + 0x1882) != '\0') {
      *(float *)(param_1 + 0xe10) = param_4;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x3f4) =
           ((int)param_4 << 4 ^ *(uint *)(param_1 + 0x3f4)) & 0x30 ^ *(uint *)(param_1 + 0x3f4);
      uVar10 = 0x30;
      *(uint *)(param_1 + 0x404) =
           *(uint *)(param_1 + 0x404) & 0xffffffcf | -(uint)(param_4 != 1.4013e-45) & 0x30;
      uVar12 = *(uint *)(param_1 + 0x408) & 0xffffffcf;
LAB_1002a8ac:
      if (param_4 == 2.8026e-45) {
        uVar10 = 0;
      }
      *(uint *)(param_1 + 0x408) = uVar12 | uVar10;
      return;
    }
    break;
  case 0x92:
    *(float *)(param_1 + 0x184c) = param_4;
    if (*(char *)(param_1 + 0x1882) != '\0') {
      *(float *)(param_1 + 0xe14) = param_4;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x3f4) =
           ((int)param_4 << 6 ^ *(uint *)(param_1 + 0x3f4)) & 0xc0 ^ *(uint *)(param_1 + 0x3f4);
      uVar10 = 0xc0;
      *(uint *)(param_1 + 0x404) =
           *(uint *)(param_1 + 0x404) & 0xffffff3f | -(uint)(param_4 != 1.4013e-45) & 0xc0;
      uVar12 = *(uint *)(param_1 + 0x408) & 0xffffff3f;
      goto LAB_1002a8ac;
    }
    break;
  case 0x93:
    *(float *)(param_1 + 0x1850) = param_4;
    if (*(char *)(param_1 + 0x1882) != '\0') {
      *(float *)(param_1 + 0xe18) = param_4;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x3f4) =
           (*(uint *)(param_1 + 0x3f4) ^ (uint)param_4) & 3 ^ *(uint *)(param_1 + 0x3f4);
      uVar10 = 3;
      *(uint *)(param_1 + 0x404) =
           *(uint *)(param_1 + 0x404) & 0xfffffffc | -(uint)(param_4 != 1.4013e-45) & 3;
      uVar12 = *(uint *)(param_1 + 0x408) & 0xfffffffc;
      goto LAB_1002a8ac;
    }
    break;
  case 0x94:
    *(float *)(param_1 + 0x1854) = param_4;
    if (*(char *)(param_1 + 0x1882) != '\0') {
      *(float *)(param_1 + 0xe1c) = param_4;
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      *(uint *)(param_1 + 0x3f4) =
           ((int)param_4 * 4 ^ *(uint *)(param_1 + 0x3f4)) & 0xc ^ *(uint *)(param_1 + 0x3f4);
      uVar10 = 0xc;
      *(uint *)(param_1 + 0x404) =
           *(uint *)(param_1 + 0x404) & 0xfffffff3 | -(uint)(param_4 != 1.4013e-45) & 0xc;
      uVar12 = *(uint *)(param_1 + 0x408) & 0xfffffff3;
      goto LAB_1002a8ac;
    }
    break;
  case 0x97:
    fVar11 = 0.0;
    if ((uint)param_4 < 4) {
      fVar11 = param_4;
    }
    *(float *)(param_1 + 0x1870) = fVar11;
    return;
  case 0x98:
    *(uint *)(param_1 + 0xe80) = -(uint)(((uint)param_4 & 1) != 0);
    *(uint *)(param_1 + 0xe84) = -(uint)(((uint)param_4 & 2) != 0);
    *(uint *)(param_1 + 0xe88) = -(uint)(((uint)param_4 & 4) != 0);
    *(uint *)(param_1 + 0xe8c) = -(uint)(((uint)param_4 & 8) != 0);
    *(uint *)(param_1 + 0xe90) = -(uint)(((uint)param_4 & 0x10) != 0);
    *(uint *)(param_1 + 0xe94) = -(uint)(((uint)param_4 & 0x20) != 0);
    *(uint *)(param_1 + 0x1874) = (uint)param_4 & 0x3f;
    *(undefined1 *)((int)param_2 + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0xe80);
    *(undefined4 *)(param_1 + 0x534) = *(undefined4 *)(param_1 + 0xe84);
    *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0xe88);
    *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0xe8c);
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(param_1 + 0xe94);
    *(undefined1 *)(param_2 + 2) = 1;
    *(undefined1 *)(param_2 + 6) = 1;
    break;
  default:
    goto switchD_10029782_default;
  }
switchD_10029782_default:
  return;
}

