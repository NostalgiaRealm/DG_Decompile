/*
 * FUN_100360f0 at 100360f0
 * undefined FUN_100360f0(void)
 * Address ranges: 100360f0-100367db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100360f0(int param_1,uint param_2,uint param_3,float param_4)

{
  int iVar1;
  undefined1 uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  code *extraout_w11;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 < 8) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    if (param_3 < 0xb) {
      iVar1 = param_1 + 0x80;
      iVar4 = (int)param_2 >> 3;
      switch(param_3) {
      case 0:
        iVar1 = iVar1 + param_2 * 0x34;
        uVar6 = *(undefined4 *)(&DAT_1009df38 + (int)param_4 * 4);
        *(undefined4 *)(iVar1 + 4) = uVar6;
        *(undefined4 *)(iVar1 + 8) = uVar6;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          *(float *)(param_1 + 0x1420) = param_4;
          *(float *)(param_1 + 0x1424) = param_4;
          uVar5 = (ulonglong)((int)param_4 - 1);
          *(ulonglong *)(param_1 + 0x4a8) =
               (uVar5 << 0x29 ^ uVar5 << 0x2b) & 0xfffff9ffffffffff ^
               (*(ulonglong *)(param_1 + 0x4a8) ^ uVar5 << 0x2b) & 0xffffe1ffffffffff ^
               uVar5 << 0x29;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 1:
        if ((uint)param_4 < 6) {
          *(undefined4 *)(iVar1 + param_2 * 0x34 + 4) =
               *(undefined4 *)(&DAT_1009df38 + (int)param_4 * 4);
          pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
          *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
          if (param_2 == 0) {
            *(float *)(param_1 + 0x1420) = param_4;
            *(ulonglong *)(param_1 + 0x4a8) =
                 (*(ulonglong *)(param_1 + 0x4a8) ^ (ulonglong)((int)param_4 - 1) << 0x29) &
                 0xfffff9ffffffffff ^ (ulonglong)((int)param_4 - 1) << 0x29;
            *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
            return;
          }
        }
        break;
      case 2:
        if ((uint)param_4 < 6) {
          *(undefined4 *)(iVar1 + param_2 * 0x34 + 8) =
               *(undefined4 *)(&DAT_1009df38 + (int)param_4 * 4);
          pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
          *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
          if (param_2 == 0) {
            *(float *)(param_1 + 0x1424) = param_4;
            *(ulonglong *)(param_1 + 0x4a8) =
                 (*(ulonglong *)(param_1 + 0x4a8) ^ (ulonglong)((int)param_4 - 1) << 0x2b) &
                 0xffffe7ffffffffff ^ (ulonglong)((int)param_4 - 1) << 0x2b;
            *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
            return;
          }
        }
        break;
      case 4:
        fVar8 = (float)((uint)param_4 >> 0x10 & 0xff);
        iVar1 = iVar1 + param_2 * 0x34;
        *(float *)(iVar1 + 0x1c) = fVar8 / 255.0;
        fVar7 = (float)((uint)param_4 >> 8 & 0xff);
        *(float *)(iVar1 + 0x20) = fVar7 / 255.0;
        *(float *)(iVar1 + 0x24) = (float)((uint)param_4 & 0xff) / 255.0;
        *(float *)(iVar1 + 0x28) = (float)((uint)param_4 >> 0x18) / 255.0;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          *(float *)(param_1 + 0x1400) = fVar8;
          *(float *)(param_1 + 0x1404) = fVar7;
          *(float *)(param_1 + 0x1408) = (float)((uint)param_4 & 0xff);
          *(float *)(param_1 + 0x140c) = (float)((uint)param_4 >> 0x18);
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 5:
        uVar2 = 2;
        if (param_4 != 7.00649e-45) {
          uVar2 = param_4 == 2.8026e-45;
        }
        *(undefined1 *)(iVar1 + param_2 * 8 + 0x1a1) = uVar2;
        uVar6 = 1;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          if (param_4 != 1.4013e-45) {
            uVar6 = 2;
          }
          *(undefined4 *)(param_1 + 0x142c) = uVar6;
          uVar5 = 0x400000000000;
          if (param_4 == 1.4013e-45) {
            uVar5 = 0;
          }
          *(ulonglong *)(param_1 + 0x4a8) =
               uVar5 | *(ulonglong *)(param_1 + 0x4a8) & 0xffffbfffffffffff;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 6:
        uVar2 = 2;
        if (param_4 != 4.2039e-45) {
          uVar2 = param_4 == 2.8026e-45;
        }
        *(undefined1 *)(iVar1 + param_2 * 8 + 0x1a2) = uVar2;
        uVar6 = 1;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          if (param_4 != 1.4013e-45) {
            uVar6 = 2;
          }
          *(undefined4 *)(param_1 + 0x1428) = uVar6;
          uVar5 = 0x200000000000;
          if (param_4 == 1.4013e-45) {
            uVar5 = 0;
          }
          *(ulonglong *)(param_1 + 0x4a8) =
               uVar5 | *(ulonglong *)(param_1 + 0x4a8) & 0xffffdfffffffffff;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 7:
        uVar2 = 2;
        if (param_4 != 1.4013e-45) {
          uVar2 = param_4 == 4.2039e-45;
        }
        *(undefined1 *)(iVar1 + param_2 * 8 + 0x1a0) = uVar2;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          if (param_4 == 1.4013e-45) {
            fVar7 = *(float *)(param_1 + 0x1414);
          }
          else {
            fVar7 = (float)(*(int *)(param_1 + 0x141c) - 1);
          }
          *(float *)(param_1 + 0x1418) = fVar7;
          uVar5 = 0x800000000000;
          if (param_4 != 4.2039e-45) {
            uVar5 = 0;
          }
          *(ulonglong *)(param_1 + 0x4a8) =
               uVar5 | *(ulonglong *)(param_1 + 0x4a8) & 0xffff7fffffffffff;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1d41) | *(byte *)(param_1 + 0x1909);
          *(byte *)(param_1 + 0x1d38) = *(byte *)(param_1 + 0x1d38) | *(byte *)(param_1 + 0x1909);
          return;
        }
        break;
      case 8:
        fVar7 = 15.99;
        if (((param_4 <= 15.99) && (fVar7 = -16.0, -16.0 <= param_4)) &&
           (fVar7 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
          fVar7 = param_4;
        }
        *(float *)(iVar1 + param_2 * 0x34 + 0x10) = fVar7;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          *(float *)(param_1 + 0x1410) = fVar7;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 9:
        *(char *)(iVar1 + param_2 * 8 + 0x1a3) = SUB41(param_4,0);
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
        if (param_2 == 0) {
          if (*(uint *)(param_1 + 0x224) < (uint)*(byte *)(param_1 + 0x223)) {
            fVar7 = (float)*(byte *)(param_1 + 0x223);
          }
          else {
            fVar7 = (float)*(uint *)(param_1 + 0x224);
          }
          *(float *)(param_1 + 0x1414) = fVar7;
          *(byte *)(param_1 + 0x1d41) = *(byte *)(param_1 + 0x1909) | *(byte *)(param_1 + 0x1d41);
          return;
        }
        break;
      case 10:
        if (0x10 < (uint)param_4) {
          param_4 = 1.4013e-45;
        }
        *(float *)(iVar1 + param_2 * 0x34 + 0x14) = param_4;
        pbVar3 = (byte *)(iVar4 + param_1 + 0x1d34);
        *pbVar3 = *pbVar3 | (byte)(1 << (ulonglong)(param_2 & 7));
      }
    }
  }
  return;
}

