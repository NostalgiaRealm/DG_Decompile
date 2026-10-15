/*
 * FUN_10079410 at 10079410
 * undefined FUN_10079410(void)
 * Address ranges: 10079410-10079843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079410(int param_1,uint param_2,int param_3,float param_4)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  code *extraout_w11;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0xf < param_2) {
    return;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_3 - 1U < 0xb) {
    iVar1 = param_1 + 0x90;
    iVar7 = (int)param_2 >> 3;
    switch(param_3) {
    case 1:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar4 = *(undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 4) = uVar4;
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      *pbVar8 = *pbVar8 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(undefined4 *)(iVar1 + 0x344) = uVar4;
      return;
    case 2:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar4 = *(undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 8) = uVar4;
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      *pbVar8 = *pbVar8 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(undefined4 *)(iVar1 + 0x348) = uVar4;
      return;
    case 3:
      if (5 < (uint)param_4) {
        return;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      uVar4 = *(undefined4 *)(&DAT_10161e90 + (int)param_4 * 4);
      *(undefined4 *)(iVar1 + 0xc) = uVar4;
      *(undefined4 *)(iVar1 + 0x34c) = uVar4;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 4:
      iVar1 = iVar1 + param_2 * 0x34;
      fVar13 = (float)((uint)param_4 >> 0x10 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x1c) = fVar13;
      fVar12 = (float)((uint)param_4 >> 8 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x20) = fVar12;
      fVar11 = (float)((uint)param_4 & 0xff) / 255.0;
      *(float *)(iVar1 + 0x24) = fVar11;
      fVar10 = (float)((uint)param_4 >> 0x18) / 255.0;
      *(float *)(iVar1 + 0x28) = fVar10;
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      *pbVar8 = *pbVar8 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(iVar1 + 0x35c) = fVar13;
      *(float *)(iVar1 + 0x360) = fVar12;
      *(float *)(iVar1 + 0x364) = fVar11;
      *(float *)(iVar1 + 0x368) = fVar10;
      return;
    case 5:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x681) = uVar2;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 6:
      uVar2 = 2;
      if (param_4 != 4.2039e-45) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x682) = uVar2;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 7:
      uVar2 = 2;
      if (param_4 != 0.0) {
        uVar2 = param_4 == 2.8026e-45;
      }
      *(undefined1 *)(iVar1 + param_2 * 8 + 0x680) = uVar2;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 8:
      fVar10 = 15.99;
      if (((param_4 <= 15.99) && (fVar10 = -16.0, -16.0 <= param_4)) &&
         (fVar10 = 0.0, (uint)ABS(param_4) < 0x7f800001)) {
        fVar10 = param_4;
      }
      iVar1 = iVar1 + param_2 * 0x34;
      *(float *)(iVar1 + 0x10) = fVar10;
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      *pbVar8 = *pbVar8 | (byte)(1 << (ulonglong)(param_2 & 7));
      *(float *)(iVar1 + 0x350) = fVar10;
      return;
    case 9:
      *(char *)(iVar1 + param_2 * 8 + 0x683) = SUB41(param_4,0);
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 10:
      iVar1 = iVar1 + param_2 * 0x34;
      if (0x10 < (uint)param_4) {
        param_4 = 1.4013e-45;
      }
      *(float *)(iVar1 + 0x14) = param_4;
      *(float *)(iVar1 + 0x354) = param_4;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf664);
      break;
    case 0xb:
      uVar5 = *(uint *)(param_1 + 0xe74);
      uVar6 = 1 << (ulonglong)(param_2 & 0x1f);
      uVar3 = uVar5 & (uVar6 ^ 0xffffffff);
      if (param_4 != 0.0) {
        uVar3 = uVar6 | uVar5;
      }
      *(uint *)(param_1 + 0xe74) = uVar3;
      *(undefined1 *)(param_1 + 0xf669) = 1;
      bVar9 = (byte)(1 << (ulonglong)(param_2 & 7));
      pbVar8 = (byte *)(iVar7 + param_1 + 0xf660);
    }
    *pbVar8 = *pbVar8 | bVar9;
    return;
  }
  return;
}

