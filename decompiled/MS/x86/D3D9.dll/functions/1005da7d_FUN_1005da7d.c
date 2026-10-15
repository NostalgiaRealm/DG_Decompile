/*
 * FUN_1005da7d at 1005da7d
 * byte * __stdcall FUN_1005da7d(byte * param_1, byte * param_2, int param_3, uint param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1005da7d-1005dc3a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_1005da7d(byte *param_1,byte *param_2,int param_3,uint param_4,undefined4 param_5,
                   uint param_6)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  ulonglong uVar7;
  
  pbVar5 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pbVar5[0] = 0;
    pbVar5[1] = 0;
    pbVar5[2] = 0;
    pbVar5[3] = 0;
    pbVar5 = pbVar5 + 4;
  }
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  *param_1 = param_2[0x144];
  param_1[0xd] = param_2[0x145];
  FUN_100586f5(param_1,param_5,param_6);
  param_1[0x22] = (param_6 >> 0x10 & 1) != 0;
  param_1[0x21] = 0;
  if (param_2[0x126d] < 3) {
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
    param_1[5] = param_2[0x2a];
    param_1[6] = param_2[0x2b];
    param_1[7] = param_2[0x2c];
    param_1[8] = param_2[0x2d];
    param_1[9] = param_2[0x2e];
    param_1[10] = param_2[0x2f];
    param_1[0xb] = param_2[0x30];
    param_1[0xc] = param_2[0x31];
  }
  else {
    if ((param_3 == 0 && param_4 == 0) || (param_2[0x147] != 0)) {
      uVar4 = 0;
      do {
        if (param_2[uVar4] != 0) {
          param_1[0x21] = 1;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
      if (param_1[0x21] != 0) {
        param_1[2] = 0xf;
        param_1[3] = 0xf;
        param_1[4] = 0xf;
        param_1[5] = 0xf;
        param_1[6] = 0xf;
        param_1[7] = 0xf;
        param_1[8] = 0xf;
        param_1[9] = 0xf;
        param_1[10] = 0xf;
        param_1[0xb] = 0xf;
        param_1[0xc] = 0xf;
      }
    }
    else {
      uVar4 = 0;
      do {
        uVar7 = __aullshr((byte)(uVar4 << 2),param_4);
        if ((uVar7 & 0xf) != 0) {
          param_1[((uint)uVar7 & 0xf) + 1] = param_2[uVar4];
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
    }
    uVar4 = 0;
    do {
      uVar7 = __aullshr((byte)(uVar4 << 2),param_4);
      if ((uVar7 & 0xf) != 0) {
        param_1[((uint)uVar7 & 0xf) + 0x14] =
             (param_2[((int)uVar4 >> 3) + 0x140] >> (uVar4 & 7) & 1) != 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 10);
  }
  iVar2 = 0x14b;
  if (param_2[0x126d] == 1) {
    iVar2 = 10;
  }
  bVar6 = param_2[iVar2] != 0;
  param_1[0xe] = (param_2[iVar2] != 0) - 1;
  if (param_2[0x14c] == 0) {
    bVar1 = 0xff;
  }
  else {
    bVar1 = bVar6;
    bVar6 = bVar6 + 1;
  }
  param_1[0xf] = bVar1;
  bVar1 = param_2[0x14d];
  bVar3 = 0xff;
  if (bVar1 != 0) {
    bVar3 = bVar6;
  }
  param_1[0x10] = bVar3;
  bVar3 = bVar6 + 1;
  if (bVar1 == 0) {
    bVar3 = bVar6;
  }
  if (param_2[0x14e] == 0) {
    bVar6 = 0xff;
  }
  else {
    bVar6 = bVar3;
    bVar3 = bVar3 + 1;
  }
  param_1[0x11] = bVar6;
  bVar6 = 0xff;
  if (param_2[0x330] != 0) {
    bVar6 = bVar3;
  }
  param_1[0x12] = bVar6;
  return param_1;
}

