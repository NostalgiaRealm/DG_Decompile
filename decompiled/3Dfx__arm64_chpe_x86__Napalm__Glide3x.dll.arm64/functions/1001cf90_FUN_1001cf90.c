/*
 * FUN_1001cf90 at 1001cf90
 * undefined FUN_1001cf90(void)
 * Address ranges: 1001cf90-1001d0b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1001cf90(int param_1,uint param_2,uint param_3,uint param_4,byte param_5)

{
  uint uVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x2b38) - 2U & 0xfffffffd) == 0) {
    param_5 = 1;
  }
  else {
    param_5 = param_5 ^ 1;
  }
  if (param_5 != 0) {
    param_4 = param_4 << 8;
  }
  if ((*(int *)(param_1 + 0x2b38) - 2U & 0xfffffffd) == 0) {
    fVar2 = 1.0000153 -
            1.0000153 /
            ((float)(1 << (ulonglong)(param_4 >> 0x14 & 0xf)) *
            (float)((double)(param_4 & 0xfffff | 0x100000) * 9.5367431640625e-07));
  }
  else {
    fVar2 = (float)((double)(param_4 & 0xffffff) / 16777215.0);
  }
  switch(*(undefined1 *)(param_1 + 0x126)) {
  case 0:
    uVar1 = 0xf8fcf8ff;
    break;
  case 1:
    uVar1 = 0xfcfef8fc;
    break;
  default:
    goto LAB_1001d060;
  }
  param_2 = param_2 & uVar1;
LAB_1001d060:
  *(uint *)(param_1 + 0x2df0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2df4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2df8) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2dfc) = (param_3 & 0xff) << 8;
  *(uint *)(param_1 + 0x2dec) = param_4;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return fVar2;
}

