/*
 * FUN_1001c638 at 1001c638
 * float10 __thiscall FUN_1001c638(int param_1, uint param_2, uint param_3, uint param_4)
 * Address ranges: 1001c638-1001c6e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_1001c638(int param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  float10 fVar2;
  
  if ((*(int *)(param_1 + 0x2980) == 2) || (*(int *)(param_1 + 0x2980) == 4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    fVar2 = FUN_10019d20(param_4 & 0xffff);
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
  *(uint *)(param_1 + 0x2c00) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2c04) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2bfc) = param_4;
  *(uint *)(param_1 + 0x2c0c) = param_3 & 0xff;
  *(uint *)(param_1 + 0x2c08) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3150) = 1;
  return (float10)(float)fVar2;
}

