/*
 * FUN_1007a8f0 at 1007a8f0
 * undefined FUN_1007a8f0(void)
 * Address ranges: 1007a8f0-1007a933
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a8f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_1009d078)();
  uVar1 = (*(code *)PTR_FUN_1009d084)(uVar1,8,param_1 * param_2);
  return uVar1;
}

