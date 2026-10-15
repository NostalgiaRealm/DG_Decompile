/*
 * FUN_1004d5d0 at 1004d5d0
 * undefined FUN_1004d5d0(void)
 * Address ranges: 1004d5d0-1004d627
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004d5d0(uint *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((((*param_1 & param_2 - 1U) != 0) || ((param_1[1] & param_3 - 1U) != 0)) ||
      ((param_1[2] & param_2 - 1U) != 0)) || (uVar1 = 1, (param_1[3] & param_3 - 1U) != 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

