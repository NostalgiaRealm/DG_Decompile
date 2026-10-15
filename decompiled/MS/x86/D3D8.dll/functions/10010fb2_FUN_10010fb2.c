/*
 * FUN_10010fb2 at 10010fb2
 * uint __fastcall FUN_10010fb2(int * param_1)
 * Address ranges: 10010fb2-10010fce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10010fb2(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[3];
  if (((*param_1 < (int)uVar1) && (uVar1 = param_1[4], param_1[1] < (int)uVar1)) &&
     (uVar1 = param_1[5], param_1[2] < (int)uVar1)) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

