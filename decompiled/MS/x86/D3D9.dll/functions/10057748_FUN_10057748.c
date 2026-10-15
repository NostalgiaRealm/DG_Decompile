/*
 * FUN_10057748 at 10057748
 * undefined __stdcall FUN_10057748(int param_1, int param_2, int param_3, int param_4, float param_5)
 * Address ranges: 10057748-1005799b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10057748(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  if (param_3 == 0) {
    return;
  }
  uVar5 = param_3 - 1;
  if (param_4 - 1U < 0xb) {
    iVar1 = (int)uVar5 >> 3;
    switch(param_4) {
    case 1:
      if (5 < (uint)param_5) {
        return;
      }
      *(undefined4 *)(uVar5 * 0x34 + 0x794 + param_1) =
           *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
      break;
    case 2:
      if (5 < (uint)param_5) {
        return;
      }
      *(undefined4 *)(uVar5 * 0x34 + 0x798 + param_1) =
           *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
      break;
    case 3:
      if (5 < (uint)param_5) {
        return;
      }
      *(undefined4 *)(uVar5 * 0x34 + 0x79c + param_1) =
           *(undefined4 *)(&DAT_100d2300 + (int)param_5 * 4);
      break;
    case 4:
      iVar3 = uVar5 * 0x34;
      *(float *)(iVar3 + 0x7ac + param_1) = ((float)((uint)param_5 >> 0x10 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar3 + 0x7b0 + param_1) = ((float)((uint)param_5 >> 8 & 0xff) + 0.0) / 255.0;
      *(float *)(iVar3 + 0x7b4 + param_1) = ((float)((uint)param_5 & 0xff) + 0.0) / 255.0;
      *(float *)((param_3 + 0x25) * 0x34 + param_1) = ((float)((uint)param_5 >> 0x18) + 0.0) / 255.0
      ;
      pbVar2 = (byte *)(param_2 + 0x3c + iVar1);
      *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
      return;
    case 5:
      *(bool *)(param_1 + 0x769 + uVar5 * 8) = param_5 == 2.8026e-45;
      break;
    case 6:
      *(bool *)(param_1 + 0x76a + uVar5 * 8) = param_5 == 2.8026e-45;
      break;
    case 7:
      *(bool *)(param_1 + 0x768 + uVar5 * 8) = param_5 == 2.8026e-45;
      break;
    case 8:
      fVar6 = 15.99;
      if (((param_5 <= 15.99) && (fVar6 = -16.0, -16.0 <= param_5)) &&
         (fVar6 = param_5, 0x7f800000 < (uint)ABS(param_5))) {
        fVar6 = 0.0;
      }
      *(float *)(uVar5 * 0x34 + 0x7a0 + param_1) = fVar6;
      break;
    case 9:
      *(undefined1 *)(param_1 + 0x76b + uVar5 * 8) = param_5._0_1_;
      break;
    case 10:
      if (0x10 < (uint)param_5) {
        param_5 = 1.4013e-45;
      }
      *(float *)(uVar5 * 0x34 + 0x7a4 + param_1) = param_5;
      break;
    case 0xb:
      uVar4 = 1 << ((byte)uVar5 & 0x1f);
      if (param_5 == 0.0) {
        uVar4 = *(uint *)(param_1 + 0xde8) & ~uVar4;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0xde8) | uVar4;
      }
      *(uint *)(param_1 + 0xde8) = uVar4;
      *(undefined1 *)(param_2 + 0x40) = 1;
      pbVar2 = (byte *)(param_2 + 0x38 + iVar1);
      *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
      return;
    }
    pbVar2 = (byte *)(param_2 + 0x3c + iVar1);
    *pbVar2 = *pbVar2 | '\x01' << (uVar5 & 7);
    return;
  }
  return;
}

