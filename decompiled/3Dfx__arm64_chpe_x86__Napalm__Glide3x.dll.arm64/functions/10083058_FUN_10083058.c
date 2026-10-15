/*
 * FUN_10083058 at 10083058
 * undefined FUN_10083058(void)
 * Address ranges: 10083058-100830b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10083058(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_100a8040)(param_1,param_2,param_3);
  if (iVar1 != 0) {
    uVar2 = (*(code *)PTR_FUN_100a80d8)(param_1,iVar1);
    return uVar2;
  }
  return 0;
}

