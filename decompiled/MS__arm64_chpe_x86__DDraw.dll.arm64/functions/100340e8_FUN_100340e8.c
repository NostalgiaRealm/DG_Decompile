/*
 * FUN_100340e8 at 100340e8
 * undefined FUN_100340e8(void)
 * Address ranges: 100340e8-1003413f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100340e8(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  param_2 = param_2 >> (ulonglong)(param_3 & 0x1f);
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x100b3690) != '\0') {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x100b3740);
    param_2 = (uVar1 + param_2) - 1 & -uVar1;
  }
  return param_2;
}

