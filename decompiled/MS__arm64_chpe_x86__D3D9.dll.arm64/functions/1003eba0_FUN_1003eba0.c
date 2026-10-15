/*
 * FUN_1003eba0 at 1003eba0
 * undefined FUN_1003eba0(void)
 * Address ranges: 1003eba0-1003ebcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003eba0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  if (param_3 <= param_1) {
    param_3 = param_1;
  }
  iVar1 = 0;
  for (; param_3 != 0; param_3 = param_3 >> 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

