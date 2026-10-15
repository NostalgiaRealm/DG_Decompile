/*
 * FUN_180023c28 at 180023c28
 * float __cdecl FUN_180023c28(longlong param_1, uint param_2, byte param_3, uint param_4)
 * Address ranges: 180023c28-180023ccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_180023c28(longlong param_1,uint param_2,byte param_3,uint param_4)

{
  uint uVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x29a0) - 2U & 0xfffffffd) == 0) {
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
    if (*(char *)(param_1 + 0x113) != '\x01') goto LAB_180023c9c;
    uVar1 = 0xfcfef8fc;
  }
  param_2 = param_2 & uVar1;
LAB_180023c9c:
  *(uint *)(param_1 + 0x2c24) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2c28) = param_2 >> 8 & 0xff;
  *(uint *)(param_1 + 0x2c2c) = (uint)param_3;
  *(uint *)(param_1 + 0x2c1c) = param_4;
  *(uint *)(param_1 + 0x2c20) = param_2 >> 0x18;
  *(undefined1 *)(param_1 + 0x3170) = 1;
  return fVar2;
}

