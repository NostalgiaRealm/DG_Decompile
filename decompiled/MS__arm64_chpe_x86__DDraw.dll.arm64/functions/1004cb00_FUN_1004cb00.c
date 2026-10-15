/*
 * FUN_1004cb00 at 1004cb00
 * undefined FUN_1004cb00(void)
 * Address ranges: 1004cb00-1004cb83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1004cb00(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1 & *param_2;
  uVar2 = param_1[1] & param_2[1];
  uVar3 = param_1[2] & param_2[2];
  uVar4 = param_1[3] & param_2[3];
  return ((((((uVar4 != 0 || uVar3 != 0) || uVar2 != 0) || uVar1 != 0) && uVar1 == *param_2) &&
          uVar2 == param_2[1]) && uVar3 == param_2[2]) && uVar4 == param_2[3];
}

