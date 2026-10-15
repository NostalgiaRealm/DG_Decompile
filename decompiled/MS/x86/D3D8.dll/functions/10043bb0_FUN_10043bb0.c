/*
 * FUN_10043bb0 at 10043bb0
 * undefined __stdcall FUN_10043bb0(int param_1, int param_2, uint param_3, int param_4, float param_5)
 * Address ranges: 10043bb0-10043eb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10043bb0(int param_1,int param_2,uint param_3,int param_4,float param_5)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_4 - 1U < 10) {
    iVar2 = (int)param_3 >> 3;
    switch(param_4) {
    case 1:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100b01b8 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 4 + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        *(undefined4 *)(param_3 * 0x34 + 0x1a4 + param_1) = uVar1;
        return;
      }
      break;
    case 2:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100b01b8 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 8 + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        *(undefined4 *)(param_3 * 0x34 + 0x1a8 + param_1) = uVar1;
        return;
      }
      break;
    case 3:
      if ((uint)param_5 < 6) {
        uVar1 = *(undefined4 *)(&DAT_100b01b8 + (int)param_5 * 4);
        *(undefined4 *)(param_3 * 0x34 + 0xc + param_1) = uVar1;
        *(undefined4 *)(param_3 * 0x34 + 0x1ac + param_1) = uVar1;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        return;
      }
      break;
    case 4:
      iVar4 = param_3 * 0x34;
      fVar8 = ((float)((uint)param_5 >> 0x10 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar4 + 0x1c + param_1) = fVar8;
      fVar7 = ((float)((uint)param_5 >> 8 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar4 + 0x20 + param_1) = fVar7;
      fVar5 = ((float)((uint)param_5 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar4 + 0x24 + param_1) = fVar5;
      fVar6 = ((float)((uint)param_5 >> 0x18) + 0.0) / 255.0;
      *(float *)(iVar4 + 0x28 + param_1) = fVar6;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      *(float *)(iVar4 + 0x1bc + param_1) = fVar8;
      *(float *)(iVar4 + 0x1c0 + param_1) = fVar7;
      *(float *)(iVar4 + 0x1c4 + param_1) = fVar5;
      *(float *)(iVar4 + 0x1c8 + param_1) = fVar6;
      return;
    case 5:
      if (param_5 != 4.2039e-45) {
        *(bool *)(param_1 + 0x341 + param_3 * 8) = param_5 == 2.8026e-45;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        return;
      }
      *(undefined1 *)(param_1 + 0x341 + param_3 * 8) = 2;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 6:
      if (param_5 != 4.2039e-45) {
        *(bool *)(param_1 + 0x342 + param_3 * 8) = param_5 == 2.8026e-45;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        return;
      }
      *(undefined1 *)(param_1 + 0x342 + param_3 * 8) = 2;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 7:
      if (param_5 != 0.0) {
        *(bool *)(param_1 + 0x340 + param_3 * 8) = param_5 == 2.8026e-45;
        pbVar3 = (byte *)(param_2 + 4 + iVar2);
        *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
        return;
      }
      *(undefined1 *)(param_1 + 0x340 + param_3 * 8) = 2;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 8:
      fVar6 = 15.99;
      if (((param_5 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_5)) &&
         (fVar6 = param_5, 0x7f800000 < (uint)ABS(param_5))) {
        fVar6 = 0.0;
      }
      *(float *)(param_3 * 0x34 + 0x10 + param_1) = fVar6;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      *(float *)(param_3 * 0x34 + 0x1b0 + param_1) = fVar6;
      return;
    case 9:
      *(undefined1 *)(param_1 + 0x343 + param_3 * 8) = param_5._0_1_;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
      return;
    case 10:
      if (0x10 < (uint)param_5) {
        param_5 = 1.4013e-45;
      }
      *(float *)(param_3 * 0x34 + 0x14 + param_1) = param_5;
      *(float *)(param_3 * 0x34 + 0x1b4 + param_1) = param_5;
      pbVar3 = (byte *)(param_2 + 4 + iVar2);
      *pbVar3 = *pbVar3 | '\x01' << (param_3 & 7);
    }
  }
  return;
}

