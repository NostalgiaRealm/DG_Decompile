/*
 * FUN_100463b0 at 100463b0
 * undefined FUN_100463b0(void)
 * Address ranges: 100463b0-10046417
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100463b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10098d64;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_100a0020)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

