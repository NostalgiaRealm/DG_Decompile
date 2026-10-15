/*
 * FUN_10133120 at 10133120
 * undefined FUN_10133120(void)
 * Address ranges: 10133120-10133163
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10133120(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_1016c0a8)();
  uVar1 = (*(code *)PTR_FUN_1016c0b4)(uVar1,8,param_1 * param_2);
  return uVar1;
}

