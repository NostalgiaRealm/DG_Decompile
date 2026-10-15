/*
 * FUN_10062eb0 at 10062eb0
 * undefined FUN_10062eb0(void)
 * Address ranges: 10062eb0-10063237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062eb0(int param_1,uint param_2,int param_3,float param_4)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  code *extraout_w11;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (7 < param_2) {
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_3 - 1U < 10) {
    iVar1 = param_1 + 0x90;
    iVar5 = (int)param_2 >> 3;
    switch(param_3) {
    case 1:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar3 = *(undefined4 *)(&DAT_1012c4d8 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 4) = uVar3;
      pbVar4 = (byte *)(iVar5 + param_1 + 0xd974);
      *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(undefined4 *)(iVar1 + 0x1a4) = uVar3;
      return;
    case 2:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar3 = *(undefined4 *)(&DAT_1012c4d8 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 8) = uVar3;
      pbVar4 = (byte *)(iVar5 + param_1 + 0xd974);
      *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(undefined4 *)(iVar1 + 0x1a8) = uVar3;
      return;
    case 3:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar3 = *(undefined4 *)(&DAT_1012c4d8 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      *(undefined4 *)(iVar1 + 0x1ac) = uVar3;
      break;
    case 4:
      iVar1 = iVar1 + param_2 * 0x34;
      fVar9 = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x1c) = fVar9;
      fVar8 = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x20) = fVar8;
      fVar7 = (float)((uint)param_4 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x24) = fVar7;
      fVar6 = (float)((uint)param_4 >> 0x18) / 255.0;
      *(float *)(iVar1 + 0x28) = fVar6;
      pbVar4 = (byte *)(iVar5 + param_1 + 0xd974);
      *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(iVar1 + 0x1bc) = fVar9;
      *(float *)(iVar1 + 0x1c0) = fVar8;
      *(float *)(iVar1 + 0x1c4) = fVar7;
      *(float *)(iVar1 + 0x1c8) = fVar6;
      return;
    case 5:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x341) = uVar2;
      break;
    case 6:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x342) = uVar2;
      break;
    case 7:
      uVar2 = 2;
      if (param_4 != 0.0) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x340) = uVar2;
      break;
    case 8:
      fVar6 = 15.99;
      if (((param_4 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_4)) &&
         (fVar6 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
        fVar6 = param_4;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      *(float *)(iVar1 + 0x10) = fVar6;
      pbVar4 = (byte *)(iVar5 + param_1 + 0xd974);
      *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(iVar1 + 0x1b0) = fVar6;
      return;
    case 9:
      *(char *)(iVar1 + param_2 * 8 + 0x343) = SUB41(param_4,0);
      break;
    case 10:
      iVar1 = iVar1 + param_2 * 0x34;
      if (0x10 < (uint)param_4) {
        param_4 = 1.4013e-45;
      }
      *(float *)(iVar1 + 0x14) = param_4;
      *(float *)(iVar1 + 0x1b4) = param_4;
    }
    pbVar4 = (byte *)(iVar5 + param_1 + 0xd974);
    *pbVar4 = *pbVar4 | (byte)(1 << (ulonglong)(param_2 & 7));
    return;
  }
  return;
}

