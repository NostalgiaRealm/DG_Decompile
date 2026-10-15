/*
 * FUN_18005d900 at 18005d900
 * undefined __fastcall FUN_18005d900(undefined8 param_1, longlong param_2, longlong param_3, uint param_4, undefined4 param_5, float param_6)
 * Address ranges: 18005d900-18005dbda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005d900(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,
                  undefined4 param_5,float param_6)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  switch(param_5) {
  case 1:
    if ((uint)param_6 < 6) {
      uVar1 = *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 4 + param_2) = uVar1;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 0x344 + param_2) = uVar1;
      return;
    }
    break;
  case 2:
    if ((uint)param_6 < 6) {
      uVar1 = *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 8 + param_2) = uVar1;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 0x348 + param_2) = uVar1;
      return;
    }
    break;
  case 3:
    if ((uint)param_6 < 6) {
      uVar1 = *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 0xc + param_2) = uVar1;
      *(undefined4 *)((ulonglong)param_4 * 0x34 + 0x34c + param_2) = uVar1;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      return;
    }
    break;
  case 4:
    lVar4 = (ulonglong)param_4 * 0x34;
    fVar8 = (float)((uint)param_6 >> 0x10 & 0xff) / 255.0;
    fVar7 = (float)((uint)param_6 >> 8 & 0xff) / 255.0;
    fVar5 = (float)((uint)param_6 & 0xff) / 255.0;
    *(float *)(lVar4 + 0x1c + param_2) = fVar8;
    *(float *)(lVar4 + 0x20 + param_2) = fVar7;
    fVar6 = (float)((uint)param_6 >> 0x18) / 255.0;
    *(float *)(lVar4 + 0x24 + param_2) = fVar5;
    *(float *)(lVar4 + 0x28 + param_2) = fVar6;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    *(float *)(lVar4 + 0x35c + param_2) = fVar8;
    *(float *)(lVar4 + 0x360 + param_2) = fVar7;
    *(float *)(lVar4 + 0x364 + param_2) = fVar5;
    *(float *)(lVar4 + 0x368 + param_2) = fVar6;
    return;
  case 5:
    if (param_6 != 4.2039e-45) {
      *(bool *)(param_2 + 0x681 + (ulonglong)param_4 * 8) = param_6 == 2.8026e-45;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      return;
    }
    *(undefined1 *)(param_2 + 0x681 + (ulonglong)param_4 * 8) = 2;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    return;
  case 6:
    if (param_6 != 4.2039e-45) {
      *(bool *)(param_2 + 0x682 + (ulonglong)param_4 * 8) = param_6 == 2.8026e-45;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      return;
    }
    *(undefined1 *)(param_2 + 0x682 + (ulonglong)param_4 * 8) = 2;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    return;
  case 7:
    if (param_6 != 0.0) {
      *(bool *)(param_2 + 0x680 + (ulonglong)param_4 * 8) = param_6 == 2.8026e-45;
      pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      return;
    }
    *(undefined1 *)(param_2 + 0x680 + (ulonglong)param_4 * 8) = 2;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    return;
  case 8:
    fVar6 = 15.99;
    if (((param_6 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_6)) &&
       (fVar6 = param_6, 0x7f800000 < (uint)ABS(param_6))) {
      fVar6 = 0.0;
    }
    *(float *)((ulonglong)param_4 * 0x34 + 0x10 + param_2) = fVar6;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    *(float *)((ulonglong)param_4 * 0x34 + 0x350 + param_2) = fVar6;
    return;
  case 9:
    *(undefined1 *)(param_2 + 0x683 + (ulonglong)param_4 * 8) = param_6._0_1_;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    return;
  case 10:
    if (0x10 < (uint)param_6) {
      param_6 = 1.4013e-45;
    }
    *(float *)((ulonglong)param_4 * 0x34 + 0x14 + param_2) = param_6;
    *(float *)((ulonglong)param_4 * 0x34 + 0x354 + param_2) = param_6;
    pbVar2 = (byte *)(param_3 + 4 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
    return;
  case 0xb:
    uVar3 = 1 << ((byte)param_4 & 0x1f);
    if (param_6 != 0.0) {
      *(uint *)(param_2 + 0xde4) = *(uint *)(param_2 + 0xde4) | uVar3;
      *(undefined1 *)(param_3 + 9) = 1;
      pbVar2 = (byte *)(param_3 + ((longlong)(int)param_4 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
      return;
    }
    *(uint *)(param_2 + 0xde4) = *(uint *)(param_2 + 0xde4) & ~uVar3;
    *(undefined1 *)(param_3 + 9) = 1;
    pbVar2 = (byte *)(param_3 + ((longlong)(int)param_4 >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (param_4 & 7);
  }
  return;
}

