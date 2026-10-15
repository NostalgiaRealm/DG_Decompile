/*
 * FUN_10082050 at 10082050
 * undefined FUN_10082050(void)
 * Address ranges: 10082050-10082093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082050(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_100a1034)();
  uVar1 = (*(code *)PTR_FUN_100a1038)(uVar1,8,param_1 * param_2);
  return uVar1;
}

