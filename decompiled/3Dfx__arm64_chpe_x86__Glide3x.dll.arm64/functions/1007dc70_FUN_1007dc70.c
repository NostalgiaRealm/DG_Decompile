/*
 * FUN_1007dc70 at 1007dc70
 * undefined FUN_1007dc70(void)
 * Address ranges: 1007dc70-1007dcb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007dc70(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100a0078)();
  uVar1 = (*(code *)PTR_FUN_100a0084)(uVar1,0,param_1);
  return uVar1;
}

