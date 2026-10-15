/*
 * FUN_100fdae0 at 100fdae0
 * undefined FUN_100fdae0(void)
 * Address ranges: 100fdae0-100fdb47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100fdae0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_1012ad50;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_10134058)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

