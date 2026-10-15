/*
 * FUN_10008e78 at 10008e78
 * undefined FUN_10008e78(void)
 * Address ranges: 10008e78-10008edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10008e78(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_100947bc;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_1009d020)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

