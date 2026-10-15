/*
 * FUN_10083310 at 10083310
 * undefined FUN_10083310(void)
 * Address ranges: 10083310-10083353
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10083310(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100a8078)();
  uVar1 = (*(code *)PTR_FUN_100a8084)(uVar1,0,param_1);
  return uVar1;
}

