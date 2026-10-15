/*
 * FUN_100ceef0 at 100ceef0
 * undefined FUN_100ceef0(void)
 * Address ranges: 100ceef0-100cef47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ceef0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_2 = param_2 >> (ulonglong)(param_3 & 0x1f);
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x10162700) != '\0') {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x101627d8);
    param_2 = (uVar1 + param_2) - 1 & -uVar1;
  }
  return param_2;
}

