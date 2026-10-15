/*
 * FUN_10011c60 at 10011c60
 * float10 __thiscall FUN_10011c60(int param_1, uint param_2, uint param_3, uint param_4, char param_5)
 * Address ranges: 10011c60-10011d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 __thiscall FUN_10011c60(int param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  int iVar1;
  bool bVar2;
  float10 fVar3;
  
  iVar1 = *(int *)(param_1 + 0x2b38);
  if ((iVar1 == 2) || (iVar1 == 4)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((iVar1 == 2) || (iVar1 == 4)) || (param_5 != '\x01')) {
    param_4 = param_4 << 8;
  }
  if (bVar2) {
    fVar3 = FUN_10009408(param_4);
  }
  else {
    fVar3 = FUN_100093d7((uint3)param_4);
  }
  if (*(char *)(param_1 + 0x126) == '\0') {
    param_2 = param_2 & 0xf8fcf8ff;
  }
  else if (*(char *)(param_1 + 0x126) == '\x01') {
    param_2 = param_2 & 0xfcfef8fc;
  }
  *(uint *)(param_1 + 0x2df0) = param_2 >> 0x18;
  *(uint *)(param_1 + 0x2df4) = param_2 >> 0x10 & 0xff;
  *(uint *)(param_1 + 0x2dfc) = (param_3 & 0xff) << 8;
  *(uint *)(param_1 + 0x2dec) = param_4;
  *(uint *)(param_1 + 0x2df8) = param_2 >> 8 & 0xff;
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return (float10)(float)fVar3;
}

