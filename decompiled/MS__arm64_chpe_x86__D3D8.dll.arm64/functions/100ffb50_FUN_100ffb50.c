/*
 * FUN_100ffb50 at 100ffb50
 * undefined FUN_100ffb50(void)
 * Address ranges: 100ffb50-100ffb93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ffb50(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_101340a4)();
  uVar1 = (*(code *)PTR_FUN_101340b0)(uVar1,8,param_1 * param_2);
  return uVar1;
}

