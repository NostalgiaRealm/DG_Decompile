/*
 * FUN_1001c9c8 at 1001c9c8
 * undefined FUN_1001c9c8(void)
 * Address ranges: 1001c9c8-1001cab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1001c9c8(int param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x29fc) - 2U & 0xfffffffd) == 0) {
    fVar2 = 1.0000153 -
            1.0000153 /
            ((float)(1 << (ulonglong)(ushort)((ushort)param_4 >> 0xc)) *
            (float)(param_4 & 0xfff | 0x1000) * 0.00024414062);
  }
  else {
    fVar2 = (float)(param_4 & 0xffff) / 65535.0;
  }
  switch(*(undefined1 *)(param_1 + 0x103)) {
  case 0:
    uVar1 = 0xf8fcf8ff;
    break;
  case 1:
    uVar1 = 0xfcfef8fc;
    break;
  default:
    goto LAB_1001ca60;
  }
  param_2 = param_2 & uVar1;
LAB_1001ca60:
  *(uint *)(param_1 + 0x2ca0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2ca4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2ca8) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2cac) = (uint)param_3;
  *(uint *)(param_1 + 0x2c9c) = param_4;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return fVar2;
}

