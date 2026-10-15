/*
 * FUN_1004ba70 at 1004ba70
 * undefined FUN_1004ba70(void)
 * Address ranges: 1004ba70-1004bad7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1004ba70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_1009f144;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_100a8020)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

