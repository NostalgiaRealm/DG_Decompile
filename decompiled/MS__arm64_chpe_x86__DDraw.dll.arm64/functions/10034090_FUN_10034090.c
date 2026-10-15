/*
 * FUN_10034090 at 10034090
 * undefined FUN_10034090(void)
 * Address ranges: 10034090-100340e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10034090(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_2 = param_2 >> (ulonglong)(param_3 & 0x1f);
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x100b3690) != '\0') {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x100b3720);
    param_2 = (uVar1 + param_2) - 1 & -uVar1;
  }
  return param_2;
}

