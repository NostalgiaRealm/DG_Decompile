/*
 * FUN_10014ecc at 10014ecc
 * uint __fastcall FUN_10014ecc(int * param_1)
 * Address ranges: 10014ecc-10014ee8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10014ecc(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[3];
  if (((*param_1 < (int)uVar1) && (uVar1 = param_1[4], param_1[1] < (int)uVar1)) &&
     (uVar1 = param_1[5], param_1[2] < (int)uVar1)) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

