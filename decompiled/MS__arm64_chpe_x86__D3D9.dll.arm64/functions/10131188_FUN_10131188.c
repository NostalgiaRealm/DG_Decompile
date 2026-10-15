/*
 * FUN_10131188 at 10131188
 * undefined FUN_10131188(void)
 * Address ranges: 10131188-101311ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10131188(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_10160450;
  *(undefined1 *)(param_1 + 2) = 1;
  uVar1 = (*(code *)PTR_FUN_1016c054)(param_2,0x80000000,1,0,3,0x80,0);
  param_1[1] = uVar1;
  return param_1;
}

