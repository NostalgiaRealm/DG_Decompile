/*
 * FUN_100375d8 at 100375d8
 * undefined FUN_100375d8(void)
 * Address ranges: 100375d8-100376b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100375d8(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,uint param_8,int param_9,undefined4 param_10,uint param_11,
                 undefined4 param_12,uint param_13)

{
  uint uVar1;
  
  if (0x11 < param_2) {
    param_2 = 0;
  }
  if (0x11 < param_4) {
    param_4 = 0;
  }
  if (0x11 < param_6) {
    param_6 = 0;
  }
  if (0x11 < param_8) {
    param_8 = 0;
  }
  if (param_2 == 4) {
    param_2 = param_4;
  }
  *param_1 = (uint)(ushort)(&DAT_100a04b0)[param_2];
  param_1[1] = (uint)(ushort)(&DAT_100a04b0)[param_4];
  if (param_6 == 4) {
    param_6 = param_4;
  }
  param_1[2] = (uint)(ushort)(&DAT_100a04b0)[param_6];
  if (param_8 == 4) {
    param_8 = param_4;
  }
  param_1[3] = (uint)(ushort)(&DAT_100a04b0)[param_8];
  param_1[4] = param_3;
  param_1[5] = param_5;
  uVar1 = 1;
  if (param_7 != 0) {
    uVar1 = 2;
  }
  param_1[6] = uVar1;
  uVar1 = 1;
  if (param_9 != 0) {
    uVar1 = 2;
  }
  param_1[7] = uVar1;
  param_1[8] = (uint)(float)(1 << (ulonglong)(param_11 & 0x1f));
  param_1[9] = param_13;
  return;
}

