/*
 * FUN_100922f0 at 100922f0
 * undefined FUN_100922f0(void)
 * Address ranges: 100922f0-10092333
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100922f0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100ba0d8)();
  uVar1 = (*(code *)PTR_FUN_100ba0e4)(uVar1,8,param_1 * param_2);
  return uVar1;
}

