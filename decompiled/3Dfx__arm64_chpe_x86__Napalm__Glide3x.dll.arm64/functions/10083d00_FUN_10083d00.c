/*
 * FUN_10083d00 at 10083d00
 * undefined FUN_10083d00(void)
 * Address ranges: 10083d00-10083d43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10083d00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100a8078)();
  uVar1 = (*(code *)PTR_FUN_100a8084)(uVar1,8,param_1 * param_2);
  return uVar1;
}

