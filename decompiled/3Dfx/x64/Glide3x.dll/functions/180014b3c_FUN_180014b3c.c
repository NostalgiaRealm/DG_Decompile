/*
 * FUN_180014b3c at 180014b3c
 * float __fastcall FUN_180014b3c(longlong param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 180014b3c-180014c18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180014b3c(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x2a18) - 2U & 0xfffffffd) == 0) {
    fVar1 = 1.0000153 -
            1.0000153 /
            ((float)(1 << (sbyte)((param_4 & 0xffff) >> 0xc)) *
            (float)((ushort)param_4 & 0xfff | 0x1000) * 0.00024414062);
  }
  else {
    fVar1 = (float)(param_4 & 0xffff) / 65535.0;
  }
  if (*(char *)(param_1 + 0x113) == '\0') {
    param_2 = param_2 & 0xf8fcf8ff;
  }
  else if (*(char *)(param_1 + 0x113) == '\x01') {
    param_2 = param_2 & 0xfcfef8fc;
  }
  *(uint *)(param_1 + 0x2cbc) = param_4;
  *(uint *)(param_1 + 0x2cc0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2cc4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2cc8) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2ccc) = (uint)param_3;
  *(undefined1 *)(param_1 + 0x32f0) = 1;
  return fVar1;
}

