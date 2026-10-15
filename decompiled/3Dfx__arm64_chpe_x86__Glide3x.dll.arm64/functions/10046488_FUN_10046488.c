/*
 * FUN_10046488 at 10046488
 * undefined FUN_10046488(void)
 * Address ranges: 10046488-100464ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10046488(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10098d64;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_100a0018)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

