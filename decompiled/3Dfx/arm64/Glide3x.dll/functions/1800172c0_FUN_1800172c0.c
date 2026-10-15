/*
 * FUN_1800172c0 at 1800172c0
 * float __cdecl FUN_1800172c0(longlong param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 1800172c0-180017363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_1800172c0(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x2a18) - 2U & 0xfffffffd) == 0) {
    fVar2 = 1.0000153 -
            1.0000153 /
            ((float)(1 << (ulonglong)(ushort)((ushort)param_4 >> 0xc)) *
            (float)(param_4 & 0xfff | 0x1000) * 0.00024414062);
  }
  else {
    fVar2 = (float)(param_4 & 0xffff) / 65535.0;
  }
  if (*(char *)(param_1 + 0x113) == '\0') {
    uVar1 = 0xf8fcf8ff;
  }
  else {
    if (*(char *)(param_1 + 0x113) != '\x01') goto LAB_180017334;
    uVar1 = 0xfcfef8fc;
  }
  param_2 = param_2 & uVar1;
LAB_180017334:
  *(uint *)(param_1 + 0x2cc4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2cc8) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2ccc) = (uint)param_3;
  *(uint *)(param_1 + 0x2cbc) = param_4;
  *(uint *)(param_1 + 0x2cc0) = param_2 >> 0x18;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return fVar2;
}

