/*
 * FUN_100ac088 at 100ac088
 * uint __fastcall FUN_100ac088(uint param_1, int * param_2)
 * Address ranges: 100ac088-100ac0b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100ac088(uint param_1,int *param_2)

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

