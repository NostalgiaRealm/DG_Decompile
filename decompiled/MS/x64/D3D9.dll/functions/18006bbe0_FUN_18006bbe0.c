/*
 * FUN_18006bbe0 at 18006bbe0
 * byte * __fastcall FUN_18006bbe0(undefined8 param_1, byte * param_2, byte * param_3, ulonglong param_4, ulonglong param_5)
 * Address ranges: 18006bbe0-18006be07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_18006bbe0(undefined8 param_1,byte *param_2,byte *param_3,ulonglong param_4,
                    ulonglong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  
  bVar3 = param_3[0x144];
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0xd] = param_3[0x145];
  *param_2 = bVar3;
  if ((param_4 >> 0x39 & 1) != 0) {
    uVar4 = (uint)(param_4 >> 0x3a) & 3;
    if (uVar4 == 0) {
      param_2[4] = 1;
    }
    else if (((uVar4 == 1) || (uVar4 == 2)) || (uVar4 == 3)) {
      *param_2 = bVar3 | 0xc;
    }
  }
  if ((param_4 >> 0x38 & 1) != 0) {
    param_2[1] = 0xf;
  }
  bVar3 = param_3[0x126d];
  param_2[0x21] = 0;
  param_2[0x22] = (byte)(param_4 >> 0x30) & 1;
  if (bVar3 < 3) {
    param_2[2] = *param_3;
    param_2[3] = param_3[1];
    param_2[5] = param_3[0x2a];
    param_2[6] = param_3[0x2b];
    param_2[7] = param_3[0x2c];
    param_2[8] = param_3[0x2d];
    param_2[9] = param_3[0x2e];
    param_2[10] = param_3[0x2f];
    param_2[0xb] = param_3[0x30];
    param_2[0xc] = param_3[0x31];
  }
  else {
    if ((param_5 == 0) || (param_3[0x147] != 0)) {
      uVar6 = 0;
      do {
        if (param_3[uVar6] != 0) {
          param_2[0x21] = 1;
          break;
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while (uVar4 < 10);
      if (param_2[0x21] != 0) {
        param_2[2] = 0xf;
        param_2[3] = 0xf;
        param_2[4] = 0xf;
        param_2[5] = 0xf;
        param_2[6] = 0xf;
        param_2[7] = 0xf;
        param_2[8] = 0xf;
        param_2[9] = 0xf;
        param_2[10] = 0xf;
        param_2[0xb] = 0xf;
        param_2[0xc] = 0xf;
      }
    }
    else {
      uVar6 = 0;
      do {
        uVar5 = param_5 >> ((char)uVar6 * '\x04' & 0x3fU);
        if ((uVar5 & 0xf) != 0) {
          param_2[((uint)uVar5 & 0xf) + 1] = param_3[uVar6];
        }
        uVar4 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar4;
      } while (uVar4 < 10);
    }
    uVar4 = 0;
    do {
      uVar6 = param_5 >> ((char)uVar4 * '\x04' & 0x3fU);
      if ((uVar6 & 0xf) != 0) {
        param_2[(ulonglong)(((uint)uVar6 & 0xf) + 1) + 0x13] =
             (param_3[((longlong)(int)uVar4 >> 3) + 0x140] >> (uVar4 & 7) & 1) != 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 10);
  }
  lVar7 = 0x14b;
  if (bVar3 == 1) {
    lVar7 = 10;
  }
  bVar8 = 0xff;
  bVar3 = param_3[lVar7];
  bVar9 = bVar3 != 0;
  bVar2 = param_3[0x14c];
  param_2[0xe] = (bVar3 != 0) - 1;
  if (bVar2 == 0) {
    bVar2 = 0xff;
  }
  else {
    bVar2 = bVar9;
    bVar9 = (bVar3 != 0) + 1;
  }
  bVar1 = param_3[0x14d];
  param_2[0xf] = bVar2;
  bVar3 = bVar9 + 1;
  if (bVar1 == 0) {
    bVar3 = bVar9;
    bVar9 = 0xff;
  }
  param_2[0x10] = bVar9;
  if (param_3[0x14e] != 0) {
    bVar8 = bVar3;
    bVar3 = bVar3 + 1;
  }
  bVar2 = 0xff;
  if (param_3[0x330] != 0) {
    bVar2 = bVar3;
  }
  param_2[0x11] = bVar8;
  param_2[0x12] = bVar2;
  return param_2;
}

