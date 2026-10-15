/*
 * FUN_10008f58 at 10008f58
 * undefined FUN_10008f58(void)
 * Address ranges: 10008f58-10008fbf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10008f58(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_100947bc;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_1009d018)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

