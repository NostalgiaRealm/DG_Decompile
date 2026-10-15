/*
 * FUN_1002c488 at 1002c488
 * undefined FUN_1002c488(void)
 * Address ranges: 1002c488-1002c577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1002c488(int param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x2980) - 2U & 0xfffffffd) == 0) {
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
    goto LAB_1002c520;
  }
  param_2 = param_2 & uVar1;
LAB_1002c520:
  *(uint *)(param_1 + 0x2c00) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2c04) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2c08) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2c0c) = (uint)param_3;
  *(uint *)(param_1 + 0x2bfc) = param_4;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return fVar2;
}

