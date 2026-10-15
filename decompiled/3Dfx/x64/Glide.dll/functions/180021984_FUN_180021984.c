/*
 * FUN_180021984 at 180021984
 * float __fastcall FUN_180021984(longlong param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 180021984-180021a60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180021984(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x29a0) - 2U & 0xfffffffd) == 0) {
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
  *(uint *)(param_1 + 0x2c1c) = param_4;
  *(uint *)(param_1 + 0x2c20) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2c24) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2c28) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2c2c) = (uint)param_3;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return fVar1;
}

