/*
 * FUN_10008a20 at 10008a20
 * undefined FUN_10008a20(void)
 * Address ranges: 10008a20-10008a87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10008a20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_1009478c;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_1009d020)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

