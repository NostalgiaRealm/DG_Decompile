/*
 * FUN_1002c44c at 1002c44c
 * uint __fastcall FUN_1002c44c(uint param_1, int * param_2)
 * Address ranges: 1002c44c-1002c47d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002c44c(uint param_1,int *param_2)

{
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  while ((9 < param_1 && (uVar1 = param_1 / 10, param_1 % 10 == 0))) {
    param_1 = uVar1;
    if (param_2 != (int *)0x0) {
      *param_2 = *param_2 + 1;
    }
  }
  return param_1;
}

