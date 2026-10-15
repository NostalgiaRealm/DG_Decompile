/*
 * FUN_100e8dd0 at 100e8dd0
 * undefined FUN_100e8dd0(void)
 * Address ranges: 100e8dd0-100e8e1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e8dd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + -0x14) == 0) ||
     (uVar1 = 0x8876086c, (*(uint *)(param_1 + -0x2c) >> 10 & 1) == 0)) {
    uVar1 = FUN_1001e800(param_1 + -0x5c,param_2,param_3,param_4,0);
  }
  return uVar1;
}

