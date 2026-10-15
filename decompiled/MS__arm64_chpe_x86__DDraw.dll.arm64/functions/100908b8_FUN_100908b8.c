/*
 * FUN_100908b8 at 100908b8
 * undefined FUN_100908b8(void)
 * Address ranges: 100908b8-10090917
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100908b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100ba0a4)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_100ba140)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

