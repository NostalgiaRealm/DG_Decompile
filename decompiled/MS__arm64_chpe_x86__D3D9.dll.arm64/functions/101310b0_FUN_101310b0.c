/*
 * FUN_101310b0 at 101310b0
 * undefined FUN_101310b0(void)
 * Address ranges: 101310b0-10131117
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_101310b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10160450;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_1016c05c)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

