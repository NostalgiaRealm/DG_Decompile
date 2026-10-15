/*
 * FUN_1007e660 at 1007e660
 * undefined FUN_1007e660(void)
 * Address ranges: 1007e660-1007e6a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007e660(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100a0078)();
  uVar1 = (*(code *)PTR_FUN_100a0084)(uVar1,8,param_1 * param_2);
  return uVar1;
}

