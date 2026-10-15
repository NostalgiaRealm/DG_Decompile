/*
 * FUN_180063980 at 180063980
 * undefined __fastcall FUN_180063980(undefined8 param_1, longlong param_2, longlong param_3, int param_4, int param_5, float param_6)
 * Address ranges: 180063980-180063bfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180063980(undefined8 param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  float param_6)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  float fVar6;
  ulonglong uVar5;
  
  if (param_4 == 0) {
    return;
  }
  uVar4 = param_4 - 1;
  uVar5 = (ulonglong)uVar4;
  if (param_5 < 7) {
    if (param_5 != 6) {
      if (param_5 == 1) {
        if (5 < (uint)param_6) {
          return;
        }
        *(undefined4 *)(uVar5 * 0x34 + 0x794 + param_2) =
             *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      }
      else if (param_5 == 2) {
        if (5 < (uint)param_6) {
          return;
        }
        *(undefined4 *)(uVar5 * 0x34 + 0x798 + param_2) =
             *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      }
      else if (param_5 == 3) {
        if (5 < (uint)param_6) {
          return;
        }
        *(undefined4 *)(uVar5 * 0x34 + 0x79c + param_2) =
             *(undefined4 *)(&DAT_1800fe680 + (ulonglong)(uint)param_6 * 4);
      }
      else {
        if (param_5 != 4) {
          if (param_5 != 5) {
            return;
          }
          *(bool *)(param_2 + 0x769 + uVar5 * 8) = param_6 == 2.8026e-45;
          goto LAB_180063bf4;
        }
        lVar3 = uVar5 * 0x34;
        *(float *)(lVar3 + 0x7ac + param_2) = (float)((uint)param_6 >> 0x10 & 0xff) / 255.0;
        *(float *)(lVar3 + 0x7b0 + param_2) = (float)((uint)param_6 >> 8 & 0xff) / 255.0;
        *(float *)(lVar3 + 0x7b4 + param_2) = (float)((uint)param_6 & 0xff) / 255.0;
        *(float *)((uVar5 + 0x26) * 0x34 + param_2) = (float)((uint)param_6 >> 0x18) / 255.0;
      }
LAB_180063ae6:
      pbVar1 = (byte *)(param_3 + 0x3c + ((longlong)(int)uVar4 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
      return;
    }
    *(bool *)(param_2 + 0x76a + uVar5 * 8) = param_6 == 2.8026e-45;
  }
  else if (param_5 == 7) {
    *(bool *)(param_2 + 0x768 + uVar5 * 8) = param_6 == 2.8026e-45;
  }
  else if (param_5 == 8) {
    fVar6 = 15.99;
    if (((param_6 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_6)) &&
       (fVar6 = param_6, 0x7f800000 < (uint)ABS(param_6))) {
      fVar6 = 0.0;
    }
    *(float *)(uVar5 * 0x34 + 0x7a0 + param_2) = fVar6;
  }
  else {
    if (param_5 != 9) {
      if (param_5 != 10) {
        if (param_5 != 0xb) {
          return;
        }
        uVar2 = 1 << ((byte)uVar4 & 0x1f);
        if (param_6 == 0.0) {
          uVar2 = *(uint *)(param_2 + 0xde8) & ~uVar2;
        }
        else {
          uVar2 = *(uint *)(param_2 + 0xde8) | uVar2;
        }
        *(uint *)(param_2 + 0xde8) = uVar2;
        *(undefined1 *)(param_3 + 0x40) = 1;
        pbVar1 = (byte *)(param_3 + 0x38 + ((longlong)(int)uVar4 >> 3));
        *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
        return;
      }
      if (0x10 < (uint)param_6) {
        param_6 = 1.4013e-45;
      }
      *(float *)(uVar5 * 0x34 + 0x7a4 + param_2) = param_6;
      goto LAB_180063ae6;
    }
    *(undefined1 *)(param_2 + 0x76b + uVar5 * 8) = param_6._0_1_;
  }
LAB_180063bf4:
  pbVar1 = (byte *)(param_3 + 0x3c + ((longlong)(int)uVar4 >> 3));
  *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
  return;
}

