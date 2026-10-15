/*
 * FUN_10052110 at 10052110
 * undefined __stdcall FUN_10052110(int param_1, int param_2, uint param_3, int param_4, float param_5)
 * Address ranges: 10052110-10052408
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10052110(int param_1,int param_2,uint param_3,int param_4,float param_5)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_4 - 1U < 0xb) {
    iVar2 = (int)param_3 >> 3;
    switch(param_4) {
    case 1:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 4 + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        *(undefined4 *)(param_3 * 0x34 + 0x344 + param_1) = uVar1;
        return;
      }
      break;
    case 2:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 8 + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        *(undefined4 *)(param_3 * 0x34 + 0x348 + param_1) = uVar1;
        return;
      }
      break;
    case 3:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 0xc + param_1) = uVar1;
        *(undefined4 *)(param_3 * 0x34 + 0x34c + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        return;
      }
      break;
    case 4:
      iVar5 = param_3 * 0x34;
      fVar10 = ((float)((uint)param_5 >> 0x10 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar5 + 0x1c + param_1) = fVar10;
      fVar9 = ((float)((uint)param_5 >> 8 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar5 + 0x20 + param_1) = fVar9;
      fVar7 = ((float)((uint)param_5 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar5 + 0x24 + param_1) = fVar7;
      fVar8 = ((float)((uint)param_5 >> 0x18) + 0.0) / 255.0;
      *(float *)(iVar5 + 0x28 + param_1) = fVar8;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      *(float *)(iVar5 + 0x35c + param_1) = fVar10;
      *(float *)(iVar5 + 0x360 + param_1) = fVar9;
      *(float *)(iVar5 + 0x364 + param_1) = fVar7;
      *(float *)(iVar5 + 0x368 + param_1) = fVar8;
      return;
    case 5:
      if (param_5 == 4.2039e-45) {
        uVar6 = 2;
      }
      else {
        uVar6 = param_5 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + 0x681 + param_3 * 8) = uVar6;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 6:
      if (param_5 == 4.2039e-45) {
        uVar6 = 2;
      }
      else {
        uVar6 = param_5 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + 0x682 + param_3 * 8) = uVar6;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 7:
      if (param_5 == 0.0) {
        uVar6 = 2;
      }
      else {
        uVar6 = param_5 == 2.8026e-45;
      }
      *(undefined1 *)(param_1 + 0x680 + param_3 * 8) = uVar6;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 8:
      fVar8 = 15.99;
      if (((param_5 <= 15.99) && (fVar8 = -16.0, -16.0 <= param_5)) &&
         (fVar8 = param_5, 0x7f800000 < (uint)ABS(param_5))) {
        fVar8 = 0.0;
      }
      *(float *)(param_3 * 0x34 + 0x10 + param_1) = fVar8;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      *(float *)(param_3 * 0x34 + 0x350 + param_1) = fVar8;
      return;
    case 9:
      *(undefined1 *)(param_1 + 0x683 + param_3 * 8) = param_5._0_1_;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 10:
      if (0x10 < (uint)param_5) {
        param_5 = 1.4013e-45;
      }
      *(float *)(param_3 * 0x34 + 0x14 + param_1) = param_5;
      *(float *)(param_3 * 0x34 + 0x354 + param_1) = param_5;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 0xb:
      uVar4 = 1 << ((byte)param_3 & 0x1f);
      if (param_5 == 0.0) {
        uVar4 = *(uint *)(param_1 + 0xde4) & ~uVar4;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xde4) | uVar4;
      }
      *(uint *)(param_1 + 0xde4) = uVar4;
      *(undefined1 *)(param_2 + 9) = 1;
      *(byte *)(param_2 + iVar2) = *(byte *)(param_2 + iVar2) | '\x01' << (param_3 & 7);
    }
  }
  return;
}

