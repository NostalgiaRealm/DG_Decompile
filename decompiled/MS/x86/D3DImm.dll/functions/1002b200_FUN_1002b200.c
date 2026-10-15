/*
 * FUN_1002b200 at 1002b200
 * undefined __stdcall FUN_1002b200(int param_1, int param_2, uint param_3, uint param_4, float param_5)
 * Address ranges: 1002b200-1002b70a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b200(int param_1,int param_2,uint param_3,uint param_4,float param_5)

{
  undefined4 uVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  float fVar11;
  
  if (param_4 < 0xb) {
    iVar6 = (int)param_3 >> 3;
    switch(param_4) {
    case 0:
      uVar1 = *(undefined4 *)(&DAT_1005dac8 + (int)param_5 * 4);
      *(undefined4 *)(param_3 * 0x34 + 4 + param_1) = uVar1;
      *(undefined4 *)(param_3 * 0x34 + 8 + param_1) = uVar1;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        *(float *)(param_1 + 0x13a0) = param_5;
        *(float *)(param_1 + 0x13a4) = param_5;
        uVar8 = ((int)param_5 - 1U & 3) << 0xb | *(uint *)(param_1 + 0x42c) & 0xffffe7ff;
        uVar9 = uVar8 >> 2;
        *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
        *(uint *)(param_1 + 0x42c) = (uVar9 ^ uVar8) & 0xfffff9ff ^ uVar9;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 1:
      if ((uint)param_5 < 6) {
        *(undefined4 *)(param_3 * 0x34 + 4 + param_1) =
             *(undefined4 *)(&DAT_1005dac8 + (int)param_5 * 4);
        pbVar2 = (byte *)(param_2 + 4 + iVar6);
        *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
        if (param_3 == 0) {
          *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
          *(float *)(param_1 + 0x13a0) = param_5;
          *(uint *)(param_1 + 0x42c) =
               ((int)param_5 - 1U & 3) << 9 | *(uint *)(param_1 + 0x42c) & 0xfffff9ff;
          *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
          return;
        }
      }
      break;
    case 2:
      if ((uint)param_5 < 6) {
        *(undefined4 *)(param_3 * 0x34 + 8 + param_1) =
             *(undefined4 *)(&DAT_1005dac8 + (int)param_5 * 4);
        pbVar2 = (byte *)(param_2 + 4 + iVar6);
        *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
        if (param_3 == 0) {
          *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
          *(float *)(param_1 + 0x13a4) = param_5;
          *(uint *)(param_1 + 0x42c) =
               ((int)param_5 - 1U & 3) << 0xb | *(uint *)(param_1 + 0x42c) & 0xffffe7ff;
          *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
          return;
        }
      }
      break;
    case 4:
      iVar7 = param_3 * 0x34;
      fVar11 = (float)((uint)param_5 >> 0x10 & 0xff) + 0.0;
      *(float *)(iVar7 + 0x1c + param_1) = fVar11 / 255.0;
      fVar3 = (float)((uint)param_5 >> 8 & 0xff) + 0.0;
      *(float *)(iVar7 + 0x20 + param_1) = fVar3 / 255.0;
      fVar4 = (float)((uint)param_5 & 0xff) + 0.0;
      *(float *)(iVar7 + 0x24 + param_1) = fVar4 / 255.0;
      fVar5 = (float)((uint)param_5 >> 0x18) + 0.0;
      *(float *)(iVar7 + 0x28 + param_1) = fVar5 / 255.0;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        *(float *)(param_1 + 0x1380) = fVar11;
        *(float *)(param_1 + 0x1384) = fVar3;
        *(float *)(param_1 + 5000) = fVar4;
        *(float *)(param_1 + 0x138c) = fVar5;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 5:
      if (param_5 == 7.00649e-45) {
        uVar10 = 2;
      }
      else {
        uVar10 = param_5 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + 0x1a1 + param_3 * 8) = uVar10;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x13ac) = (param_5 != 1.4013e-45) + 1;
        *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
        *(uint *)(param_1 + 0x42c) =
             (uint)(param_5 != 1.4013e-45) << 0xe | *(uint *)(param_1 + 0x42c) & 0xffffbfff;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 6:
      if (param_5 == 4.2039e-45) {
        uVar10 = 2;
      }
      else {
        uVar10 = param_5 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + 0x1a2 + param_3 * 8) = uVar10;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        *(uint *)(param_1 + 0x13a8) = (param_5 != 1.4013e-45) + 1;
        *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
        *(uint *)(param_1 + 0x42c) =
             (uint)(param_5 != 1.4013e-45) << 0xd | *(uint *)(param_1 + 0x42c) & 0xffffdfff;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 7:
      if (param_5 == 1.4013e-45) {
        uVar10 = 2;
      }
      else {
        uVar10 = param_5 == 4.2039e-45;
      }
      *(undefined1 *)(param_1 + 0x1a0 + param_3 * 8) = uVar10;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        if (param_5 == 1.4013e-45) {
          fVar11 = *(float *)(param_1 + 0x1394);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x139c) + -1;
          fVar11 = (float)((double)iVar6 + (double)(&DAT_100601f0)[-(iVar6 >> 0x1f)]);
        }
        *(float *)(param_1 + 0x1398) = fVar11;
        *(undefined4 *)(param_1 + 0x428) = *(undefined4 *)(param_1 + 0x428);
        *(uint *)(param_1 + 0x42c) =
             (uint)(param_5 == 4.2039e-45) << 0xf | *(uint *)(param_1 + 0x42c) & 0xffff7fff;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 8:
      if (param_5 <= 15.99) {
        if (-16.0 <= param_5) {
          if (0x7f800000 < (uint)ABS(param_5)) {
            param_5 = 0.0;
          }
        }
        else {
          param_5 = -16.0;
        }
      }
      else {
        param_5 = 15.99;
      }
      *(float *)(param_3 * 0x34 + 0x10 + param_1) = param_5;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        *(float *)(param_1 + 0x1390) = param_5;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 9:
      *(undefined1 *)(param_1 + 0x1a3 + param_3 * 8) = param_5._0_1_;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
      if (param_3 == 0) {
        uVar8 = *(uint *)(param_1 + 0x1a4);
        if (uVar8 < *(byte *)(param_1 + 0x1a3)) {
          fVar11 = (float)*(byte *)(param_1 + 0x1a3);
        }
        else {
          fVar11 = (float)((double)(int)uVar8 + (double)(&DAT_100601f0)[-((int)uVar8 >> 0x1f)]);
        }
        *(float *)(param_1 + 0x1394) = fVar11;
        *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) | *(byte *)(param_1 + 0x1889);
        return;
      }
      break;
    case 10:
      if (0x10 < (uint)param_5) {
        param_5 = 1.4013e-45;
      }
      *(float *)(param_3 * 0x34 + 0x14 + param_1) = param_5;
      pbVar2 = (byte *)(param_2 + 4 + iVar6);
      *pbVar2 = *pbVar2 | '\x01' << (param_3 & 7);
    }
  }
  return;
}

