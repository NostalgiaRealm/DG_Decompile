/*
 * FUN_10010904 at 10010904
 * float10 __thiscall FUN_10010904(int param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 10010904-100109b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_10010904(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x29fc) == 2) || (*(int *)(param_1 + 0x29fc) == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    fVar2 = FUN_10008bca(param_4 & 0xffff);
  }
  else {
    fVar2 = (float10)(param_4 & 0xffff) / (float10)65535.0;
  }
  if (*(char *)(param_1 + 0x103) == '\0') {
    param_2 = param_2 & 0xf8fcf8ff;
  }
  else if (*(char *)(param_1 + 0x103) == '\x01') {
    param_2 = param_2 & 0xfcfef8fc;
  }
  *(uint *)(param_1 + 0x2ca0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2ca4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2c9c) = param_4;
  *(uint *)(param_1 + 0x2cac) = param_3 & 0xff;
  *(uint *)(param_1 + 0x2ca8) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  return (float10)(float)fVar2;
}

