/*
 * FUN_10090510 at 10090510
 * undefined FUN_10090510(void)
 * Address ranges: 10090510-10090577
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10090510(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_100b3220;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_100ba080)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

